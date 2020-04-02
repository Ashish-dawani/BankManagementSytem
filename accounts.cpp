
#include <iostream>
#include <cstdlib>
#include <ctime>

#include "accounts.h"

using namespace std ;

 accounts::accounts( )
{
    srand(time(NULL)) ;
    account_no = rand() % 10000 + 1  ; //Generating the Account No
    type = "" ;
    balance = 0 ;
}

/*void accounts::set_accountno( unsigned int accountno )
{
    account_no = accountno ;
} */

void accounts::set_type(  )
{
    cout << "Enter Account type :";
    cin >> type;
    //type = Type ;
}

void accounts::set_balance(  )
{
    cout << "Enter Initial Balance :";
    cin >> balance;
    //balance = Balance ;
}

void accounts::change_balance( double amount )
{
    // filing to change account balance
}

int accounts::get_accountnumber( )
{
    return account_no ;
}

string accounts::get_type( )
{
    return type ;
}

double accounts::get_balance( )
{
    return balance ;
}

