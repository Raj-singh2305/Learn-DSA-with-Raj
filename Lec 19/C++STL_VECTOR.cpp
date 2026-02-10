#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v; // create an empty vector of integers

    v.push_back(1); // add elements to the vector
    v.push_back(2);
    v.push_back(3);

    int size = v.size(); // get the size of the vector
    cout<<"Size of the vector: "<<size<<endl;

    cout<<"capacity of the vector: "<<v.capacity()<<endl; // get the capacity of the vector
    for(int i=0;i<size;i++){
        cout<<v[i]<<" "; // access elements using index
    }         
    cout<<endl;

    cout<<"Element at 2nd index: "<<v.at(2)<<endl; // access element at index 2

    cout<<"empty or not: "<<v.empty()<<endl; // check if the vector is empty

    cout<<"First element: "<<v.front()<<endl; // first element of the vector

    cout<<"Last element: "<<v.back()<<endl; // last element of the vector
}
//capacity is the total size of the allocated memory for the vector, which may be greater than the actual number of elements in the vector (size). The vector can grow in size as needed, and when it does, it may allocate more memory than currently needed to accommodate future growth.
//capacity same rhegi if we use pop operation but size km ho jayega
