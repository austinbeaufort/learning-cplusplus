#include <iostream>
#include <string>
#include <vector>
//POINTERS AND REFERENCES
using namespace std;

// REFERENCES

// EXAMPLE 3

// int main()
// {
//     int num {100};
//     int &ref {num};

//     cout << num << endl;
//     cout << ref << endl;

//     num = 200;
//     cout << "**********************" << endl;
//     cout << num << endl;
//     // 200, the reference changes along with the num
//     cout << ref << endl;
// }


// EXAMPLE 2
// int main()
// {
//     vector<string> stooges { "Larry", "Curly", "Moe" };

//     // change the actual value in each memory address
//     for (auto &str: stooges)
//         str = "funny";
    
//     for (auto const &str: stooges)
//         cout << str << endl;

// }


// EXAMPLE 1
// int main()
// {
//     // passing by value will not change the actual vector.
//     vector<string> stooges {"Larry", "Curly", "Moe"};

//     for (auto str: stooges)
//         // does not change actual vector, these are copies, stooges is passed by value, not reference here.
//         str = "funny";
    
//     for (auto str: stooges)
//         cout << str << endl;
// }











// RETURNING A POINTER FROM A FUNCTION

// EXAMPLE 3
// int *create_array(size_t size, int init_value = 0)
// {
//     // allocate storage for array of int of size "size" on the heap
//     int *new_storage = new int[size];
//     for (size_t i{0}; i < size; i++)
//         // set all array values to 0.
//         *(new_storage + i) = init_value;
//     return new_storage;
// }

// void display(const int *const array, size_t size)
// {
//     for (size_t i{0}; i < size; i++)
//         cout << array[i] << " ";
//     cout << endl;
// }

// int main()
// {
//     size_t size;
//     int init_value {};

//     cout << "\nHow many integers would you like to allocate? ";
//     cin >> size;
//     cout << "What value would you like them initialized to? ";
//     cin >> init_value;

//     int *my_array = create_array(size, init_value);
//     cout << "\n-----------------------------------" << endl;

//     display(my_array, size);
//     delete [] my_array;
// }





// EXAMPLE 2
// int *create_array(size_t size, int init_value = 0)
// {
//     int *new_storage {nullptr};
//     new_storage = new int[size];

//     for (size_t i {0}; i < size; i++)
//         *(new_storage + i) = init_value;
//     return new_storage;
// }

// int main()
// {
//     int *my_array = create_array(100, 20);

//     delete [] my_array;
// }


// EXAMPLE 1
// int *largest_int(int *int_ptr1, int *int_ptr2)
// {
//     if (*int_ptr1 > *int_ptr2)
//         return int_ptr1;
//     else
//         return int_ptr2;
// }


// int main()
// {
//     int a {100};
//     int b {200};

//     int *largest_ptr = largest_int(&a, &b);
//     cout << *largest_ptr << endl;
// }











// PASSING POINTERS TO A FUNCTION

// EXAMPLE 4
// cannot change items int the vector, and cannot change where the vector points to.
// void display(const vector<string> *const vec)
// {
//     for (auto str: *vec)
//         cout << str << " ";
//     cout << endl;
// }


// void display(int *array, int sentinel)
// {
//     while (*array != sentinel)
//         cout << *array++ << " ";
//     cout << endl;
// }


// int main()
// {
//     cout << "******************************" << endl;
//     vector<string> stooges {"Larry", "Curly", "Moe"};
//     display(&stooges);

//     cout << "\n******************************" << endl;
//     int scores[] {100, 98, 97, 79, 85, -1};
//     display(scores, -1);
// }





// EXAMPLE 3
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main()
// {
//     int x {100}, y {200};
//     cout << "\nx: " << x << endl;
//     cout << "y: " << y << endl;

//     swap(&x, &y);

//     cout << "\nx: " << x << endl;
//     cout << "y: " << y << endl;
// }




// EXAMPLE 2
// void double_data(int *int_ptr)
// {
//     *int_ptr *= 2;
// }

// void print_value(int value)
// {
//     cout << "Value: " << value << endl;
// }

// int main()
// {
//     int value {10};
//     int *int_ptr {nullptr};
//     print_value(value);

//     double_data(&value);
//     print_value(value);

//     cout << "*********************************" << endl;

//     int_ptr = &value;
//     double_data(int_ptr);
//     print_value(value);
// }



// EXAMPLE 1
// void double_data(int *int_ptr)
// {
//     // dereference the memory address and multiply by 2.
//     *int_ptr *= 2;
// }


// int main()
// {
//     int value {10};
//     cout << value << endl;
//     // double_data expects a memory address that can be dereferenced.
//     double_data(&value);
//     cout << value << endl;
// }




// CONST AND POINTERS

// EXAMPLE 1
// int main()
// {
//     int high_score {100};
//     int low_score {65};
//     const int *score_ptr { &high_score };

//     cout << *score_ptr << endl;

//     score_ptr = &low_score;

//     cout << *score_ptr << endl;
// }













// POINTER ARITHMETIC

// EXAMPLE 4
// int main()
// {
//     char name[] {"Frank"};

//     char *char_ptr1 {nullptr};
//     char *char_ptr2 {nullptr};

//     char_ptr1 = &name[0];
//     char_ptr2 = &name[3];

//     cout << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;
// }



// EXAMPLE 3
// int main()
// {
//     int scores[] { 100, 95, 89, 68, -1 };
//     int *score_ptr {scores};

//     while (*score_ptr != -1)
//     {
//         // dereference pointer, print value
//         cout << *score_ptr << endl;
//         // go to next memory address
//         score_ptr += 1;
//     }
// }



// EXAMPLE 2
// int main()
// {
//     cout << boolalpha;
//     string s1 {"Frank"};
//     string s2 {"Frank"};

//     string *p1 {&s1};
//     string *p2 {&s2};
//     string *p3 {&s1};
//     // dereferencing the pointers before comparing. Both with print true.
//     cout << (*p1 == *p2) << endl;
//     cout << (*p1 == *p3) << endl;
// }



// EXAMPLE 1
// int main()
// {
//     cout << boolalpha;

//     string s1 {"Frank"};
//     string s2 {"Frank"};

//     string *p1 {&s1};
//     string *p2 {&s2};
//     string *p3 {&s1};
//     // compares the memory address, not the data contained inside the address
//     cout << (p1 == p2) << endl;
//     cout << (p1 == p3) << endl;
// }













// RELATIONSHIP BETWEEN ARRAYS AND POINTERS

// EXAMPLE 4
// int main()
// {
//     int scores[] {100, 95, 98};
//     int *scores_ptr {scores};
//     // pointer subscript noation
//     cout << scores_ptr[0] << endl;
//     cout << scores_ptr[1] << endl;
//     cout << scores_ptr[2] << endl;
//     // pointer offset notation
//     cout << *scores_ptr << endl;
//     cout << *(scores_ptr + 1) << endl;
//     cout << *(scores_ptr + 2) << endl;
//     // Array offset notation
//     cout << *scores << endl;
//     cout << *(scores + 1) << endl;
//     cout << *(scores + 2) << endl;
// }


// EXAMPLE 3
// int main()
// {
//     int scores[] { 100, 95, 89 };
//     int *score_ptr { scores };
//     cout << score_ptr << endl;
//     // gets next mem address of array
//     cout << (score_ptr + 1) << endl;
//     cout << (score_ptr + 2) << endl;

//     // dereferencing the pointer to access specific indicies of the array.
//     cout << *score_ptr << endl;
//     cout << *(score_ptr + 1) << endl;
//     cout << *(score_ptr + 2) << endl;
// }


// EXAMPLE 2
// int main()
// {
//     int scores[] { 100, 95, 89 };
//     int *score_ptr { scores };

//     cout << score_ptr[0] << endl;
//     cout << score_ptr[1] << endl;
//     cout << score_ptr[2] << endl;
// }


// EXAMPLE 1
// int main()
// {
//     int scores[] { 100, 95, 89 };
//     // mem address of array index 0
//     cout << scores << endl;
//     // dereferencing the address to get value at index 0
//     cout << *scores << endl;

//     int *score_ptr {scores};
//     // same mem address, prints array index 0 address
//     cout << score_ptr << endl;
//     // dereferences the address and prints 100
//     cout << *score_ptr << endl;
// }
















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