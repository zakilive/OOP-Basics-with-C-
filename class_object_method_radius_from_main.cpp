#include<iostream>
# define M_PI  
#include<cmath>
using namespace std;


class Circle{

    public:
        float diam,radius,circumference,area;


    void diameter(float x){
        diam=2*x;
        cout<<"Diameter="<<diam<<endl;
    }

    void findCircumference(float x){
        circumference=2*M_PI*x;
        cout<<"Circumference="<<circumference<<endl;
    }

    int findArea(float x){
        area=M_PI*x*x;
        cout<<"Area="<<area<<endl;
    }


};

int main(){
    
    float radius;
    cout<<"Enter radius of your circle"<<endl;
    cin>>radius;

    Circle c;
    c.diameter(radius);
    c.findCircumference(radius);
    c.findArea(radius);


    return 0;
}