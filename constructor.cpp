//Constructor is a special type of method/function same name as class name
//it has no return type

#include<iostream>

using namespace std;

class MyClass{

public:
    int x,y;
    
    MyClass(){
        cout<<"Enter two numbers ="<<endl;
        cin>>x>>y;
    }
    void display(){
        cout<<"Sum of two numbers:"<<x+y;
    }
    
};


int main(){

    MyClass myObj;
    myObj.display();

    return 0;
}