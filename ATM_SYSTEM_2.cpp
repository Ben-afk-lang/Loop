#include <iostream>

int main() 
{
    int n;
    int BALANCE = 5000;
    int DEPOSIT;
    int WITHDRAW;
    
    bool isExit = false;

    while (true) {
        std::cout << "Balance: " << BALANCE << "\n";
        std::cout << "\n";
        
        std::cout << "===== ATM SYSTEM =====\n";
        std::cout << "\n";

        std::cout << "[1] Check Balance\n" << "[2] Deposit\n" << "[3] Withdraw\n" << "[4] Exit\n";
        std::cout << "\n";

        std::cout << "Choose: ";
        std::cin >> n;
        std::cout << "\n";

        switch(n) {
            case 1:
                std::cout << "Check Balance\n";
                std::cout << "Balance: " << BALANCE << "\n";
                std::cout << "\n";
            break;

            case 2:
                std::cout << "Deposit\n";
                std::cin >> DEPOSIT;
                BALANCE += DEPOSIT;
                std::cout << "\n";
            break;

            case 3:
                std::cout << "Withdraw\n";
                std::cin >> WITHDRAW;
                BALANCE -= WITHDRAW;
                std::cout << "\n";
            break;

            case 4:
                std::cout << "Exit\n";
                isExit = true;
            break;

            default:
                std::cout << "Invalic Actions!\n";
            break; 
        }

        if (isExit == true) {
            isExit = false;
            break;
        }
    }

    return 0;
}
