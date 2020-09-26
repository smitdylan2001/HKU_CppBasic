//Because this assignment is very vague and because I find the structure of classes in C++ hard this code still has errors and might not be complete at all

#include <iostream>
#include <string>

using namespace std;

class student {
private:
    string studentName;
    int studentNumber;
public:
    course courses[];
    void signUpForCourse();
};

class course {
private:
    int studentNumber;
    student students[];
public:
    string courseName;
    teacher teachers[];
};

class teacher {
private:
    string teacherName;
public:
    course courses[];
    void GiveCourse();
};

class System {
private:
public:
    course courses[];
    student students[];
    teacher teachers[];

    void generateLessons();
};

int main()
{

   
}