#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"


int main ()
{
    int selection =0;
    vector<Student>studentList;
    vector<Student>::iterator it = studentList.begin();
    string haku;


    Student A("Jarmo Mutkala", 30);
    Student B("Jyrki Jori", 26);
    Student C("Salme Alakuusi", 28);
    Student D("Olli Orava", 27);

    studentList.push_back(A);
    studentList.push_back(B);
    studentList.push_back(C);
    studentList.push_back(D);

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        /*
        case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            break;
        */
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            cout << "Opiskelijoiden nimet:" << endl;;
            for (Student s: studentList){
                cout << s.getName() << ", " ;
            }
            cout << endl;
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(), [](Student& A, Student& B){
                return A.getName() < B.getName();
            });

            cout << endl << "Lajittelu ian perusteella" << endl;
            for(Student &s: studentList){
                s.printStudentInfo();
            }

            break;

        case 3:

            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(), [](Student& A, Student& B){
                return A.getAge() < B.getAge();
            });

            cout << endl << "Lajittelu ian perusteella" << endl;
            for(Student &s: studentList){
                s.printStudentInfo();
            }

            break;
        case 4:
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            // vector<Student>::iterator it = studentList.begin();

            cout << "Anna opiskelijan nimi: " << endl;
            // string haku;
            // cin >> haku;
            cin.ignore();
            getline(cin, haku);

            it = find_if(studentList.begin(),studentList.end(),
                         [haku](const Student & m) -> bool { return m.getName() == haku; });
            if ( it != studentList.end() ){
                cout << "found";
                it->printStudentInfo();
            }
            else{
                cout << "not found";
            }


/*
            const int n = find_me();
            std::find_if(v.begin(), v.end(),
                         [n](const MyClass & m) -> bool { return m.myInt == n; });
*/
            break;

           default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;
    }
    }   while(selection < 5);

return 0;
}

