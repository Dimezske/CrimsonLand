#ifndef SHOP_H_INCLUDED
#define SHOP_H_INCLUDED
#include <iostream>

using namespace std;

class Shop
{

public:
    
    string itemStatus;
    Shop();
    ~Shop();
    void breadPrice();
    void buyBread();
    void showBread();
    void eatBread();
    void selectbuyBread();
    void buyPie();
    void showPie();
    void eatPie();
    void buyDonut();
    void buyPizza();
    void FIXAMOUNT();

};
extern int breaditemAmount;



#endif // SHOP_H_INCLUDED
