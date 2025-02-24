//Hierarchical Inheritance

#include<iostream>
using namespace std;

class A {
public:
    int No_stu_a = 60;
};

class B : public A {
public:
    int No_stu_b = 40;
};

class C : public A {
public:
    int No_stu_c = 50;

    void display() {
        cout << "Strength of each class" << endl;
        cout << "A: " << No_stu_a << endl;
        cout<<"B will not show value "<<endl;
        cout << "C: " << No_stu_c << endl;
    }
};

int main() {
    C c;
    c.display();
}

