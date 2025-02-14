#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student
{
public:
    Student(string n, int a);
    void printStudentInfo();
    void setName(const string &newName);
    string getName() const;
    int getAge() const;
    void setAge(int newAge);

private:
    string name;
    int age;


};

#endif // STUDENT_H
