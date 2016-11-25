#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

class Player
{

public:
    string lifeStatus;
     int pBaseHealth = 100;
     int *ptrpHealth;
	 int pBaseHunger = 50;
	 int *ptrpHunger;
	 int pBaseThirst = 40;
	 int *ptrpThirst;

// ***TODO Stats
     int pBaseStrength = 0;
     int *ptrpStrength;
     int pBaseDextarity = 0;
     int *ptrpDextarity;
     int pBaseSpeed = 0;
     int *ptrpSpeed;
     int pBaseConstitution = 0;
     int *ptrpConstitution;
      
      
      int pBaseEXPERIANCE = 0;
      int *ptrpEXP;
      int pBaseREPUTATION = 0;
      int *ptrpREP;
    string setPlayerName;
    string pName;
    string *ptrpName;
          
     Player(string Life,string Name, int pHealth, int pHunger, int pThirst,int EXP,int REP);
	~Player();
    
    int setPlayerHealth(string hpMarker,int Health);
    int setPlayerHunger(string hunMarker,int Hunger);
    int setPlayerThirst(string thirstMarker,int Thirst);
    int setPlayerEXP(string expMarker,int expPoints);
    int setPlayerREP(string repMarker,int repPoints);
    int showHealth();
    void gainHealth(int Hlt);
    void gainREP(int Rps);
    void gainEXP(int Eps);
        void showHunger();
        void showThirst();
        void showEXP();
        void showREP();
        void showName();
            int setPlayerStrength(string strMarker,int str);
            int setPlayerDextarity(string dexMarker,int dex);
            int setPlayerSpeed(string speedMarker, int speed);
            int setPlayerConstitution(string conMarker,int constitution);
                void showInvStrength();
                void showInvDextarity();
                void showInvSpeed();
                void showInvConstitution();
}; 

class Money
{
   
public:
int pBaseCashDollars = 0;
     int *ptrpCashDollars;
     int pBaseCashCentsA = 0;
     int *ptrpCashCentsA;
     int pBaseCashCentsB = 0;
     int *ptrpCashCentsB;
     
   int bitLVLA = 0;
   int bitLVLB = 0;
   int *ptrbitLVLA;
   int *ptrbitLVLB;
  
   int bitbytesA = 0;
   int bitbytesB = 0;
   int *ptrbitbytesA;
   int *ptrbitbytesB;
   string pbitRank;
   string *ptrpbitRank;
     
     int newCentsA;
     int newCentsB;
     Money(int Dollars,int Centsa,int Centsb);
    ~Money();
        void setMoney(int D,int A,int B);
        void showMoney();
        void showMoneyInventory();
        void bitRank();
        void showbitRank();
        void bitbytelvl1();
        void showBitMining();
        
       

};

     


    
class Inventory
{
public:
         Inventory();
         ~Inventory();
         void showInventory();
         
};


// ***TODO BANKING SYSTEM***

#endif // PLAYER_H_INCLUDED
