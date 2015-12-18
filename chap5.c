#include <stdio.h>

typedef struct {
float tank_capacity;
int tank_psi;
const char *suit_material;
} equipment;

typedef struct scuba {
const char *name;
equipment kit;
} diver;

void badge(diver d)
{
printf("Name: %s Tank: %2.2f(%i) Suit: %s\n",
d.name, d.kit.tank_capacity, d.kit.tank_psi, d.kit.suit_material);
}

int main()
{
diver randy = {"Randy", {5.5, 3500, "Neoprene"}};
badge(randy);
return 0;
}

struct complex {
    float real;
    float imag;
};

struct complex c;
c.real = 3.0;
c.imag = 4.0;

float mag(struct complex c) {
    return ...
}

typedef struct {
    float real;
    float imag;
} Complex;

Complex *c = make_complex(3.0, 4.0);

Complex *make_complex(float real, float imag) {
    Complex *c = malloc(sizeof(Complex));
    c->real = real;
    c->imag = imag;
    return c;

float mag(Complex *c) {
    return ...
}