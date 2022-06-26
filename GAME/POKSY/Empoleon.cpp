//
// Created by s25611 on 26.06.2022.
//

#include "Empoleon.h"
Empoleon::Empoleon() : Pokemon("Piplup", 6, 4, 3, 1, 15,
                         2,"Feather-strike with steel feathers",
                         20,0,3,20) {}
std::string Empoleon::getName() {
    if(getLvl() == 1){
        setName("Piplup");
    }
    if(getLvl() == 2) {
        setName("Prinplup");
    }
    if(getLvl() == 3){
        setName("Empoleon");
    }
    return Pokemon::getName();
}
