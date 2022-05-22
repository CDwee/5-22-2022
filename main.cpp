// Started at 11:46 5-22-2022

// Section 12
// Challenge

#include <iostream>

using namespace std;

int * apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2) {
    int *new_array {};
    
    new_array = new int[size1 * size2];
    
    int position {0};
    for (size_t i {0}; i < size2; ++i) {
        for (size_t j {0}; j < size1; ++j) {
            new_array[position] = arr1[j] * arr2[i];
            ++position;
        }
    }
    return new_array;
}

void print(const int *const arr, size_t size) {
    cout << "[";
    for(size_t i{0}; i < size; ++i) 
        cout << arr[i] << " ";
    cout << "]";
    cout << endl;
}


int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: ";
    print(array1,array1_size);
    
    cout << "Array 2: ";
    print(array2,array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t result_size {array1_size * array2_size};
    
    cout << "Result: ";
    print(results, result_size);
    
    delete [] results;
    cout << endl;
    return 0;
}


// Section 13
// Declare Classes and Objects
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    // attributes
    string name {"Player"};
    int health {100};
    int xp {3};
    
    // methods
    void talk(string);
    bool is_dead();
};

class Account {
//    attributes
    string name {"Account"};  
    double balance {0.0};
    
//    methods
    bool deposit(double);
    bool withdraw(double);
};


int main() {
    Account frank_account;
    Account jim_account;
    
    
    
    Player frank;
    Player hero;
    
    Player players [] {frank, hero};
    
    vector<Player> player_vec {frank};
    player_vec.push_back(hero);
    
    
    Player *enemy {nullptr};
    enemy = new Player;
    
    delete enemy;
    
    return 0;
}


// Section 13
// Accessing Class Members
#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    // attributes
    string name;
    int health;
    int xp;
    
    // methods
    void talk(string text_to_say) {cout << name << " says " << text_to_say << endl;};
    bool is_dead();
};

class Account {
public:
    // attributes
    string name;
    double balance;
    
    // methods
    bool depsoit(double bal) {balance += bal; cout << "In desposit" << endl;}
    bool withdraw(double bal) {balance -= bal; cout << "In withdraw" << endl;}
    
};

int main() {
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;
    
    frank_account.depsoit(1000.0);
    frank_account.withdraw(500.0);
    
    
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there");
    
    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy-> xp = 15;
    
    enemy-> talk("I will destroy you!");
    
    
    
    return 0;
}


// Section 13
// Accessing Modifiers
#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    // attributes
    string name {"Player"};
    int health;
    int xp;
public:
    // methods
    void talk(string text_to_say) {cout << name << " says " << text_to_say << endl;};
    bool is_dead();
};  

int main() {
    Player frank;
//    frank.name = "Frank";
//    cout << frank.health << endl;
    frank.talk("Hello there");
    return 0;
}

// Ended at 2:48 5-22-2022
