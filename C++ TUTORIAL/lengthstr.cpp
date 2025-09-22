#include<bits/stdC++.h>
using namespace std;
int main(){

    string str;
    cout<<"enter a string";
    cin>>str;
    int count=0;
    int i=0;
    for(i;i<=5;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count+=1;
        }else {
        count+=0;
    }
    }cout<<count;
    return 0;
}
