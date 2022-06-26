//
// Created by s25611 on 26.06.2022.
//

#include "Victreebel.h"
Victreebel::Victreebel() : Pokemon("Victreebel", 4, 6, 3, 1, 13,
                         2,"Seed - shoots serially fiery seeds",
                         20,0,6,35) {}
std::string Victreebel::getName() {
    if(getLvl() == 1){
        setName("Bellsprout");
    }
    if(getLvl() == 2) {
        setName("Weepinbell");
    }
    if(getLvl() == 3){
        setName("Victreebel");
    }
    return Pokemon::getName();
}
