#include<iostream>
#include<string>
using namespace std;
class A{
    public:
        virtual void foo(){
            cout << "A" << endl;
        }
};
class B:public A{
    public:
        void foo(){
            cout << "B" << endl;
        }
};

int main(){
    A a;
    a.foo();
    return 0;
}