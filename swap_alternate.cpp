#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void swapAlternate(int arr[],int size){
 // for(int i=0;i<size&&i+1<size;i+=2){
    for(int i=0;i<size;i+=2){
        if(i+1<size)
        // swap(arr[i],arr[i+1]);
        {int temp =arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;}
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   swapAlternate(arr,n);
   printArray(arr,n);
    
    return 0;
}