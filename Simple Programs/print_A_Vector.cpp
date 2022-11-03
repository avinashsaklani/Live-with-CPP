#include<bits/stdc++.h>
using namespace std;

void scanVector(vector<int> &v){
    cout<<"Enter the size of Vector ";
    int size;
    cin>>size;
    for(int i = 0; i<size; i++){
        cout<<"Enter value at Position "<<i<<" : ";
        int num;
        cin>>num;
        v.push_back(num);
    }
    return;
}

void printVector(vector<int> &v){
    cout<<"----Values in the Vector are as follows : "<<endl;
    for(int i = 0; i<v.size(); i++){
        cout<<"Value at Position "<<i<<" is -> ";
        cout<<v[i]<<endl;
    }
    return;
}

int main(){
     vector<int> v;
     scanVector(v);
     printVector(v);

return 0;
}