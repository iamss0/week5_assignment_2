#include<iostream>
#include<vector>
using namespace std;

int repeated_OrNot(vector<int> &v){
    for(int i=0;i<v.size();i++){
        int count=0;
        for(int j=0;j<v.size();j++){
            if(v[i]==v[j] && i!=j) count++;
        }
        if(count==0){
        cout<<v[i]<<" is a unique value in arr"<<endl;
        return 0;
        }
    }
}
int main(){
    vector<int>v;
    v.push_back(22);
    v.push_back(11);
    v.push_back(10);
    v.push_back(9);
    v.push_back(10);
    v.push_back(11);
    v.push_back(22);
    
    repeated_OrNot(v);
}