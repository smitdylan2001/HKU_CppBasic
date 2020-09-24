#include <iostream>
#include <string>

using namespace std;

class student {
private:
    string studentName;
    int studentNumber;
public:
    course courses[];
};

class course {
private:
    int studentNumber;
    student students[];
public:
    string courseName;
    string teachers[];
};

class teacher {
private:
    string teacherName;
public:
    course courses[];
};

int main()
{

   
}