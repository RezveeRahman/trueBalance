#include <iostream>

class User {
    public:
    
    User() {
        this->monthlyRent = 0.00;
        this->startingBalance = 0.00;
        this->monthlyRent = 0.00;
        this->name = "";
    }

    User( std::string nameInput,
         float newBalanceInput, 
         float startingBalanceInput, 
         float monthlyRentInput ) {
            this->newBalance = newBalanceInput;
            this->startingBalance = startingBalanceInput;
            this->monthlyRent = monthlyRentInput;
            this->name = nameInput;
    }

    std::string getName() { return this->name; }
    float getNewBlance() { return this->newBalance; }
    float getStartingBalance() { return this->startingBalance; }
    float getMonthlyRent() { return this->monthlyRent; }

    void setName(std::string nameInput);
    void setNewBalance(float newBalanceInput);
    void setStartingBalance(float startingBalanceInput);
    void setMonthlyRent(float monthlyRentInput);

    private:
    std::string name;
    float newBalance;
    float startingBalance;
    float monthlyRent;
};

void User::setName(std::string nameInput) {
    this->name = nameInput;
}

void User::setNewBalance(float newBalanceInput) {
    this->newBalance = newBalanceInput;
}

void User::setStartingBalance(float startingBalanceInput) {
    this->startingBalance = startingBalanceInput;
}

void User::setMonthlyRent(float monthlyRentInput) {
    this->monthlyRent = monthlyRentInput;
}

void getUserInfo(User currentUser) {
    std::string nameInput;
    
    std::cout << "What is your name?: ";
    std::cin >> nameInput;
    currentUser.setName(nameInput);
}