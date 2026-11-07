#include <iostream>

int main() 
{
    int n;

    std::cout << "Enter number: ";
    std::cin >> n;
    std::cout << "\n";

    std::cout << "===== MULTIPLICATION TABLE =====\n";
    std::cout << "\n";
    
    for (int i = 1; i <= 10; i += 1) {
        std::cout << n << " x " << i << " = " << n * i << "\n";
    }

    return 0;
}
