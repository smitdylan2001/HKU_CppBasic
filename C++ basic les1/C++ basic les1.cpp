#include <iostream>

int main(){
    int number;
    std::cout << "What is your age: ";
    number = GetAge();

    std::cout << std::endl << "Your age is: " << number;

    return 0;
}

int GetAge() {
    int age;

    std::cin >> age;

    return age;
}