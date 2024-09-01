#include<bits/stdc++.h>
using namespace std;

// default constructor
class  Customer{
    public:
    string name;
    int *roi;
    Customer(){
        cout<<"Constructor is called"<<" default constructor"<<endl;
        name = "Rohit";
        roi = new int;
        *roi = 10;
    }
    ~Customer(){ // destructor
        delete roi;
        cout<<"destructure is called";
    }
};


int main(){
    Customer A1;

}
