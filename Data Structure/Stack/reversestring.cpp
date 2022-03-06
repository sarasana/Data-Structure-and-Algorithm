// Reverse a string using stack
#include<iostream>
#include<stack>
using namespace std;
void reverse(string s){
    stack<string>str;
    string temp="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' '){
            str.push(temp);
            temp="";
        }
        else{
            temp=temp+s[i];
        }

    }
    str.push(temp);
    while(!str.empty()){
        temp=str.top();
        cout<<temp<<"";
        str.pop();
    }

  cout<<endl;
}
int main(){
    string s="I love to code";
    reverse(s);
    return 0;
}