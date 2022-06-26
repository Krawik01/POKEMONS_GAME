//
// Created by s25611 on 26.06.2022.
//

#ifndef PROJEKT_POLIWRATH_H
#define PROJEKT_POLIWRATH_H


#include <string>
#include "Pokemon.h"

class Poliwrath : public virtual Pokemon {

    virtual std::string getName();

public:
    Poliwrath();
};


#endif //PROJEKT_POLIWRATH_H
