#include<iostream>
#include<vector>
#include<limits>
using namespace std;

void three_largest_num(vector<int>v){
    int l1 = INT8_MIN;
    int l2 = INT8_MIN;
    int l3 = INT8_MIN;
    for(int i = 0; i<v.size(); i++){
        if(v[i]>l1) l1 = v[i];
        if(v[i]>l2 && v[i]!=l1) l2 = v[i];
        if(v[i]>l3 && v[i]!=l1 && v[i]!=l2) l3 = v[i];
    }
    cout<<"The three largest terms are: "<<l1<<" "<<l2<<" "<<l3;
    cout<<endl;
}

int main(){
    int x;
    vector<int>v(5);
    v.push_back(230);
    v.push_back(10900);
    v.push_back(10);
    v.push_back(9);
    v.push_back(45);
    three_largest_num(v);
}