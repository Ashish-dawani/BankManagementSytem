#include <cstdio>
#include "Customer.h"
#include "person.h"
#include <iostream>
#include<string>
using namespace std;

person::person() //COUNSTRUCTOR OF THE PERSON
{

    Name="nothing"; //Initiallizing person values
    Age=0;
    Date_of_birth="0/0/0";//End of initiallizing deffault values

}

//////////////////////////////// SET_FUNCTIONS_FOR_PERSON///////////////////////////

int person::set_Age(int num) //SETTING THE AGE OF THE PERSON
{

    if(num>=18&&num<115) //CHECKING FOR AGE RESTRICTIONS
    {
        Age=num;
        return 0;
    }
    else if (num<18&&num>0)
    {
        cout<<"He is too young to create a Account!!"<<endl;
        return 1;
    }
    else if(num<=0||num>115)
    {
        cout<<"Wrong Age is Entered"<<endl;
        return 1;
    }

    return -1;

}
void person::set_Date_of_birth(string date) //SETTING THE DATE OF BIRTH OF PERSON
{
    int trip=1;
   char array[100];

    try
    {
        if(date.empty())
        {
            throw "Wrong Date of birth Entered";
        }
          /*else
        {
            for(int i=0;i<date.length();i++)
            {
              if((date.compare("47")||date.compare("59"))
                {
                     throw "Wrong Date of birth Entered";
                     break;
                }
            }
        }*/
    }
          catch(const char *a)
          {
              cout<<a<<endl;
          }

    Date_of_birth=date;

}


int person::set_Gender(string gender)
{

    if(gender == "Male" || gender == "Female" || gender == "male" || gender == "female") //CHECKING GENDER RESTRICTIONS
    {
       Gender = gender;
       return 0;
    }
    else
    {
        cout << "Wrong Gender is Entered" << endl;
        return 1;
    }

}

void person::set_Name(string name) //SET_NAME OF THE PERSON
{
    Name=name;
}

//////////////////////////////// END_OF_SET_FUNCTIONS_FOR_PERSON///////////////////////////

//////////////////////////////// GET_FUNCTIONS_FOR_PERSON///////////////////////////

int person::get_age()const
{
    return Age;
}

string person::get_Date_of_birth()const
{
    return Date_of_birth;
}
string person::get_gender()const
{
    return Gender;
}
string person::get_Name()const
{
    return Name;
}
//////////////////////////////// END_0f_GET_FUNCTIONS_FOR_PERSON///////////////////////////

void person::input_person()
{
    string name,date,gender;
    int age;
    fflush(stdin);
    cout<<"Enter the  name:";
    getline(cin,name);
    set_Name(name);
    cout<<"Enter the  Age:";
    cin>>age;
    while(set_Age(age))
    {cout<<"Enter the  Age:";
    cin>>age;
    while (cin.fail())
     {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "You can only enter numbers.\n";
        cout << "Enter the Age :";
        cin >> age;
     }
    }

    cout<<"Enter the  Date of Birth:";
    cin>>date;
    set_Date_of_birth(date);
    cout<<"Enter the  Gender:";
    cin>>gender;
    while(set_Gender(gender))
    {
        cout<<"Enter the Gender:";
        cin>>gender;
    }
}
//////////////////
void person::display_person() const
{
    cout<<"Name:"<<Name<<endl;
    cout<<"Age:"<<Age<<endl;
    cout<<"Date:"<<Date_of_birth<<endl;
    cout<<"Gender:"<<Gender<<endl;
}
