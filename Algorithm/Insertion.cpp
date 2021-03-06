// Insertion Sort
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Logic for insertion sort
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(arr[j]>key && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout<<"Sorted array using insertion sort\n";
        for(int i=0;i<n;i++){
            cout<<arr[i];
        }
     return 0;
}