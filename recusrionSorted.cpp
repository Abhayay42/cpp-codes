#include<iostream>
using namespace std;

bool sorted(int arr[] , int n ){

    if(n==1){
        return true;
    }
    bool restarr = sorted(arr+1,n-1);
    return arr[0]<arr[1] && restarr; 
}

int main(){
    int arr[]={1,20,3,4,5};
    cout<<sorted(arr,5);
    if(sorted(arr,5)){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
}