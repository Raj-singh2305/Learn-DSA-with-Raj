#include<iostream>
using namespace std;

int main(){
  int n ;
  cout<<"Enter ruppees to convert into notes: ";
  cin>>n;

  int notes[] = {2000,500,200,100,50,20,10,5,2,1};
  int count[10] = {0};
  for(int i=0;i<10;i++){
      if(n>=notes[i]){
          count[i] = n/notes[i];
          n = n - count[i]*notes[i];
      }
  }
  cout<<"Your amount in notes is: "<<endl;
  for(int i=0;i<10;i++){
      if(count[i]!=0){
          cout<<notes[i]<<" : "<<count[i]<<endl;
      }
  }

  return 0;
}