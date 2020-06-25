#include <iostream>
#include <string>
#include <vector>
//POINTERS AND REFERENCES
using namespace std;


// DYNAMIC MEMORY ALLOCATION

// EXAMPLE 4
// int main()
// {
//     size_t size {0};
//     double *temp_ptr {nullptr};

//     cout << "How many temperatures? ";
//     cin >> size;


//     temp_ptr = new double[size];
//     // mem address of the first double in temp_ptr
//     cout << temp_ptr << endl;

//     delete [] temp_ptr;
// }



// EXAMPLE 3
// int main()
// {
//     int *int_ptr {nullptr};
//     // prints 0
//     cout << int_ptr;
//     // allocate new mem address for int_ptr on heap
//     int_ptr = new int;
//     // print mem location of int on the heap
//     cout << int_ptr;
//     // frees memory
//     delete int_ptr;
// }



// EXAMPLE 2
// int main()
// {
//     int *array_ptr {nullptr};
//     int size {};

//     cout << "How big do you want the array? ";
//     cin >> size;

//     // allocating array memory on the heap
//     array_ptr = new int[size];

//     cout << array_ptr;

//     // free the memory
//     delete [] array_ptr;
// }



// EXAMPLE 1
// int main()
// {
//     int *int_ptr {nullptr};
//     // uses memory from heap
//     int_ptr = new int;

//     // get address of uninitialized int
//     cout << int_ptr << endl;

//     *int_ptr = 100;

//     cout << *int_ptr << endl;

//     // deallocate storage
//     delete int_ptr;
// }









// DEREFERENCING A POINTER

// EXAMPLE 4
// int main()
// {
//     vector<string> stooges {"Larry", "Moe", "Curly"};
//     vector<string> *vector_ptr {nullptr};

//     vector_ptr = &stooges;
//     cout << "First stooge: " << (*vector_ptr).at(0) << endl;

//     cout << "Stooges:";
//     for (auto stooge: *vector_ptr)
//         cout << stooge << " ";
// }


// EXAMPLE 3
// int main()
// {
//     string name {"Frank"};
//     string *string_ptr {&name};

//     // mem address
//     cout << string_ptr << endl;
//     // dereferencing, getting actual value
//     cout << *string_ptr << endl;

//     name = "James";
//     // same address
//     cout << string_ptr << endl;
//     // when dereferenced, name is now James
//     cout << *string_ptr << endl;
// }



// EXAMPLE 2
// int main()
// {
//     double high_temp {100.7};
//     double low_temp {37.4};
//     double *temp_ptr {&high_temp};

//     // memory address
//     cout << temp_ptr << endl;
//     // dereferencing, getting actual value
//     cout << *temp_ptr << endl;

//     // now points to low_temp memory address
//     temp_ptr = &low_temp;
//     // low temp memory address
//     cout << temp_ptr << endl;
//     // dereferencing to get low temp value
//     cout << *temp_ptr << endl;
// }



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