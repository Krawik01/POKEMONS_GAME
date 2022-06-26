//
// Created by SZEF on 14.06.2022.
//

#include "Blastoise.h"
#include "iostream"
#include <string>

Blastoise::Blastoise() : Pokemon("Squirtle", 1, 3, 1, 1, 3,
                                                              2,"Shield - mega strong protective field from water ",
                                                              20,6,3,50) {}

std::string Blastoise::getName() {
    if(getLvl() == 1){
        setName("Squirtle");
    }
    if(getLvl() == 2) {
        setName("Wartortle");
    }
    if(getLvl() == 3){
        setName("Blastiose");
    }
    return Pokemon::getName();
}









