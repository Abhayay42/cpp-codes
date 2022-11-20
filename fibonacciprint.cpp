#include<iostream>
using namespace std;

void fibonacci(int num){
    int t1 = 0;
    int t2 = 1;
    int nexterm;
    for(int i =0 ; i<=num ; i++){
        cout<<t1<<" ";
        nexterm=t1+t2;
        t1=t2;
        t2=nexterm;

    }
    return ;
}
int main(){
    int n;
    cin>>n;
    fibonacci(n);

}