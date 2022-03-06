#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>newstack;
    newstack.push(14);
    newstack.push(13);
    newstack.push(12);
    newstack.push(11);
    cout<<"Popping elements in the stack\n";
    newstack.pop();
    while(!newstack.empty()){
        cout<<""<<newstack.top();
        newstack.pop();
    }
    cout<<"\n";
    return 0;


}