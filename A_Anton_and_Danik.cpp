#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string word;
    cin>>word;
    int a=0;
    int b=0;
    for (char i : word){
        if(i == 'A')a++;
        else if (i == 'D')b++;    
    }
    if(a>b){
        cout<<"Anton"<<endl;
    }else if (a<b){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}