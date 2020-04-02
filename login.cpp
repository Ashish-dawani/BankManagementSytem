
//#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>
#include <string>

#include "login.h"
#include "gotoxy.h"

using namespace std;

login::login()
{
    username = "NULL";
    password = "NULL";
}

void login::input( )
{
    string user , pass;
    do
    {
        cout << "Enter userName : ";
        cin >> user;
        cout << "Enter Password : ";
        cin >> pass;

        if( user.length() >= 5 && user.length() <= 15 )
        {
         username = user;
         password = pass;
         break;
        }
        else
            cout << "User name must be between 8 to 15 digits" << endl;

    }while(1);

}

string login::get_username()
{
    return username;
}

string login::get_password()
{
    return password;
}


void login::change_password()
{
    string username_tmp = get_username();
    string pass ="";
    int acc_num;


    while(1)
        {
          cout << "\n\tEnter New Password :";
          cin >> pass;
          if( pass.length() <= 15 )
            break;
          else
            cout << "\tPassword should be less than 15 length" << endl;
        }

    // Reading user names and password from file to change password of user
    ifstream reader;
    ofstream writer;
    writer.open("tmp.txt",ios::out); // transferring all data to new file with changed password
    reader.open("login.txt",ios::in);

    while( reader >> username >> password >> acc_num )
    {
        if( username == username_tmp )
        {
            password = pass;
        }

        writer << username << " " << password << " " << acc_num << endl;
    }

    reader.close();
    writer.close();

    remove("login.txt");
    rename("tmp.txt","login.txt");

}

 // user login function
int login::authenticate_login( int* ptr_accNum )
{

    string pass="" , user="";
    int attempts = 3 , acc_num;

    do{
            system("cls");
                    for( int i=0; i < 120; i++)
                     cout << "-";
                     gotoxy(50 , 2);
                     cout <<  "The Login Page" << endl;

                     for( int i=0; i < 120; i++)
                     cout << "-";

     gotoxy( 5 , 6 );
     cout << "Enter UserName : ";

     cin >> user;
     gotoxy( 5 , 7 );
     cout << "Enter Password : ";
     cin >> pass;

     fstream fin;
     fin.open("login.txt" , ios::in );
     int flag = 0;

        while( !fin.eof() )
        {
            fin >> username;
            fin >> password;
            fin >> acc_num;

            if( username == user && password == pass )
            {
                *ptr_accNum = acc_num;
                flag = 1;
                break;
            }
        }
        fin.close();
    if( flag == 1)
    {
      gotoxy( 5 , 5 );
      cout << "Login Successful" << endl;
      return 1;
    }

    else
    {
        gotoxy( 5 , 5 );
        cout << "Incorrect UserName & Password " << --attempts << " attempts left" << endl;
    }
    if ( attempts == 0 )
    {
        cout << "System is Shutting Down. Incorrect Login count reached" << endl;
        return 0;
    }
    system("pause");

    }while( attempts > 0);

    return -1;

}
 // admin login function
int login::admin_login( )
{

    string pass="" , user="";
    int attempts = 3;

    do{
                    system("cls");
                    for( int i=0; i < 120; i++)
                     cout << "-";
                     gotoxy(50 , 2);
                     cout <<  "The Admin Login Page" << endl;

                     for( int i=0; i < 120; i++)
                     cout << "-";
     gotoxy( 5 , 6 );
     cout << "Enter UserName : ";
     cin >> user;
     gotoxy( 5 , 7 );
     cout << "Enter Password : ";
     cin >> pass;

     fstream fin;
     fin.open("admin.txt" , ios::in );
     int flag = 0;

        while( !fin.eof() )
        {
            fin >> username;
            fin >> password;

            if( username == user && password == pass )
            {
                flag = 1;
                break;
            }
        }
        fin.close();
    if( flag == 1)
    {
      gotoxy( 5 , 5 );
      cout << "Login Successful" << endl;
      return 1;
    }

    else
    {
        gotoxy( 5 , 5 );
        cout << "Incorrect UserName & Password " << --attempts << " attempts left" << endl;
    }
    if ( attempts == 0 )
    {
        cout << "System is Shutting Down. Incorrect Login count reached" << endl;
        return 0;
    }
    system("pause");

    }while( attempts > 0);

}

login::~login( )
{

}
