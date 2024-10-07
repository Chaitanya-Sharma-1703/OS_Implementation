#include<iostream>
using namespace std;

//initialisation list
class student {
    int age;
    int &x;
    int const rollno;

    public:
    student(int r,int age): rollno(r),age(age),x(this->age){
        cout<<age<<" "<<x<<" "<<rollno<<endl; 
    }
    void display() const{
        cout<<age<<" "<<rollno<<endl;
    }
    void setter(int age){
        this->age=age;
    }

};
class student2{
    public:
    int age;
    int rollnumber;
    static int totalstudents;
    student2(int age,int rollnumber){
        this->age=age;
        this->rollnumber=rollnumber;
    }

    void display(){
        cout<<age<<" "<<rollnumber<<" "<<totalstudents<<endl;
    }
};
int student2::totalstudents = 0;
int main(){
    // student const s1(21,21);
    // s1.display();
    student2 s2(21,34);
    cout<<s2.totalstudents<<endl;
    s2.display();
}