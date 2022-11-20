#include<iostream>
#include<cmath>
using namespace std;

int primefactors(int n){
    int sum = 0, count = 0;
    while(n%2==0){
        sum += 2;
        n=n/2;
    }

    for(int i=3;i<=n;i=i+2){
        while(n%i==0){
            int num = i;
            while( num > 0)
            {
                sum = sum + num%10;
                num = num/10;
            }
            n=n/i;
        }
    }
    if(count == 0)
    return sum;
}

 int numbersum(int n){
    int sum = 0;
    while( n > 0)
            {
                sum = sum + n%10;
                n = n/10;
            }
            return sum;
 }
int main(){
    int n=911;
    cout << primefactors(n) << endl;
    if(primefactors(n)== numbersum(n)){
        cout<<"boston number";
    }
    else{
        cout<<"Not a boston  number";
    }
    return 0;
}