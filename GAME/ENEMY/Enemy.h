//
// Created by SZEF on 25.06.2022.
//

#ifndef PROJEKT_ENEMY_H
#define PROJEKT_ENEMY_H


#include <vector>
#include "../POKSY/Charizard.h"
#include "../POKSY/Venusaur.h"
#include "../POKSY/Blastoise.h"
#include "string"

class Enemy {

    public:

        int id = 1;
        std::string name;

    Enemy(int id, const std::string &name);

    std::vector<Pokemon*> pokemonsList;

        int getId() const;

        const std::string &getName() const;

        const std::vector<Pokemon *> getAdamPokemons() const;


        void addPokemon(Pokemon *pokemon);

        void setPokemons(const std::vector<Pokemon *> &adamPokemons);

        void showPokemons();

        void drawPokemons(std::vector<Pokemon*> &listFrom,int opponentsLeft);


};


#endif //PROJEKT_ENEMY_H
