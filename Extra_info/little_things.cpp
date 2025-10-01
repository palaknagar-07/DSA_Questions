// void func(int arr[]) { sizeof(arr); }
// #include <iostream>
// using namespace std;
// int main() {
    // int arr[5] = {1, 2, 3, 4, 5};
    // func(arr); // sizeof(arr) will not give the size of the array
    // cout << "This is a test for little things in C++." << endl;
    // int x = 0;
    // cout << x;

    // void fun(int x = 10, int y = 20);     // ✅
    // void fun(int x = 10, int y);      // ❌ invalid

    // int x = -1;
    // unsigned int y = 1;

    // if (x < y) // ❌ This will actually be false!
    //     cout << "This is false!" << endl;

//     return 0;

// }

// int* get() {
//     static int x = 10;
//     int y = 20; // y is a local variable, it will be destroyed after function ends
//     // return &y; // ❌ y will be destroyed, returning its address is undefined
//     // return &x; // ✅ x remains valid after function ends
//     return &x, &y; // ✅ x remains valid after function ends
// }

// int main() {
//     int* p = get();  // p points to valid memory
//     cout << *p;      // ✅ Defined behavior (prints 10)
//     return 0;
// }

