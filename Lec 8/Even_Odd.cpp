#include<iostream>
using namespace std;

// int EvenOddNumber(){
//     int n ;
//     cout<<"Enter a number: ";
//     cin>>n;

//     if(n%2 == 0){
//         return 1;
//     }
//     else{
//         return 0;
//     }

// }


string EvenOddNumber(){
    int n ;
    cout<<"Enter a number: ";
    cin>>n;

    if(n%2 == 0){
        return "Number is Even";
    }
    else{
        return "Number is Odd";
    }

}

int main(){
    string result = EvenOddNumber();
    
    cout<<result<<endl;

    return 0;
}