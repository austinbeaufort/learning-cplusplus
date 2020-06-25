#include <iostream>
#include <string>
#include <vector>
//POINTERS AND REFERENCES
using namespace std;



// DEREFERENCING A POINTER

// EXAMPLE 2
int main()
{
    double high_temp {100.7};
    double low_temp {37.4};
    double *temp_ptr {&high_temp};

    // memory address
    cout << temp_ptr << endl;
    // dereferencing, getting actual value
    cout << *temp_ptr << endl;

    // now points to low_temp memory address
    temp_ptr = &low_temp;
    // low temp memory address
    cout << temp_ptr << endl;
    // dereferencing to get low temp value
    cout << *temp_ptr << endl;
}



// EXAMPLE 1
// int main()
// {
//     int score {100};
//     int *score_ptr {&score};

//     cout << score_ptr << endl;
//     cout << *score_ptr << endl;

//     *score_ptr = 200;
//     cout << score << endl;
//     cout << *score_ptr << endl;
// }











// ACCESSING AND STORING POINTER ADDRESSES

// EXAMPLE 5
// int main()
// {
//     double high_temp {100.7};
//     double low_temp {37.2};

//     double *temp_ptr {nullptr};

//     // point to address of high_temp
//     temp_ptr = &high_temp; 
//     cout << temp_ptr << endl;
//     // now points to address of low_temp
//     temp_ptr = &low_temp;
//     cout << temp_ptr << endl;
// }



// EXAMPLE 4
// int main()
// {
//     int score {10};
//     double high_temp {100.7};

//     int *score_ptr {nullptr};

//     score_ptr = &score;
    
//     cout << score_ptr << endl;
//     cout << &score << endl;
// }


// EXAMPLE 3
// int main()
// {
//     // all pointer variables have sizeof 4 bytes.
       // each of these pointers points to a unique memory address.

//     int *p1 {nullptr};
//     cout << "adress p1: " << &p1 << endl;
//     cout << "size p1: " << sizeof p1 << endl;

//     double *p2 {nullptr};
//     cout << "adress p2: " << &p2 << endl;
//     cout << "size p2: " << sizeof p2 << endl;

//     unsigned long long *p3 {nullptr};
//     cout << "adress p3: " << &p3 << endl;
//     cout << "size p3: " << sizeof p3 << endl;

//     vector<string> *p4 {nullptr};
//     cout << "address p4: " << &p4 << endl;
//     cout << "size p4: " << sizeof p4 << endl;

//     string *p5 {nullptr};
//     cout << "address p5: " << &p5 << endl;
//     cout << "size p5: " << sizeof p5 << endl;
// }




// EXAMPLE 2

// int main()
// {
//     int *p {nullptr};
//     cout << "Size of p is: " << sizeof p << endl;
//     cout << "Address of p is: " << &p << endl;
//     cout << "value of p is: " << p << endl;
// }


// EXAMPLE 1
// int main()
// {
//     int num{10};
//     cout << "value: " << num << endl;
//     cout << "size: " << sizeof num << endl;
//     cout << "memory address: " << &num << endl;
// }