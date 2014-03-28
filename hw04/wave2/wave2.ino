/*
  

 Author: Allen Downey 
 
 Based on http://arduino.cc/en/Tutorial/AnalogInput
 Created by David Cuartielles
 modified 30 Aug 2011
 By Tom Igoe

 License: Public Domain
 
 */

 
int ledPin = 5;       // select the pin for the LED
int buttonPin1 = 2;
int buttonPin2 = 3;
boolean toggle0 = 0;
int wave0 = 0;
int low = 36;
int high = 255;
int stride = 5;
int counter = low;
int i = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(buttonPin1, INPUT_PULLUP);  
  pinMode(buttonPin2, INPUT_PULLUP);  
  attachInterrupt(0, ISR_func, RISING);  // Interrupt attached to the button connected to pin 2

  pinMode(ledPin, OUTPUT);
  
  DDRD = B11000000;
  DDRB = B00111111;
  
  //interrupt setup
//set timer0 interrupt at 2kHz
  TCCR0A = 0;// set entire TCCR0A register to 0
  TCCR0B = 0;// same for TCCR0B
  TCNT0  = 0;//initialize counter value to 0
  // set compare match register for 2khz increments
  OCR0A = 124;// = (16*10^6) / (2000*64) - 1 (must be <256)
  // turn on CTC mode
  TCCR0A |= (1 << WGM01);
  // Set CS01 and CS00 bits for 64 prescaler
  TCCR0B |= (1 << CS01) | (1 << CS00);   
  // enable timer compare interrupt
  TIMSK0 |= (1 << OCIE0A);
  sei();//allow interrupts
}


void writeByte(int x) {

  //PORTD = x;
  int i;
  int pin = 0;
  int new1 = B00000000;
  //algorithm to reverse bits
  for (i=0; i<=7; i++) {
    new1 += ((x >> (7 - i)) & (B00000001))<<i;
    x >> 1;
  }

  PORTB = B00111111&(new1>>2);
  PORTD = B11000000&(new1<<6);

}


void loop() {

}

void ISR_func() {
stride+= 5;
  if(stride >= 50)
    stride = 5;
}

ISR(TIMER0_COMPA_vect){//timer0 interrupt 2kHz toggles pin 8
//generates pulse wave of frequency 2kHz/2 = 1kHz (takes two cycles for full wave- toggle high then toggle low)
  int button1 = digitalRead(buttonPin1);
  if (button1) return;

  counter += stride;
  if (counter > high) 
    counter = low;  
  writeByte(counter);
}



