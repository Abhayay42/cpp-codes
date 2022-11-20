#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool palindrome(char yoyo){
	bool check =0;
	for(int i =0;i<=ch.length;i++){
		if(str[i]!=str[str-1-i]){
			check = 0;
		}
		else{
			check=1;
		}
	}
	return check;
}

int main() {
	string stro;
	cin>>stro;
	palindrome(stro);
	
	return 0;
}