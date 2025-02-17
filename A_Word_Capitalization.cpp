#include<iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    cout<<(char)toupper(a[0]);
    for(int i=1;i<a.size();i++){
        cout<<a[i];
    }
}