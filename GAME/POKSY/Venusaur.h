//
// Created by s25611 on 14.06.2022.
//

#ifndef PROJEKT_VENUSAUR_H
#define PROJEKT_VENUSAUR_H
#include "Pokemon.h"
#include <string>


class Venusaur :public virtual Pokemon{
public:
    Venusaur();

    virtual std::string getName();

};


#endif //PROJEKT_VENUSAUR_H
