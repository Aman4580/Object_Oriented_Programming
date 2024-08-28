#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int age;
    int roll;
};
int main(){
Student *s1 = new Student;
s1->name = "Aman Verma";
s1->age = 20;
s1->roll = 1;
cout<<s1->name<<endl;
cout<<s1->age<<endl;
cout<<s1->roll<<endl;
}