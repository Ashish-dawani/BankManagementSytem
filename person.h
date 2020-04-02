#ifndef PERSON_H
#define PERSON_H
#include<string>
using namespace std;
class person
{
    public:

        person(); //constructer

        void  set_Name(string);     //SET FUNCTIONS FOR PERSON
        void  set_Date_of_birth(string);
        int  set_Age(int num);
        int set_Gender(string); //END OF SET FUNCTIONS

        string get_Name()const; //GET FUNCTIONS FOR PERSON
        string get_Date_of_birth()const;
        string get_gender()const;
        int get_age()const; //END OF GET FUNCTIONS
        void input_person();
        void display_person() const;
    protected:

    private:
        string Name;   //person ATTRIBUTES
        string Date_of_birth;
        int Age;
        string Gender;

};
#endif // PERSON_H
