#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
//#include "login.h"
//#include <fstream>
//#include "Customer.h"

using namespace std ;

class accounts
{
 public:
    accounts( );
    void set_balance(  );
    void set_type(  );
    int get_accountnumber( );
    string get_type( );
    double get_balance( );
    void change_balance( double );

protected:
private:
    int account_no;
    string type;
    double balance;
};

#endif // ACCOUNT_H
