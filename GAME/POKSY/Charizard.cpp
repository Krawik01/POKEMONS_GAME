//
// Created by SZEF on 14.06.2022.
//

#include "Charizard.h"
#include "iostream"


Charizard::Charizard() : Pokemon("Charmander", 4, 50, 2, 1, 1,
                                                              2,"BLAZE - powerful jet of fire",25, 0,4,35) {}

std::string Charizard::getName() {
    if (getLvl() == 1) {
        setName("Charmander");
    }
    if(getLvl() == 2) {
        setName("Charmelon");
    }
    if(getLvl() == 3){
        setName("Charizard");
    }

        return Pokemon::getName();
    }



