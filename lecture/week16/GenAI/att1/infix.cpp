#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// Function to evaluate an expression
int evaluate(string expr, int& index);

// Function to perform addition and subtraction
int addSubtract(string expr, int& index);

// Function to perform multiplication and division
int multiplyDivide(string expr, int& index);

// Function to check if a character is an operator
bool isOperator(char op);

int main() {
    string expression;
    cout << "Enter an infix expression: ";
    getline(cin, expression);

    int index = 0;
    int result = evaluate(expression, index);
    if (index < expression.length()) {
        cout << "Invalid expression" << endl;
    } else {
        cout << "Result: " << result << endl;
    }

    return 0;
}

int evaluate(string expr, int& index) {
    int leftOperand = addSubtract(expr, index);

    while (index < expr.length()) {
        char op = expr[index];
        if (!isOperator(op)) {
            break;
        }
        index++; // Move to the next character

        int rightOperand = addSubtract(expr, index);

        switch (op) {
            case '+':
                leftOperand += rightOperand;
                break;
            case '-':
                leftOperand -= rightOperand;
                break;
            default:
                cerr << "Invalid operator" << endl;
                exit(EXIT_FAILURE);
        }
    }
    return leftOperand;
}

int addSubtract(string expr, int& index) {
    int leftOperand = multiplyDivide(expr, index);

    while (index < expr.length()) {
        char op = expr[index];
        if (op != '+' && op != '-') {
            break;
        }
        index++; // Move to the next character

        int rightOperand = multiplyDivide(expr, index);

        switch (op) {
            case '+':
                leftOperand += rightOperand;
                break;
            case '-':
                leftOperand -= rightOperand;
                break;
            default:
                cerr << "Invalid operator" << endl;
                exit(EXIT_FAILURE);
        }
    }
    return leftOperand;
}

int multiplyDivide(string expr, int& index) {
    int leftOperand = 0;
    if (expr[index] == '(') {
        index++; // Move past '('
        leftOperand = evaluate(expr, index);
        if (expr[index] != ')') {
            cerr << "Mismatched parentheses" << endl;
            exit(EXIT_FAILURE);
        }
        index++; // Move past ')'
    } else {
        // Read operand
        while (index < expr.length() && isdigit(expr[index])) {
            leftOperand = leftOperand * 10 + (expr[index] - '0');
            index++; // Move to the next character
        }
    }
    return leftOperand;
}

bool isOperator(char op) {
    return (op == '+' || op == '-' || op == '*' || op == '/');
}
