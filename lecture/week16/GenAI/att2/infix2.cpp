#include <iostream>
#include <fstream>
#include <stack>
#include <climits>
#include <string>
#include <cmath> // Include <cmath> for pow() function

using namespace std;

int precedence(char op) {
    return 0; // All operators have equal precedence
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
        case '^': // Exponentiation operator
            return pow(a, b);
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
    getline(file, line);
    num_equations = stoi(line);

    for (int i = 0; i < num_equations; ++i) {
        string equation;
        getline(file, equation);
        int result = solve(equation, 0, equation.size() - 1);
        cout << result << endl;
    }

    return 0;
}
