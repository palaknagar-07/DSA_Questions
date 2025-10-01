#include <iostream>
#include <math.h>
using namespace std;

// int summation(int n, int i){

//    if(i>n){
//     return 0;
//    }
//     else{
//     return i+ summation(n, i+1);
//     }

//    }
// int summation(int i, int sum){

//    if(i<1){
//     return sum;
//    }
//     else{
//     return summation(i-1, sum+i);
//     }

//    }int summation(int n, int i){

//  int summation(int n){
//    if(n==0)
//    {
//     return 0;
//    }

//    else{
//     return n+summation(n-1);
//    }

//  }

// int factorial(int n){
//     if(n==0||n==1){
//         return 1;
//     }else{
//         return n*factorial(n-1);
//     }
// }

// void reverse_array(int arr[], int p, int q)
// {

//     if (p >= q)
//     {
//         return;
//     }
//     else
//     {
//         int temp = arr[p];
//         arr[p] = arr[q];
//         arr[q] = temp;

//         reverse_array(arr, p + 1, q - 1);
//     }
// }

bool check_palindrone(string &s, int len, int i = 0)
{

    if (i >= len/2)
    {
        return true;
    }
    else{
        if((s[i]) != s[len-i-1])
        return false;
    }  
       return check_palindrone(s, len, i +1);
    }
int main()
{
    // int arr[] = {2, 3, 5, 7, 0, 2, 4};
    // int p = 0;
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int q = n - 1;
    // cout << "original of array is : ";
    // reverse_array(arr, p, q);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << "\nreverse of array is : ";
    // reverse_array(arr, p, q);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    string s = "palakakalap";
    int len = s.length();
    string og = s;
    if(check_palindrone(s, len, 0)){
        cout<<"Yes It's Plaindrome";
    
    }else{
        cout<<"Not it's not palindrome";
    }
    return 0;
}
