#include <iostream>
#include <string>
#include <vector>

using namespace std;


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