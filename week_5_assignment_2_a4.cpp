#include<iostream>
#include<vector>
using namespace std;

int diff_sumOdd_sumEven(vector<int> &v){
    int sum_odd = 0;
    int sum_even = 0;

    for(int i =0, j=1; i<v.size(), j<v.size(); i+=2, j+=2){
        sum_odd += v[i];
        sum_even += v[j];
    }
    return sum_odd-sum_even;

}

int main(){
    vector<int>v;
    v.push_back(22);
    v.push_back(1);
    v.push_back(10);
    v.push_back(4);
    v.push_back(230);
    v.push_back(256);

    cout<<diff_sumOdd_sumEven(v);
}