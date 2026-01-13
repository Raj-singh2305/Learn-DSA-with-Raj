#include<iostream>
using namespace std;
int main(){
    for(int i = 0; i<=15 ;i+=2){
        cout<< i << " ";
         
        if(i&1){//bitwise AND => i odd hoga to 1 agar i even hoga toh 0
            continue;
        }

        i++;
    }
}
