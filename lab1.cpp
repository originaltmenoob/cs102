#include <iostream>
#include <string>
using namespace std;

//Problem2
void helloWorld() {
    cout << "Hello World!" << endl;
}
//Problem3
void input() {
    string text;
    cout<<"Enter text:";
    cin>>text;
    cout<<"you entered:"<<text<<endl;
}
//Problem4
void personalInfo() {
    string name;
    int age;

    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter your age:";
    cin>>age;
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
}
//Problem5
void AddressDisplay() {
    string city,country;
    cout<<"Enter city:";
    cin>>city;
    cout<<"Enter country:";
    cin>>country;
    cout<<city<<"\n"<<country<<endl;
}
//Problem6
void ThreeNumbers() {
    int a,b,c;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    cout<<"You entered:"<< a << " " << b << " " << c << endl;
}
//Problem7
void courseLab() {
    string course;
    int lab;
    cout<<"Enter course name:";
    cin>>course;
    cout<<"Enter lab number:";
    cin>>lab;
    cout<<"Course:"<<course<<" - Lab: "<<lab<<endl;
}
//Problem8
void banner() {
    cout << "========================\n";
    cout << "     CS102 PROGRAM\n";
    cout << "========================\n";
}
//Problem9
void studentTable() {
    string name, major;
    string id;
    double gpa;

    cout << "Enter full name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter student ID: ";
    cin >> id;

    cout << "Enter major: ";
    cin.ignore();
    getline(cin, major);

    cout << "Enter GPA: ";
    cin >> gpa;

    cout << "------------------------------------\n";
    cout << "        STUDENT INFORMATION\n";
    cout << "------------------------------------\n";
    cout << "Name  :" << name << endl;
    cout << "Student ID : " << id << endl;
    cout << "Major : " << major << endl;
    cout << "GPA   :" << gpa << endl;
    cout << "------------------------------------\n";
}
int main() {
    studentTable();
    return 0;
}
