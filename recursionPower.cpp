#include<iostream>
using namespace std;



int powering(int n , int p){

    if(p==0){
        return 1;
    }
    int pre = powering(n,p-1);
    return n*pre;
}

int main(){
    int n,p ; 
    cin>>n>>p;
     cout<<powering(n,p);
}