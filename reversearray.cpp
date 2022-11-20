#include<iostream>
using namespace std;

void printarraybef(int arr[] ,int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void printarrayaft(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void mainpro(int arr[] , int start , int end){
    while(start<end){
        arr[start]=(arr[start]+arr[end])-(arr[end]=arr[start]);
         start++;
         end--;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n]; 
    printarraybef(arr,n);
    mainpro(arr,0,n-1);
    printarrayaft(arr,n);
    return 0;
}
