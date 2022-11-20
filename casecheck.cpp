#include <iostream>
using namespace std;
int main(){
    char yo;
    cin>>yo;
    if(yo>='a' && yo<='z'){
        cout<<"LOWERCASE";
    }
    else if(yo>='A' && yo<='Z'){
        cout<<"UPPERCASE";
    }
    else{
        cout<<"Invalid";
    }
}