//
// Created by SZEF on 26.06.2022.
//

#include "Beedrill.h"
Beedrill::Beedrill() : Pokemon("Weedle", 3, 2, 4, 1, 7,
                         2,"Boulder - mighty stone throw",
                         20,0,3,25) {}
std::string Beedrill::getName() {
    if(getLvl() == 1){
        setName("Weedle");
    }
    if(getLvl() == 2) {
        setName("Kakuna");
    }
    if(getLvl() == 3){
        setName("Beedrill");
    }
    return Pokemon::getName();
}

