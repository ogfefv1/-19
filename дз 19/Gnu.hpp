//
//  Gnush.hpp
//  дз 19
//
//  Created by Егор Джемлиханов on 05.11.2024.
//

#pragma once
#include "Travoiadnie.hpp"
#include <iostream>

using namespace std;

class Gnu : public Travoiadnie
{
public:
    Gnu()
    {
        weight = 150;
    }

    void eat_grass() override
    {
        weight += 10;
        cout << "Wildebeest eats grass, weight: " << weight << endl;
    }
};
