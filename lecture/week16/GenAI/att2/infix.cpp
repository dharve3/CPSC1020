#include <iostream>
#include <fstream>
#include <stack>
#include <climits>
#include <string>

using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    else
        return 0;
}

int performOperation(char op, int a, int b) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0)
                return a / b;
            else {
                cerr << "Error: Division by zero!" << endl;
                return INT_MAX; // Return maximum integer value to indicate error
            }
        default:
            return 0;
    }
}

int solve(string equation, int start, int end) {
    stack<char> operators;
    stack<int> operands;

    for (int i = start; i <= end; ++i) {
        if (equation[i] == ' ')
            continue;

        if (isdigit(equation[i])) {
            int num = 0;
            while (i <= end && isdigit(equation[i])) {
                num = num * 10 + (equation[i] - '0');
                i++;
            }
            operands.push(num);
            i--;
        } else if (equation[i] == '(') {
            int j = i + 1;
            int openBrackets = 1;
            while (j <= end && openBrackets > 0) {
                if (equation[j] == '(')
                    openBrackets++;
                else if (equation[j] == ')')
                    openBrackets--;
                j++;
            }
            int result = solve(equation, i + 1, j - 2);
            operands.push(result);
            i = j - 1;
        } else if (equation[i] == ')')
            continue;
        else {
            while (!operators.empty() && precedence(operators.top()) >= precedence(equation[i])) {
                int b = operands.top();
                operands.pop();
                int a = operands.top();
                operands.pop();
                char op = operators.top();
                operators.pop();
                operands.push(performOperation(op, a, b));
            }
            operators.push(equation[i]);
        }
    }

    while (!operators.empty()) {
        int b = operands.top();
        operands.pop();
        int a = operands.top();
        operands.pop();
        char op = operators.top();
        operators.pop();
        operands.push(performOperation(op, a, b));
    }

    return operands.top();
}

int main() {
    ifstream file;
    file.open("equations.txt");
    string line;
    int num_equations;
    // cout << "Enter the number of equations: ";
    getline(file, line);
    num_equations = stoi(line);

    // cin.ignore(); // Consume newline character

    for (int i = 0; i < num_equations; ++i) {
        string equation;
        // cout << "Enter equation " << i + 1 << " in infix notation: ";
        getline(file, equation);
        int result = solve(equation, 0, equation.size() - 1);
        cout << result << endl;
    }

    return 0;
}
