#include <iostream>

int main() 
{
    int sn;
    int en;
    int odd = 0;
    int even = 0;
    int TOTAL_ODD = 0;
    int TOTAL_EVEN = 0;

    std::cout << "Starting number: ";
    std::cin >> sn;
    std::cout << "\n"; 

    std::cout << "Ending number: ";
    std::cin >> en;
    std::cout << "\n";

    std::cout << "===== EVEN NUMBERS =====\n";
    for (int i = sn; i <= en; i++) {
        if (i % 2 == 0) {  
            std::cout << i << " ";
            even += 1;
            TOTAL_EVEN += i;
        } 
    }
    
    std::cout << "\n";
    std::cout << "\n";

    std::cout << "===== ODD NUMBERS =====\n";
    for (int i = sn; i <= en; i++) {
        if (i % 2 != 0) {  
            std::cout << i << " ";
            odd += 1;
            TOTAL_ODD += i;
        } 
    }
    std::cout << "\n";
    std::cout << "\n";

    std::cout << "Total Even: " << even << "\n";
    std::cout << "Total Odd: " << odd << "\n";
    std::cout << "Sum Even: " << TOTAL_EVEN << "\n";
    std::cout << "Sum Odd: " << TOTAL_ODD << "\n";
    return 0;
}
