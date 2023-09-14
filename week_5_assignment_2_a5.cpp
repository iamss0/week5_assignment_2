#include<iostream>
#include<vector>
using namespace std;

void change(vector<int> &v){

    for(int i =0, j=1; i<v.size(), j<v.size(); i+=2, j+=2){
        cout<<v[i] + 10<<" ";
        cout<<v[j] * 2<<" ";
    }
    

}

void display(vector<int>&v){
    for(int i =0; i<v.size();i++ ){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>v;
    v.push_back(22);
    v.push_back(1);
    v.push_back(10);
    v.push_back(4);
    v.push_back(230);
    v.push_back(256);

    display(v);
    change(v);
}