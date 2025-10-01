// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Hello Palak!"<<"\n";
//     cout<<"How are you?"<<"\n";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x, y;
//     cout<<"Please enter the value of X and Y"<<endl;
//     cin >> x >> y;
//     cout<<"Hello Palak!"<<"\n";
//     cout<<"The value of x is: " <<x<< " and value of y is: " <<y<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//  string s1, s2;
//  cout<<"Enter your full name"<<endl;
//  cin >> s1>>s2;
//  cout<<"Your name is: "<<s1<<" "<<s2<<endl;
//  return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//  string str;
//  cout<<"Please enter your name: ";
//  getline(cin, str);
//  cout<<"Your name is: "<<str<<endl;
//  return 0;
// }

// write a program that takes age an input and prints whether you're an adult or not

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//    int age;
//    cout<<"Enter your age please: ";
//    cin>>age;
//    if(age >= 18){
//     cout<<"You're an adult..."<<endl;
//    }else{
//     cout<<"You're not an adult..."<<endl;
//    }
// return 0;
// }

// basic structure of cpp
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     int marks;
//     cout << "Enter your marks please: " << endl;
//     cin >> marks;
//     if (marks < 25)
//     {
//         cout << "F";
//     }
//     else if (44 >= marks)
//     {
//         cout << "E";
//     }
//     else if (49 >= marks)
//     {
//         cout << "D";
//     }
//     else if (59 >= marks)
//     {
//         cout << "C" << endl;
//     }
//     else if (79 >= marks)
//     {
//         cout << "B" << endl;
//     }
//     else if (100 >= marks)
//     {
//         cout << "A" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     int age;
//     cout << "Enter your age: " << endl;
//     cin >> age;
//     if (age < 18)
//     {
//         cout << "You're not eligible for job" << endl;
//     }
//     else if (age <= 57)
//     {
//         cout << "You're eligible for job";
//         if (age > 55)
//         {
//             cout << ",but retirement soon.." << endl;
//         }
//     }
//     else
//     {
//         cout << "Retirement time, just chill" << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//    int day;
//    cout<<"Please enter the number corresponds to a weekday: "<<endl;
//    cin>>day;
//    switch(day){
//     case 1: {
//         cout<<"It's Sunday"<<endl;
//         break;
//     }
//      case 2: {
//         cout<<"It's Monday"<<endl;
//         break;
//     }
//      case 3: {
//         cout<<"It's Tuesday"<<endl;
//         break;
//     }
//      case 4: {
//         cout<<"It's Wednesday"<<endl;
//         break;
//     }
//      case 5: {
//         cout<<"It's Thursday"<<endl;
//         break;
//     }
//      case 6: {
//         cout<<"It's Friday"<<endl;
//         break;
//     }
//      case 7: {
//         cout<<"It's Saturday"<<endl;
//         break;
//     }
//     default: {
//         cout<<"Please enter a valid number between 1-7"<<endl;
//     }
//    }

//     return 0;
// }

// / basic structure of cpp
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     int arr[5];
//     cout<<"Enter the values you want in your ARRY"<<endl;
//     cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
//     cout<<"The values you've entered are:"<<endl;
//     cout<<arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     cout<<arr[3]<<endl;
//     cout<<arr[4]<<endl;
// return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     int arr [3][5];
//     arr[0][1] = 23;
//     cout<<arr[0][1]<<endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string s = "Palak";
//     cout<<s.length();
//     // cout<< s[2];
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     for(int i = 1; i <= 25; i += 5){
//         cout<<"Hello Palak!!"<<endl;
//     }
//     return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//    int i = 1;
//    while(i <= 5)
//    {
//     cout<<"Hello Palak!!"<<endl;
//     i++;
//    }
//     return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     int i = 10;
//     do
//     {
//         cout << "Palak Nagar" << endl;
//         i++;
//     } while (i < 5);

//     return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;

// void printname(string name){
//     cout<<"your name is: "<<name<<endl;
// }
// int main()
// {   string name;
//     getline(cin, name);
//     printname(name);
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// void some_fun(int &num){
//     cout<<num<<endl;
//     num += 5;
//     cout<<num<<endl;
//     num += 5;
//     cout<<num<<endl;

// }

// int main()
// {   int num = 167;
//     some_fun(num);
//     cout<<num<<endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// void func(int arr[])
// {
//     arr[0] = 34;
//     arr[1] = 44;
//     arr[2] = 54;
// }

// int main()

// {
//     int n = 5;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Printing elements of array...." << endl;
//     ;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << endl;
//     }

//     func(arr);
//     cout << "Printing elements of array...." << endl;
//     ;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }