#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sorted_or_not(vector<int>&v){
    bool flag = false;
    for(int i=0; i<v.size()-1; i++){
        if(v[i]<v[i+1]){
            flag = true;
            // cout<<flag<<endl;
        }
        else
        {
            flag = false;
            // cout<<flag<<endl;
            break;
            
        }
        
    }
    // cout<<flag<<endl;
    if(flag == 1) cout<<"Sorted"<<endl;
    if(flag == 0) cout<<"Not Sorted"<<endl;
}

void display(vector<int>&v){
    for(int i =0; i<v.size();i++ ){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>v;
    v.push_back(7);
    v.push_back(11);
    v.push_back(405);
    v.push_back(120);
    v.push_back(9);
    v.push_back(1230);
    v.push_back(70);

    display(v);

    sorted_or_not(v);

    sort(v.begin(),v.end());

    display(v);

    sorted_or_not(v);
}