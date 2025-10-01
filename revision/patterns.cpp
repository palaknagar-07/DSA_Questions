#include<iostream>
using namespace std;

// void printStar(int n){
// for(int i = 1 ; i <= n; i++){
//     for(int j = 1; j <= i; j++){
//         cout<<"*"<<" ";
//     }
//     cout<<"\n";
// }
// void printStar(int n){
// for(int i = 1 ; i <= n; i++){
//     for(int j = 1; j <= i; j++){
//         cout<<j<<" ";
//     }
//     cout<<"\n";
// }

// }
// void printStar(int n){
// for(int i = 1 ; i <= n; i++){
//     for(int j = 1; j <= i; j++){
//         cout<<i<<" ";
//     }
//     cout<<"\n";
// }
// }

// void printStar(int n){
// for(int i = 1 ; i <= n; i++){
//     for(int j = 1; j <= n-i+1; j++){
//         cout<<j<<" ";
//     }
//     cout<<"\n";
// }
// }
// void printStar(int n){
// for(int i = 1 ; i <= n; i++){

//     for(int j = 1; j <= n-i; j++){
//         cout<<"  ";
//     }
//      for(int j = 1; j <= (2*i -1); j++){
//         cout<<"*"<<" ";
//     }
//      for(int j = 1; j <= n-i; j++){
//         cout<<"  ";
//     }

//     cout<<"\n";
// }
// }


// void printStar(int n){
// for(int i = 0 ; i <= n; i++){

//     for(int j = 1; j <= i; j++){
//         cout<<"  ";
//     }
//      for(int j = 1; j <= 2*n - (2*i + 1); j++){
//         cout<<"*"<<" ";
//     }
//      for(int j = 1; j <= i; j++){
//         cout<<"  ";
//     }

//     cout<<"\n";
// }
// }

// void printStar(int n){
// for(int i = 1 ; i <= 2*n -1 ; i++){
//     int star = i;
//     if(i>n){
//         star = 2*n-i;
//     }
//     for(int j = 0; j < star ; j++){
//         cout<<"*";
//     }
//     cout<<"\n";
// }
// }

// void printStar(int n)
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

// void printStar(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
        

//         for (char ch = 'A'; ch <= 'A' + i; ch++)
//         {
//             cout << ch << " ";
//         }

//         cout << endl;
//     }
// }

// void printStar(int n)
// {    int start = 1;
//     for (int i = 0; i < n; i++)
//     {
//        if(i%2 == 0) start = 1;
//        else start = 0;
      

//         for (int j = 0; j <= i; j++)
//         {
//             cout << start << " ";
//             start = 1 - start;
//         }

//         cout << endl;
//     }
// }

void printStar(int n){
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= n-i; j++){
            cout<<"  ";
        }
        for (int j = 1; j <= 2*i - 1; j++){
            cout<<"*"<<" ";
        }
    
        for (int j = 1; j <= n-i; j++){
            cout<<"  ";
        }


        cout<<"\n";
    }

     for(int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout<<"  ";
        }
        for (int j = 1; j <= 2*i - 1; j++){
            cout<<"*"<<" ";
        }
    
        for (int j = 1; j <= n-i; j++){
            cout<<"  ";
        }


        cout<<"\n";
    }
      
    }




int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    
    cout<<"Pattern: \n";
    printStar(n);
    return 0;

}