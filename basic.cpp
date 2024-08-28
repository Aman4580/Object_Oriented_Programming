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
    void getage(){
        cout<<age<<endl;
    }
};
int main(){
Student s1;
s1.setname("rohit");
s1.setage(20);
s1.getname();
s1.getage();
}