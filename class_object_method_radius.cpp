#include<iostream>
# define M_PI  
#include<cmath>
using namespace std;


class Circle{

    public:
        float radius,diameter,circumference,area;

    void takeInput(){
        cout<<"Enter radius:"<<endl;
        cin>>radius;
    }

    void calcCircle(){

        diameter=2*radius;
        area=M_PI*radius*radius;
        circumference=2*M_PI*radius;
        cout<<diameter<<endl;
        cout<<area<<endl;
        cout<<circumference<<endl;
    }


};

int main(){
    Circle c;
    c.takeInput();
    c.calcCircle();


    return 0;
}