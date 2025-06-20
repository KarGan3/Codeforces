#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t];
    double total = 0;
    double pi;
    for(int i=0;i<t;++i){
        cin>>pi;
        total +=pi;
    }
    cout<<fixed<<setprecision(12);
    cout<< total/t<<endl;
}