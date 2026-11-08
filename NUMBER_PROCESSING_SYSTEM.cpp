#include <iostream>

int main() 
{
    int n;
    int ln;
    int sum = 0;
    double average = 0;
    int largest = 0;
    int smallest = 0;
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;
    int zero = 0;
    int evenSum = 0;
    int oddSum = 0;
    
    std::cout << "===== NUMBER PROCESSING SYSTEM =====\n";
    std::cout << "How many numbers? ";
    std::cin >> n;
    std::cout << "\n";

    for (int i = 1; i <= n; i++) {
        std::cout << "Enter number " << i << ": ";
        std::cin >> ln;
        std::cout << "\n";  

        sum += ln;
        average = static_cast<double>(sum) / i;
        
        if (ln > 0) {
            largest = ln;
        }

        if (ln < 0) {
                smallest = ln;
        }

        if (ln % 2 == 0) {
            even++;
        } else {
            odd++;
        }

        if (ln > 0) {
            positive++;
        } else if (ln < 0) {
            negative++;
        } else if (ln == zero) {
            zero++;
        }

        if (ln % 2 == 0) {
            evenSum += ln;
        } else {
            oddSum += ln;
        }
        
    }

    std::cout << "===== REPORT =====\n";

    std::cout << "Sum: " << sum << "\n";
    std::cout << "Average: " << average << "\n";
    std::cout << "\n";
    std::cout << "Largest: " << largest << "\n";
    std::cout << "Smallest: " << smallest << "\n";
    std::cout << "\n";
    std::cout << "Even Count: " << even << "\n";
    std::cout << "Odd Count: " << odd << "\n";
    std::cout << "\n";
    std::cout << "Positive count: " << positive << "\n";
    std::cout << "Negative count: " << negative <<"\n";
    std::cout << "Zero count: " <<  zero <<"\n";
    std::cout << "\n";
    std::cout << "Even sum: " << evenSum << "\n";
    std::cout << "Odd sum: " << oddSum << "\n";

    return 0;
}
