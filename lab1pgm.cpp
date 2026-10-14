#include <iostream>
using namespace std;
class Student{
private:
    int rollno;
    string name;
public:
    Student(int r, string n){
        rollno = r;
        name = n;
        cout << "Student object created" << endl;
    }
    void display(){
        cout << "Rollno: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
    ~Student(){
        cout << "Student object destroyed" << endl;
    }
};
    int main(){
        int r1;
        string n1;
        cout << "Enter the rollno: ";
        cin >> r1;
        cout << "Enter the name: ";
        cin >> n1;
        Student s1(r1,n1);
        s1.display();
        return 0;
    }
