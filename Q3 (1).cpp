#include<iostream>
using namespace std;
void age(int n){
    if(n>=18){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
int main()
{
    int n;
    cin>>n;
    age(n);
}
