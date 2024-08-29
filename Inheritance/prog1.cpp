#include<bits/stdc++.h>
using namespace std;
class Human{
    protected:
    string name;
    int age;
    int weight;
};
class Student:protected Human{
    private:
    int roll;
    int fees;
    public:
    Student(string n,int a,int w,int r,int f){
        name=n;
        age=a;
        weight=w;
        roll=r;
        fees=f;
    }
    void display(){
        cout<<name<<" ";
        cout<<age<<" ";
        cout<<weight<<" ";
        cout<<roll<<" ";
        cout<<fees<<" ";
    }

};

int main (){
Student A("Aman Verma",22,70,12,120);
A.display();
}