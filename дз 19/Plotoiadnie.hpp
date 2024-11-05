//
//  Plotoiadnie.hpp
//  дз 19
//
//  Created by Егор Джемлиханов on 05.11.2024.
//

#pragma once
#include "Travoiadnie.hpp"

using namespace std;

class Plotoiadnie {
protected:
    int power;

public:
    Plotoiadnie() : power(0) {}

    virtual void eat(Travoiadnie* travoiadnie) = 0;

    int get_power() const { return power; }
};
