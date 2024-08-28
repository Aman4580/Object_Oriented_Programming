#include<bits/stdc++.h>
using namespace std;
class Customer{
    string name;
    int acc_num;
    int balence;
    static int total;
    public:
    Customer(string s, int a,int b){
        name=s;
        acc_num=b;
        balence=a;
        total++;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Account Number: "<<acc_num<<endl;
        cout<<"balence"<<balence<<endl;
    }
    static int getTotal(){
        return total;
    }
};
int Customer::total = 0;
int main(){
Customer a1("Aman Verma",476481,12000);
Customer a2("Abhay Verma",476481,12000);
Customer a3("Prince Verma",476481,12000);
a1.display();
a2.display();
a3.display();
cout<<endl;
cout<<Customer::getTotal();
}