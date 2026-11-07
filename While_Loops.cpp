#include <iostream>

int main() 
{
    int count = 1;
    int MAX_COUNT = 5;

    std::cout << "Count\n";
    while (count <= MAX_COUNT) {    
        std::cout << count << "\n";
        count += 1;
    }
    return 0;
}
