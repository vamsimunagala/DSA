#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch,str[200] = "Javascript";
    int i=0,val;
    cout<<"\nCharacter\tASCII Value\n";
    while(str[i]){
        ch = str[i];
        val = ch;
        cout<<ch<<"\t\t\t"<<val<<endl;
        i++;
    }
    cout<<endl;
    return 0;
}