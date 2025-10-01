#include <iostream>
#include <math.h>
// #include <bits/stdc++.h>
using namespace std;

// int count(int n)
// {
//     int cnt = (int)log10(n) + 1;
//     return cnt;
// }

// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     int temp = n;
//     int reversed_number = 0;
//     while(n> 0){
//     int last_digit = n % 10;
//     n = n / 10;
//     reversed_number = reversed_number * 10 + last_digit;
// }
//     if (temp == reversed_number) {
//         cout << "Yes the given number is palindrome" << endl;
//     } else {
//         cout << "No the given number is not palindrome" << endl;
//     }
//     return 0;
// }
// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     int original = n;
//     int sum = 0;
//     while(n> 0){
//     int last_digit = n % 10;
//     sum = sum + (last_digit* last_digit* last_digit);
//     n = n / 10;
    
// }
//     if (original == sum) {
//         cout << "Yes the given number is Armstrong" << endl;
//     } else {
//         cout << "No the given number is not Armstrong" << endl;
//     }   
//     return 0;
// }
// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << i << " ";
//         }
//     }
      
// }
// void printDivisors(int n){
//     vector<int> ls;
//     for (int i = 1;  i*i <= n; i++){
//         if(n % i == 0){
//             ls.push_back(i);
//             if(i != n/i){
//                 ls.push_back(n / i);
//             }
//         }
//  }
//  sort(ls.begin(), ls.end());
//  for (int i = 0; i< ls.size(); i++){
//    cout << ls[i]<<" ";
// }
// }
// void findPrimeNumber(int n){
//     int count = 0;
//     for (int i = 1;  i*i <= n; i++){
//         if(n % i == 0){
//             count++;
//             if(i != n/i){
//                 count++;
//             }
//         }
//     }
//     if(count == 2){
//         cout << n << " is a prime number." << endl;
//     } else {
//         cout << n << " is not a prime number." << endl;
//     }
// }

void findGFD(int a, int b){
    

    while(a > 0 && b>0){

        if(a>b){
            a = a%b;
        }else{
            b = b%a;
        }
    }

    if(a == 0){
            cout << "GCD is: " << b << endl;  
        }
        else{
            cout << "GCD is: " << a << endl;  
        }
}

 
int main()
{
    int a,b;
    cout << "Enter two number: ";
    cin >> a >> b;;
    findGFD(a, b);
    return 0;
      
}
    

