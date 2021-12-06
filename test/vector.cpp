#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>obj;
    obj.push_back(1);
    vector<int>::iterator it;
    it = obj.begin();
    cout << *it;
}