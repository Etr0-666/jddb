#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
typedef struct stuinfo{
    int number;
    bool gender;
    int age;
    int score;
}info;
class stu{
    public:
        int id;
        string name;
        int age;
        bool gender;
        int score;
};
int main(){
    stu stu1,stu2;
    vector<stu>stus;
    stu1.id=114514;
    stu1.name="WenDavid";
    stu1.age=19;
    stu1.gender=true;
    stu1.score=100;
    stu2.id=191981;
    stu2.name="Yao";
    stu2.age=19;
    stu2.gender=true;
    stu2.score=101;
    stus.push_back(stu1);
    stus.push_back(stu2);
    ifstream ifs;
    ofstream ofs;
    ofs.open("stu.txt",ios::binary);
    int length=stus.size();
    ofs.write((char*)&length,sizeof(int));
    ofs.write((char*)&stu1,sizeof(stu1));
    ofs.write((char*)&stu2,sizeof(stu2));
    ofs.close();
    stu stu3,stu4;
    ifs.open("stu.txt",ios::binary);
    int length2;
    ifs.read((char*)&length2,sizeof(int));
    ifs.read((char*)&stu3,sizeof(stu3));
    ifs.read((char*)&stu4,sizeof(stu4));
    ifs.close();
    cout << length2 << endl;
    cout << stu4.name << endl;
    return 0;
}
/*
int main(){
    ifstream ifs;
    ofstream ofs;
    ofs.open("stu.txt",ios::binary);
    info stu1,stu2;
    stu1.number=001;
    stu1.gender=true;
    stu1.age=18;
    stu1.score=114514;
    ofs.write((char*)&stu1,sizeof(stu1));
    ofs.close();
    ifs.open("stu.txt",ios::binary);
    ifs.read((char*)&stu2,sizeof(stu2));
    cout << stu2.age << endl;
}
*/