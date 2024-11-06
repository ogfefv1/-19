//
//  Bizon.hpp
//  дз 19
//
//  Created by Егор Джемлиханов on 05.11.2024.
//

#pragma once
#include "Travoiadnie.hpp"
#include <iostream>

using namespace std;

class Bizon : public Travoiadnie
{
public:
    Bizon()
    {
        weight = 300;
    }

    void eat_grass()
    {
        weight += 15;
        cout << "бизон ест траву: " << weight << endl;
    }
};

