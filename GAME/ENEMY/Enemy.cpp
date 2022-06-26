//
// Created by SZEF on 25.06.2022.
//


#include "iostream"
#include "Enemy.h"
#include "vector"

using namespace std;


Enemy::Enemy(int id, const std::string &name) {}

const std::vector<Pokemon *> Enemy::getAdamPokemons() const {
    return pokemonsList;
}


void Enemy::setPokemons(const std::vector<Pokemon *> &adamPokemons) {
    Enemy::pokemonsList = adamPokemons;
}

void Enemy::addPokemon(Pokemon *pokemon) {
    pokemonsList.push_back(pokemon);
}

void Enemy::showPokemons() {
    for (int i = 0; i < pokemonsList.size(); ++i) {
        std::cout <<pokemonsList.at(i)->getName() << "HP: " << pokemonsList.at(i)->getHp() << std::endl;
    }

}

int Enemy::getId() const {
    return id;
}

const std::string &Enemy::getName() const {
    return name;
}



void Enemy::drawPokemons(std::vector<Pokemon *> &listOfAll,int opponentsLeft) {

    cout<<listOfAll.size();
    for (int i = 0; i < 4 ; ++i) {
        if (listOfAll.size() !=0 ) {

            srand(time(0));

            //losujemy liczbe od 1-4
            int draw = (rand() % listOfAll.size()) + 1;
            draw = draw - 1;

         //   cout << "draw: " << draw << "  from: " << listOfAll.size() << endl;

            pokemonsList.push_back(listOfAll.at(draw));
            listOfAll.erase(listOfAll.begin() + draw);
        }
        opponentsLeft--;
    }
    }





