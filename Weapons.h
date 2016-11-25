#pragma once
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <random>
using namespace std;

namespace Knifes
{
      
extern Civilians::Bum *Homeless = new Civilians::Bum();
class MuelaMirage
{
    public:
   Knifes::MuelaMirage *muelaMirage = new Knifes::MuelaMirage();  
    MuelaMirage();
    ~MuelaMirage();
     double bladeDurability(double blade, double handle);
     double bladeDamage = 2.5;
     int bladePower(); // Players strength effects the power which also effects the attacks
     int BLADEATTACK();
     int bladeSpeed(); // Players speed effects the blades speed which also effects the attacks by adding extra attack points
     
     int playerSlash();
     void playerStab();
     
     void bladeSharpen();  // increases the attacks when sharpening is applied
     bool sharpening = false;
     
     
};


Knifes::MuelaMirage::MuelaMirage()
{
    cout << "Knife Created" << endl;  
}
Knifes::MuelaMirage::~MuelaMirage()
{
    
}
double Knifes::MuelaMirage::bladeDurability(double blade, double handle) 
     {
        cout << "Blade Durability: ";
        blade = 67.94; handle = 32.06;
        return blade + handle; cout << "%" << endl;
        if (blade <=00.00)
        {
            delete muelaMirage;
        }
        if (blade > 18.00 && handle <= 05.00)
        {
            cout << "Your Knifes Handle is Broken but you Still have some of the blade left" << endl;
        }
     }
int Knifes::MuelaMirage::bladePower()
     {
         int blade_Power;
         return blade_Power = sPlayer->pBaseStrength + bladeDamage;
     }
     int Knifes::MuelaMirage::BLADEATTACK()
     {
       return bladePower() + rand() % 12 + 1;
     }
void Knifes::MuelaMirage::playerStab()
     {
          std::random_device randev_Blade;
    std::mt19937 blade_Gen(randev_Blade());
    std::uniform_real_distribution<> blade_random_Dist(-00.03, -01.26);
    
    std::random_device randev_Handle;
    std::mt19937 handle_Gen(randev_Handle());
    std::uniform_real_distribution<> handle_random_Dist(-00.03, -00.94);
    
          bladeDurability(blade_random_Dist(blade_Gen),handle_random_Dist(handle_Gen));
          cout << "You Stab with your MuelaMirage" << endl;
          cout << "Doing: ";BLADEATTACK();cout << "Damage!" << endl;
          Homeless->Health - BLADEATTACK();
     }
      
}
