#include <iostream>
#include <vector>

bool isDivisible(int a, int b) {
    return (a % b == 0);
}

int main() {
    int n;
    std::cout << "Enter a positive integer n (n ≥ 3): ";
    std::cin >> n;

    if (n < 3) {
        std::cout << "Invalid input. n must be greater than or equal to 3." << std::endl;
        return 1;
    }

    std::vector<int> arr;

    // Start with the first two elements as 1 and 2 (to ensure strictly increasing)
    arr.push_back(1);
    arr.push_back(2);

    for (int i = 2; i < n; i++) {
        int nextElement = arr[i - 2] + 2;  // Ensure the next element is at least 2 greater than the previous
        arr.push_back(nextElement);
    }

    std::cout << "The strictly increasing array of size " << n << " is: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Verifying the condition 3*a[i+2] is not divisible by a[i]+a[i+1]..." << std::endl;
    for (int i = 1; i <= n - 3; i++) {
        if (isDivisible(3 * arr[i + 2], arr[i] + arr[i + 1])) {
            std::cout << "Condition violated at i = " << i << ": 3*a[i+2] is divisible by a[i]+a[i+1]." << std::endl;
            return 1;
        }
    }

    std::cout << "The condition is satisfied for the generated array." << std::endl;

    return 0;
}
