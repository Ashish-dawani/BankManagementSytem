
//Bank Class
// date 6 april 2017

#include<iostream>


using namespace std;

class Bank
{
    public:
        Bank(); // DEFAULT CTOR
        void setname( const string );
        void display_name( ) const;
        int getchoice( ) const;
        void inputchoice( );
        string get_name();
        ~Bank(); // DESTRUCTOR

    protected:

    private:
        string Name;
        int choice;
};

