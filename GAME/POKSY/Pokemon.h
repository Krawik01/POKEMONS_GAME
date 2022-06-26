//
// Created by s25611 on 14.06.2022.
//

#ifndef PROJEKT_POKEMON_H
#define PROJEKT_POKEMON_H
#include <string>

class Pokemon {
private:
    std::string name;
    int type;
    int strength;
    int agility;
    int lvl;
    int power;
    int numberOfUsesPower;
    std::string powerName;
    int powerDamage;
    int exp;
    int givesExp;
public:
    int hp;


  //  Pokemon();

//    Pokemon(const std::string &name, int type, int strength, int agility, int lvl, int power, int numberOfUsesPower,
//            int hp);

    Pokemon(const std::string &name, int type, int strength, int agility, int lvl, int power, int numberOfUsesPower,
            const std::string &powerName, int powerDamage, int exp, int givesExp, int hp);

    virtual std::string getName();

    virtual int getHp();

    virtual int getType() const;

    virtual int getStrength() const;

    virtual int getAgility() const;

    virtual int getPower() const;

    virtual int getNumberOfUsesPower() const;

    virtual void showStats();

    virtual void setHp(int hp);

    virtual void setLvl(int lvl);

    int getLvl() const;

    void setName(const std::string &name);

    const std::string &getPowerName() const;

    int getPowerDamage() const;

    void setNumberOfUsesPower(int numberOfUsesPower);

    int getExp() const;

    int getGivesExp() const;

    void setExp(int exp);

    void setStrength(int strength);

    void setAgility(int agility);

    void setType(int type);

    void setPower(int power);

    void setPowerName(const std::string &powerName);

    void setPowerDamage(int powerDamage);

    void setGivesExp(int givesExp);

    //  void setHp(int x);
};


#endif //PROJEKT_POKEMON_H
