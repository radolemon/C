#ifndef DAMAGE_H
#define DAMAGE_H

#include <stdlib.h>

int attack(int POW, int SR) {
    int RNG = rand() % 100;

    if (RNG > SR) return 0;

    return POW;
}

#endif
