#include <iostream>
#include <string>
#include <vector>

using namespace std;


// RECURSION

// Example 2
// unsigned long long fibonacci(unsigned long long number)
// {
//     if (number <= 1)
//         return number;
//     return fibonacci(number - 1) + fibonacci(number - 2);
// }

// int main()
// {
//     cout << fibonacci(30) << endl;
// }

// Example 1

// unsigned long long factorial(unsigned long long number)
// {
//     if (number == 0)
//         return 1;
//     return number * factorial(number - 1);
// }

// int main()
// {
//     cout << factorial(12) << endl;
// }






// INLINE FUNCTIONS

// inline int add_numbers(int a, int b)
// {
//     return a + b;
// }

// int main()
// {
//     const int result = add_numbers(100, 200);
//     cout << result;
// }




// STATIC KEYWORD WITH VARIABLE

// void print_num()
// {
//     // static means it is only declared once and not redeclared every time the function is called.
//     // has the "feel" of a global variabe, but retained to the function scope.
//     static int num {5000};
//     cout << "\n Local static num is " << num << ": Start" << endl;
//     num += 1000;
//     {
//         cout << num;
//     }
//     cout << "\n now local static num is " << num << ": End" << endl;
// }


// int main()
// {
//     print_num();
//     print_num();
//     print_num();
// }








// PASSING BY REFERENCE


// EXAMPLE 4
// void pass_by_ref1(int &num);
// void pass_by_ref2(string &s);
// void pass_by_ref3(vector<string> &v);
// void print_vector(const vector<string> &v);

// int main()
// {
//     vector<string> three_stooges {"Larry", "Curly", "Moe"};
//     print_vector(three_stooges);
//     pass_by_ref3(three_stooges);
//     print_vector(three_stooges);
// }

// void pass_by_ref1(int &num)
// {
//     num = 1000;
// }

// void pass_by_ref2(string &s)
// {
//     s = "Changed";
// }

// void pass_by_ref3(vector<string> &vec)
// {
//     vec.clear();
// }

// void print_vector(const vector<string> &vec)
// {
//     for (auto str: vec)
//     {
//         cout << str << endl;
//     }
// }


// EXAMPLE 3
// void print(const vector<int> &vec);

// int main()
// {
//     vector<int> data { 1, 2, 3, 4, 5 };
//     print(data);
// }


// void print(const vector<int> &vec)
// {
//     for (auto num: vec)
//         cout << num << endl;
// }




// EXAMPLE 2
// void swap(int &a, int &b);

// int main()
// {
//     int x{10}, y{20};
//     cout << x << " " << y << endl;
//     swap(x, y);
//     cout << x << " " << y << endl;
// }


// void swap(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }



// EXAMPLE 1
// void scale_number(int &num);


// int main()
// {
//     int number {1000};
//     scale_number(number);
//     cout << number << endl;
// }


// void scale_number(int &num)
// {
//     if (num > 100)
//         num = 100;
// }









// PASSING ARRAYS TO FUNCTIONS

// EXAMPLE 3
// using const in the array parameter will tell compiler to throw error if we try to change the array values.
// void print_array(const int numbers[], size_t size)
// {
//     for (size_t i{0}; i < size; i++)
//         cout << numbers[i] << endl;
// }

// void set_array(int arr[], size_t size, int value)
// {
//     for (size_t i = 0; i < size; i++)
//     // changes actual array values since arrays are passed by reference.
//         arr[i] = value;
// }


// int main()
// {
//     int my_scores[] { 100, 98, 90, 86, 84 };
//     print_array(my_scores, 5);
//     set_array(my_scores, 5, 100);
//     print_array(my_scores, 5);
//     cout << endl;
// }

// EXAMPLE 2
// void zero_array(int numbers[], size_t size)
// {
//     for (size_t i{0}; i < size; i++)
//         // this changes the actual array values as the function did not make a copy of the array.
//         // this can be fixed by adding const before "int numbers[]" int the function parameter.
//         numbers[i] = 0;
// }

// void print_array(int numbers[], size_t size)
// {
//     for (size_t i{0}; i < size; i++)
//         cout << numbers[i] << endl;
// }

// int main()
// {
//     int my_numbers[] { 1, 2, 3, 4, 5 };
//     zero_array(my_numbers, 5);
//     print_array(my_numbers, 5);
// }



// EXAMPLE 1 

// void print_array(int numbers[], size_t size);

// int main()
// {
//     int my_numbers[] { 1, 2, 3, 4, 5 };
//     print_array(my_numbers, 5);
// }

// // ARRAYS ARE PASSED BY REFERENCE SO WE INCLUDE THE SIZE OF THE ARRAY PASSED.
// void print_array(int numbers[], size_t size)
// {
//     for (size_t i{0}; i < size; i++)
//         cout << numbers[i] << endl;
// }








// OVERLOADING FUNCTIONS

// OVERLOADING EX 2
// void print (int);
// void print(double);
// void print(string);
// void print(string, string);
// void print(vector<string>);

// int main()
// {
//     print(2);
//     print(3.001);
//     print("Hi Joe!");
//     print("Computer", "Science");

//     vector<string> three_stooges { "Larry", "Curly", "Moe" };
//     print(three_stooges);
// }


// void print (int num)
// {
//     cout << "Printing int: " << num << endl;
// }

// void print(double num)
// {
//     cout << "Printing double: " << num << endl;
// }


// void print(string my_string)
// {
//     cout << "Printing string: " << my_string << endl;
// }


// void print(string my_string, string my_string2)
// {
//     cout << "Printing string: " << my_string <<" and " << my_string2 << endl;
// }


// void print(vector<string> my_vec)
// {
//     cout << "Printing Vector of Strings: ";
//     for (auto item: my_vec)
//         cout << item << " ";
//     cout << endl;
// }


// OVERLOADING EX 1
// int add_numbers(int, int);
// double add_numbers(double, double);


// int main()
// {
//     cout << add_numbers(10, 20) << endl;
//     cout << add_numbers(10.0, 20.0) << endl;
// }


// int add_numbers(int a, int b)
// {
//     return a + b;
// }

// double add_numbers(double a, double b)
// {
//     return a + b;
// }






// DEFAULT ARGUMENT VALUES

// double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50);

// void greeting(string name, string prefix = "Mr.", string suffix = "");

// int main()
// {
//     double cost = calc_cost(200);
//     double cost2 = calc_cost(200, 0.08);
//     double cost3 = calc_cost(200, 0.08, 4.25);
//     cout << cost << endl;
//     cout << cost2 << endl;
//     cout << cost3 << endl;
//     greeting("Beaufort");
// }


// double calc_cost(double base_cost, double tax_rate, double shipping)
// {
//     return base_cost += (base_cost * tax_rate) + shipping;
// }

// void greeting(string name, string prefix, string suffix)
// {
//     cout << "Hello " << prefix + " " + name + suffix;
// }



// FUNCTION PROTOTYPES


// PROTOTYPES -EX 2

// double calc_area_circle(double radius);
// void area_circle();


// int main()
// {
//     area_circle();
// }

// double calc_area_circle(double radius)
// {
//     const double pi {3.14};
//     return pi * radius * radius;
// }


// void area_circle()
// {
//     double radius {};
//     cout << "\n Enter the radius of the circle: ";
//     cin >> radius;

//     cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
// }




// PROTOTYPES - EX 1
// void say_hello();

// int main()
// {
//     say_hello();
// }

// void say_hello()
// {
//     cout << "hello";
// }









// FUNCTION BASICS

// double calc_area_circle(double radius)
// {
//     const double pi {3.14};
//     return pi * radius * radius;
// }


// void area_circle()
// {
//     double radius {};
//     cout << "\n Enter the radius of the circle: ";
//     cin >> radius;

//     cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
// }



// int main()
// {
//     area_circle();
// }







// RANDOM NUMBERS, SEEDING THE RANDOM NUMBER GENERATOR.

// int main()
// {
//     cout << RAND_MAX << endl;
//     srand(time(nullptr));


//     size_t count {10};
//     int min {1};
//     int max {6};
//     int random_number {};

//     for (size_t i {0}; i <= count; i++)
//     {
//         random_number = rand() % max + min;
//         cout << random_number << endl;
//     }
// }