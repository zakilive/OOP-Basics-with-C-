//Program to find average alongside odd or even in different modular function with OOP paradigm

#include<iostream>
using namespace std;

class Calculate{

    public:
        int num1, num2, avg, total;

    void takeInput(){

        cout<<"Please enter two number : "<<endl;
        cin>>num1>>num2;

    }

    void avgNumber()
    {   
        total=num1+num2;
        avg=total/2;
        cout<<"Average is: "<<avg<<endl;
    }

    void findOdd(){
        if(total%2!=0)
            cout<<"Odd"<<endl;
    }


    void findEven(){

        if(total%2==0)
           cout<<"Even"<<endl;
    }
};

int main(){
    Calculate c;
    c.takeInput();
    c.avgNumber();
    c.findEven();
    c.findOdd();

    return 0;
}