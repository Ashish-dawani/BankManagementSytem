
#include <iostream>
#include "accounts.h"
#include "savings.h"

double savings::rateOfprofit = 4.0;

savings::savings()
{  }


void savings::set_account( )
{
   // accounts::settype_balance();
}

void savings::apply_profit( )
{
    // filling code to apply profit to all accounts with savings type
}

void savings::set_rop( )
{
    cout << "Enter Rate of Profit You Want to set : ";
    cin >> rateOfprofit;
}

void savings::display_rop( )
{
    cout << "The profit rate is : " << rateOfprofit << " % " << endl;
}

savings::~savings( )
{       }

