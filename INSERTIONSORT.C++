#include<iostream>
using namespace std;
void insertionSort (int arr[], int n){
    for(int i = 1; i < n; i++){
        int j = i-1;
        int temp = arr[i];
        while(j>=0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
int main(){
    int arr[] = { 10,7,3,5,9 };
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

3 5 7 9 10 

=== Code Execution Successful ===
