#include<iostream>
#include<vector>
using namespace std;

void plaindrome_check(vector <int> &v){
    bool flag = false;
    for(int i =0, j =v.size()-1; i<=j; i++,j--){
        if(v[i] == v[j]) flag = true;
        else
        {
            flag = false;
            break;
        }
        
    }
    if(flag == true) cout<<"It is a palindrome";
    else cout<<"It is not a palindrome";
}


int main(){
    vector<int>v;
    v.push_back(22);
    v.push_back(11);
    v.push_back(10);
    v.push_back(10);
    v.push_back(11);
    v.push_back(22);

    plaindrome_check(v);
}
