//
//  MirGivotnih.cpp
//  дз 19
//
//  Created by Егор Джемлиханов on 05.11.2024.
//

#include "MirGivotnih.hpp"
#include <iostream>

using namespace std;

void MirGivotnih::add_kontinent(Kontinent* kontinent)
{
    kontinent.push_back(kontinent);

    travoiadnie.push_back(kontinent->create_travoiadnie());
    plotoiadnie.push_back(kontinent->create_plotoiadnie());
}

void MirGivotnih::meals_travoiadnie()
{
    for (auto& travoiadnie : travoiadnie)
    {
        travoiadnie->eat_grass();
    }
}

void MirGivotnih::nutrition_plotoiadnie()
{
    for (auto& plotoiadnie : plotoiadnie)
    {
        for (auto& travoiadnie : travoiadnie)
        {
            plotoiadnie->eat(travoiadnie);
        }
    }
}
