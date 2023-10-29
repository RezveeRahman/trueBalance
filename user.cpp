class User {
    public:
    
    User() {
        this->monthlyRent = 0.00;
        this->startingBalance = 0.00;
        this->monthlyRent = 0.00;
    }

    User(float newBalanceInput, 
         float startingBalanceInput, 
         float monthlyRentInput) {
        this->newBalance = newBalanceInput;
        this->startingBalance = startingBalanceInput;
        this->monthlyRent = monthlyRentInput;
    }

    float getNewBlance() { return this->newBalance; }
    float getStartingBalance() { return this->startingBalance; }
    float getMonthlyRent() { return this->monthlyRent; }

    void setNewBalance(float newBalanceInput);
    void setStartingBalance(float startingBalanceInput);
    void setMonthlyRent(float monthlyRentInput);

    private:
    float newBalance;
    float startingBalance;
    float monthlyRent;
    
};

void User::setNewBalance(float newBalanceInput) {
    this->newBalance = newBalanceInput;
}

void User::setStartingBalance(float startingBalanceInput) {
    this->startingBalance = startingBalanceInput;
}

void User::setMonthlyRent(float monthlyRentInput) {
    this->monthlyRent = monthlyRentInput;
}