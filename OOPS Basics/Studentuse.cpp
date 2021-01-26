#include <iostream>
using namespace std;
#include "Student.cpp"

int main(){

    Student s1;   //Constructor 1 called

    Student s2(101); //Constructor 2 called

    Student s3(20, 102);  //Constructor 3 called

    Student s4(s3);   //Copy Constructor

    s1 = s2;       // Copy assignment operator

    Student s5 = s4;   //Copy constructor called

/*    //Copy Assignment Operator(=)

    Student s1(10, 1001);
    Student s2(20, 2001);

    Student *s3 = new Student(30, 3001);

    s2 = s1;

    *s3 = s1;

    s2 = *s3;

    delete s3;

    */

    /*
    Student s1(10,1001);
    cout<< "S1 : ";
    s1.display();

    Student s2(s1);
    cout<< "S2 : ";
    s2.display();

    Student *s3 = new Student(20, 2001);
    cout<< "S3 : ";
    s3 -> display();

    Student s4(*s3);
    cout<< "S4 : ";
    s4.display();

    */
}