//
//  Travoiadnie.hpp
//  дз 19
//
//  Created by Егор Джемлиханов on 05.11.2024.
//

#pragma once

using namespace std;

class Travoiadnie {
protected:
    int weight;
    bool is_alive;

public:
    Travoiadnie() : weight(0), is_alive(true) {}

    virtual void eat_grass() = 0;

    int get_weight() const { return weight; }

    bool alive() const { return is_alive; }
};
