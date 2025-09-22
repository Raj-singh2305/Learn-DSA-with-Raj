#include<bits/stdC++.h>
using namespace std;
#include<stack>
int main(){
    stack<int>st;
    st.push(10);
    st.push(8);
    cout<<st.top();
    cout<<endl;
    st.pop();//kuch return ni krega 
    cout<<st.top();
    
}