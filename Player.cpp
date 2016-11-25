#include "Player.h"

#include <iostream>
#include <string>
using namespace std;



Player::Player(string Life,string Name, int pHealth, int pHunger, int pThirst,int EXP,int REP)
     {
         lifeStatus = Life;
         Life = "Alive";
             cout << Life << endl;
    
         pName = "Player";
         ptrpName = &pName;
         setPlayerName = *ptrpName;
         Name = setPlayerName;
             cout <<"NAME: " << Name << endl;
    
         ptrpHealth = &pBaseHealth;
         pHealth = *ptrpHealth;
             cout << "HEALTH: " << pHealth << endl;
    
         ptrpHunger = &pBaseHunger;
         pHunger = *ptrpHunger;
             cout << "HUNGER: " << pHunger << endl;
    
         ptrpThirst = &pBaseThirst;
         pThirst = *ptrpThirst;
             cout << "THIRST: " << pThirst  << endl;
             
         ptrpEXP = &pBaseEXPERIANCE;
         EXP = *ptrpEXP;
             cout << "EXP:    " << EXP << endl;
             
         ptrpREP = &pBaseREPUTATION;
         REP = *ptrpREP;
             cout << "REP:    " << REP << endl;
     }

Player::~Player()
     {
	     std::cout << "The Player Has Died" << endl;
     }

Player::setPlayerHealth(string hpMarker,int Health)
     {
         cout << hpMarker;
         return *ptrpHealth = Health;
     }
     
Player::setPlayerHunger(string hunMarker,int Hunger)
     {
         cout << hunMarker;
         return *ptrpHunger = Hunger;   
     }
Player::setPlayerThirst(string thirstMarker,int Thirst)
     {
         cout << thirstMarker;
         return *ptrpThirst = Thirst;
     }

Player::setPlayerEXP(string expMarker,int expPoints)
     {
         cout << expMarker;
         return *ptrpEXP = expPoints;
     }
Player::setPlayerREP(string repMarker,int repPoints)
     {
         cout << repMarker;
         return *ptrpREP = repPoints;
     }
Player::setPlayerStrength(string strMarker,int str)
    {
        cout << strMarker;
        return *ptrpStrength = str;
    }
Player::setPlayerDextarity(string dexMarker,int dex)
    {
        cout << dexMarker;
        return *ptrpDextarity = dex;
    }
Player::setPlayerSpeed(string speedMarker,int speed)
    {
        cout << speedMarker;
        return *ptrpSpeed = speed;
    }
Player::setPlayerConstitution(string conMarker,int constitution)
    {
        cout <<conMarker;
        return *ptrpConstitution = constitution;
    }
   void Player::gainEXP(int Eps)
        {
            
        }
   void Player::gainHealth(int Hlt)
        {
            
        }
    void Player::gainREP(int Rps)
        {
         pBaseREPUTATION = *ptrpREP = Rps;   
        }
     Player::showHealth()
          {
                return pBaseHealth;
          }
     
     void Player::showHunger()
          {
          cout << "Hunger:  " << pBaseHunger;
                
                if (pBaseHunger == 40)
                     {
                        cout << " ::OK::";
                     } 
                if (pBaseHunger < 40)
                     {
                        cout << " ::HUNGRY::";
                     }
                if (pBaseHunger > 60)
                     {
                        cout << " ::FULL::";
                     }   
                 if (pBaseHunger < 20)
                     {
                        cout << "  ::STARVING::";
                     }
          }
     void Player::showThirst()
          {
                cout << "Thirst:  " << pBaseThirst;
                
                if (pBaseThirst == 25)
                     {
                        cout << " ::OK::";
                     } 
                else if (pBaseThirst < 25)
                     {
                        cout << " ::THIRSTY::";
                     }
                else if (pBaseThirst > 30)
                     {
                        cout << " ::QUENCHED::";
                     }   
                      
          }
             
     void Player::showEXP()
          {
                cout << "EXP    " << pBaseEXPERIANCE << " | ";
          }
     void Player::showREP()
          {
                cout << "REP  " << pBaseREPUTATION;
                
                if (pBaseREPUTATION == 0)
                     {
                        cout << " ::NEUTRAL::";
                     } 
                if (pBaseREPUTATION < 0)
                     {
                        cout << " ::BAD::";
                     }
                if (pBaseREPUTATION > 0)
                     {
                        cout << " ::GOOD::";
                     }   
          }
          void Player::showName()
               {
                cout << "NAME: " << pName << endl;  
               }
          void Player::showInvStrength()
               {
                    cout << "STRENGTH: " << pBaseStrength << endl;   
               }
          void Player::showInvDextarity()
               {
                    cout << "DEXTARITY: " << pBaseDextarity << endl;   
               }
          void Player::showInvSpeed()
                {
                    cout << "SPEED: " << pBaseSpeed << endl;   
                }
          void Player::showInvConstitution()
                 {
                    cout << "CONSTITUTION: " << pBaseConstitution;   
                 }
                 
        
    
      Inventory::Inventory()
          {
            cout << "##INVENTORY## Initilized" << endl;  
          }
     
        
        Inventory::~Inventory()
            {
                cout << "#I deleted" << endl;
            }
       
