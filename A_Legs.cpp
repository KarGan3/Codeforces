#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        int leg = t / 4 + (n % 4 != 0);
        cout<<leg<<endl;
    }
}