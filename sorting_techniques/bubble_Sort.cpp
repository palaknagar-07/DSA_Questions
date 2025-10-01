#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
   for(int i = n-1; i >= 0 ; i--){
    int didSwap = 0;
    for(int j = 0; j <= i-1; j++){
        if(arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            didSwap = 1;
        }
    }
    if(didSwap == 0){
        break; //optimized as, if at any point there are zero swaps, that means the array is already sorted, thus break
        
    }
    cout<<"Runs\n";
   }
}
// loop limits difference only

// void bubbleSort(int arr[], int n){
//    for(int i = 0; i <= n-1 ; i++){
//     for(int j = 0; j < n-1-i; j++){
//         if(arr[j] > arr[j+1]){
//             int temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;
//         }
//     }
//    }
// }

int main(){
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>> n;
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    bubbleSort(arr, n);
    cout<<"Elements of array after sorting : "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i] <<" ";
    }
    
}