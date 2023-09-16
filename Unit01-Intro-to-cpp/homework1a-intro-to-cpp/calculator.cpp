#include <iostream>
#include <string>

std::string input(std::string prompt) {
    std::cout << prompt;
    std::cout.flush();
    std::string response;
    std::getline(std::cin, response);
    return response;
}

int main(int argc, char const* argv[]) {
    if (argc != 4) {
        std::cout << "Usage: " << argv[0] << " <number1> <operation> <number2>" << std::endl;
        return 1;
    }

    double num1 = std::strtod(argv[1], nullptr);
    std::string operation = argv[2];
    double num2 = std::strtod(argv[3], nullptr);

    double result;

    if (operation == "+") {
        result = num1 + num2;
    } else if (operation == "-") {
        result = num1 - num2;
    } else if (operation == "*") {
        result = num1 * num2;
    } else if (operation == "/") {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            std::cout << "Error: Division by zero is not allowed." << std::endl;
            return 1;
        }
    } else {
        std::cout << "Invalid operation. Please enter +, -, *, or /." << std::endl;
        return 1;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}

