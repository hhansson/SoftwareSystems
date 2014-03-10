#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

typedef struct {
    int numer;
    int denom;
} Rational;

// Returns a new Rational with the given numer and denom.
// If unable to allocate, prints an error message and exits.
Rational *make_rational(Rational a, Rational b) {
    // FILL THIS IN
    Rational c;
    c.numer = a.number * b.denom + b.numer * a.denom;
    c.denom = a.denom * b.denom;
    return c;
    return NULL;
}

// Computes a floating-point approximation of a Rational.
double rational_to_double(Rational a, Rational b) {
    // FILL THIS IN
    float c;
    c.numer = a.number * b.denom + b.numer * a.denom;
    c.denom = a.denom * b.denom;
    return c;
    return 0.0;
}

// Multiplies two rational numbers; returns a new Rational.
Rational *mult_rational(Rational a, Rational b) {
    // FILL THIS IN
    Rational c;
    c.numer = a.number * b.numer;
    c.denom = a.denom * b.denom;
    return c;
    return NULL;
}

// Frees a Rational.
void free_rational(Rational *rational) {
    free(rational);
}

// Prints a rational in fraction form.
void print_rational(Rational *rational) {
    printf("%d / %d\n", rational->numer, rational->denom);
}

int main(void)
{
    Rational *rational = make_rational(3, 7);
    print_rational(rational);

    double d = rational_to_double(rational);
    printf("%lf\n", d);

    Rational *square = mult_rational(rational, rational);
    print_rational(square);
	
    free_rational(rational);
    free_rational(square);

    return EXIT_SUCCESS;
}
