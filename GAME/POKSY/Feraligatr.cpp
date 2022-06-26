//
// Created by SZEF on 26.06.2022.
//

#include "Feraligatr.h"

Feraligatr::Feraligatr() : Pokemon("Totodile", 5, 3, 3, 1, 5,
                         1,"Mrozonado - freezing tornado",
                         30,0,3,35) {}


std::string Feraligatr::getName() {
    if(getLvl() == 1){
        setName("Totodile");
    }
    if(getLvl() == 2) {
        setName("Croconaw");
    }
    if(getLvl() == 3){
        setName("Feraligatr");
    }
    return Pokemon::getName();
}
