//
// Created by s25611 on 26.06.2022.
//

#include "Wailord.h"

Wailord::Wailord() : Pokemon("Wailord", 5, 3, 1, 1, 14,
                         1,"Boulder - mighty stone throw",
                         25,0,4,50) {}
std::string Wailord::getName() {
    if(getLvl() == 1){
        setName("Sharpedo");
    }
    if(getLvl() == 2) {
        setName("Wailmer");
    }
    if(getLvl() == 3){
        setName("Wailord");
    }
    return Pokemon::getName();
}
