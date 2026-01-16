#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a Binary number: ";
    cin >> n;
    int ans = 0;
    int i = 0;

    while(n!=0){
        int digit=n%10;
        if(digit!=0 && digit!=1){
            cout<<" Enter a valid binary number ";
            return 0;
        }
        else{
            if (digit == 1){
                ans = ans + pow(2, i);
            
            }
            // else{
            //     ans = ans ;
            // }
        }
        i++;
        n = n / 10;

    }
    cout << "Decimal equivalent: " << ans << endl;
}