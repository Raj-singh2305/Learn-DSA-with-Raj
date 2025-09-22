#include<bits/stdC++.h>
using namespace std;
int main(){
    int w=3;
    for(int F=0;F<=100;F+=w){
        float c=(F-32)*5.0/9.0;
        int n=c;
        if(c>=0){
            cout<< n<<endl;
        }
        else{
            cout<<c-n<<endl;
        }
    }
    return 0;
}