#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    if (towar == 0)
        return 0;

    unsigned int suma = 0;
    unsigned int zaglowce = 0;

    Stocznia gdanska{};

    while (suma < towar)
    {
        Statek* s1 = gdanska();
        if (dynamic_cast< Zaglowiec* >(s1) != nullptr)
            zaglowce++;
        suma += s1->transportuj();

        delete s1;
    }

    return zaglowce;
}
