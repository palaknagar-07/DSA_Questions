#include <iostream>
using namespace std;

// void print(int n){
//     for (int i = 0; i < n; i++){

//         for(int j = 0; j < n; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//      }

// }

// void print(int n){
//    for (int i = 0; i < 5; i++){

//         for(int j = 0; j <= i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;

// }
// }

// void print(int n){
//    for (int i = 0; i <= n; i++){

//         for(int j = 1; j <= i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;

// }
// }
// void print(int n){
//    for (int i = n; i >= 0; i--){

//         for(int j = i; j >= 0; j--){
//             cout<<"* ";
//         }
//         cout<<endl;

// }
// }
// void print(int n){
//    for (int i = 1; i <=n ; i++){

//         for(int j = 1; j <= (n-i+1); j++){
//             cout<<"* ";
//         }
//         cout<<endl;

// }
// }
// void print(int n){
//    for (int i = 1; i <=n ; i++){

//         for(int j = 1; j <= (n-i+1); j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;

// }
// }
// void print1(int n){
//    for (int i = 0; i <n ; i++){

//         for(int j = 0; j < n-i-1; j++){
//             cout<<" ";
//         }
//         for(int j = 0; j < 2*i+1; j++){
//             cout<<"*";
//         }
//         for(int j = 0; j < n-i-1; j++){
//             cout<<" ";
//         }
//         cout<<endl;

// }
// }
// void print2(int n){
//    for (int i = 0; i <n ; i++){

//         for(int j = 0; j < i; j++){
//             cout<<" ";
//         }
//         for(int j = 0; j < 2*n - (2*i+1); j++){
//             cout<<"*";
//         }
//         for(int j = 0; j < i; j++){
//             cout<<" ";
//         }
//         cout<<endl;

// }
// }

// void print1(int n)
// {
//     for (int i = 1; i <= 2*n -1; i++)
//     {
//         int star = i;
//         if (i>n) star = 2*n - i;
//         for (int j = 1; j <= star; j++)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }
// }
// void print1(int n)
// {   int start = 1;
//     for (int i = 0; i <= n; i++)
//     {
//         if(i % 2 == 0) start = 1;
//         else start = 0;

//         for (int j = 0; j <= i ; j++)
//         {
//             cout << start <<" ";
//             start = 1 - start;
//         }

//         cout << endl;
//     }
// }
// void print1(int n)
// {   int space = 2*(n-1);
//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= i ; j++)
//         {
//             cout <<j;

//         }
//         for (int j = 1; j <= space ; j++)
//         {
//             cout<<" ";

//         }
//         for (int j = i; j >= 1 ; j--)
//         {
//             cout <<j;

//         }
//         cout << endl;
//         space -= 2;

//     }

// }
// void print1(int n)
// {   int count = 1;
//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= i ; j++)
//         {
//            cout<<count<<" ";
//            count++;
//         }

//         cout << endl;

//     }
// }
// void print1(int n)
// {   int count = 1;
//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= i ; j++)
//         {
//            cout<<count<<" ";
//            count++;
//         }

//         cout << endl;

//     }
// }
// void print1(int n)
// {
//     for (int i = 0; i < n; i++)
//     {

//         for (char ch = 'A'; ch <= 'A'+i; ch++)
//         {
//             cout << ch << " ";
//         }

//         cout << endl;
//     }
// }
// void print1(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A'+i;

//         for (int j = 0; j <= i; j++)
//         {
//             cout << ch << " ";
//         }

//         cout << endl;
//     }
// }
// void print1(int n)
// {
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         char ch = 'A';
//         int breakpoint = (2*i+1)/2;

//         for (int j = 1; j <=2*i + 1; j++)
//         {
//             cout << ch;
//             if(j<= breakpoint) ch++;
//             else ch--;

//         }

//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }

//         cout << endl;
//     }
// }

//  void print1(int n)
//  {
//      for (int i = 0; i < n; i++)
//     {

//         for (char ch = 'E'-i; ch <= 'E'; ch++)
//         {

//             cout << ch << " ";

//         }

//         cout << endl;

//     }
// }

// void print1(int n)
// {
//     for (int i = 0; i <= n; i++)
//     {

//         for (int j = 0; j <= n - i; j++)
//         {

//             cout << "*" << " ";
//         }
       
//          for (int j = 0; j < 2*i; j++)
//         {

//             cout << "  ";
//         }
//         for (int j = 0; j <= n - i; j++)
//         {

//             cout << "*" << " ";
//         }
        

//         cout << endl;
//     }
//     for (int k = 0; k <= n; k++)
//     {

//         for (int s = 0; s <= k; s++)
//         {

//             cout << "*" << " ";
//         }
       
//          for (int s = 0; s < 2*n - 2*k; s++)
//         {

//             cout << "  ";
//         }
//         for (int s = 0; s <= k; s++)
//         {

//             cout << "*" << " ";
//         }
        

//         cout << endl;
//     }

// }

int main()
{
    int n;
    cout << "Enter the integer to print pattern" << endl;
    cin >> n;
    print1(n);
    //  print2(n);

    return 0;
}
