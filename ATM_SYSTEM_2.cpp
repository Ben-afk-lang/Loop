#include <iostream>

int main() 
{
    int n;
    int BALANCE = 5000;
    int DEPOSIT;
    int WITHDRAW;
    
    bool isExit = false;

    while (true) {
        // std::cout << "Balance: " << BALANCE << "\n";
        // std::cout << "\n";
        
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
                std::cout << "Balance: " << BALANCE << " PESOS \n";
                std::cout << "\n";

                isExit = true;
            break;

            case 2:
                std::cout << "Deposit ";
                std::cin >> DEPOSIT ; 

                if (DEPOSIT <= 0) {
                    std::cout << "Please enter a valid deposit amount. "<< DEPOSIT << " PESOS \n";
                    std::cout << "Deposit amounts must be greater than zero.\n";
                } else {
                    BALANCE += DEPOSIT;
                    std::cout << "Deposit successful!\n";
                    std::cout << "our account balance has been updated. A receipt has been sent to your email.\n";
                }
                
                std::cout << "\n";
            break;

            case 3:
                std::cout << "Withdraw ";
                std::cin >> WITHDRAW;
                
                if (WITHDRAW <= 0) {
                    std::cout << "Please enter a valid withdrawal amount. "<< WITHDRAW << " PESOS \n";
                    std::cout << "Withdrawal amounts must be greater than zero.\n";
                } else {
                    if (WITHDRAW > BALANCE) {
                        std::cout << "Insufficient funds.\n";
                        std::cout << "You cannot withdraw more than your available balance of " << BALANCE << " PESOS \n";
                    } else {
                        BALANCE -= WITHDRAW;
                    }
                }
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
