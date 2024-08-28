#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    string name;
    int age;
    public:
    void setname(string name){
        this->name=name;
    }
    void setage(int ag){
        age=ag;
    }
    void getname(){
        cout<<name<<endl;
    }
    int getage(){
        cout<<age<<endl;
    }
};
// size of class A is aaaacpppdddddddd p for padding block
class A{
    char c;
    int a;
    char f;
    double d;
};
int main(){
Student s1,s2;
s1.setname("rohit");
s1.setage(20);
s2.setname("virat");
s2.setage(30);
s1.getname();
s2.getname();
s1.getage();
s2.getage();
A obj;
cout<<"Size of class A is"<< sizeof(obj); // concept of padding ids used 
}