#ifndef INVENTORY_H_INCLUDED
#define INVENTORY_H_INCLUDED

#include "Player.h"
#include "Shop.h"
using namespace std;
int breaditemAmount;
string input2;
Player *sPlayer = new Player("Alive","Player",100,50,40,0,0);
Money *sMoney = new Money(0,0,0);
Inventory *sInventory = new Inventory;
Shop *Bakery = new Shop;


Money::Money(int Dollars,int Centsa,int Centsb)
            {
            cout << "$$MoneySystem$$::::initilized::::" << endl;
            cout << "Money: ";
            ptrpCashDollars = &pBaseCashDollars;
            Dollars = *ptrpCashDollars ;
            cout << Dollars;
            ptrpCashCentsA = &pBaseCashCentsA;
            Centsa = *ptrpCashCentsA;
            cout <<"." << Centsa;
            ptrpCashCentsB = &pBaseCashCentsB;
            Centsb = *ptrpCashCentsB;
            cout << Centsb;
            cout << endl;
            
            }
        
        Money::~Money()
             {
              cout << "$$$$Money Gone$$$$$" << endl;
              *ptrpCashDollars = 0; *ptrpCashCentsA = 0; *ptrpCashCentsB = 0;
             }
             
        void Money::setMoney(int D,int A, int B)
             {
            
                  *ptrpCashDollars = pBaseCashDollars = D;
                  *ptrpCashCentsA  = pBaseCashCentsA = A;
                  *ptrpCashCentsB  = pBaseCashCentsB = B;
                    
                        // 0.*0
                    if (*ptrpCashCentsA < 0)
                         {
                              pBaseCashCentsA = 0;
                         }
                    else if (*ptrpCashCentsA > 9)
                         {
                             
                                   pBaseCashCentsA = 0;
                                   pBaseCashDollars++;
                         }
                    else 
                         {
                             pBaseCashCentsA = *ptrpCashCentsA;
                         }
                          
                            
                         // 0.0*
                    if (*ptrpCashCentsB < 0)
                         {
                             pBaseCashCentsB = 0;
                         }
                    else if (*ptrpCashCentsB > 9)
                         {
                            pBaseCashCentsB = 0;
                            pBaseCashCentsA++;
                         }
                    else 
                         {
                           pBaseCashCentsB = *ptrpCashCentsB;
                         }
             }    
    
        
        void Money::showMoney()
             {
             cout << "$ " << pBaseCashDollars << "." << pBaseCashCentsA << pBaseCashCentsB;
             }
             
             void Money::showMoneyInventory()
             {
             cout << "Money  $  " << pBaseCashDollars << "." << pBaseCashCentsA << pBaseCashCentsB << " | ";
             }
        void Money::bitRank()
            {
                
                  *ptrpCashDollars = pBaseCashDollars;
                  *ptrpCashCentsA  = pBaseCashCentsA;
                  *ptrpCashCentsB  = pBaseCashCentsB;
                  
                ptrbitLVLA = &bitLVLA;
                ptrbitLVLB = &bitLVLB;
             /*  BitCoin* -  Ranks*/
              
              
              ptrpbitRank = &pbitRank;
              // 1.0 LVL - BitCoin* Surfer
              if(*ptrbitLVLA == 1 && *ptrbitLVLB == 0)
                   {
                        cout << "Reached Rank - BitCoin* Surfer" << endl;
                        pBaseCashDollars+=1; pBaseCashCentsA +=5;
                        cout << "+$1.50  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Surfer";
                   }
              //  1.3 LVL - BitCoin* Surfer+
              if(*ptrbitLVLA == 1 && *ptrbitLVLB == 3)
                   {
                        cout << "Reached Rank - BitCoin* Surfer+" << endl;
                        pBaseCashDollars+=2;
                        cout << "+$2.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Surfer+";
                   }
              //  1.6 LVl - BitCoin* Surfer++
              if(*ptrbitLVLA == 1 && *ptrbitLVLB == 6)
                   {
                        cout << "Reached Rank - BitCoin* Surfer++" << endl;
                        pBaseCashDollars+=2; pBaseCashCentsA+=5;
                        cout << "+$2.50  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Surfer++";
                   }
              //  1.8 LVL - BitCoin* Surfer+++
              if(*ptrbitLVLA == 1 && *ptrbitLVLB == 8)
                   {
                        cout << "Reached Rank - BitCoin* Surfer+++" << endl;
                        pBaseCashDollars+=3;
                        cout << "+$3.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Surfer+++";
                   }
              //  2.0 LVL - BitCoin* Rookie Surfer
              if(*ptrbitLVLA == 2 && *ptrbitLVLB == 0)
                   {
                        cout << "Reached Rank - BitCoin* Rookie Surfer" << endl;
                        pBaseCashDollars+=3; pBaseCashCentsA+=5;
                        cout << "+$3.50  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Rookie Surfer";
                   }
              //  2.3 LVL - BitCoin* Rookie Surfer+
              if(*ptrbitLVLA == 2 && *ptrbitLVLB == 3)
                   {
                        cout << "Reached Rank - BitCoin* Rookie Surfer+" << endl;
                        pBaseCashDollars+=4; 
                        cout << "+$4.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Rookie Surfer+";
                   }
              //  2.6 LVL - BitCoin* Rookie Surfer++
              if(*ptrbitLVLA == 2 && *ptrbitLVLB == 6)
                   {
                        cout << "Reached Rank - BitCoin* Rookie Surfer++" << endl;
                        pBaseCashDollars+=4; pBaseCashCentsA+=5;
                        cout << "+$4.50  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Rookie Surfer++";
                   }
              //  2.8 LVL - BitCoin* Rookie Surfer+++
              if(*ptrbitLVLA == 2 && *ptrbitLVLB == 8)
                   {
                        cout << "Reached Rank - BitCoin* Rookie Surfer+++" << endl;
                        pBaseCashDollars+=5; 
                        cout << "+$5.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Rookie Surfer+++";
                   }
              //  3.0 LVL - BitCoin* indemediate Surfer
              if(*ptrbitLVLA == 3 && *ptrbitLVLB == 0)
                   {
                        cout << "Reached Rank - BitCoin* indemediate Surfer" << endl;
                        pBaseCashDollars+=5; pBaseCashCentsA+=5;
                        cout << "+$5.50  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Indemediate Surfer";
                   }
              //  3.3 LVL - BitCoin* indemediate Surfer+
              if(*ptrbitLVLA == 3 && *ptrbitLVLB == 3)
                   {
                        cout << "Reached Rank - BitCoin* indemediate Surfer+" << endl;
                        pBaseCashDollars+=6;
                        cout << "+$6.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Indemediate Surfer+";
                   }
              //  3.6 LVL - BitCoin* indemediate Surfer++
              if(*ptrbitLVLA == 3 && *ptrbitLVLB == 6)
                   {
                        cout << "Reached Rank - BitCoin* indemediate Surfer++" << endl;
                        pBaseCashDollars+=6; pBaseCashCentsA+=5;
                        cout << "+$6.50  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Indemediate Surfer++";
                   }
              //  3.8 LVL - BitCoin* indemediate Surfer+++
              if(*ptrbitLVLA == 3 && *ptrbitLVLB == 8)
                   {
                        cout << "Reached Rank - BitCoin* indemediate Surfer+++" << endl;
                        pBaseCashDollars+=7;
                        cout << "+$7.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Indemediate Surfer+++";
                   } 
              //  4.0 LVL - BitCoin* Adept Surfer
              if(*ptrbitLVLA == 4 && *ptrbitLVLB == 0)
                   {
                        cout << "Reached Rank - BitCoin* Adept Surfer" << endl;
                        pBaseCashDollars+=7; pBaseCashCentsA+=5;
                        cout << "+$7.50  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Adept Surfer";
                   }
              //  4.3 LVL - BitCoin* Adept Surfer+
              if(*ptrbitLVLA == 4 && *ptrbitLVLB == 3)
                   {
                        cout << "Reached Rank - BitCoin* Adept Surfer+" << endl;
                        pBaseCashDollars+=8;
                        cout << "+$8.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Adept Surfer+";
                   }
              //  4.6 LVL - BitCoin* Adept Surfer++
              if(*ptrbitLVLA == 4 && *ptrbitLVLB == 6)
                   {
                        cout << "Reached Rank - BitCoin* Adept Surfer++" << endl;
                        pBaseCashDollars+=8; pBaseCashCentsA+=5;
                        cout << "+$8.50  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Adept Surfer++";
                   }
              //  4.8 LVL - BitCoin* Adept Surfer+++
              if(*ptrbitLVLA == 4 && *ptrbitLVLB == 8)
                   {
                        cout << "Reached Rank - BitCoin* Adept Surfer+++" << endl;
                        pBaseCashDollars+=9;
                        cout << "+$9.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Adept Surfer+++";
                   }
              //  5.0 LVL - BitCoin* Expert Surfer
              if(*ptrbitLVLA == 5 && *ptrbitLVLB == 0)
                   {
                        cout << "Reached Rank - BitCoin* Expert Surfer" << endl;
                        pBaseCashDollars+=9; pBaseCashCentsA+=5;
                        cout << "+$9.50  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Expert Surfer";
                   }
              //  5.3 LVL - BitCoin* Expert Surfer+
              if(*ptrbitLVLA == 5 && *ptrbitLVLB == 3)
                   {
                        cout << "Reached Rank - BitCoin* Expert Surfer+" << endl;
                        pBaseCashDollars+=10; 
                        cout << "+$10.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Expert Surfer+";
                   }
              //  5.6 LVL - BitCoin* Expert Surfer++
              if(*ptrbitLVLA == 5 && *ptrbitLVLB == 6)
                   {
                        cout << "Reached Rank - BitCoin* Expert Surfer++" << endl;
                        pBaseCashDollars+=10; pBaseCashCentsA+=5;
                        cout << "+$10.50  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Expert Surfer++";
                   }
              //  5.8 LVL - BitCoin* Expert Surfer+++
              if(*ptrbitLVLA == 5 && *ptrbitLVLB == 8)
                   {
                        cout << "Reached Rank - BitCoin* Expert Surfer+++" << endl;
                        pBaseCashDollars+=11;
                        cout << "+$11.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Expert Surfer+++";
                   } 
              //  6.0 LVL - BitCoin* Husler Surfer
              if(*ptrbitLVLA == 6 && *ptrbitLVLB == 0)
                   {
                        cout << "Reached Rank - BitCoin* Husler Surfer" << endl;
                        pBaseCashDollars+=11; pBaseCashCentsA+=5;
                        cout << "+$11.50  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Husler Surfer";
                   } 
              //  6.3 LVL - BitCoin* Husler Surfer+
              if(*ptrbitLVLA == 6 && *ptrbitLVLB == 3)
                   {
                        cout << "Reached Rank - BitCoin* Husler Surfer+" << endl;
                        pBaseCashDollars+=12;
                        cout << "+$12.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Husler Surfer+";
                   } 
              //  6.6 LVL - BitCoin* Husler Surfer++
              if(*ptrbitLVLA == 6 && *ptrbitLVLB == 6)
                   {
                        cout << "Reached Rank - BitCoin* Husler Surfer++" << endl;
                        pBaseCashDollars+=12; pBaseCashCentsA+=5;
                        cout << "+$12.50  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Husler Surfer++";
                   } 
              //  6.8 LVL - BitCoin* Husler Surfer+++
              if(*ptrbitLVLA == 6 && *ptrbitLVLB == 8)
                   {
                        cout << "Reached Rank - BitCoin* Husler Surfer+++" << endl;
                        pBaseCashDollars+=13;
                        cout << "+$13.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Husler Surfer+++";
                   } 
              //  7.0 LVL - BitCoin* Master Surfer
              if(*ptrbitLVLA == 7 && *ptrbitLVLB == 0)
                   {
                        cout << "Reached Rank - BitCoin* Master Surfer" << endl;
                        pBaseCashDollars+=13; pBaseCashCentsA+=5;
                        cout << "+$13.50  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Master Surfer";
                   }
              //  7.3 LVL - BitCoin* Master Surfer+
              if(*ptrbitLVLA == 7 && *ptrbitLVLB == 3)
                   {
                        cout << "Reached Rank - BitCoin* Master Surfer+" << endl;
                        pBaseCashDollars+=14; 
                        cout << "+$14.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Master Surfer+";
                   }
              //  7.6 LVL - BitCoin* Master Surfer++
              if(*ptrbitLVLA == 7 && *ptrbitLVLB == 6)
                   {
                        cout << "Reached Rank - BitCoin* Master Surfer++" << endl;
                        pBaseCashDollars+=14; pBaseCashCentsA+=5;
                        cout << "+$14.50  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Master Surfer++";
                   }
              //  7.8 LVL - BitCoin* Master Surfer+++
              if(*ptrbitLVLA == 7 && *ptrbitLVLB == 8)
                   {
                        cout << "Reached Rank - BitCoin* Master Surfer+++" << endl;
                        pBaseCashDollars+=15; 
                        cout << "+$15.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Master Surfer+++";
                   } 
              //  8.0 LVL - BitCoin* Legend Surfer
              if(*ptrbitLVLA == 8 && *ptrbitLVLB == 0)
                   {
                        cout << "Reached Rank - BitCoin* Legend Surfer" << endl;
                        pBaseCashDollars+=15; pBaseCashCentsA+=5;
                        cout << "+$15.50  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Legend Surfer";
                   }
              //  8.3 LVL - BitCoin* Legend Surfer+
              if(*ptrbitLVLA == 8 && *ptrbitLVLB == 3)
                   {
                        cout << "Reached Rank - BitCoin* Legend Surfer+" << endl;
                        pBaseCashDollars+=16;
                        cout << "+$16.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Legend Surfer+";
                   }
              //  8.6 LVL - BitCoin* Legend Surfer++
              if(*ptrbitLVLA == 8 && *ptrbitLVLB == 6)
                   {
                        cout << "Reached Rank - BitCoin* Legend Surfer++" << endl;
                        pBaseCashDollars+=16; pBaseCashCentsA+=5;
                        cout << "+$16.50  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Legend Surfer++";
                   }
              //  8.8 LVL - BitCoin* Legend Surfer+++
               if(*ptrbitLVLA == 8 && *ptrbitLVLB == 8)
                   {
                        cout << "Reached Rank - BitCoin* Legend Surfer+++" << endl;
                        pBaseCashDollars+=17;
                        cout << "+$17.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Legend Surfer+++";
                   } 
              //  9.0 LVL - BitCoin* God Surfer
              if(*ptrbitLVLA == 9 && *ptrbitLVLB == 0)
                   {
                        cout << "Reached Rank - BitCoin* God Surfer" << endl;
                        pBaseCashDollars+=17;pBaseCashCentsA+=5;
                        cout << "+$17.50  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* God Surfer";
                   } 
              //  9.3 LVL - BitCoin* God Surfer+
              if(*ptrbitLVLA == 9 && *ptrbitLVLB == 3)
                   {
                        cout << "Reached Rank - BitCoin* God Surfer+" << endl;
                        pBaseCashDollars+=18;
                        cout << "+$18.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* God Surfer+";
                   } 
              //  9.6 LVL - BitCoin* God Surfer++
              if(*ptrbitLVLA == 9 && *ptrbitLVLB == 6)
                   {
                        cout << "Reached Rank - BitCoin* God Surfer++" << endl;
                        pBaseCashDollars+=18;pBaseCashCentsA+=5;
                        cout << "+$18.50  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* God Surfer++";
                   } 
              //  9.8 LVL - BitCoin* God Surfer+++
              if(*ptrbitLVLA == 9 && *ptrbitLVLB == 8)
                   {
                        cout << "Reached Rank - BitCoin* God Surfer+++" << endl;
                        pBaseCashDollars+=19;
                        cout << "+$19.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* God Surfer+++";
                   } 
              //  10.0 LVL - BitCoin* Explorer
              if(*ptrbitLVLA == 10 && *ptrbitLVLB == 0)
                   {
                        cout << "Reached Rank - BitCoin* Explorer" << endl;
                        pBaseCashDollars+=1000;
                        cout << "BitCoin* Prestige Level +" << endl;
                        cout << "+$1000.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Explorer";
                   } 
              //  10.3 LVL - BitCoin* Explorer+
              if(*ptrbitLVLA == 10 && *ptrbitLVLB == 3)
                   {
                        cout << "Reached Rank - BitCoin* Explorer+" << endl;
                        pBaseCashDollars+=20;
                        cout << "+$20.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Explorer+";
                   } 
              //  10.6 LVl - BitCoin* Explorer++
              if(*ptrbitLVLA == 10 && *ptrbitLVLB == 6)
                   {
                        cout << "Reached Rank - BitCoin* Explorer++" << endl;
                        pBaseCashDollars+=22;
                        cout << "+$22.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Explorer++";
                   } 
              //  10.8 LVL - BitCoin* Explorer+++
              if(*ptrbitLVLA == 10 && *ptrbitLVLB == 8)
                   {
                        cout << "Reached Rank - BitCoin* Explorer+++" << endl;
                        pBaseCashDollars+=24;
                        cout << "+$24.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Explorer+++";
                   }  
              //  11.0 LVL - BitCoin* Fledging Explorer
              if(*ptrbitLVLA == 11 && *ptrbitLVLB == 0)
                   {
                        cout << "Reached Rank - BitCoin* Fledging Explorer" << endl;
                        pBaseCashDollars+=26;
                        cout << "+$26.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Fledging Explorer";
                   } 
              //  11.3 LVL - BitCoin* Fledging Explorer+
              if(*ptrbitLVLA == 11 && *ptrbitLVLB == 3)
                   {
                        cout << "Reached Rank - BitCoin* Fledging Explorer+" << endl;
                        pBaseCashDollars+=28;
                        cout << "+$28.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Fledging Explorer+";
                   } 
              //  11.6 LVl - BitCoin* Fledging Explorer++
              if(*ptrbitLVLA == 11 && *ptrbitLVLB == 6)
                   {
                        cout << "Reached Rank - BitCoin* Fledging Explorer++" << endl;
                        pBaseCashDollars+=30;
                        cout << "+$30.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Fledging Explorer++";
                   } 
              //  11.8 LVL - BitCoin* Fledging Explorer+++
              if(*ptrbitLVLA == 11 && *ptrbitLVLB == 8)
                   {
                        cout << "Reached Rank - BitCoin* Fledging Explorer+++" << endl;
                        pBaseCashDollars+=32;
                        cout << "+$32.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Fledging Explorer+++";
                   }
              //  12.0 LVL - BitCoin* Rookie Explorer
              if(*ptrbitLVLA == 12 && *ptrbitLVLB == 0)
                   {
                        cout << "Reached Rank - BitCoin* Rookie Explorer" << endl;
                        pBaseCashDollars+=34;
                        cout << "+$34.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Rookie Explorer";
                   }
              //  12.3 LVL - BitCoin* Rookie Explorer+
              if(*ptrbitLVLA == 12 && *ptrbitLVLB == 3)
                   {
                        cout << "Reached Rank - BitCoin* Rookie Explorer+" << endl;
                        pBaseCashDollars+=36;
                        cout << "+$36.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Rookie Explorer+";
                   }
              //  12.6 LVL - BitCoin* Rookie Explorer++
              if(*ptrbitLVLA == 12 && *ptrbitLVLB == 6)
                   {
                        cout << "Reached Rank - BitCoin* Rookie Explorer++" << endl;
                        pBaseCashDollars+=38;
                        cout << "+$38.00  -  Money Awarded" << endl;
                        *ptrpbitRank = "BitCoin* Rookie Explorer++";
                   }
              //  12.8 LVL - BitCoin* Rookie Explorer+++
               
              //  13.0 LVL - BitCoin* indemediate Explorer
              //  13.3 LVL - BitCoin* indemediate Explorer+
              //  13.6 LVL - BitCoin* indemediate Explorer++
              //  13.8 LVL - BitCoin* indemediate Explorer+++
               
              //  14.0 LVL - BitCoin* Adept Explorer
              //  14.3 LVL - BitCoin* Adept Explorer+
              //  14.6 LVL - BitCoin* Adept Explorer++
              //  14.8 LVL - BitCoin* Adept Explorer+++
            
              //  15.0 LVL - BitCoin* Expert Explorer
              //  15.3 LVL - BitCoin* Expert Explorer+
              //  15.6 LVL - BitCoin* Expert Explorer++
              //  15.8 LVL - BitCoin* Expert Explorer+++
               
              //  16.0 LVL - BitCoin* Husler Explorer
              //  16.3 LVL - BitCoin* Husler Explorer+
              //  16.6 LVL - BitCoin* Husler Explorer++
              //  16.8 LVL - BitCoin* Husler Explorer+++
              
              //  17.0 LVL - BitCoin* Master Explorer
              //  17.3 LVL - BitCoin* Master Explorer+
              //  17.6 LVL - BitCoin* Master Explorer++
              //  17.8 LVL - BitCoin* Master Explorer+++
              
              //  18.0 LVL - BitCoin* Legend Explorer
              //  18.3 LVL - BitCoin* Legend Explorer+
              //  18.6 LVL - BitCoin* Legend Explorer++
              //  18.8 LVL - BitCoin* Legend Explorer+++
              
              //  19.0 LVL - BitCoin* God Explorer
              //  19.3 LVL - BitCoin* God Explorer+
              //  19.6 LVL - BitCoin* God Explorer++
              //  19.8 LVL - BitCoin* God Explorer+++
            
              //  20.0 LVL - BitCoin* Researcher
              //  20.3 LVL - BitCoin* Researcher+
              //  20.6 LVl - BitCoin* Researcher++
              //  20.8 LVL - BitCoin* Researcher+++
              
              //  21.0 LVL - BitCoin* Fledging Researcher
              //  21.3 LVL - BitCoin* Fledging Researcher+
              //  21.6 LVl - BitCoin* Fledging Researcher++
              //  21.8 LVL - BitCoin* Fledging Researcher+++
     
              //  22.0 LVL - BitCoin* Rookie Researcher
              //  22.3 LVL - BitCoin* Rookie Researcher+
              //  22.6 LVL - BitCoin* Rookie Researcher++
              //  22.8 LVL - BitCoin* Rookie Researcher+++
              
              //  23.0 LVL - BitCoin* indemediate Researcher
              //  23.3 LVL - BitCoin* indemediate Researcher+
              //  23.6 LVL - BitCoin* indemediate Researcher++
              //  23.8 LVL - BitCoin* indemediate Researcher+++
              
              //  24.0 LVL - BitCoin* Adept Researcher
              //  24.3 LVL - BitCoin* Adept Researcher+
              //  24.6 LVL - BitCoin* Adept Researcher++
              //  24.8 LVL - BitCoin* Adept Researcher+++
              
              //  25.0 LVL - BitCoin* Expert Researcher
              //  25.3 LVL - BitCoin* Expert Researcher+
              //  25.6 LVL - BitCoin* Expert Researcher++
              //  25.8 LVL - BitCoin* Expert Researcher+++
              
              //  26.0 LVL - BitCoin* Husler Researcher
              //  26.3 LVL - BitCoin* Husler Researcher+
              //  26.6 LVL - BitCoin* Husler Researcher++
              //  26.8 LVL - BitCoin* Husler Researcher+++
              
              //  27.0 LVL - BitCoin* Master Researcher
              //  27.3 LVL - BitCoin* Master Researcher+
              //  27.6 LVL - BitCoin* Master Researcher++
              //  27.8 LVL - BitCoin* Master Researcher+++
              
              //  28.0 LVL - BitCoin* Legend Researcher
              //  28.3 LVL - BitCoin* Legend Researcher+
              //  28.6 LVL - BitCoin* Legend Researcher++
              //  28.8 LVL - BitCoin* Legend Researcher+++
              
              //  29.0 LVL - BitCoin* God Researcher
              //  29.3 LVL - BitCoin* God Researcher+
              //  29.6 LVL - BitCoin* God Researcher++
              //  29.8 LVL - BitCoin* God Researcher+++
              
            
            }
        void Money::showbitRank()
            {
             cout << "BitCoin* Rank: " << pbitRank << endl;   
            }
        void Money::bitbytelvl1()
            {
                cout << "CRIMSONLAND BITCOIN*" << endl;
                pBaseCashCentsB++;
                
                if (*ptrpCashCentsA < 0)
                         {
                              pBaseCashCentsA = 0;
                         }
                else if (*ptrpCashCentsA > 9)
                    {
                             
                        pBaseCashCentsA = 0;
                        pBaseCashDollars++;
                    }
                else 
                    {
                        pBaseCashCentsA = *ptrpCashCentsA;
                    }
                          
                            
                         // 0.0*
                    if (*ptrpCashCentsB < 0)
                         {
                             pBaseCashCentsB = 0;
                         }
                    else if (*ptrpCashCentsB > 9)
                         {
                            pBaseCashCentsB = 0;
                            pBaseCashCentsA++;
                         }
                    else 
                         {
                           pBaseCashCentsB = *ptrpCashCentsB;
                         }
                     
                bitbytesB++;
                
                if (bitbytesB > 2)
                    {
                        bitbytesB = 0;
                        bitbytesA++;
                        cout << "EXP: +12";
                        sPlayer->pBaseEXPERIANCE +=12;
                        cout << endl;
                        
                        bitRank();
                        bitLVLB++;
                            if (bitLVLB > 9)
                                {
                                    bitLVLB = 0;
                                    bitLVLA++;
                                }
                    }
                if (bitbytesA +2 && bitbytesB == 0)
                    {
                        cout << "REP: +5";
                        sPlayer->pBaseREPUTATION +=5;
                        cout << endl;
                    }
                    
                if (bitLVLA == 10 && bitLVLA > 10)
                {   
                 pBaseCashCentsB++;pBaseCashCentsB++;pBaseCashCentsB++;pBaseCashCentsB++;
                    if (*ptrpCashCentsA < 0)
                         {
                              pBaseCashCentsA = 0;
                         }
                else if (*ptrpCashCentsA > 9)
                    {
                             
                        pBaseCashCentsA = 0;
                        pBaseCashDollars++;
                    }
                else 
                    {
                        pBaseCashCentsA = *ptrpCashCentsA;
                    }
                          
                            
                         // 0.0*
                    if (*ptrpCashCentsB < 0)
                         {
                             pBaseCashCentsB = 0;
                         }
                    else if (*ptrpCashCentsB > 9)
                         {
                            pBaseCashCentsB = 0;
                            pBaseCashCentsA++;
                         }
                    else 
                         {
                           pBaseCashCentsB = *ptrpCashCentsB;
                         }
                     
                bitbytesB++;   
                }
            } 
           
void Money::showBitMining()
    {
        
       cout <<"=================================================" << endl; 
       cout << "BITCOIN MINING LEVEL: " << bitLVLA <<"."<< bitLVLB << "BITCOINS Mb/s :" << bitbytesA << "." << bitbytesB << endl;  
    }



// *888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888

// This is The Shops
Shop::Shop()
{
}

Shop::~Shop()
{
}
void Shop::FIXAMOUNT()
    {
    //66666666666666666666666666666666666666666666666666666666
    
       if (sMoney->pBaseCashCentsA == -1)
            {
                sMoney->pBaseCashCentsA = 9;
            }
        if (sMoney->pBaseCashCentsA == -2)
            {
                sMoney->pBaseCashCentsA = 8;
            }
        if (sMoney->pBaseCashCentsA == -3)
            {
                sMoney->pBaseCashCentsA = 7;
            }
        if (sMoney->pBaseCashCentsA == -4)
            {
                sMoney->pBaseCashCentsA = 6;
            }
        if (sMoney->pBaseCashCentsA == -5)
            {
                sMoney->pBaseCashCentsA = 5;
            }
        if (sMoney->pBaseCashCentsA == -6)
            {
                sMoney->pBaseCashCentsA = 4;
            }
        if (sMoney->pBaseCashCentsA == -7)
            {
                sMoney->pBaseCashCentsA = 3;
            }
        if (sMoney->pBaseCashCentsA == -8)
            {
                sMoney->pBaseCashCentsA = 2;
            }
        if (sMoney->pBaseCashCentsA == -9)
            {
                sMoney->pBaseCashCentsA = 1;
            }
            
    //777777777777777777777777777777777777777777777
        
        if (sMoney->pBaseCashCentsB == -1)
            {
                sMoney->pBaseCashCentsB = 9;
            }
        if (sMoney->pBaseCashCentsB == -2)
            {
                sMoney->pBaseCashCentsB = 8;
            }
        if (sMoney->pBaseCashCentsB == -3)
            {
                sMoney->pBaseCashCentsB = 7;
            }
        if (sMoney->pBaseCashCentsB == -4)
            {
                sMoney->pBaseCashCentsB = 6;
            }
        if (sMoney->pBaseCashCentsB == -5)
            {
                sMoney->pBaseCashCentsB = 5;
            }
        if (sMoney->pBaseCashCentsB == -6)
            {
                sMoney->pBaseCashCentsB = 4;
            }
        if (sMoney->pBaseCashCentsB == -7)
            {
                sMoney->pBaseCashCentsB = 3;
            }
        if (sMoney->pBaseCashCentsB == -8)
            {
                sMoney->pBaseCashCentsB = 2;
            }
        if (sMoney->pBaseCashCentsB == -9)
            {
                sMoney->pBaseCashCentsB = 1;
            }
        
        
        
    }
    
    void breadBought(Shop *Bread)
    {
       
            
            if (sMoney->pBaseCashDollars >= 1 && sMoney->pBaseCashCentsA >= 9 && sMoney->pBaseCashCentsB >= 5 || sMoney->pBaseCashDollars == 1
                && sMoney->pBaseCashCentsA == 9 && sMoney->pBaseCashCentsB > 5 || sMoney->pBaseCashDollars > 1 && sMoney->pBaseCashCentsA >= 0
                && sMoney->pBaseCashCentsB >= 0)
                    {
                        breaditemAmount++;sMoney->pBaseCashDollars -= 1;sMoney->pBaseCashCentsA -=9;sMoney->pBaseCashCentsB -= 5;
                        Bread->itemStatus = "Bread";
                        cout << "Bread+";
                    }
    }
    void Shop::breadPrice()
        {
            
            sMoney->pBaseCashDollars -= 1;sMoney->pBaseCashCentsA -=9;sMoney->pBaseCashCentsB -= 5;
            
        }
    void Shop::buyBread()
        {
             if (sMoney->pBaseCashDollars <= 1 && sMoney->pBaseCashCentsA <= 9 && sMoney->pBaseCashCentsB < 5)
            {
                cout << " You dont have enough to buy Bread" << endl;
                breaditemAmount--;breaditemAmount++;
                
            }
               breadBought(this);         
        }
    void Shop::showBread()
        {
            if (breaditemAmount > 0)
                {
                    cout << breaditemAmount << "x Bread  <eatbread> - Replenishes Hunger" << endl;                                          
                }
            
        }
        
    void Shop::eatBread()
        {
         breaditemAmount--;
         sPlayer->pBaseHunger +=5;
         cout << "Yummy Bread" << endl;
        }
        
    void Shop::selectbuyBread()
        {
            
            if (sMoney->pBaseCashDollars >= 1 && sMoney->pBaseCashCentsA >= 9 && sMoney->pBaseCashCentsB >= 5 || sMoney->pBaseCashDollars == 1
                && sMoney->pBaseCashCentsA == 9 && sMoney->pBaseCashCentsB > 5 || sMoney->pBaseCashDollars > 1 && sMoney->pBaseCashCentsA >= 0
                && sMoney->pBaseCashCentsB >= 0)
                        {
                            cout << "Enter the number of Bread you want to buy" << endl;
                                    cin >> breaditemAmount;
                                    
                                    
                            
                                    Bakery->FIXAMOUNT();
                            int X = 1,Y = 9,Z = 5;
                            
                            sMoney->pBaseCashDollars -= 1; X = sMoney->pBaseCashDollars -= breaditemAmount;
                            sMoney->pBaseCashCentsA -=  9; Y = sMoney->pBaseCashCentsA -  breaditemAmount;
                            sMoney->pBaseCashCentsB -=  5; Z = sMoney->pBaseCashCentsB -  breaditemAmount;
                            cout << endl;    
                            cout << breaditemAmount << "x Bread Bought" << endl;
                                
                            
                            
                                
                        
                    if (sMoney->pBaseCashDollars <= 1 && sMoney->pBaseCashCentsA <= 9 && sMoney->pBaseCashCentsB < 5)
                        {
                            cout << " You dont have enough to buy Bread" << endl;
                            
                            
                            Bakery->FIXAMOUNT();
                            int X = 1,Y = 9,Z = 5;
                             X = sMoney->pBaseCashDollars -= breaditemAmount;sMoney->pBaseCashDollars += breaditemAmount;
                             Y = sMoney->pBaseCashCentsA -   breaditemAmount;sMoney->pBaseCashCentsA  +  breaditemAmount;
                             Z = sMoney->pBaseCashCentsB -   breaditemAmount;sMoney->pBaseCashCentsB   +  breaditemAmount;
                
                        } 
                    
                        }
        }
    void Shop::buyDonut()
        {
            
        }
    void Shop::buyPizza()
        {
        
        }





//888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
void Inventory::showInventory()
     {         
        
          cout  << "|---------------------------:::::-Inventory-:::::-------------------------------" << endl;
          cout  << "|    Health:  " << sPlayer->showHealth() << " HP   | "; 
                   sMoney->showMoneyInventory(); cout << " | ";
                   sPlayer->showEXP();
                   sPlayer->showREP();
           cout << endl;
           cout << "|   ";sMoney->showbitRank();
           cout << "|                                                     ";sPlayer->showHunger();cout << endl;
           cout << "|                                                     ";sPlayer->showThirst();cout << endl; 
           cout << "|"<<endl;
           cout << "|    <stats> - to view players statistics";
           cout << "|    <items> - to view players items";
           cout << "|     <back> - to see this menu again";
           cout << "|     <exit> - exit the inventory menu";
           cout << endl;
            
                string INVinput;
                bool wait = false;
                while (wait==false)
                    {
                        cin >> INVinput;
               
                        if (INVinput == "stats")
                            {
              
                                cout << "| ***STATS***" << endl;
                                cout << "|" << endl;
                                cout << "| "; sPlayer->showName();
                                cout << "|  ";sPlayer->showInvStrength();
                                cout << "|  ";sPlayer->showInvDextarity();
                                cout << "|  ";sPlayer->showInvSpeed();
                                cout << "|  ";sPlayer->showInvConstitution();cout << endl;
                                cout << "********************************************************************************" << endl;
                            }
                         if (INVinput == "back")
                            {
                                cout  << "|---------------------------:::::-Inventory-:::::-------------------------------" << endl;
                                cout  << "|    Health:  " << sPlayer->showHealth() << " HP   | "; 
                   sMoney->showMoneyInventory(); cout << " | ";
                   sPlayer->showEXP();
                   sPlayer->showREP();
           cout << endl;
           cout << "|   ";sMoney->showbitRank();
           cout << "|                                                     ";sPlayer->showHunger();cout << endl;
           cout << "|                                                     ";sPlayer->showThirst();cout << endl; 
           cout << "|"<<endl;
           cout << "|    <stats> - to view players statistics";
           cout << "|    <items> - to view players items";
           cout << "|     <back> - to see this menu again";
           cout << "|     <exit> - exit the inventory menu";
           cout << endl;
                            }
                            
                            
                         if (INVinput == "exit")
                            {
                                cout << " You exited Inventory" << endl;
                                cout << "  <t>  -  to View Town" << endl;
                                break;
                            }
                            
                         if (INVinput == "items")
                            {
                                cout << "==================================Item-Menu=====================================" << endl;
                                cout << "   1) - Food & Drink" << "                                        CRIMSONLAND v0.2a" << endl;
                                cout << "    <exit>   -   to Exit item menu   <back>  - to Go back" << endl;
                               
                                if (INVinput == "exit")
                                    {
                                        cout << " You exited Items" << endl;
                                        cout << "  <t>  -  to View Town" << endl;
                                        break;
                                    }
                                    
                                        char itemkeyButtons = getch();

                                        switch(itemkeyButtons)
                                            {
                                        case '1':
                                                cout << "==================================Item-Menu=====================================" << endl;
                                                cout << "                                                               CRIMSONLAND v0.2a" << endl;
                                                Bakery->showBread();              
                                                cout << endl;
                                                cout << "                     <back>   -   to Go back      <exit>   -   to Exit Inventory" << endl;
                                            
                                                    
                                            
                                            }
                            }
                            if (INVinput == "eatbread")
                                {
                                    cout << "Bread-" << endl;
                                    Bakery->eatBread();
                                    cout << "***Bread-Left***" << endl;
                                    cout << endl;
                                    Bakery->showBread();
                                    
                                }

                        
                    }
     }
#endif // INVENTORY_H_INCLUDED
