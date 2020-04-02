
//#pragma once

#include <iostream>

#include "Employee.h"
#include "Customer.h"
#include "accounts.h"
#include "login.h"

class manager : public Employee
{
public:
    manager( ) ;
    void open_newAccount( );
    void display_All_Users(  );
    void details_specific_customer( int );
    void approve_Loan_Request( );
    void delete_account( );
    ~manager( );
protected :
private :
    Customer c1;

};

