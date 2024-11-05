//
//  Kenguru.hpp
//  дз 19
//
//  Created by Егор Джемлиханов on 05.11.2024.
//

#pragma once
#include "Travoiadnie.hpp"
#include <iostream>

using namespace std;

class Kenguru : public Travoiadnie
{
public:
    Kenguru()
    {
        weight = 200;
    }

    void eat_grass()
    {

        weight += 10;
        cout << "Kangaroo eats grass, weight: " << weight << endl;
    }
};

