#include <iostream>
#include "vector"
#include "list"
#include "../POKSY/Pokemon.h"
#include "../POKSY/Beedrill.h"
#include "../POKSY/Blastoise.h"
#include "../POKSY/Butterfree.h"
#include "../POKSY/Charizard.h"
#include "../POKSY/Emboar.h"
#include "../POKSY/Empoleon.h"
#include "../POKSY/Feraligatr.h"
#include "../POKSY/Gengar.h"
#include "../POKSY/Golem.h"
#include "../POKSY/Lapras.h"
#include "../POKSY/Machamp.h"
#include "../POKSY/Nidoqueen.h"
#include "../POKSY/Oddish.h"
#include "../POKSY/Poliwrath.h"
#include "../POKSY/Serperior.h"
#include "../POKSY/Serperior.h"
#include "../POKSY/Venusaur.h"
#include "../POKSY/Vespiquen.h"
#include "../POKSY/Victreebel.h"
#include "../POKSY/Wailord.h"
#include "../POKSY/Walrein.h"
#include <string>
#include <fstream>

using namespace std;


vector<Pokemon*> listOfAll;
vector<Pokemon*> userList;


int tourNumber=1;
int round=1;
int dificultLevel=2;
int opponentsLeft;


string enemyName;
vector<string> names = {"Michal" ,"Ewa","Piotr","Wladyslaw"};

//user
/**
 * showUserPokemons - funkcja pokazujca nam Pokemony gracza.
 */
void showUserPokemons();
/**
 * pickuserPokemons - fukcja pozawalajaca wybrac graczowi swoja druzyne.
 */
void pickUserPokemons();

/**
 *
 * @param pokemon
 * pickUserPokemonFightNow - funkcja pozwalajaca wybrac aktualnie walczacego pokemona przez gracza.
 */
void pickUserPokemonFightNow(Pokemon *&pokemon);


void areYouReady(Pokemon *&pokemon);
void checkStop(int opponentsLeft, bool end);

/**
 *
 * @param pAttacking
 * @param pBits
 * @param enemy
 * @param superPower
 * @param userAttack
 * @param pokemonNow
 * attack - funkcja polegajaca na odejmowaniu atakowanemu objektowi konkretną ilosc punktow zdefiniowana dzieki polu strenght atakujacego i pomnozona
 * po przez dokladna wartosc przeliczna i zwrocona w calcualteDamge.
 */
void attack(Pokemon &pAttacking, Pokemon &pBits,Pokemon *&enemy,bool superPower,bool userAttack, Pokemon *&pokemonNow);

/**
 *
 * @param pAttacking
 * @param pBits
 * @return przeliczone obrazenia
 * calculateDamage - funkcja polegajaca na przeliczaniu wartosci zadawanych obrazen na podstawie tabelki z polecenia - przypisanych typow do objektu atakujacego
 * i atakowanego.
 *
 */
int calculateDamage(Pokemon &pAttacking, Pokemon &pBits);

/**
 *
 * @param pToEvolve
 * evolve - funkcja polegajca na zwiekszaniu pola lvl konkretnego objektu po spelnieniu kilku warunkow.
 */
void evolve(Pokemon &pToEvolve);

/**
 *
 * @param pokemon
 * @param opponentsLeft
 * drawOpponent - funckja losująca Pokemona z ktorym aktualnie gracz bedzie walczyl.
 */
void drawOpponent(Pokemon *&pokemon, int opponentsLeft);

/**
 * drawEnemy - funckja losujca przeciwnika z ktorym gracz sie zmierzy.
 */
void drawEnemy();
/**
 *
 * @param enemy
 * @param pokemonNow
 * enemyMove - funkcja wybierajaca nam nastepny ruch przeciwnika(PC) dzieki liczba pseudolosowym
 */
void enemyMove(Pokemon *enemy,Pokemon *&pokemonNow);

/**
 * showListToSelect - funckja pokazujca nam liste dostepnych pokemonow do wybrania
 */
void showListToSelect();

/**
 * select difficult level for the game -> opponents 2-4
 */
void levelSelect();
/**
 * save - zapisuje postepy gracza do pliku txt
 */
void save();

/**
 * loadSave - wczytuje postepy gracza z pliku txt
 */
void loadSave();
/**
 *
 * @param pokemon
 * @param type
 * @param strenght
 * @param agility
 * @param lvl
 * @param power
 * @param numberOfUsesPower
 * @param powerDamage
 * @param exp
 * @param givesExp
 * @param hp
 * loadPokemon - funckja slużąca do stworzenia objektu na podstawie danych z pliku txt
 */
void loadPokemon(Pokemon &pokemon,int type, int strenght, int agility, int lvl, int power, int numberOfUsesPower,int powerDamage, int exp, int givesExp,int hp);
/**
 * startNewGame - funckja wyświetlająca wiadomosc tekstowa gdy gra sie zaczyna od nowa
 */
void startNewGame();
/**
 *
 * @param name
 * @return
 * fileExists - funkcja sprawdzajaca czy plik o podanej nazwie istnieje
 */
inline bool fileExists (const std::string& name);


int main() {

    cout << "         _     _  _        _   ___         _   _   _  _       _          __            _ \n"
            " \\    / |_ |  /  / \\ |\\/| |_    |  |\\ |   |_) / \\ /  |_ |\\/| / \\ |\\ |   /__  /\\  |\\/| |_ \n"
            "  \\/\\/  |_ |_ \\_ \\_/ |  | |_   _|_ | \\|   |   \\_/ \\_ |_ |  | \\_/ | \\|   \\_| /--\\ |  | |_ "

         << endl;

    auto *beedrill = new Beedrill;
    auto *blastoise = new Blastoise;
    auto *butterfree = new Butterfree;
    auto *charizard = new Charizard;
    auto *emboar = new Emboar;
    auto *empoleon = new Empoleon;
    auto *feraligatr = new Feraligatr;
    auto *gengar = new Gengar;
    auto *golem = new Golem;
    auto *lapras = new Lapras;
    auto *machamp = new Machamp;
    auto *nidoqueen = new Nidoqueen;
    auto *oddish = new Oddish;
    auto *poliwrath = new Poliwrath;
    auto *serperior = new Serperior;
    auto *venusaur = new Venusaur;
    auto *vespiquen = new Vespiquen;
    auto *victreebel = new Victreebel;
    auto *wailord = new Wailord;
    auto *walrein = new Walrein;


    listOfAll.push_back(beedrill);
    listOfAll.push_back(blastoise);
    listOfAll.push_back(butterfree);
    listOfAll.push_back(charizard);
    listOfAll.push_back(emboar);
    listOfAll.push_back(empoleon);
    listOfAll.push_back(feraligatr);
    listOfAll.push_back(gengar);
    listOfAll.push_back(golem);
    listOfAll.push_back(lapras);
    listOfAll.push_back(machamp);
    listOfAll.push_back(nidoqueen);
    listOfAll.push_back(oddish);
    listOfAll.push_back(poliwrath);
    listOfAll.push_back(serperior);
    listOfAll.push_back(venusaur);
    listOfAll.push_back(vespiquen);
    listOfAll.push_back(victreebel);
    listOfAll.push_back(wailord);
    listOfAll.push_back(walrein);

    //listOfAll.push_back();
    Pokemon *pokemonNow;
    Pokemon *enemy;

    if(fileExists("Save.txt")) {
        cout << "DO YOU WANT LOAD GAME FROM LAST SAVE?\n"
                "1.YES\n"
                "2.NO" << endl;
        int save;
        cin >> save;

        if (save == 1) {
            loadSave();

            cout << "choose the Pokemon that will fight first!" << endl;
            showUserPokemons();
            pickUserPokemonFightNow(pokemonNow);
        } else {
            levelSelect();
            startNewGame();
            pickUserPokemonFightNow(pokemonNow);
        }
    } else {
        levelSelect();
        startNewGame();
        pickUserPokemonFightNow(pokemonNow);
    }



    cout << "Now all that's left to do is pick an opponent to fight" << endl;

    //losowanie przeciwnika
    cout << "DRAW OPPONENT" << endl;
    drawEnemy();
    drawOpponent(enemy,opponentsLeft);
    cout << "Your enemy is: " << enemyName << "!!!" << endl;
    cout << enemyName<<" picked " << enemy->getName() << " as Pockemon to fight!!!" << endl;
    // enemy->showStats();
    cout << "****************************************************************************"
         << endl << endl << "\n"
                            "1.ATTACK\n"
                            "2.SWAP POKEMON\n"
                            "3.EVOLUTION\n"
                            "4.SUPER POWER"
         << endl;

    //ROZGRYWKA
    // "1.ATTACK\n"
    // "2.SWAP POKÉMON\n"
    // "3.EVOLUTION" << endl;
    // "4.SUPER POWER


    bool end = false;
    tourNumber = 1;
    //GAME LOOP
    while(!end) {

        if ((userList.empty())) {
            end = true;
        }

        tourNumber++;
        cout << endl << "**********************************************************************" << endl;
        cout << "YOUR MOVE!" << endl;
        int user2;
        cin >> user2;


        switch (user2) {


            //attack
            case 1: {
                cout << "YOUR MOVE IS ATTACK." << endl;
                attack(*pokemonNow, *enemy, enemy, false, true, pokemonNow);
                checkStop(opponentsLeft, end);
                enemyMove(enemy, pokemonNow);
                continue;
            }
                //swaping pokemon
            case 2: {
                int user;
                cout << "YOUR MOVE IS SWAP." << endl;
                cout << "select Pokemon to swap: " << endl;
                showUserPokemons();
                cin >> user;
                pokemonNow = userList.at(user - 1);
                cout << "Now : " << pokemonNow->getName() << " is fighting" << endl;
                enemyMove(enemy, pokemonNow);
                continue;

            }
                //evolve pokemon
            case 3: {
                cout << "YOUR MOVE IS EVOLVE." << endl;

                if (pokemonNow->getLvl() < 3) {

                    evolve(*pokemonNow);
                    enemyMove(enemy, pokemonNow);
                    continue;

                } else {
                    cout << "The " << pokemonNow->getName() << " is the best evolution." << endl;
                    continue;
                }
            }
                //use superPower
            case 4: {
                cout << "YOUR MOVE IS SUPER-ATTACK." << endl;

                if (pokemonNow->getNumberOfUsesPower() > 0) {
                    attack(*pokemonNow, *enemy, enemy, true, true, pokemonNow);
                    enemyMove(enemy, pokemonNow);
                    pokemonNow->setNumberOfUsesPower(pokemonNow->getNumberOfUsesPower() - 1);
                    continue;
                } else {
                    cout << pokemonNow->getName() << "has exhausted all uses of the super power.  " << endl;
                    continue;
                }
            }

        }


    }
}


inline bool fileExists (const std::string& name) {
    ifstream f(name.c_str());
    return f.good();
}

void startNewGame(){
    //GAME START *****************************************************************************************

    //wybieranie pokemonow przez uzytkownika
    pickUserPokemons();

    //pokazanie pokemonow wybranych przez uzytkownika
    showUserPokemons();

    //wybor pokemona ktory bedzie walczyl jako pierwszy
    cout << "choose the Pokemon that will fight first!" << endl;



    //  areYouReady(enemy);

    // *****************************************************************************************************

}

void save() {
    ofstream save;

        save.open("Save.txt");

        save << round << endl;

        save << ";" << endl;

        for (int i = 0; i < userList.size(); ++i) {
            save << userList.at(i)->getName() << endl;
            save << userList.at(i)->getType() << endl;
            save << userList.at(i)->getStrength() << endl;
            save << userList.at(i)->getAgility() << endl;
            save << userList.at(i)->getLvl() << endl;
            save << userList.at(i)->getPower() << endl;
            save << userList.at(i)->getNumberOfUsesPower() << endl;
           // save << userList.at(i)->getPowerName() << endl;
            save << userList.at(i)->getPowerDamage() << endl;
            save << userList.at(i)->getExp() << endl;
            save << userList.at(i)->getGivesExp() << endl;
            save << userList.at(i)->getHp() << endl;
            if(i != userList.size() - 1){
                save << ';' << endl;
            }
        }
        save.close();

}


void loadSave(){

    string myText;

    ifstream MyReadFile("Save.txt");

    while (getline (MyReadFile,myText)) {

         cout << myText << endl;

        round = stoi(myText);

         if (myText == ";") {
            getline(MyReadFile, myText);
            string name = myText;

            getline(MyReadFile,myText);
            int type = stoi(myText);

            getline(MyReadFile, myText);
            int strenght = stoi(myText);

            getline(MyReadFile,myText);
            int agility = stoi(myText);

            getline(MyReadFile,myText);
            int lvl = stoi(myText);

            getline(MyReadFile,myText);
            int power = stoi(myText);

            getline(MyReadFile,myText);
            int numberOfPowers = stoi(myText);

            getline(MyReadFile,myText);
            int powerDamage = stoi(myText);

            getline(MyReadFile,myText);
            int exp = stoi(myText);

            getline(MyReadFile,myText);
            int givesExp = stoi(myText);

            getline(MyReadFile,myText);
            int hp = stoi(myText);

            if ((name == "Beedrill")||(name == "Weedle")||(name == "Kakuna")){
                auto *pokemon = new Beedrill;
                loadPokemon(*pokemon,type,strenght,agility,lvl,power,numberOfPowers,powerDamage,exp,givesExp,hp);
                cout << pokemon->getPower();
                userList.push_back(pokemon);
            } else if ((name == "Blastoise")||(name == "Squirtle")||(name == "Wartortle")) {
                auto *pokemon = new Blastoise;
                loadPokemon(*pokemon,type,strenght,agility,lvl,power,numberOfPowers,powerDamage,exp,givesExp,hp);
                userList.push_back(pokemon);
            } else if ((name == "Butterfree") ||(name == "Caterpie")||(name == "Metapod")){
                auto *pokemon = new Butterfree;
                loadPokemon(*pokemon,type,strenght,agility,lvl,power,numberOfPowers,powerDamage,exp,givesExp,hp);
                userList.push_back(pokemon);
            } else if ((name == "Charizard")||(name == "Charmander")||(name == "Charmelon")) {
                auto *pokemon = new Charizard;
                loadPokemon(*pokemon,type,strenght,agility,lvl,power,numberOfPowers,powerDamage,exp,givesExp,hp);
                userList.push_back(pokemon);
            } else if ((name == "Emboar")||(name == "Tepig")||(name == "Pignite")) {
                auto *pokemon = new Emboar;
                loadPokemon(*pokemon,type,strenght,agility,lvl,power,numberOfPowers,powerDamage,exp,givesExp,hp);
                userList.push_back(pokemon);
            } else if ((name == "Empoleon")||(name == "Piplup")||(name == "Prinplup")) {
                auto *pokemon = new Empoleon;
                loadPokemon(*pokemon,type,strenght,agility,lvl,power,numberOfPowers,powerDamage,exp,givesExp,hp);
                userList.push_back(pokemon);
            } else if ((name == "Feraligatr")||(name == "Totodile")||(name == "Croconaw")) {
                auto *pokemon = new Feraligatr;
                loadPokemon(*pokemon,type,strenght,agility,lvl,power,numberOfPowers,powerDamage,exp,givesExp,hp);
                userList.push_back(pokemon);
            } else if ((name == "Gengar")||(name == "Gastly")||(name == "Haunter")) {
                auto *pokemon = new Gengar;
                loadPokemon(*pokemon,type,strenght,agility,lvl,power,numberOfPowers,powerDamage,exp,givesExp,hp);
                userList.push_back(pokemon);
            } else if ((name == "Golem")||(name == "Geodude")||(name == "Graveler")) {
                auto *pokemon = new Golem;
                loadPokemon(*pokemon,type,strenght,agility,lvl,power,numberOfPowers,powerDamage,exp,givesExp,hp);
                userList.push_back(pokemon);
            }else if ((name == "Lapras")||(name == "Magickarp")||(name == "Gyarados")) {
                auto *pokemon = new Lapras;
                loadPokemon(*pokemon,type,strenght,agility,lvl,power,numberOfPowers,powerDamage,exp,givesExp,hp);
                userList.push_back(pokemon);
            } else if ((name == "Machamp")||(name == "Machop")||(name == "Machoke")) {
                auto *pokemon = new Machamp;
                loadPokemon(*pokemon,type,strenght,agility,lvl,power,numberOfPowers,powerDamage,exp,givesExp,hp);
                userList.push_back(pokemon);
            } else if ((name == "Nidoqueen") ||(name == "Nidoran")||(name == "Nidorina")){
                auto *pokemon = new Nidoqueen;
                loadPokemon(*pokemon,type,strenght,agility,lvl,power,numberOfPowers,powerDamage,exp,givesExp,hp);
                userList.push_back(pokemon);
            } else if ((name == "Oddish")||(name == "Gloom")||(name == "Vileplume")) {
                auto *pokemon = new Oddish;
                loadPokemon(*pokemon,type,strenght,agility,lvl,power,numberOfPowers,powerDamage,exp,givesExp,hp);
                userList.push_back(pokemon);
            } else if ((name == "Poliwrath") ||(name == "Poliwag") ||(name == "Poliwhirl")) {
                auto *pokemon = new Poliwrath;
                loadPokemon(*pokemon,type,strenght,agility,lvl,power,numberOfPowers,powerDamage,exp,givesExp,hp);
                userList.push_back(pokemon);
            } else if ((name == "Serperior") || (name == "Snivy")|| (name == "Servine")){
                auto *pokemon = new Serperior;
                loadPokemon(*pokemon,type,strenght,agility,lvl,power,numberOfPowers,powerDamage,exp,givesExp,hp);
                userList.push_back(pokemon);
            } else if ((name == "Venusaur") ||(name == "Bulbosaur")||(name == "Ivysaur")){
                auto *pokemon = new Venusaur;
                loadPokemon(*pokemon,type,strenght,agility,lvl,power,numberOfPowers,powerDamage,exp,givesExp,hp);
                userList.push_back(pokemon);
            } else if ((name == "Vespiquen") ||(name == "Mothim")||(name == "Combee")){
                auto *pokemon = new Vespiquen;
                loadPokemon(*pokemon,type,strenght,agility,lvl,power,numberOfPowers,powerDamage,exp,givesExp,hp);
                userList.push_back(pokemon);
            } else if ((name == "Victreebel") ||(name == "Bellsprout")||(name == "Weepinbell")){
                auto *pokemon = new Victreebel;
                loadPokemon(*pokemon,type,strenght,agility,lvl,power,numberOfPowers,powerDamage,exp,givesExp,hp);
                userList.push_back(pokemon);
            } else if ((name == "Wailord")||(name == "Sharpedo")||(name == "Wailmer")) {
                auto *pokemon = new Wailord;
                loadPokemon(*pokemon,type,strenght,agility,lvl,power,numberOfPowers,powerDamage,exp,givesExp,hp);
                userList.push_back(pokemon);
            }else if ((name == "Walrein") ||(name == "Spheal")||(name == "Sealeo")){
                auto *pokemon = new Walrein;
                loadPokemon(*pokemon,type,strenght,agility,lvl,power,numberOfPowers,powerDamage,exp,givesExp,hp);
                userList.push_back(pokemon);
            }
            cout << name  << "Created. " << endl;
        }
    }
    for (int i = 0; i < userList.size(); ++i) {
        cout << userList.at(i)->getName() << "added" << endl;
    }
    MyReadFile.close();
}
void loadPokemon(Pokemon &pokemon,int type, int strenght, int agility, int lvl, int power, int numberOfUsesPower,int powerDamage, int exp, int givesExp,int hp){
    pokemon.setType(type);
    pokemon.setStrength(strenght);
    pokemon.setAgility(agility);
    pokemon.setLvl(lvl);
    pokemon.setPower(power);
    pokemon.setNumberOfUsesPower(numberOfUsesPower);
    pokemon.setPowerDamage(powerDamage);
    pokemon.setExp(exp);
    pokemon.setGivesExp(givesExp);
    pokemon.setHp(hp);
}

void levelSelect() {
    cout << "CHOOSE DIFFICULTY LEVEL" << endl << "1.EASY" << endl <<"2.NORMAL" << endl << "3.HARD"  << endl;

    cin >> dificultLevel;

    if(dificultLevel==1){
        opponentsLeft = 2;
        cout << "EASY-MODE" << endl;
    }
     else if(dificultLevel == 2){
        opponentsLeft = 3;
        cout << "NORMAL-MODE" << endl;

    }
    else if(dificultLevel == 3){
        opponentsLeft = 4;
        cout << "HARD-MODE" << endl;

    } else {
        cout << "WRONG NUMBER! TRY AGAIN." << endl;
        levelSelect();
    }
}

void evolve(Pokemon &pToEvolve) {


        int levelUp = 0;

        if (pToEvolve.getExp() < 3) {
            levelUp = 0;
            cout << "pockemon have: " << pToEvolve.getExp() << " EXP right now. YOU CAN'T LEVEL UP HIM YET! "
                 << endl;
        }

        if (pToEvolve.getExp() > 3) {
            levelUp = 1;
            pToEvolve.setExp(pToEvolve.getExp() - 3);
            cout << "WHAT U WANT TO UPGRADE?\n"
                    "1.Strenght\n"
                    "2.Hp\n"
                    "3.Agility"
                    << endl;
            int upgrade;
            cin >> upgrade;
            if(upgrade == 1){
                pToEvolve.setStrength(pToEvolve.getStrength() * pToEvolve.getLvl());
            }
            else if(upgrade == 2) {
                pToEvolve.setHp(pToEvolve.getHp() + 15);
            }
            else if(upgrade == 3 ) {
                pToEvolve.setAgility(pToEvolve.getAgility() + 1);
            } else {
                cout << "WRONG NUMBER! TRY AGAIN" << endl;
                evolve(pToEvolve);
            }
            cout << pToEvolve.getName();
            pToEvolve.setLvl(pToEvolve.getLvl() + 1);
            cout << " Evolved to -> " << pToEvolve.getName() << "(" << pToEvolve.getLvl() << ")" << endl;
        }



}
void areYouReady(Pokemon *&pokemonNow) {
    cout << "ARE U READY?" << endl << "1.YES 2.NO"<< endl;
    int user;
    cin >> user;

    switch (user) {
        case 1:
            cout << "****************************************************************************"
            << endl <<"EXCELLENT" << endl << "IN THE GAME YOU HAVE SEVERAL OPTIONS SUCH AS:\n"
                                           "1.ATTACK\n"
                                           "2.SWAP POKEMON\n"
                                           "3.EVOLUTION" << endl;
            cout << pokemonNow->getName();

        case 2:
            system("exit");
    }
}
void showListToSelect(){
    for (int i = 0; i < listOfAll.size(); ++i) {
        if ((i != 0) && (i % 3 == 0)) {
            cout << i + 1 << '.' <<listOfAll.at(i)->getName() << " " << endl;
        } else {
            cout << i + 1 << '.' <<listOfAll.at(i)->getName() << " ";
        }
    }
    cout << endl;
}

void pickUserPokemons(){
    int user;
    cout << "choose your pokemons" << endl;


    for (int i = 1; i <= 6; ++i) {
        int user;
        try {
            showListToSelect();
            cin >> user;
            if (user < listOfAll.size() + 1) {
                userList.push_back(listOfAll.at(user - 1));
                cout << userList.at(i - 1)->getName() << " - has been added" << endl;
                listOfAll.erase(listOfAll.begin() + (user - 1));
            } else {
                cout << "WRONG NUMBER. TRY AGAIN" << endl;
                i--;
            }
        } catch (...) {

        }
    }
}
void pickUserPokemonFightNow(Pokemon *&pokemon){
    int user;
    bool pick = false;

    while (!pick) {
        try {

            cin >> user;
            if (user < listOfAll.size() + 1) {
                Pokemon *&pokemonNow = userList.at(user - 1);

                cout << "GREAT. " << pokemonNow->getName() << " is excelent choise. " << endl;

              //  pokemonNow->showStats();
                pick = true;
            } else {
                cout << "WRONG NUMBER. TRY AGAIN" << endl;
                continue;
            }
        } catch (...) {

        }
    }
    pokemon = userList.at(user-1);
}
void showUserPokemons(){
    cout << "THATS UR TEAM! -  " << endl;

    for (int i = 0; i < userList.size(); ++i) {
        cout << i+1 << "." << userList.at(i)->getName() << " ";
    }
    cout << endl;
};
bool checkPokemonLifesUser(){

    //user
   if((userList.at(0)->hp == 0) && (userList.at(1)->hp == 0) && (userList.at(2)->hp == 0)) {
       return true;
   } else {
        return false;
   }

}
void checkStop(int opponentsLeft, bool end){
    if((userList.size() > 0)||(opponentsLeft <=0)){
        end = true;
    } else {
        end = false;
    }

}

void attack(Pokemon &pAttacking, Pokemon &pBits,Pokemon *&enemy,bool superPower,bool userAttack, Pokemon *&pokemonNow) {
    int damage;
    if (!superPower) {
        damage = pAttacking.getStrength() * calculateDamage(pAttacking,pBits);
    } else {
        if(pAttacking.getType() == 1){
            cout << pAttacking.getName() << " USED SUPER POWER. Get extra hp." << endl;
            pAttacking.setHp(pAttacking.getHp() + pAttacking.getPower());
            pAttacking.setNumberOfUsesPower(pAttacking.getNumberOfUsesPower() - 1);
            return;
        } else {
            damage = pAttacking.getPowerDamage();
            cout << pAttacking.getPowerName() << endl;
            pAttacking.setNumberOfUsesPower(pAttacking.getNumberOfUsesPower() - 1);
        }
    }
    srand(time(0));
    int dogeChance = (rand() % 10);
    dogeChance = dogeChance + 1;
  //  cout << pBits.getName() << " have:" << pBits.getAgility() << " agility. and drawed number is: "  << dogeChance << endl;

    if (pBits.getAgility() < dogeChance) {

        pBits.setHp(pBits.getHp() - damage);
        cout << pAttacking.getName() << " hits " << pBits.getName() << " for " << damage << "!!!" << endl;

        if (userAttack) {
            if (pBits.getHp() <= 0) {
                cout << "OPPONENT PASS OUT\nYOUR POCKEMON GETS " << pBits.getGivesExp() << " EXP POINTS!" << endl;
                pAttacking.setExp(pAttacking.getExp() + pBits.getGivesExp());
                opponentsLeft--;
                if (opponentsLeft > 0) {
                    drawOpponent(enemy, opponentsLeft);
                    cout << enemyName <<"chooses a new Pokemon to fight"<< endl << "YOU WILL FIGHT WITH -> " <<enemy->getName() << "!!" <<endl;
                    enemy->showStats();
                }
                if(opponentsLeft == 0){

                    if(round<4) {
                        cout
                                << "CONGRATULATIONS. YOU'VE PASSED " << round << " ROUND" <<endl<<
                                "*************************************************************" << endl;
                        round++;
                        opponentsLeft = 3;
                        cout << "1.SAVE\n2.CONTINUE" << endl;
                        int what;
                        cin >> what;
                        if(what==1){
                            save();
                            exit(0);
                        }
                        cout << "OK LETS CONTINUE!" << endl;
                        drawEnemy();
                        drawOpponent(enemy,opponentsLeft);
                        cout << "DRAWING NEW OPPONENT!" << endl << "YOUR NEW OPPONENT IS: " << enemyName << endl;
                        cout << enemyName <<"chooses a new Pokemon to fight"<< endl << "YOU WILL FIGHT WITH -> " <<enemy->getName() << "!!" <<endl;
                        enemy->showStats();
                    } else {

                        cout
                                << "CONGRATULATION YOU WON!!!! THANKS FOR GAME \n->s25611" <<endl;
                    };
                }

            } else {
                cout << "The opponent has -> " << pBits.getHp() << " hp left" << endl;
            }
        } else {
            if (userList.size() != 1) {
                if (pBits.getHp() <= 0) {
                    cout << "****************************************************************" << endl;
                    cout << "YOUR POKEMON PASSED OUT. PLEASE CHOOSE A NEW POKEMON " << endl;
                    for (int i = 0; i < userList.size(); ++i) {
                        if (pokemonNow->getPowerName() == userList.at(i)->getPowerName()) {
                            cout << userList.at(i)->getName() << " is going back to the pokeball to rest" << endl;
                            userList.erase(userList.begin() + i);
                        }
                    }
                    showUserPokemons();
                    pickUserPokemonFightNow(pokemonNow);
                }
            } else {
                cout << "YOU DON'T HAVE ANY MORE POKEMON" << endl;
                cout << "GAME OVER LOOSER." << endl;
                exit(0);
            }
        }
    } else {
        cout << "POKEMON MADE A DOGE!" << endl;
    }

}

void enemyMove(Pokemon *enemy,Pokemon *&pokemonNow) {
    cout << "**********************************************************************" << endl;
    cout << "ENEMY MOVE IS: ";
    int draw;
    srand(time(0));

    draw = (rand() % 3) + 1;


    if (draw == 1) {
        cout << "ATTACK" << endl;
        attack(*enemy, *pokemonNow, enemy, false, false, pokemonNow);
        cout << "YOUR " << pokemonNow->getName() << " HAVE ALREADY " << pokemonNow->getHp() << " HP LEFT" << endl;
    }
    else if ((draw == 2) && (enemy->getExp() > 3)) {
        if (enemy->getLvl() < 3) {
            evolve(*enemy);
        } else {
            cout << "ATTACK" << endl;
            attack(*enemy, *pokemonNow, enemy, false, false, pokemonNow);
            cout << "YOUR " << pokemonNow->getName() << " HAVE ALREADY " << pokemonNow->getHp() << " HP LEFT" << endl;
        }
    }

    else if (draw == 3) {
        if (enemy->getNumberOfUsesPower() > 0) {
            cout << "SUPER POWER" << endl;
            attack(*enemy, *pokemonNow, enemy, true, false, pokemonNow);
        } else {
            cout << "ATTACK" << endl;
            attack(*enemy, *pokemonNow, enemy, false, false, pokemonNow);
            cout << "YOUR " << pokemonNow->getName() << " HAVE ALREADY " << pokemonNow->getHp() << " HP LEFT" << endl;
        }
    } else {
        cout << "ATTACK" << endl;
        attack(*enemy, *pokemonNow, enemy, false, false, pokemonNow);
        cout << "YOUR " << pokemonNow->getName() << " HAVE ALREADY " << pokemonNow->getHp() << " HP LEFT" << endl;
    }
}


void drawEnemy(){
    srand(time(0));
    int drawName = (rand() % names.size()) + 1;
    drawName = drawName - 1;

    enemyName = names.at(drawName);

    names.erase(names.begin() + drawName);

}

void drawOpponent(Pokemon *&pokemon, int opponentsLeft) {
    if (listOfAll.size() !=0 ) {

        srand(time(0));
        int draw = (rand() % (listOfAll.size()-1)) + 1;

       // cout << "draw: " << draw << "  from: " << listOfAll.size() << endl;

       pokemon = listOfAll.at(draw-1);
        listOfAll.erase(listOfAll.begin() + (draw-1));
    }
    opponentsLeft--;

}
int calculateDamage(Pokemon &pAttacking, Pokemon &pBits){

    if(((pAttacking.getType()==1)&&(pBits.getType()==1))
    || ((pAttacking.getType()==1)&&(pBits.getType()==4))
    || ((pAttacking.getType()==1)&&(pBits.getType()==5))
    || ((pAttacking.getType()==2)&&(pBits.getType()==3))
    || ((pAttacking.getType()==2)&&(pBits.getType()==4))
    || ((pAttacking.getType()==3)&&(pBits.getType()==2))
    || ((pAttacking.getType()==4)&&(pBits.getType()==5))
    || ((pAttacking.getType()==5)&&(pBits.getType()==5))
    || ((pAttacking.getType()==6)&&(pBits.getType()==3))
    || ((pAttacking.getType()==6)&&(pBits.getType()==6))){
        return 2;
    } else if
           (((pAttacking.getType()==1)&&(pBits.getType()==6))
           || ((pAttacking.getType()==2)&&(pBits.getType()==1))
           || ((pAttacking.getType()==2)&&(pBits.getType()==5))
           || ((pAttacking.getType()==3)&&(pBits.getType()==6))
           || ((pAttacking.getType()==4)&&(pBits.getType()==1))
           || ((pAttacking.getType()==4)&&(pBits.getType()==2))
           || ((pAttacking.getType()==5)&&(pBits.getType()==2))
           || ((pAttacking.getType()==5)&&(pBits.getType()==3))
           || ((pAttacking.getType()==5)&&(pBits.getType()==4))
           || ((pAttacking.getType()==6)&&(pBits.getType()==2))
           || ((pAttacking.getType()==6)&&(pBits.getType()==4))){
            return 3;
        } else{
        return 1;
    }



}

//void evolve(Pokemon *pokemonNow){
//    if(pokemonNow->getLvl() < 3){
//        cout << pokemonNow->getName();
//        pokemonNow->setLvl(pokemonNow->getLvl() + 1);
//        cout << " Evolved to -> " << pokemonNow->getName() <<"(" << pokemonNow->getLvl() << ")" << endl;
//        continue;
//
//    } else {
//        cout << "The " << pokemonNow->getName() << " is the best evolution." << endl;
//    }
//}
