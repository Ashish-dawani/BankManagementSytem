

#include <iostream>
#include <fstream>

#include "teller.h"

using namespace std;

teller::teller()
{

}

int teller::update_balance(int Account_Num,double withdraw_Amount)
{
    ifstream reader;
	ofstream writer;

	reader.open("Accounts_data.txt",ios::in);
	writer.open("tmp.txt",ios::out);
	int flag = 0;

	int account_no,debit_card_no=0,debit_pin=0;
	bool loan_req=0;
	double Amount=0.0;
	string Name="",date_of_birth="",type_of_acc="";

	while( reader >> account_no >> Amount >> debit_card_no >> debit_pin >> loan_req
		>> Name >> date_of_birth >> type_of_acc  )
	{

		if( account_no == Account_Num )
		{
			if( Amount > withdraw_Amount )
			{
				Amount -= withdraw_Amount;
				flag = 1;
			}
		}

		writer << account_no << " " << Amount << " " << debit_card_no
		    << " " << debit_pin << " " << loan_req << " " << Name
			<< " " << date_of_birth << " " << type_of_acc << endl ;

	}
	reader.close();
	writer.close();

    remove("Accounts_data.txt");
    rename("tmp.txt","Accounts_data.txt");

	return flag;

}

double teller::balance_inquiry( int Account_Num )
{

    ifstream reader;
    reader.open("Accounts_data.txt",ios::in);

    int account_no,debit_card_no=0,debit_pin=0;
	bool loan_req=0;
	double balance=0.0;
	string Name="",date_of_birth="",type_of_acc="";

    while( !reader.eof() )
    {
        reader >> account_no >> balance >> debit_card_no >> debit_pin >> loan_req
		>> Name >> date_of_birth >> type_of_acc ;


		if( account_no == Account_Num )
        {
            break;
        }

    }
    reader.close();
    return balance;
}

bool teller::loan_request( int Account_Num )
{
    ifstream reader;
    reader.open("Accounts_data.txt",ios::in);

    int account_no,debit_card_no=0,debit_pin=0;
	bool loan_req=0;
	double balance=0.0;
	string Name="",date_of_birth="",type_of_acc="";

    while( !reader.eof() )
    {
        reader >> account_no >> balance >> debit_card_no >> debit_pin >> loan_req
		>> Name >> date_of_birth >> type_of_acc ;


		if( account_no == Account_Num )
        {
            break;
        }

    }
    reader.close();
    return loan_req;

}

teller::~teller()
{

}
