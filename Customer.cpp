#include "gotoxy.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

#include "accounts.h"
#include "Customer.h"
#include "person.h"

using namespace std ;

Customer::Customer()
{
   srand(time(NULL));
   //Generating the DEBIT CARD NUMBER
   debit_card = rand() % 999999 +99999 ;
}

/*void Customer::display_customer() const
{
   display_person();
   //Displaying the Person details
   cout << "Account No : " << account1.get_accountnumber();
   cout << endl;
   cout << "Account Type : " << account1.get_type();
   cout << "Balance : " << account1.get_balance();
   cout << endl;
   cout << "Debit Card : " << debit_card << endl;
} */

void Customer::input_customer()
{

                    system("cls");
                    for( int i=0; i < 120; i++)
                     cout << "-";
                     gotoxy(50 , 2);
                     cout <<  "Open New Account Window" << endl;

                     for( int i=0; i < 120; i++)
                     cout << "-";

    input_person(); //Inputing the Person
    user.input();   // input of user name and password
    account1.set_type();
    account1.set_balance();
    //while(1)
    //{

        cout << "Enter debit Card Pin : ";
        cin >> pin;
    //    if( debit_card)


    cout << "Loan Request (0 or 1) : ";
    cin >> loan;
}

int Customer::get_debitcard( ) const
{
    return debit_card;
}

int Customer::get_pin( ) const
{
    return pin;
}

bool Customer::get_loanstatus( ) const
{
    return loan;
}


