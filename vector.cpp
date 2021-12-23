#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }//123
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end(); it++){
        cout<<*it<<endl;
    }//123
    for(auto element:v){
        cout<<element<<endl;
    }//123

    v.pop_back(); //12

    vector<int> v2 (3,50);
    // 50 50 50

    swap(v,v2);

    for(auto element:v){
        cout<<element<<endl;
    }// 50 50 50
    for(auto element:v2){
        cout<<element<<endl;
    } //1 2

    return 0;
}