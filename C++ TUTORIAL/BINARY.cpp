#include<iostream>
using namespace std;
#include<vector>

int main(){
    
    vector<int>v={2,4,6,9,11,12,13};
          
    int target=9;

    int l=0;
    int r=v.size()-1;
    int mid=(l+r)/2;

    while(l<=r){
        if(v[mid]==target){
            cout<<"target found at index"<<mid<<endl;
            break;
        }
        else if(v[mid]<target){
            l=mid+1;
        }
        else if(v[mid]>target){
            r=mid-1;
        }
    }
    return 0;

}