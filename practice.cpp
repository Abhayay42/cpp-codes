#include <iostream>
#include<climits>
using namespace std;

int callarray(int n){
    int arr[n];
    int maxno= INT_MIN;
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        for(int i =0;i<n;i++){
            maxno = max(maxno,arr[i]);
        }
        cout<<maxno;
    
}
int main(){
    int n;
    cin>>n;
    callarray(n);
    
}