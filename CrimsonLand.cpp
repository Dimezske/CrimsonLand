// CrimsonLand.cpp : A modern console based RPG game by Aidan Flannery
//
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <sstream>
#include <conio.h>
#include <string.h> //Needed for strcat()
#include <ctype.h>

// Class Files
#include "Player.h"
#include "Shop.h"
#include "Inventory.h"
#include "Enemies.h"
#include "Weapons.h"


using namespace std;


//********BOTS****************************************************************************************




std::string NameStems[] = {
    "Sarge: ", "Jenny: ", "Harold: ", "Michael: ", "Rick: ",
    "Axle: ", "Bob: ", "Janine: ", "Ester: ", "Lacey: ",
    "Lexi: ", "George: ", "Nitro: ", "Amber: ", "Coco: ",
    "Ivy: ", "Lauren: ", "Daniel: ", "Josh: ", "Kaylene: "
};
std::string botNameGen()
{
    return NameStems[rand() % 20];
}


std::string botSargeName()
    {
        return "Sarge";
    }       
      
std::string botJennyName()
    {
        return "Jenny";
    } 
std::string botHaroldName()
    {
        return "Harold";
    }
std::string botMichealName()
    {
        return "Micheal";
    }
std::string botRickName()
    {
        return "Rick";
    }
std::string botAxleName()
    {
        return "Axle";
    }
std::string botBobName()
    {
        return "Bob";
    }
std::string botJanineName()
    {
        return "Janine";
    }
std::string botEsterName()
    {
        return "Ester";
    }
std::string botLaceyName()
    {
        return "Lacey";
    }
std::string botLexiName()
    {
        return "Lexi";
    }
std::string botGeorgeName()
    {
        return "George";
    }
std::string botNitroName()
    {
        return "Nitro";
    }
std::string botAmberName()
    {
        return "Amber";
    }
std::string botCocoName()
    {
        return "Coco";
    }
std::string botIvyName()
    {
        return "Ivy";
    }
std::string botLaurenName()
    {
        return "Lauren";
    }
std::string botDanielName()
    {
        return "Daniel";
    }
std::string botJoshName()
    {
        return "Josh";
    }
std::string botKayleneName()
    {
        return "Kaylene";
    }
//888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888

// ***TODO***
/*
 * 1).  Create inventory stats menu ***DONE***
 * 2).  Create Bitmining **1/2 DONE**
 * 3).  Create Shops **DOING
 * 4).  Create items in iventory
 * 5).  Create Food & drink
 * 6).  Create Guns
 * 7).  Create travel system - this will be goto town with a pathway system
 * 8).  Create People to interact with
 * 9).  Create time system
 * 10). Create Enemies - Random enemy generator with levels varying from EXP and REP
 * 11). Create workplaces
 * 12). Create mining - This will be explore + bitmining system with exp levels
 * 13). Create MySQL ATM Banking system with bankers and bank accounts
 * 14). Create Perks and stats - menu to buy with exp and reputation
 * 15). Create Storage Compartments to store items
 * 16). Create Houses
 * 17). Create Safes - buy from shops and store items
   D
 * 19). Create Police
 * 20). Create Equipments and items
 * */

/***TODO***
 * global variable itemcount, fix
 * not enough money to buy bread
  */

int main()
     {  

          
        bool LoadScreen = true;
        while (LoadScreen == true)
            {
          system("Color 0C");
          cout  << "*************************WELCOME TO CRIMSONLAND v0.2a***************************" << endl;
          cout << endl;
          cout << "Enter Name:" << endl;
          getline(cin,sPlayer->pName);
          
          cout << "NAME: " << sPlayer->pName << endl;
          cout << endl;
          cout << sPlayer->setPlayerHealth("HEALTH: ",120) << endl;
          cout << sPlayer->setPlayerHunger("HUNGER: ",80) << endl;
          cout << sPlayer->setPlayerThirst("THIRST: ",50) << endl;
          cout << sPlayer->setPlayerEXP("EXP   : ",0) << endl;
          cout << sPlayer->setPlayerREP("REP   : ",0) << endl;
          sMoney->showMoney();
          cout << endl;
          
          cout << "Randomly Roll Your Statistics." << endl;
          cout << "<g>  -  to Roll stats   <e>  -  to accept" << endl;
            bool CharaterRoll = true;
            while (CharaterRoll == true)
                {
                char cRollKeyButton = getch();

                switch(cRollKeyButton)
                {
                case 'g':
                cout << "***BASE-STATS***" << endl;
                    sPlayer->pBaseStrength = rand() % 5 + 1;
                    cout << endl;sPlayer->showInvStrength();
                    sPlayer->pBaseDextarity = rand() % 4 + 1;
                    sPlayer->showInvDextarity();
                    sPlayer->pBaseSpeed = rand() % 4 + 1;
                    sPlayer->showInvSpeed();
                    sPlayer->pBaseConstitution = rand() % 4 + 1;
                    sPlayer->showInvConstitution();
                    cout << endl;
                break;
                case 'e':
                    CharaterRoll = false;
                    break;
                }
                
                }
          sMoney->setMoney(0,0,0);
          system("Color 0A");
         cout << "==================================GreenWood=====================================" << endl;
         cout << "<t>  -  to View the ==Town== your in " << endl;
         cout << "<i>  -  to View Inventory  " << endl;
         cout << "<k>  -  to View BitCoin data" << endl;
         cout << "<m>  -  to Mine BITCOINS*  " << endl;
         cout << "<~>  -  to Enter commands or Talk " << endl;
         cout << endl;
         cout << "<bakery>  -  to ~Enter Greenwood Bakery" << endl;
         cout << "<fountain>  -  to goto the fountain area" << endl;
            break;
            }
bool buttons = true;
while (buttons== true)
 {
          char keyButtons = getch();

      switch(keyButtons)
           {
      case 'i':
                sInventory->showInventory();
                break;
            
      case 'm':
                sMoney->bitbytelvl1();
                break;
      case 'k':
                sMoney->showBitMining();
                break;
      case 't':
                
                cout << "==================================GreenWood=====================================" << endl;
                cout << "<t>  -  to View the ==Town== your in " << endl;
                cout << "<i>  -  to View Inventory  " << endl;
                cout << "<k>  -  to View BitCoin data" << endl;
                cout << "<m>  -  to Mine BITCOINS*  " << endl;
                cout << "<~>  -  to Enter commands or Talk " << endl;
                cout << endl;
                cout << "<bakery>  -  to ~Enter Greenwood Bakery" << endl;
                cout << "<fountain>  -  to goto the fountain area" << endl;
                break;
        case '`':
                
                if ('`')
                    {
                        string input;
                cout << sPlayer->pName << ": ";
                getline(cin,input);
              
              //                BAKERY SHOP
             //8888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888       
                  if (input == "bakery")
                        {
                         cout << "================================GreenWood-Bakery================================" << endl; 
                         cout << "|" << endl;
                         cout << "|  <buybread>  -   $1.95 - Bread" << endl;
                         cout << "|    <buybread+>  -  buy Multiple Bread" << endl;
                         cout << "|      <exit>  -   to Exit the Bakery" << endl;
                        
                         string input2;
                         bool bakeryWait = true;
                         while (bakeryWait == true)
                            {
                                
                         cin >> input2;
                            if (input2 == "buybread")
                                {
                                    
                                    Bakery->buyBread();
                                    Bakery->FIXAMOUNT();
                                    cout << endl;
                                        
                                    
                                }
                                if (input2 == "buybread+")
                                {
                                    
                                    Bakery->selectbuyBread();
                                    Bakery->FIXAMOUNT();
                                    cout << endl;
                                    
                                        cout << "================================GreenWood-Bakery================================" << endl; 
                                        cout << "|" << endl;
                                        cout << "|  <buybread>  -   $1.95 - Bread" << endl;
                                        cout << "|    <buybread+>  -  buy Multiple Bread" << endl;
                                        cout << "|      <exit>  -   to Exit the Bakery" << endl;
                                        
                                    
                                }
                                
                                if (input2 == "exit")
                                    {
                                        cout << " You exited Greenwood Bakery" << endl;
                                        cout << "Press <t> to view Town" << endl;
                                        
                                        break;
                                        break;
                                        break;
                                    }
                                
                            }
                         
                        }
                        
                    //888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
                    if (input == "fountain")
                        {
                            cout << "===============================GreenWood-Fountain===============================" << endl;
                            cout << endl;
                            cout << " ::Say hello to the BOT::" << endl;
                            cout << "                                                             <exit>  -  to Leave" << endl;
                            bool fountainWait = true;
                            while (fountainWait == true)
                                {
                                    cout << sPlayer->pName << ": ";
                                    getline(cin,input);
                                    srand((long)time(NULL)); //Seed the random number generator...
                                    std::string botPlayerName = botNameGen();
                                    
                                    if (input == "hello" || input == "Hello" || input == "Hi" || input == "hi" || input == "hey" || input == "Hey")
                                        {
                                            std::cout << botPlayerName;cout <<  "Hello There. " << endl;
                                            std::cout << botPlayerName;cout << "What is your name?" << endl;
                                        
                                                cout << sPlayer->pName << ": ";
                                                getline(cin,input);
                                    
                                        if (input == "my name is " + sPlayer->pName || input == "My name is " + sPlayer->pName || input == sPlayer->pName ||
                                        input == "Im " + sPlayer->pName || input == "im " + sPlayer->pName )
                                            {
                                                std::cout << botPlayerName;cout << "Hello " << sPlayer->pName << endl;
                                                    if (botPlayerName == NameStems[0] )
                                                        {
                                                            std::cout << botPlayerName << "My Name is ";cout << botSargeName();cout << endl;
                                                        }
                                                    if (botPlayerName == NameStems[1])
                                                        {
                                                            std::cout << botPlayerName << "My Name is ";cout << botJennyName();cout << endl;
                                                        }
                                                    if (botPlayerName == NameStems[2] )
                                                        {
                                                            std::cout << botPlayerName << "My Name is ";cout << botHaroldName();cout << endl;
                                                        }
                                                    if (botPlayerName == NameStems[3] )
                                                        {
                                                            std::cout << botPlayerName << "My Name is ";cout << botMichealName();cout << endl;
                                                        }
                                                    if (botPlayerName == NameStems[4] )
                                                        {
                                                            std::cout << botPlayerName << "My Name is ";cout << botRickName();cout << endl;
                                                        }
                                                    if (botPlayerName == NameStems[5] )
                                                        {
                                                            std::cout << botPlayerName << "My Name is ";cout << botAxleName();cout << endl;
                                                        }
                                                    if (botPlayerName == NameStems[6])
                                                        {
                                                            std::cout << botPlayerName << "My Name is ";cout << botBobName();cout << endl;
                                                        }
                                                    if (botPlayerName == NameStems[7] )
                                                        {
                                                            std::cout << botPlayerName << "My Name is ";cout << botJanineName();cout << endl;
                                                        }
                                                    if (botPlayerName == NameStems[8] )
                                                        {
                                                            std::cout << botPlayerName << "My Name is ";cout << botEsterName();cout << endl;
                                                        }
                                                    if (botPlayerName == NameStems[9] )
                                                        {
                                                            std::cout << botPlayerName << "My Name is ";cout << botLaceyName();cout << endl;
                                                        }
                                                    if (botPlayerName == NameStems[10] )
                                                        {
                                                            std::cout << botPlayerName << "My Name is ";cout << botLexiName();cout << endl;
                                                        }
                                                    if (botPlayerName == NameStems[11])
                                                        {
                                                            std::cout << botPlayerName << "My Name is ";cout << botGeorgeName();cout << endl;
                                                        }
                                                    if (botPlayerName == NameStems[12] )
                                                        {
                                                            std::cout << botPlayerName << "My Name is ";cout << botNitroName();cout << endl;
                                                        }
                                                    if (botPlayerName == NameStems[13] )
                                                        {
                                                            std::cout << botPlayerName << "My Name is ";cout << botAmberName();cout << endl;
                                                        }
                                                    if (botPlayerName == NameStems[14] )
                                                        {
                                                            std::cout << botPlayerName << "My Name is ";cout << botCocoName();cout << endl;
                                                        }
                                                    if (botPlayerName == NameStems[15] )
                                                        {
                                                            std::cout << botPlayerName << "My Name is ";cout << botIvyName();cout << endl;
                                                        }
                                                    if (botPlayerName == NameStems[16])
                                                        {
                                                            std::cout << botPlayerName << "My Name is ";cout << botLaurenName();cout << endl;
                                                        }
                                                    if (botPlayerName == NameStems[17] )
                                                        {
                                                            std::cout << botPlayerName << "My Name is ";cout << botDanielName();cout << endl;
                                                        }
                                                    if (botPlayerName == NameStems[18] )
                                                        {
                                                            std::cout << botPlayerName << "My Name is ";cout << botJoshName();cout << endl;
                                                        }
                                                    if (botPlayerName == NameStems[19] )
                                                        {
                                                            std::cout << botPlayerName << "My Name is ";cout << botKayleneName();cout << endl;
                                                        }
                                            }
                                        
                                  
                                        if (input == "goodbye")
                                            {
                                            break;
                                            cout << "===============================GreenWood-Fountain===============================" << endl;
                                            cout << endl;
                                            cout << " ::Say hello to the BOT::" << endl;
                                            cout << "                                                             <exit>  -  to Leave" << endl;
                                            }
                                        }
                                    if (input == "exit")
                                        {
                                            cout << " You have Exited the FOuntain Area" << endl;
                                            cout << "  <t>  -  to View Town" << endl;
                                            break;
                                        }
                                }
                        }
    //88888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
            
            if (input == "explore")
                 {
                        cout << "***Exploring GreenWood Avenue***" << endl;
                        Knifes::MuelaMirage *muelaMirage = new Knifes::MuelaMirage();
                        Civilians::Bum *Homeless = new Civilians::Bum();
                        Homeless->beerBottleSmash_face();
                        muelaMirage->playerStab();
                        Homeless->~Bum();
                 }
                        
                    
                    }   
                    
                
              break;
           }
        
        
        
 } 
   

  
  
  }
