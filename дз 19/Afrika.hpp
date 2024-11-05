//
//  Afrika.hpp
//  дз 19
//
//  Created by Егор Джемлиханов on 05.11.2024.
//

#pragma once
#include "Kontinent.hpp"
#include "Gnu.hpp"
#include "Lev.hpp"

class Afrika : public Kontinent
{
public:
    Travoiadnie* create_travoiadnie() override
    {
        return new Gnu();
    }

    Plotoiadnie* create_plotoiadnie() override
    {
        return new Lev();
    }
};
