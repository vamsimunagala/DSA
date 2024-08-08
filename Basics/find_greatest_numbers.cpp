// find the greatest element among 3 numbers 

#include<bits/stdc++.h>
using namespace std;

int main (){
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b && a>c){
        cout<<"The Great Number is "<<a<<endl;
    }
    
    else if(b>a && b>c){
        cout<<"The Great Number is "<<b<<endl;
    }
    else{
        cout<<"Great Number is "<<c<<endl;
    }
}