#include<iostream>
#include<deque>
//deque is a double ended queue, which allows fast insertion and deletion at both ends. It is implemented as a dynamic array of fixed-size arrays, which allows it to grow in size as needed without the need for contiguous memory allocation like a vector.
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for(int i :d){
        cout<<i<<" ";
    }

    cout<<"Print First Index Element: "<<d.at(0)<<endl; // access element at index 0

    cout<<"front : "<<d.front()<<endl; // first element of the deque
    cout<<"back : "<<d.back()<<endl; // last element of the deque

    cout<<"empty or not : "<<d.empty()<<endl;// check if the deque is empty

    cout<<"size before erase : "<<d.size()<<endl; // size of the deque before erase

    d.erase(d.begin(),d.begin()+1); // erase the first element of the deque

    cout<<"size after erase "<<d.size()<<endl;

    cout<<"before pop front "<<endl;
    for(int i :d){
        cout<<i<<" ";
    }


}