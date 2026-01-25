#include<iostream>
using namespace std;

int AP_nth_term(){
    int n ;
    cout << "Enter the term number (n): ";
    cin >> n;   

    int nth_term= 3*n + 7;
    return nth_term;
}

int main(){
    int term = AP_nth_term();
    cout << "The nth term of the AP is: " << term << endl;
    return 0;
}