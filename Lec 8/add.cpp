#include<iostream>
using namespace std;

int add(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int sum = a + b;
    cout<<"Sum is: "<<sum<<endl;
    return sum;
}

int main(){
    int ans = add();
    cout << "add function returned: " << ans << endl;
    return 0;
}