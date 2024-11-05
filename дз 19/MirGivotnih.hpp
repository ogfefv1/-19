//
//  MirGivotnih.hpp
//  дз 19
//
//  Created by Егор Джемлиханов on 05.11.2024.
//

#pragma once
#include <vector>
#include "Kontinent.hpp"

using namespace std;

class MirGivotnih {
private:
    vector <Kontinent*> kontinent;
    vector <Travoiadnie*> travoiadnie;
    vector <Plotoiadnie*> plotoiadnie;
public:
    void add_kontinent(Kontinent* kontinent);
    void meals_travoiadnie();
    void nutrition_plotoiadnie();
};
