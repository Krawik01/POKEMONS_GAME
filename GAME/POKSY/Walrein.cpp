//
// Created by s25611 on 26.06.2022.
//

#include "Walrein.h"
Walrein::Walrein() : Pokemon("Walrein", 5, 2, 4, 1, 19,
                         3,"Iceberg - creates an iceberg over the opponent and d",
                         20,0,3,45) {}
std::string Walrein::getName() {
    if(getLvl() == 1){
        setName("Spheal");
    }
    if(getLvl() == 2) {
        setName("Sealeo");
    }
    if(getLvl() == 3){
        setName("Walrein");
    }
    return Pokemon::getName();
}
