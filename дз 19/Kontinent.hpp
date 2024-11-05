//
//  Kontinent.hpp
//  дз 19
//
//  Created by Егор Джемлиханов on 05.11.2024.
//

#pragma once
#include "Travoiadnie.hpp"
#include "Plotoiadnie.hpp"

using namespace std;

class Kontinent
{
public:
    virtual Travoiadnie* create_travoiadnie() = 0;
    virtual Plotoiadnie* create_plotoiadnie() = 0;
};
