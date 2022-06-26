//
// Created by SZEF on 26.06.2022.
//

#include "Nidoqueen.h"
Nidoqueen::Nidoqueen() : Pokemon("Nidoran", 6, 3, 1, 1, 8,
                         1,"Metal punch - pours a powerful jet of heated metal",
                         25,0,3,45) {}
std::string Nidoqueen::getName() {
    if(getLvl() == 1){
        setName("Nidoran");
    }
    if(getLvl() == 2) {
        setName("Nidorina");
    }
    if(getLvl() == 3){
        setName("Nidoqueen");
    }
    return Pokemon::getName();
}