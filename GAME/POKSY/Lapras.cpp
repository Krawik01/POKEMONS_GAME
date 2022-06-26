//
// Created by s25611 on 26.06.2022.
//

#include "Lapras.h"

Lapras::Lapras() : Pokemon("Magickarp", 1, 4, 2, 1, 5,
                         2,"Armor - coral reef armor",
                         25,0,10,35) {}
std::string Lapras::getName() {
    if(getLvl() == 1){
        setName("Magickarp");
    }
    if(getLvl() == 2) {
        setName("Gyarados");
    }
    if(getLvl() == 3){
        setName("Lapras");
    }
    return Pokemon::getName();
}
