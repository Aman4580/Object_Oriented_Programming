#include <iostream>
using namespace std;

class Engineer {
public:
string specilization;
void work(){
    cout<<"My Specilizaton is this"<<specilization<<endl;
}
};
class Youtuber{
    public:
    int subscriber;
    void contentCreater(){
        cout<<" My subscriber is "<<subscriber<<endl;
    }
};

//multple inheritance
 class Teacher : public Engineer,public Youtuber{
    public:
    string name;
    Teacher(string s,string special,int subs){
        name = s;
        specilization = special;
        subscriber = subs;

    }
    void display(){
        cout<<"My name is "<<name<<endl;
        cout<<"Specialization is"<<specilization<<endl;
        cout<<"Subscriber is "<<subscriber<<endl;
    }
 };


int main() {
Teacher t("Aman Verma","CSE(Ai&ML)",1200);
t.display();
t.work();
t.contentCreater();
}
