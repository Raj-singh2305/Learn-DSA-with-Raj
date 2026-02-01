#include<iostream>
using namespace std;

int SquareRootInteger(int n){
    int s = 0, e = n;
    int ans = -1;

    while(s <= e){
        long long mid = s + (e - s)/2;

        if(mid * mid == n)
            return mid;
        else if(mid * mid < n){
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempsol){
    double factor = 1;
    double ans = tempsol;

    for(int i = 0; i < precision; i++){
        factor = factor / 10;
        for(double j = ans; j * j <= n; j += factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int tempSol = SquareRootInteger(n);
    cout << "Integer square root: " << tempSol << endl;

    cout << "Precise square root: " 
         << morePrecision(n, 3, tempSol) << endl;
}
