// How stack is work
// PUSH operation in stack
#include<iostream>
#include<stack>
using namespace std;
// int main(){
//     stack<int>newstack;
//     for(int i=0;i<5;i++)
//     newstack.push(i);
//     cout<<"Popping the elements out of the stack ??";
//     while(!newstack.empty()){
//         cout<<""<<newstack.top();
//         newstack.pop();
//     }
//     cout<<endl;
//     return 0;
// }
//   OR
int main(){
    stack<int>newstack;
    newstack.push(14);
    newstack.push(13);
    newstack.push(12);
    newstack.push(11);
    while(!newstack.empty())
    {
        cout<<""<<newstack.top();
        newstack.pop();
    }
       cout<<"\n";
       return 0;
}