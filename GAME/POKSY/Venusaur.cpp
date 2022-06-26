//
// Created by s25611 on 14.06.2022.
//

#include "Venusaur.h"
#include <string>

Venusaur::Venusaur() : Pokemon("Bulbosur", 2, 3, 1, 1, 2,
                                                            3, "Overgrow - powerful leaf strike from a leaf",
                                                            8,0,3,30) {}
std::string Venusaur::getName() {
    if(getLvl() == 1){
        setName("Bulbosaur");
    }
    if(getLvl() == 2) {
        setName("Ivysaur");
    }
    if(getLvl() == 3) {
        setName("Venusaur");
    }


    return Pokemon::getName();
}




