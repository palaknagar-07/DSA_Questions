#include<iostream>
using namespace std;
#include<map>




// int countMatch = 0;
// void func(int num, int arr[], int size){
//     for (int i = 0; i< size; i++){
//       if(num==arr[i]){
//         countMatch++;
        
//       }
//     }

// }
// int main(){
//     int array[4] = {1,3,3,4};
//     func(3,array, 4);
//     cout<<"Count"<<countMatch;
//     return 0;
// }
// int main(){
//     int n;
//     cout<<"Enter the array size"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter element of array"<<endl;
//     for(int i = 0; i < n; i++ ){
//         cin>>arr[i];
//     }

//     int hash[1000000] = {0};

//     for(int i = 0; i < n; i++){
//         hash[arr[i]] += 1;
//     } 
//    cout<<"printing"<<endl;;

//     int number;
//     cin>>number;
//     // while(q--){
//     //     int number;
//     //     cin>>number;

//     //     cout<<hash[number]<<endl;
//     // }
//     cout<<hash[number]<<endl;
//     return 0;
// }

// int countMatch = 0;
// void func(char c, string s, int size){
//     for (int i = 0; i< size; i++){
//       if(s[i]==c){
//         countMatch++;
        
//       }
//     }

// }

// int main(){
//     string s;
//     cout<<"Enter a string"<<endl;
//     cin>>s;
    
//     int hash[26] = {0};
//     for(int i = 0; i < s.size(); i++){
//       hash[s[i] - 'a']++;
//       // hash[s[i]]++;(WHY not this)
//     }

//     cout<<"Enter the char you want to check"<<endl;
//     char n;
//     cin>>n;
//     cout<<"Count"<<hash[ n - 'a' ];
//       // cout<<"Count"<<hash[n];

    

   
//     return 0;
// }


// int main(){
//   int n;
//    cout<<"Enter size of array:"<<endl;
//    cin>>n;
   
//   cout<<"Enter the elements of array:"<<endl;
//     int arr [n];
//       map<int, int> mpp;
//     for(int i = 0; i < n; i++){
//       cin>>arr[i];
//       mpp[arr[i]]++;
//     }
     

// //  for(auto it : mpp){
// //   cout<<it.first<<"->"<<it.second<<endl;
// //  }

//     cout<<"Enter the num you want to check:"<<endl;
//     int num;
//     cin>>num;
//     cout<<"Count"<<mpp[num];
      
//     return 0;
// }

int main(){
 
   string s;
  cout<<"Enter the string:"<<endl;
    cin>>s;
    unordered_map<char, int> mpp;
    for(int i = 0; i < s.size(); i++){
      mpp[s[i]]++;
    }
     

 for(auto it : mpp){
  cout<<it.first<<"->"<<it.second<<endl;
 }
 int maxFreq;
 char maxChar;
 for(auto it : mpp){
  if(it.second>maxFreq){
    maxFreq = it.second;
    maxChar = it.first;
  }
 }
 cout<<"Charecter with max frequecy is: "<<maxChar<<" (count: "<<maxFreq<<")"<<endl;


    // cout<<"Enter the char you want to check:"<<endl;
    // char c;

    // cin>>c;
    // cout<<"Count"<<mpp[c];
    
    return 0;
}