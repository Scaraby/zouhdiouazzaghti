#include <iostream>
#include "AttackCommand.h"
#include "state.h"
#include "rendu.h"

using namespace rendu;
using namespace engine;
using namespace state;
using namespace std;

void AttackCommand::run(){
    cout << attacker->getName() << " attaque " << victim->getName() << endl ;
        if (victim->getHitPoints() > 0){
            victim->setHitPoints(victim->getHitPoints()-1);
        }
        cout << "Points de vie :" << victim->getHitPoints() << endl;
}

AttackCommand::AttackCommand(state::Character* attacker, state::Character* victim){
    this->victim=victim;
    this->attacker=attacker;


}

AttackCommand::~AttackCommand(){} 
