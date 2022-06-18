//Basic understanding of OOP
#include<iostream>

using namespace std;

class Car{

    public:
    string brand;
    string modelname;
    int price;

    private:
    string region;

};

int main(){

    Car obj1;
    obj1.brand="Toyota";
    obj1.modelname="Corolla";
    obj1.price=20000;

    Car obj2;
    obj2.brand="Mercedez";
    obj2.modelname="Coyo";
    obj2.price=30000;

    Car obj3;
    obj3.brand="Tesla";
    obj3.modelname="S3";
    obj3.price=50000;


    cout<<"Object1 details:"<<endl;
    cout<<"Brand name:"<<obj1.brand<<endl;
    cout<<"Model name:"<<obj1.modelname<<endl;
    cout<<"Price:"<<obj1.price<<endl;

    cout<<"----------------"<<endl;
    
    cout<<"Object2 details:"<<endl;
    cout<<"Brand name:"<<obj2.brand<<endl;
    cout<<"Model name:"<<obj2.modelname<<endl;
    cout<<"Price:"<<obj2.price<<endl;

    cout<<"----------------"<<endl;
    
    cout<<"Object3 details:"<<endl;
    cout<<"Brand name:"<<obj3.brand<<endl;
    cout<<"Model name:"<<obj3.modelname<<endl;
    cout<<"Price:"<<obj3.price<<endl;

    return 0;
}