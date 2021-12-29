#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
class stu{
    public:
        int id;
        string name;
        int age;
        bool gender;
        int score;
};
class vec{
    public:
        void push_in();
        int return_stu();
    private:
        vector<stu>stus;
};
void vec::push_in(){
    stu stu_e;
    stu_e.id=114514;
    stu_e.name="david";
    stu_e.age=19;
    stu_e.gender=true;
    stu_e.score=100;
    stus.push_back(stu_e);
}
int vec::return_stu(){
    return stus.size();
}
int main(){
    int id=1;
    vec vec1;
    vec1.push_in();
    int a=vec1.return_stu();
    cout << a << endl;
}