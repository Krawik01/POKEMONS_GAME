//
// Created by s25611 on 26.06.2022.
//

#include "Poliwrath.h"
Poliwrath::Poliwrath() : Pokemon("Poliwag", 1, 4, 0, 1, 11,
                         1,"Waternado - Protective Water Tornado",
                         15,0,5,60) {}
std::string Poliwrath::getName() {
    if(getLvl() == 1){
        setName("Poliwag");
    }
    if(getLvl() == 2) {
        setName("Poliwhirl");
    }
    if(getLvl() == 3){
        setName("Poliwrath");
    }
    return Pokemon::getName();
}
