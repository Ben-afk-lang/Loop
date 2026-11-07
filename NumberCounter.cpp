#include <iostream>

int main() 
{
    int sn;
    int en;
    int tn = 0;

    std::cout << "Starting number: ";
    std::cin >> sn;
    std::cout << "\n";

    std::cout << "Ending number: ";
    std::cin >> en;
    std::cout << "\n";

    std::cout << "===== RESULT =====\n";

    for (int i = sn; i <= en; i++) {
        std::cout << i << "\n";
        tn += 1;
        
    }
    std::cout << "\n";
    std::cout << "Total numbers: " << tn << "\n";

    return 0;
}
