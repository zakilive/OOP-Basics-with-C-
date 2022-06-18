//Ref: cppreference.com c++17
#include<iostream>
using namespace std;


class Example{

    public:
        void add(int x)
        {
            n=n+x;
        }   
    private:
        int n=0;

};

int main()
{
    Example e;
    //e.n=8;

    return 0;
}