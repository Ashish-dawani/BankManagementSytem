
#include <iostream>
#include <fstream>

#include "manager.h"
#include "Customer.h"

manager::manager()
{

}

void manager::open_newAccount( )
{
    c1.input_customer();

     ifstream reader;
     ofstream writer;
     string line;
     writer.open("temp.txt");
     reader.open("Accounts_data.txt");

     if(!reader.is_open())
     {
         cout<<"Error Opening Data Base file"<<endl;
         return ;
     }

     while(!reader.eof())
     {
         getline(reader,line);
         writer<<line<<endl;
     }

     writer << c1.account1.get_accountnumber() << " " << c1.account1.get_balance() << " " << c1.get_debitcard() << " " << c1.get_pin() << " " << c1.get_loanstatus()
         << " " << c1.get_Name() << " " << c1.get_Date_of_birth() << " " << c1.account1.get_type() ;

     reader.close();
     writer.close();
     remove("Accounts_data.txt");
     rename("temp.txt","Accounts_data.txt");

    // Writing New Customer Login Details in Login text file
     writer.open("login.txt" , ios::app);
     writer <<  c1.user.get_username() << " " << c1.user.get_password() << " " <<  c1.account1.get_accountnumber() << endl;
     writer.close();

     return ;
}

void manager::details_specific_customer( int Account_Num )
{
    /*ifstream fin;
    fin.open("" , ios::in );
    int tmp,pin,atm;
    do
    {
        fin >> tmp;
        if( tmp == Account_Num )
        {
            fin >> a1.set_balance() >> atm >> pin >> c1.


        }
    } */
    ifstream reader_data;
    string details;
    int temp_account_no;
    reader_data.open("Accounts_data.txt");
    if(!reader_data.is_open())
    {
        cout<<"Error Opening File"<<endl;
        return ;
    }
    while(!reader_data.eof())
    {
        reader_data>>temp_account_no;
        if(temp_account_no==Account_Num)
        {
            cout<<temp_account_no;
            getline(reader_data,details);
            cout<<details;
        }
        else
        {
            getline(reader_data,details);
        }
    }

}


void manager::display_All_Users( )
{
    ifstream reader_data;
    string details;
    reader_data.open("Accounts_data.txt");
    if(!reader_data.is_open())
    {
        cout<<"Error Opening File"<<endl;
        return ;
    }
    while(!reader_data.eof())
    {
            getline(reader_data,details);
            cout<<details<<endl;
    }

}


manager::~manager()
{

}
