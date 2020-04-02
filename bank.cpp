
#include "bank.h"
#include <cstring>
#include <iomanip>
#include "gotoxy.h"


Bank::Bank()
{
    Name = "NULL";
}
void Bank::setname( const string name )
{
    Name = name;
}
string Bank::get_name()
{
    return Name;
}
void Bank::display_name() const
{
    for( int i=0; i < 120; i++)
        cout << "-";
        gotoxy(50 , 2);
    cout <<  Name << endl;

    for( int i=0; i < 120; i++)
        cout << "-";

        cout << endl;

        gotoxy( 15 , 10);
        cout << "1.Customer Login";
        gotoxy( 50 , 10);
        cout << "2.Admin Login";
        gotoxy( 85 , 10);
        cout << "3.ATM ";

        gotoxy( 50 , 13 );
        cout << "Enter Choice :";
}

void Bank::inputchoice( )
{
    cin >> choice;
}

int Bank::getchoice() const
{
    return choice;
}

Bank::~Bank()
{   }


