//
//  SevernaiaAmerika.hpp
//  дз 19
//
//  Created by Егор Джемлиханов on 05.11.2024.
//

#pragma once
#include "Kontinent.hpp"
#include "Volk.hpp"
#include "Bizon.hpp"

class SevernaiaAmerika : public Kontinent {
    Travoiadnie* create_travoiadnie()  {
        return new Bizon();
    }

    Plotoiadnie* create_plotoiadniee()  {
        return new Volk();
    }
};
