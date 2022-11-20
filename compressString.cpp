#include<iostream>
#include<string>
using namespace std;

void compress(string s){
    int count=1;
    for(int i=0;i<=s.length() -1 ;i++){
        if(s[i]!=s[i+1]){
            cout<<s[i]<<count;
            count=1;
        }
        else{
            count++;
        }

    }
}


int main(){
    string s ;
    cin>>s;
    compress(s);

}