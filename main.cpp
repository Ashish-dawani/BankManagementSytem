#pragma once
#include <iostream>
#include <cstdlib>
#include <windows.h>

#include "bank.h"
#include "login.h"
#include "person.h"
#include "Customer.h"
#include "Employee.h"
#include "gotoxy.h"
#include "accounts.h"
#include "teller.h"
#include "manager.h"

using namespace std;

void menu( );
void draw(string s);

int main()
{
    //system("yellow") ;
    menu( );

}


void menu( )
{
    Bank bank1;
    system("color f2");
    bank1.setname("THE PEOPLE'S BANK");

    bank1.display_name();

    bank1.inputchoice(); // user , manager , atm

    gotoxy(50,16);
    cout << "Please Wait Loading";
    char ch = 177 ;
    gotoxy(35,15);
    for(int i=0; i<=50; i++)
    {
        Sleep(2);
        cout << ch;
    }

    gotoxy(35,15);
    ch = 219;
    for(int i=0; i<=50; i++)
    {
        Sleep(2);
        cout << ch;
    }


    int check;
    login user1;
    Customer test;
    teller t1;
    manager m1;


    // DISPLAY ANIMATION ENDS HERE //
    int acc_num , flag;
    bool loan;
    double withdraw;

    // Main working //
    switch( bank1.getchoice() )
    {
        case 1 :
            system("cls");
            gotoxy( 5 , 1 );
            // sending address of variable to get account number
            //associated with that user

            check = test.user.authenticate_login( & acc_num );
            system("cls");


            if( check == 1) {


              while(1) {
                    flag = 0;
                    system("cls");
                    system("color 70");
                    draw(bank1.get_name());
               cout << endl;
                cout << endl<<endl;
                cout << "\tAccount Number:"<<acc_num << endl;
                cout << "\t1.Withdraw Cash " << endl;
                cout << "\t2.Balance Inquiry " << endl;
                cout << "\t3.Check Status of Loan Request" << endl;
                cout << "\t4.Change Password" << endl;
                cout << "\t5.Intra Bank Funds Transfer" << endl;
                cout << "\t6.Pay Bills" << endl;
                cout << "\t0.To Exit" << endl;
                cout << "\tEnter Choice : ";

                cin >> check;

                switch( check )
                {
                    case 1:
                        draw("The Withdrawl Page");
                        gotoxy(5,7);
                        cout << "How much cash you Want to WithDraw : ";
                        cin >> withdraw;
                        flag = t1.update_balance( acc_num,withdraw );
                        if( flag == 1)
                        {
                            cout << "\tTransaction Successful" << endl;
                            system("pause");
                        }
                        else
                        {
                            cout << "\tBalance Is Low Transaction Declined" << endl;
                            system("pause");
                        }
                        break;

                    case 2:
                        system("cls");
                        draw("The Balance Inquiry Page");
                        gotoxy(5,7);
                        cout << "Your Account balance is : " << t1.balance_inquiry(acc_num) << endl;
                        system("pause");
                        break;

                    case 3:
                        system("cls");
                        draw("The Loan Request Page");
                        gotoxy(5,7);
                        loan = t1.loan_request( acc_num );
                        if( loan == true )
                        {
                          cout << "Your Loan Request Has Been Approved" << endl;
                          gotoxy(5,2);
                          system("pause");
                        }
                        else
                        {
                          cout << "Your Loan Request is Waiting for Manager Approval";
                          gotoxy(5,2);
                          system("pause");
                        }
                        break;
                    case 4:
                        system("cls");
                        draw("The Change password Page");
                        test.user.change_password();
                        cout << "\t\t\nPassword Changed Successfully" << endl;
                        cout << "In 5 seconds the system will logoff and You have to login again\n";
                        Sleep(10);
                        exit(0);

                    case 0:
                        exit(0);
                }

              }

            }
            else
                exit(0);

            break;

        // ***MANAGER Working From Here*** //
        case 2 :
            system("cls");
            gotoxy( 5 , 1 );
            check = user1.admin_login();
            START:system("cls");

             if( check == 1) {
                    system("color 60");
                    draw("The Admin Page");

                cout << endl;
                cout << "\t1.Open New Account" << endl;
                cout << "\t2.Display Specific Customer Record" << endl;
                cout << "\t3.Display All Customers" << endl;
                cout << "\t4.Change Rate of Profit for Savings Account" << endl;
                cout << "\t5.Delete Account" << endl;
                cout << "\t6.Approve loan Request" << endl;
                cout << "\t0.To Exit" << endl;
                cout << "\tEnter Choice : ";
                cin >> check;

            switch( check )
            {
                case 1:
                    cout << endl;
                    draw("The New Account Page");
                    m1.open_newAccount();
                    break;
                case 0:
                    exit(0);

            }
            goto START;

        }

            break;

    }

  //  user1.input()

    //return 0;
}
void draw(string s)
{

                    system("cls");
                    for( int i=0; i < 120; i++)
                     cout << "-";
                     gotoxy(50 , 2);
                     cout << s << endl;

                     for( int i=0; i < 120; i++)
                     cout << "-";

}
