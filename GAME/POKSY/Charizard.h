//
// Created by SZEF on 14.06.2022.
//

#ifndef PROJEKT_CHARIZARD_H
#define PROJEKT_CHARIZARD_H
#include "Pokemon.h"
#include <string>

class Charizard: public virtual Pokemon{


public:

    Charizard();
    virtual std::string getName();


};


#endif //PROJEKT_CHARIZARD_H
