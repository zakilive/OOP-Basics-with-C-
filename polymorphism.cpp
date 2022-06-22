//Poly = many morphism= forms 
//We use this to reusuabitly
//One method in different tasks

#include<iostream>
using namespace std;

class Animal{

public:
    void animalSound(){

        std::cout<<"Animal makes sound\n"<<std::endl;;
    
    }

};


//Overriding the animalSound() method with other text
class Pig: public Animal{

    public:
        void animalSound(){

            std::cout<<"The pig says: wee see\n"<<std::endl;
        
        }

};

class Dog: public Animal{
    public:
        void animalSound(){

            std::cout<<"The dog says: bow bow\n"<<std::endl;
        
        }

};


int main(){
    Animal a;
    Pig p;
    Dog d;


    a.animalSound();
    p.animalSound();
    d.animalSound();




    return 0;
}