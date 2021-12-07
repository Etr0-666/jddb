#include<iostream>
using namespace std;
class test{
    public:
        int returnPr(void);
    private:
        int ppp=2;
    protected:
        int pr=1;
};
int test::returnPr(void){
    return pr;
}
class test2:test{
    public:
        int returnPr2(void);
        int returnPri(void);
};
int test2::returnPr2(void){
    return pr;
}
int test2::returnPri(void){
    return this->returnPr();
}
int main(){
    test t1;
    test2 t2;
    int t3=t1.returnPr();
    int t4=t2.returnPri();
    cout << t3 <<endl << t4 << endl;
}