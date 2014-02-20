#include <stdio.h>
#include <stdlib.h>
int main()
{
    char card_name[3];
    char card0 = card_name[0];
    int count = 0;
    while (card_name[0]!= 'X'){
        puts("Enter the card_name: ");
        scanf("%2s", card_name);
        int val = 0;
        determine_value(card0, card_name, val);
        make_count(val, count);
        printf("Current count: %i\n", count);
    }
    return 0;
}

int determine_value(first, card, the_val)
{
    switch(first) 
    {
    case 'K':
    case 'Q':
    case 'J':
        the_val = 10;
        break;
    case 'A':
        the_val = 11;
        break;
    case 'X':
        continue;
    default:
        the_val = atoi(card);
        if ((the_val < 1) || (the_val > 10))
        {
            puts("I don't understand that value!");
            continue;
        }
    }
}

int make_count(card_value, card_count)
{
    if ((card_value > 2) && (card_value < 7)) {
        card_count++;
    } else if (card_value == 10) {
        card_count--;
    }
}