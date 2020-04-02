
#pragma once

#include<iostream>
#include<cstring>
#include<fstream>

#include"gotoxy.h"
#include"accounts.h"
using namespacce std;


class transaction
{
public:
    transaction()
    {

    }
    void display( )
    {
        gotoxy(10,20);
        cout << "TRANSACTION RECORD";
        gotoxy(10,21);
        cout << " Account\t\tTransaction Type\t\tDate & Time" << endl;

        ifstream fin;
        fin.open("transaction.txt",ios::in);

        int account ;
        string tmp;
        while( !fin.eof() )
        {
            fin << account;
            cout << account;
            fin << tmp;
            cout << "\t\t" << tmp;
            fin << tmp;
            cout << "\t\t" << tmp;


        }

    }
    ~transaction();
protected:
private:
    string transaction_type;

};
