#include <iostream>
#include <string>
#include <vector>

using namespace std;


// CONTINUED IN LEARNING-CPLUSPLUS-2 REPOSITORY.
// SWITCHED OVER FROM VS CODE TO VISUAL STUDIO FOR THIS PROJECT.



// PUBLIC AND PRIVATE
// class Account
// {
// private:
//     string name;
//     double balance {0};

// public:
//     void withdraw(double amount)
//     {
//         balance -= amount;
//         cout << "Current balance: " << balance << endl;
//     }
    
//     void deposit(double amount)
//     {
//         balance += amount;
//         cout << "Current balance: " << balance << endl;
//     }
// };


// class Player
// {
// private:
//     string name;
//     int health;
//     int xp;

// public:
//     void talk(string text_to_say)
//     {
//         cout << name << " says " << text_to_say << endl;
//     }
// };

// int main()
// {
//     Account joe_account;
//     joe_account.deposit(100);

//     Account *mary_account = new Account();
//     mary_account->withdraw(100);

//     Player joe;
//     joe.talk("Hello");
// }










// DECLARING CLASSES AND OBJECTS

// EXAMPLE 1

// class Player
// {
// public:
//     string name;
//     int health;
//     int xp;

//     void talk(string text_to_say)
//     {
//         cout << name << " says " << text_to_say << endl;
//     }
//     bool is_dead();
// };


// class Account
// {
// public:
//     string name;
//     double balance;

//     void deposit(double bal)
//     {
//         balance += bal;
//         cout << "In deposit" << endl;
//     }
//     void withdraw(double bal) 
//     {
//         balance -= bal;
//         cout << "Withdrawl" << endl;
//     }
// };


// int main()
// {
//     Player frank;
//     frank.name = "Frank";
//     frank.health = 100;
//     frank.xp = 12;
//     cout << "\nFrank\n" << endl;
//     cout << frank.name << endl;
//     cout << frank.health << endl;
//     cout << frank.xp << endl;
//     frank.talk("hello how's your day going?");



//     Player *enemy = new Player;
//     (*enemy).name = "Enemy";
//     (*enemy).health = 100;
//     // arrow is alternative syntax to dereference the pointer
//     enemy->xp = 15;

//     cout << "\nEnemy\n" << endl;
//     cout << (*enemy).name << endl;
//     cout << enemy->health << endl;
//     cout << enemy->xp << endl;
//     enemy->talk("I will destroy you!");

//     Account frank_account;
//     cout << "\nAccount\n" << endl;
//     frank_account.name = "Frank";
//     frank_account.balance = 5000.00;
//     cout << frank_account.balance << endl;
//     frank_account.deposit(1000);
//     cout << frank_account.balance << endl;
//     frank_account.withdraw(500);
//     cout << frank_account.balance << endl;
// }