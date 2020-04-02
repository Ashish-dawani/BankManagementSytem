#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "accounts.h"
#include "person.h"
#include "login.h"

using namespace std;

class Customer:public person
{
    public:
        accounts account1 ;  //  association of account object
        login user ;        // login object
        Customer();

       // void apply_for_loan();

        ////////////////////////////////////// Working Functions/////////////////

        void display_customer() const;
        void input_customer();
        int get_debitcard( ) const;
        int get_pin() const;
        bool get_loanstatus() const;
        friend set_customer_data( ) ;
    private:
        int debit_card;
        int pin;
        bool loan;
        //static int No_of_customers;

};

#endif // CUSTOMER_H
