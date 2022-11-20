#include<iostream>
using namespace std;
int main(){
    
    int arr[]={3,4,7,9,10,12,15};
    int key = 4;
    int start=0;
    int end=7;
    while(start<=end){

        int mid=(start+end)/2;

        if( arr[mid] == key ){
            cout<< " key found at "<<mid<<" index";
            break;
            
        }
        else if(arr[mid] > key){
            end = mid-1;
        }
        else {
            start = mid + 1;
        } 
        
    }
    return 0;
}
