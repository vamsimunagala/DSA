#include<bits/stdc++.h>
using namespace std;

bool isEven( int n){
    return(n%2==0);
}

int main (){
    int n;
    cin>>n;

    if(isEven(n)==true){
        cout<<"Number is Even";
    }
    else{
        cout<<"Number is Odd"<<endl;
    }
    return 0;
}