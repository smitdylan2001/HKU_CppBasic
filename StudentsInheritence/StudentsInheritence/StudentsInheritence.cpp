#include <iostream>
#include "Student.h"
#include "Docent.h"



int main()
{
    Student student1(19, "Dylan", 60);
    Docent docent1(80, "Edwin", 5);

    if (docent1.age >= 68) {
        docent1.salary = 2;
    }

    std::cout << "Name: " << docent1.getName() << std::endl << "Age: " << docent1.getAge() << std::endl << "Salary: " << docent1.salary << std::endl;
}