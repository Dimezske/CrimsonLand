#pragma once
#include <iostream>

namespace Civilians
{
class Bum 
{

public:
    Bum();
    ~Bum();
    void Killed();
    int Health = 35;
    int Experiance = 4;
    int Reputation = 5;
    int Attack = 2;
    void give_Player_Exp();
    void give_Player_Rep();
    
    int leftJabDamage_array[4] = {0,1,2,3};
    int leftJab_DamageRandom();
    void leftJab();
    
    int rightJabDamage_array[5] = {0,1,2,3,4};
    int rightJab_DamageRandom();
    void rightJab();
    
    int leftHookDamage_array[5] = {0,1,2,4,5};
    int leftHook_DamageRandom();
    void leftHook();
    
    int rightHookDamage_array[6] = {0,1,2,4,5,6};
    int rightHook_DamageRandom();
    void rightHook();
    
    int leftKickDamage_array[8] = {0,1,2,3,4,5,6,7};
    int leftKick_DamageRandom();
    void leftKick();
    
    int rightKickDamage_array[9] = {0,1,2,3,4,5,6,7,8};
    int rightKick_DamageRandom();
    void rightKick();
    
    void beerBottleSmash_face();
    int bottleFaceDamage_array[10] = {0,1,2,3,4,6,9,11,12,14};
    int bottleFace_DamageRandom();

    void beerBottleSmash_arms();
    int bottleArmsDamage_array[6] = {0,1,2,3,4,6};
    int bottleArms_DamageRandom();
    
    void beerBottleSmash_back();
    int bottleBackDamage_array[6] = {0,1,2,3,5,7};
    int bottleBack_DamageRandom();
    
    void beerBottleSmash_legs();
    int bottleLegsDamage_array[6] = {0,1,2,4,6,8};
    int bottleLegs_DamageRandom();
    
    void beerBottleStab_stomach();
    int bottleStomachDamage_array[11] = {0,1,2,4,7,8,9,10,11,14,16};
    int bottleStomach_DamageRandom();
    
    void beerBottleStab_throut();
    int bottleThroutDamage_array[11] = {0,1,3,4,7,10,11,14,18,22,24};
    int bottleThrout_DamageRandom();
    
    
};
Civilians::Bum::Bum()
    {
        cout << endl;
        cout << "::Homeless Bum::" << endl;
        cout << "HP: " << Health << endl;
    }
void Civilians::Bum::Killed()
{
    
            cout << "You Killed The Bum!"<< endl;
            cout << "Experianced Gained" << " +4 Exp" << endl;
            give_Player_Exp(); 
    
}
Civilians::Bum::~Bum()
    {
            Killed();
    }

void Civilians::Bum::give_Player_Exp()
    {
        sPlayer->pBaseEXPERIANCE += Experiance;
    }
void Civilians::Bum::give_Player_Rep()
    {
     sPlayer->pBaseREPUTATION += Reputation;
    }
int Civilians::Bum::leftJab_DamageRandom()
    {
        return leftJabDamage_array[rand() % 4];
    }
void Civilians::Bum::leftJab()
    {
        cout << "::Homeless Bum::" << endl;
        cout << "#Bum: Jabs You with their left Arm!" << endl;
        
        srand((long)time(NULL));
    
    int leftJab_DamageNum = leftJab_DamageRandom();
    
    if (leftJab_DamageNum == leftJabDamage_array[0])
    {
        cout << "And Missed!";
    }
    if (leftJab_DamageNum == leftJabDamage_array[1])
    {
        cout << "Doing: -1 Damage" << endl;
    }
    if (leftJab_DamageNum == leftJabDamage_array[2])
    {
        cout << "Doing: -2 Damage" << endl;
    }
    if (leftJab_DamageNum == leftJabDamage_array[3])
    {
        cout << "Doing: -3 Damage" << endl;
    }
        sPlayer->ptrpHealth -= leftJab_DamageNum;
    }
int Civilians::Bum::rightJab_DamageRandom()
    {
        return rightJabDamage_array[rand() % 4];
    }    
void Civilians::Bum::rightJab()
    {
        cout << "::Homeless Bum::" << endl;
        cout << "#Bum: Jabs You with their Right Arm!" << endl;
           srand((long)time(NULL));
    
    int rightJab_DamageNum = rightJab_DamageRandom();
    
    if (rightJab_DamageNum == rightJabDamage_array[0])
    {
        cout << "And Missed!";
    }
    if (rightJab_DamageNum == rightJabDamage_array[1])
    {
        cout << "Doing: -1 Damage" << endl;
    }
    if (rightJab_DamageNum == rightJabDamage_array[2])
    {
        cout << "Doing: -2 Damage" << endl;
    }
    if (rightJab_DamageNum == rightJabDamage_array[4])
    {
        cout << "Doing: -4 Damage" << endl;
    }
        sPlayer->ptrpHealth -= rightJab_DamageNum;
    }
int Civilians::Bum::leftHook_DamageRandom()
    {
        return leftHookDamage_array[rand() % 5];
    } 
void Civilians::Bum::leftHook()
    {
        cout << "::Homeless Bum::" << endl;
        cout << "#Bum: Hooks You with their Left Arm!" << endl;
                srand((long)time(NULL));
    // {0,1,2,4,5};
    int leftHook_DamageNum = leftHook_DamageRandom();
    
    if (leftHook_DamageNum == leftHookDamage_array[0])
    {
        cout << "And Missed!";
    }
    if (leftHook_DamageNum == leftHookDamage_array[1])
    {
        cout << "Doing: -1 Damage" << endl;
    }
    if (leftHook_DamageNum == leftHookDamage_array[2])
    {
        cout << "Doing: -2 Damage" << endl;
    }
    if (leftHook_DamageNum == leftHookDamage_array[3])
    {
        cout << "Doing: -4 Damage" << endl;
    }
    if (leftHook_DamageNum == leftHookDamage_array[4])
    {
        cout << "Doing: -5 Damage" << endl;
    }
        sPlayer->ptrpHealth -= leftHook_DamageNum;
    }
    int Civilians::Bum::rightHook_DamageRandom()
    {
        return rightHookDamage_array[rand() % 6];
    } 
void Civilians::Bum::rightHook()
    {
        cout << "::Homeless Bum::" << endl;
        cout << "#Bum: Hooks You with their Right Arm!" << endl;
                srand((long)time(NULL));
    //{0,1,2,4,5,6};
    int rightHook_DamageNum = rightHook_DamageRandom();
    
    if (rightHook_DamageNum == rightHookDamage_array[0])
    {
        cout << "And Missed!";
    }
    if (rightHook_DamageNum == rightHookDamage_array[1])
    {
        cout << "Doing: -1 Damage" << endl;
    }
    if (rightHook_DamageNum == rightHookDamage_array[2])
    {
        cout << "Doing: -2 Damage" << endl;
    }
    if (rightHook_DamageNum == rightHookDamage_array[3])
    {
        cout << "Doing: -4 Damage" << endl;
    }
    if (rightHook_DamageNum == rightHookDamage_array[4])
    {
        cout << "Doing: -5 Damage" << endl;
    }
    if (rightHook_DamageNum == rightHookDamage_array[5])
    {
        cout << "Doing: -6 Damage" << endl;
    }
        sPlayer->ptrpHealth -= rightHook_DamageNum;
    }
int Civilians::Bum::leftKick_DamageRandom()
    {
        return leftKickDamage_array[rand() % 8];
    } 
void Civilians::Bum::leftKick()
    {
        cout << "::Homeless Bum::" << endl;
        cout << "#Bum: Kicks You with their Left Leg!" << endl;
        srand((long)time(NULL));
    //{0,1,2,3,4,5,6,7};
    int leftKick_DamageNum = leftKick_DamageRandom();
    
    if (leftKick_DamageNum == leftKickDamage_array[0])
    {
        cout << "And Missed!";
    }
    if (leftKick_DamageNum == leftKickDamage_array[1])
    {
        cout << "Doing: -1 Damage" << endl;
    }
    if (leftKick_DamageNum == leftKickDamage_array[2])
    {
        cout << "Doing: -2 Damage" << endl;
    }
    if (leftKick_DamageNum == leftKickDamage_array[3])
    {
        cout << "Doing: -3 Damage" << endl;
    }
    if (leftKick_DamageNum == leftKickDamage_array[4])
    {
        cout << "Doing: -4 Damage" << endl;
    }
    if (leftKick_DamageNum == leftKickDamage_array[5])
    {
        cout << "Doing: -5 Damage" << endl;
    }
    if (leftKick_DamageNum == leftKickDamage_array[6])
    {
        cout << "Doing: -6 Damage" << endl;
    }
    if (leftKick_DamageNum == leftKickDamage_array[7])
    {
        cout << "Doing: -7 Damage" << endl;
    }
        sPlayer->ptrpHealth -= leftKick_DamageNum;
    }
int Civilians::Bum::rightKick_DamageRandom()
    {
        return rightKickDamage_array[rand() % 9];
    } 
void Civilians::Bum::rightKick()
    {
        cout << "::Homeless Bum::" << endl;
        cout << "#Bum: Kicks You with their Right Leg!" << endl;
        srand((long)time(NULL));
    //{0,1,2,3,4,5,6,7,8};
    int rightKick_DamageNum = rightKick_DamageRandom();
    
    if (rightKick_DamageNum == rightKickDamage_array[0])
    {
        cout << "And Missed!";
    }
    if (rightKick_DamageNum == rightKickDamage_array[1])
    {
        cout << "Doing: -1 Damage" << endl;
    }
    if (rightKick_DamageNum == rightKickDamage_array[2])
    {
        cout << "Doing: -2 Damage" << endl;
    }
    if (rightKick_DamageNum == rightKickDamage_array[3])
    {
        cout << "Doing: -3 Damage" << endl;
    }
    if (rightKick_DamageNum == rightKickDamage_array[4])
    {
        cout << "Doing: -4 Damage" << endl;
    }
    if (rightKick_DamageNum == rightKickDamage_array[5])
    {
        cout << "Doing: -5 Damage" << endl;
    }
    if (rightKick_DamageNum == rightKickDamage_array[6])
    {
        cout << "Doing: -6 Damage" << endl;
    }
    if (rightKick_DamageNum == rightKickDamage_array[7])
    {
        cout << "Doing: -7 Damage" << endl;
    }
    if (rightKick_DamageNum == rightKickDamage_array[8])
    {
        cout << "Doing: -8 Damage" << endl;
    }
        sPlayer->ptrpHealth -= rightKick_DamageNum;
    }
int Civilians::Bum::bottleFace_DamageRandom()
    {
        return bottleFaceDamage_array[rand() % 10];
    } 
void Civilians::Bum::beerBottleSmash_face()
    {
        cout << "#Bum: Smashes a Beer Bottle on your Face!" << endl;
        srand((long)time(NULL));
    //{0,1,2,3,4,6,9,11,12,14};
    int bottleFace_DamageNum = bottleFace_DamageRandom();
    
    if (bottleFace_DamageNum == bottleFaceDamage_array[0])
    {
        cout << "And Missed!";
    }
    if (bottleFace_DamageNum == bottleFaceDamage_array[1])
    {
        cout << "Doing: -1 Damage" << endl;
    }
    if (bottleFace_DamageNum == bottleFaceDamage_array[2])
    {
        cout << "Doing: -2 Damage" << endl;
    }
    if (bottleFace_DamageNum == bottleFaceDamage_array[3])
    {
        cout << "Doing: -3 Damage" << endl;
    }
    if (bottleFace_DamageNum == bottleFaceDamage_array[4])
    {
        cout << "Doing: -4 Damage" << endl;
    }
    if (bottleFace_DamageNum == bottleFaceDamage_array[5])
    {
        cout << "Doing: -6 Damage" << endl;
    }
    if (bottleFace_DamageNum == bottleFaceDamage_array[6])
    {
        cout << "Doing: -9 Damage" << endl;
    }
    if (bottleFace_DamageNum == bottleFaceDamage_array[7])
    {
        cout << "Doing: -11 Damage" << endl;
    }
    if (bottleFace_DamageNum == bottleFaceDamage_array[8])
    {
        cout << "Doing: -12 Damage" << endl;
    }
    if (bottleFace_DamageNum == bottleFaceDamage_array[9])
    {
        cout << "Doing: -14 Damage" << endl;
    }
        sPlayer->pBaseHealth -= bottleFace_DamageNum;
    }   
    }
void Civilians::Bum::beerBottleSmash_arms()
    {
        cout << "::Homeless Bum::" << endl;
        cout << "#Bum: Smashes a Beer Bottle on your Arms!" << endl;
        sPlayer->ptrpHealth -= Attack -= 1;
        cout << "Doing: -5 Damage" << endl;   
    }
void Civilians::Bum::beerBottleSmash_back()
    {
        cout << "::Homeless Bum::" << endl;
        cout << "#Bum: Smashes a Beer Bottle on your Back!" << endl;
        sPlayer->ptrpHealth -= Attack -= 1;
        cout << "Doing: -4 Damage" << endl;   
    }
void Civilians::Bum::beerBottleSmash_legs()
    {
        cout << "::Homeless Bum::" << endl;
        cout << "#Bum: Smashes a Beer Bottle on your Legs!" << endl;
        sPlayer->ptrpHealth -= Attack -= 5;
        cout << "Doing: -7 Damage" << endl;
    }
void Civilians::Bum::beerBottleStab_stomach()
    {
        cout << "::Homeless Bum::" << endl;
        cout << "#Bum: Stabs a Beer Bottle in your Stomach!" << endl;
        sPlayer->ptrpHealth -= Attack -= 1;
        cout << "Doing: -14 Damage" << endl;   
    }
void Civilians::Bum::beerBottleStab_throut()
    {
        cout << "::Homeless Bum::" << endl;
        cout << "#Bum: Stabs you with a Beer Bottle in your Throut!" << endl;
        sPlayer->ptrpHealth -= Attack -= 1;
        cout << "Doing: -22 Damage" << endl;   
    }


namespace Bandits
{
    
}
namespace Criminals
{
    
}
namespace GangMembers
{
    
}
namespace Soldiers
{
    
}
