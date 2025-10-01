#include <iostream>
using namespace std;

int second_largest(int arr[], int n){
    int largest = arr[0], second = -1;

    for(int i = 0; i <= n-1; i++){
        if(arr[i] > largest){
            second = largest;
            largest = arr[i];   
        }else if(arr[i] > second && arr[i] != largest ){
            second = arr[i];
        }
    }
    return second;
}

int main(){
    int n = 6;
    int arr[6] = {1,45,3,50,4, 55};
    int result = second_largest(arr, n);
    cout<<result;
    return 0;

}