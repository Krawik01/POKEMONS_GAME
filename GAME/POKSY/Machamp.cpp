//
// Created by SZEF on 26.06.2022.
//

#include "Machamp.h"
Machamp::Machamp() : Pokemon("Machop", 6, 5, 1, 1, 12,
                         1,"Steel Fist - Strike with a steel fist",
                         10,0,6,40) {}
std::string Machamp::getName() {
    if(getLvl() == 1){
        setName("Machop");
    }
    if(getLvl() == 2) {
        setName("Machoke");
    }
    if(getLvl() == 3){
        setName("Machamp");
    }
    return Pokemon::getName();
}
