#include <iostream>
using namespace std;
// int cnt = 3;
// void print()
// {

//     if (cnt == 4)
//         return;

//     cout << cnt << " ";
//     cnt++;
//     print();
// }
// int n = 0;
// void printName()
// {
//     if (n == 5)
//         return;

//     cout <<"Palak Nagar "<<endl;
//     n++;
//     printName();
// }

// void printName(int N)
// {
//     if (N < 1)
//         return;

//     cout << N << endl;
//     N--;
//     printName(N);
// }
// void printName(int i, int n)
// {
//     if (i > n)
//         return;

//     printName(i+1, n);
//      cout << i << endl;
// }
// int sum = 0;
// int printSum(int i, int sum = 0)
// {
//     if (i < 1)
//         return sum;

//     else{
//         return printSum(i - 1 , sum + i);
//     }
// }
// int printSum(int n)
// {
//     if (n == 0)
//         return 0;

//     else{
//         return n + printSum(n-1);
//     }
// }
// int printfactorial(int n)
// {
//     if (n == 0 || n == 1)
//         return 1;

//     else{
//         return n *  printfactorial(n-1);
//     }
// }

// void reverseArray(int arr[], int n, int i = 0)
// {
//     if (i >= n / 2)
//         return;

//     swap(arr[i], arr[n - i - 1]);
//     reverseArray(arr, n, i + 1);
// }

// void checkPalindrome(string &s, int len, int i = 0)
// {
//     if (i >= len / 2)
//         return;

//     swap(s[i], s[len - i - 1]);
//     checkPalindrome(s, len, i + 1);
// }
// bool checkPalindrome(string &s, int len, int i = 0)
// {
//     if (i >= len / 2)
//         return true;

//     if(s[i] != s[len - i - 1])
//     {
//         return false;
//     }
//     return checkPalindrome(s, len, i + 1);
// }

// int fibo(int i = 0, int n = 1)
// {
//     int sum = i + n;
//     if (sum > 100)
//         return sum;
//     cout << sum << " ";
//     return fibo(n, sum);
// }
// void fibo(int a = 0, int b = 1, int count = 10)
// {
//     if (count <= 0)
//         return;
//     cout << a << " ";
//     fibo(b, a+b, count - 1);
// }


int fibo(int n)
{
    if (n <= 1)
        return n;

    return fibo(n-1) + fibo(n-2);
}


int main()
{

   cout << fibo(3) << endl;
    return 0;
}   