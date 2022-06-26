//
// Created by s25611 on 26.06.2022.
//

#include "Vespiquen.h"
Vespiquen::Vespiquen() : Pokemon("Mothim", 4, 4, 3, 1, 16,
                         2,"Boulder - mighty stone throw",
                         25,0,3,20) {}
std::string Vespiquen::getName() {
    if(getLvl() == 1){
        setName("Mothim");
    }
    if(getLvl() == 2) {
        setName("Combee");
    }
    if(getLvl() == 3){
        setName("Vespiquen");
    }
    return Pokemon::getName();
}
