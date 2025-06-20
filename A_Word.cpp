#include<iostream>
#include<string.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int upp=0,low=0;
    for(char c:s){
        if(isupper(c)) upp++;
        else low++;
    }
    if(upp>low){
        for(char &c:s) c = toupper(c);
    }else{
        for(char &c:s) c = tolower(c);
    }
    cout<<s<<endl;
}