
#ifndef SAVINGS_H
#define SAVINGS_H

#include <iostream>
#include "accounts.h"

using namespace std;

class savings : public accounts
{
public :

    savings();
    void set_account();
    static void set_rop( );
    static void display_rop( );
    void apply_profit( );
    ~savings();

protected:
private:
    static double rateOfprofit;
};




#endif // SAVINGS_H
