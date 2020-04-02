

#pragma once
#include <iostream>

class teller
{
public:
    teller();
    int update_balance( int,double );
    double balance_inquiry( int );
    bool loan_request( int );
    ~teller();
protected:
private:
};

