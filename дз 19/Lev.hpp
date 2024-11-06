//
//  Lev.hpp
//  дз 19
//
//  Created by Егор Джемлиханов on 05.11.2024.
//

#pragma once
#include "Plotoiadnie.hpp"
#include <iostream>

using namespace std;

class Lev : public Plotoiadnie
{
public:
    Lev()
    {
        power = 200;
    }

    void eat(Travoiadnie* travoiadnie) override
    {
        if (travoiadnie->alive() and power > travoiadnie->get_weight())
        {
            power += 10;
            cout << "лев ест травоядных: " << power << endl;
        }
        else
        {
            power -= 10;
            cout << "лев не может есть: " << power << endl;
        }
    }
};
