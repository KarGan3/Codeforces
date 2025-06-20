#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a = 0;
        string b;
        cin>>b;
        for(auto i : b){
            if(i == '1')a++;
        }
        cout<<a<<endl;
    }
    return 0;
}