#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int d;
        cin>>d;
        int sum = (d/10)+(d%10);
        cout<<sum<<endl;
    }
    return 0;
}