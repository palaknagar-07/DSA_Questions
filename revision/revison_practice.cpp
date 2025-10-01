#include<iostream>
#include<math.h>
using namespace std;

// void extract_digits(int number){
//     while(number>0){
//     int last_digit = number%10;
//     number = number/10;
//     cout<<last_digit<<"\n";
//     }
// }

// void count_digits(int number){
//     int counter = 0;
//     while(number>0){
//     number = number/10;
//     counter++;
//     }
//     cout<<"Number of digits:"<<counter;
// }
// void reverse_number(int number){
//     int reverse_no = 0;
//     while(number>0){
//     int last_digit = number%10;
//     number = number/10;
//     reverse_no = ((reverse_no*10) + last_digit);
//     }
//     cout<<"Reverse of number:"<<reverse_no;
// }

//  void palindrome_check(int number){
//     int og = number;
//     int reverse_no = 0;
//     while(number>0){
//     int last_digit = number%10;
//     number = number/10;
//     reverse_no = ((reverse_no*10) + last_digit);
//     }
//     if(og == reverse_no){
//         cout<<"Number is plaindrome";
//     }else{
//         cout<<"Not palindrome";
//     }   
// }

// ==========Armstrong============

// int count_digits(int number){
//     int counter = 0;
//     while(number>0){
//     number = number/10;
//     counter++;
//     }
//     return counter;
// }
// void armstrong_num(int num){
//     int og = num;
//     int sum = 0;
//     int digits = count_digits(num);
//     while (num>0)
//     {
//         int last_digit = num%10;
//         num = num/10;
//         sum += pow(last_digit,digits);

//     }

//     if(sum==og){
//         cout<<"Given number is armstrong";
//     }else{
//         cout<<"Not an Armstrong number";
//     }
    
// }

// ==========print all divisor============

// void print_divisor(int num){
//     vector<int> ls;
//     for(int i = 0; i*i<num; i++){
//         if(num%i == 0){
//             ls.push_back(i);
//             if(num/i != i){
//                 ls.push_back(num/i);
//             }
            
//         }
//     }
//     sort(ls.begin(), ls.end());
//     for (int i = 0; i < ls.size(); i++)
//     {
//        cout<<ls[i]<<" ";
//     }
    
// }

// ==========prime numbers============

// void prime_num(int num){
//     int counter = 0;
//     for(int i = 1; i*i < num; i++){
//         if(num%i == 0){
//             counter++;
//         }
//     }

//     if(counter>2){
//         cout<<"The given number is not prime";
//     }else{
//         cout<<"Number is prime";
//     }
// }

// ==========GCD============

// void gcd (int num1, int num2){
//     int GCD = 1;
//   for(int i = min(num1, num2); i>=1; i--){
//     if(num1%i==0 && num2%i==0){
//         GCD = i;
//         break;//only when we start from reverse
//     }
//   }
//   cout<<"GCD: "<<GCD;
// }


// void gcd(int a, int b){
    
//     while(a>0&&b>0){
//         if(a>b){
//             a = a%b;
//         }else{
//             b = b%a;
//         }
//     }

//     if(a==0) cout<<"GCD: "<<b;
//     else cout<<"GCD: "<<a;
// }

// =========Recursion========
// int counter = 0;
// void print_name(){
    
//     if(counter == 5){
//         return;
//     }
//     else{
//         cout<<"Palak"<<"\n";
//         counter++;
//         print_name();
//     }
// }
// =======Without global variable======

// void print_name(int i, int j){
    
//     if(i>j){
//         return;
//     }
//     else{
//         cout<<"Palak Nagar"<<"\n";
//         print_name(i+1, j);
//     }
// }

// void print_num(int i,int num){
   
//     if(i>num){
//         return;
//     }else{
//         cout<<i<<"\n";
//         print_num(i+1, num);
//     }
  
// }

// void print_num(int num){
   
//     if(num == 0){
//         return;
//     }else{
//         cout<<num<<"\n";
        
//         print_num(num - 1);
//     }
  
// }
// void print_num(int i){
//    if(i < 1){
//     return;
//    }else{
//     print_num(i-1);
//     cout<<i<<"\n";
//    }
  
// }
void print_num(int i,int num){
   if(i>num){
    return;
   }else{
    print_num(i+1, num);
    cout<<i<<"\n";
    ;
   }
  
}




int main(){
    // int num = 13;
    print_num(1,5);
    return 0;
}