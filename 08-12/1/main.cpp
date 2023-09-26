#include <iostream>
#include <tuple>

std::tuple<int, int> returnTwoNumbers() {
    int num1 = 5; 
    int num2 = 10; 
    return std::make_tuple(num1, num2);
}

int main() {
    std::tuple<int, int> result = returnTwoNumbers();
    int firstNumber = std::get<0>(result);
    int secondNumber = std::get<1>(result);
    std::cout << firstNumber << " " << secondNumber << std::endl;
    return 0;
}