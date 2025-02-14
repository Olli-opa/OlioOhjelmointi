#include "student.h"

Student::Student(string n, int a) {
    name = n;
    age = a;
}

void Student::printStudentInfo()
{
cout << name << ": " << age << endl;

}

void Student::setName(const string &newName)
{
    name = newName;
}

string Student::getName() const
{
    return name;
}

int Student::getAge() const
{
    return age;
}

void Student::setAge(int newAge)
{
    age = newAge;
}

