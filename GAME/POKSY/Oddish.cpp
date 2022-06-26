//
// Created by s25611 on 26.06.2022.
//

#include "Oddish.h"

Oddish::Oddish() : Pokemon("Oddish", 2, 3, 3, 1, 9,
                         1,"creepers - Vines wrap around the enemy and choke him",
                         15,0,5,60) {}
std::string Oddish::getName() {
    if(getLvl() == 1){
        setName("Oddish");
    }
    if(getLvl() == 2) {
        setName("Gloom");
    }
    if(getLvl() == 3){
        setName("Vileplume");
    }
    return Pokemon::getName();
}