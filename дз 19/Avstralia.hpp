//
//  Avstralia.hpp
//  дз 19
//
//  Created by Егор Джемлиханов on 05.11.2024.
//

#pragma once
#include "Kontinent.hpp"
#include "Kenguru.hpp"
#include "AvstraliskiiVolk.hpp"

class Avstralia : public Kontinent
{
    Travoiadnie* create_travoiadnie() override
    {
        return new Kenguru();
    }

    Plotoiadnie* create_plotoiadnie() override
    {
        return new AvstraliskiiVolk();
    }
};

