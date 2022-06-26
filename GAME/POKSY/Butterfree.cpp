//
// Created by s25611 on 26.06.2022.
//

#include "Butterfree.h"
Butterfree::Butterfree() : Pokemon("Caterpie", 3, 2, 4, 1, 10,
                         1,"Mighty wings - mighty gust of wind ",
                         35,0,4,25) {}
std::string Butterfree::getName() {
    if(getLvl() == 1){
        setName("Caterpie");
    }
    if(getLvl() == 2) {
        setName("Metapod");
    }
    if(getLvl() == 3){
        setName("Butterfree");
    }
    return Pokemon::getName();
}