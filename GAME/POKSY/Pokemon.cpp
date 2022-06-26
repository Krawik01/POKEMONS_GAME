//
// Created by s25611 on 14.06.2022.
//

#include "Pokemon.h"
#include <string>
#include "iostream"


void Pokemon::setName(const std::string &name) {
    Pokemon::name = name;
}

int Pokemon::getLvl() const {
    return lvl;
}

int Pokemon::getType() const {
    return this->type;
}

int Pokemon::getStrength() const {
    return strength;
}

int Pokemon::getAgility() const {
    return agility;
}

int Pokemon::getPower() const {
    return power;
}

int Pokemon::getNumberOfUsesPower() const {
    return numberOfUsesPower;
}

const std::string &Pokemon::getPowerName() const {
    return powerName;
}

int Pokemon::getPowerDamage() const {
    return powerDamage;
}

void Pokemon::setNumberOfUsesPower(int numberOfUsesPower) {
    Pokemon::numberOfUsesPower = numberOfUsesPower;
}

int Pokemon::getHp() {
    return hp;
}

void Pokemon::setType(int type) {
    Pokemon::type = type;
}

void Pokemon::setPower(int power) {
    Pokemon::power = power;
}

void Pokemon::setPowerName(const std::string &powerName) {
    Pokemon::powerName = powerName;
}

void Pokemon::setPowerDamage(int powerDamage) {
    Pokemon::powerDamage = powerDamage;
}

void Pokemon::setGivesExp(int givesExp) {
    Pokemon::givesExp = givesExp;
}

void Pokemon::setAgility(int agility) {
    Pokemon::agility = agility;
}

void Pokemon::setStrength(int strength) {
    Pokemon::strength = strength;
}

void Pokemon::showStats() {
    std::string type;

    if(getType()==1){
        type="WATER";
    }
    if(getType()==2){
        type="EARTH";
    }
    if(getType()==3){
        type="AIR";
    }
    if(getType()==4){
        type="FIRE";
    }
    if(getType()==5){
        type="ICE";
    }
    if(getType()==6){
        type="STEEL";
    }
    std::cout <<
              "***********************************************************************"
              <<
              std::endl << getName() << " STATS: " << std:: endl <<
              "type: "<< type << std::endl <<
              "strength: " << getStrength() << std::endl <<
              "agility: " << getAgility() << std::endl <<
              "hp: " << getHp() << std::endl <<
              "power: " << getPower() << std::endl;
}

void Pokemon::setHp(int hp) {
    Pokemon::hp = hp;
}


std::string Pokemon::getName() {
    return Pokemon::name;
}

void Pokemon::setLvl(int lvl) {
    Pokemon::lvl = lvl;
}

int Pokemon::getExp() const {
    return exp;
}

void Pokemon::setExp(int exp) {
    Pokemon::exp = exp;
}

int Pokemon::getGivesExp() const {
    return givesExp;
}

Pokemon::Pokemon(const std::string &name, int type, int strength, int agility, int lvl, int power,
                 int numberOfUsesPower, const std::string &powerName, int powerDamage, int exp, int givesExp, int hp)
        : name(name), type(type), strength(strength), agility(agility), lvl(lvl), power(power),
          numberOfUsesPower(numberOfUsesPower), powerName(powerName), powerDamage(powerDamage), exp(exp),
          givesExp(givesExp), hp(hp) {}






//void Pokemon::setHp(int x) {
//    Pokemon::hp = x;
//}


