#include <iostream>
using namespace std;

bool sort_check(int arr[], int n){
    for(int i = 1; i < n ; i++){
        if(arr[i] < arr[i-1]){
           return false;
        }
       
    }

   return true; 
}

int main(){
    int n = 6;
    int arr[] = {2,3,4,5,6,1};

    if(sort_check(arr,n)){
        cout<<"The array is sorted";
    }
    else{
         cout<<"The array is not sorted";
    }
}