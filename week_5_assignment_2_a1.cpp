#include<iostream>
#include<vector>
using namespace std;

void num_checker(vector<int> &v , int x){
    int temp = 0;
    for(int i=0; i<v.size(); i++ ){
        if(v[i]>x) temp++;
        else continue;
    }
    cout<<"There are "<<temp<<" elements greater than "<<x;    
}

int main(){
    int x;
    vector<int>v(5);
    v.push_back(23);
    v.push_back(12);
    v.push_back(100);
    v.push_back(98);
    v.push_back(45);
    cout<<"Enter a number for refernce to check greater numbersd from it: ";
    cin>>x;
    //check numbers greater than x and the count
    num_checker(v,x);
}
