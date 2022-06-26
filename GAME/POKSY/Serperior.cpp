//
// Created by SZEF on 26.06.2022.
//

#include "Serperior.h"

Serperior::Serperior() : Pokemon("Snivy", 2, 3, 5, 1, 17,
                         3,"leaves - a powerful blow from a leaf",
                         15,0,3,10) {}
std::string Serperior::getName() {
    if(getLvl() == 1){
        setName("Snivy");
    }
    if(getLvl() == 2) {
        setName("Servine");
    }
    if(getLvl() == 3){
        setName("Serperior");
    }
    return Pokemon::getName();
}
