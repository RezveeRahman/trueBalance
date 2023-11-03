#include <iostream>
#include "user.h"

void startPrompt();

int main(int argc, char* argv[]) {
    startPrompt();
    User* currentUser = new User();
    getUserInfo(*currentUser);

    return 0;
}

void startPrompt() {
    std::cout << "Welcome to True Balance!\n Here we make your life easier by "
        << "ensuring that you are able to buy the things you want without "
        << "over spending and missing out on rent or other important bills.\n";
}