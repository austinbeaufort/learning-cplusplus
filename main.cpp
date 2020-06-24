#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;


// OVERLOADING FUNCTIONS






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