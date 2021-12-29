#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>obj;
    obj.push_back(0);
    obj.push_back(1);
    vector<int>::iterator it;
    it = begin(obj);
    obj[1]=3;
    cout << *it << endl;
    cout << obj.size() << endl;
}