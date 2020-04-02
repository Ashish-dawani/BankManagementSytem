
#pragma once
#include <iostream>
#include <cstring>

using namespace std ;

 class login
 {
    public:
        login();
        //void display( ) const;
        void input();
        void change_password(); // changes password of user
        string get_username();
        string get_password();
        int authenticate_login( int* ); // user login check
        int admin_login( );       // admin login check

        ~login();
    protected:
    private:
        string username;
        string password;
 };

