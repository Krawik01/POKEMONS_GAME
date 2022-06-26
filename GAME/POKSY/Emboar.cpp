//
// Created by s25611 on 26.06.2022.
//

#include "Emboar.h"
Emboar::Emboar() : Pokemon("Tepig", 4, 3, 1, 1, 18,
                         1,"charge - fiery charge at the enemy",
                         20,0,3,40) {}
std::string Emboar::getName() {
    if(getLvl() == 1){
        setName("Tepig");
    }
    if(getLvl() == 2) {
        setName("Pignite");
    }
    if(getLvl() == 3){
        setName("Emboar");
    }
    return Pokemon::getName();
}
