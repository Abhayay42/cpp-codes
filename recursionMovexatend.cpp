#include<iostream>
#include<cstring>
using namespace std;

string takextoend(string str){
string cc = str.substr(0,1);
string cs = str.substr(1);

if(str.length()==1){
return str;
}

if(cc=="x"){
return takextoend(cs) + cc;
}

else{
return cc + takextoend(cs);
}

}

int main(){
string str="axbcxxxvjxxxxf";
cout<<takextoend(str);
}