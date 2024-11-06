//
//  Volk.hpp
//  дз 19
//
//  Created by Егор Джемлиханов on 05.11.2024.
//

#pragma once
#include "Plotoiadnie.hpp"
#include <iostream>

using namespace std;

class Volk : public Plotoiadnie
{
public:
    Volk()
    {
        power = 200;
    }

    void eat(Travoiadnie* travoiadnie) {
        if (travoiadnie->alive() and power > travoiadnie->get_weight())
        {
            power += 10;
            cout << "Wolf eats herbivore, power: " << power << endl;
        }
        else
        {
            power -= 10;
            cout << "Wolf fails to eat, power: " << power << endl;
        }
    }
};
