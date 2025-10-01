#include <iostream>
using namespace std;



int largest_element(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i <= n-1; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;

}



int main(){
    int n = 6;
    int arr[6] = {1,45,3,50,4, 50};
    int result = largest_element(arr, n);
    // cout<<result;
    return 0;

}

// -----by using STL one liner

// #include <iostream>
// #include <algorithm> // for max_element
// using namespace std;

// int main() {
//     int n = 5;
//     int arr[5] = {1, 45, 3, 50, 4};

//     // max_element returns an iterator (pointer), so we dereference it
//     int result = *max_element(arr, arr + n);

//     cout << result;
//     return 0;
// }