#include "Employee.h"
#include "Customer.h"
#include "person.h"
#include <iostream>
using namespace std;

Employee::Employee()
{
    Employee_id=No_of_employe;
    No_of_employe++;
}
int Employee::No_of_employe=1;
