#include<bits/stdc++.h>
using namespace std;

// default constructor
class  Customer{
    public:
    string name;
    int account_num;
    int balance;
    int *roi;
    Customer(){//rn automaticali  that has not any return type
    roi = new int[100];
        cout<<"Constructor is called"<<" default constructor"<<endl;
    }
    // Customer(string name,int account_num,int balance){//rn automaticali  that has not any return type
    //     this->name = name;
    //     this->account_num = account_num;
    //     this->balance = balance;
    //       cout<<"Constructor is called"<<" parametric constructor"<<endl;
    // }

    //constructor overloading when passing different -2 parameter on same class name
    Customer(string name,int account_num){//rn automaticali  that has not any return type
        this->name = name;
        this->account_num = account_num;
        this->balance = balance;
          cout<<"Constructor is called"<<" parametric constructor"<<endl;
    }

     inline Customer(string s, int a, int b) : name(s), account_num(a), balance(b) {
        cout << "Constructor is called: inline constructor" << endl;
    }
    //copy constructor
    Customer(Customer &b){
        name = b.name;
        account_num = b.account_num;
        balance=b.balance;

        cout<<"copy constructor"<<endl;
    }
    void display(){
        cout<<"Name: "<<name<<" "<<"Account_number"<<" "<<account_num<<" "<<"balence"<<" "<<  balance;
    }
};


int main(){
    Customer A1;
    Customer A2("Abhay",12345,1200);
    A2.display();
    Customer A3("NP Singh",1235);
    A3.display();
    cout<<endl;
    Customer A4(A3);
    A4.display();

}
