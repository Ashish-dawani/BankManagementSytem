#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "person.h"
using namespace std ;

class Employee : public person
{
    public:
        Employee();

    protected:

    private:
        int Employee_id;
        static int No_of_employe;
};

#endif // EMPLOYEE_H
