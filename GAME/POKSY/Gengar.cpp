//
// Created by SZEF on 26.06.2022.
//

#include "Gengar.h"
Gengar::Gengar() : Pokemon("Gastly", 4, 3, 1, 1, 13,
                         3,"fireball - shoots a fireball in front of you",
                         20,0,4,40) {}
std::string Gengar::getName() {
    if(getLvl() == 1){
        setName("Gastly");
    }
    if(getLvl() == 2) {
        setName("Haunter");
    }
    if(getLvl() == 3){
        setName("Gengar");
    }
    return Pokemon::getName();
}
