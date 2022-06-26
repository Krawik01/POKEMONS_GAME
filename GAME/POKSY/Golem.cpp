//
// Created by SZEF on 26.06.2022.
//

#include "Golem.h"


Golem::Golem() : Pokemon("Geodude", 2, 4, 1, 1, 4,
                                 1,"Boulder - mighty stone throw",
                                 15,0,5,60) {}
std::string Golem::getName() {
    if(getLvl() == 1){
        setName("Geodude");
    }
    if(getLvl() == 2) {
        setName("Graveler");
    }
    if(getLvl() == 3){
        setName("Golem");
    }
    return Pokemon::getName();
}

