#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

int applyOperation(int a, int b, char op) {
    switch (op) {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return a / b;
    default: return 0;
    }
}

int evaluateExpression(const string& expression) {
    stack<int> values;
    stack<char> operators;

    for (size_t i = 0; i < expression.size(); ++i) {
        char ch = expression[i];
        if (isspace(ch)) {
            continue;
        }
        if (isdigit(ch)) {
            int num = 0;
            while (i < expression.size() && isdigit(expression[i])) {
                num = num * 10 + (expression[i] - '0');
                ++i;
            }
            --i;
            values.push(num);
        }
        else if (ch == '(') {
            operators.push(ch);
        }
        else if (ch == ')') {
            while (!operators.empty() && operators.top() != '(') {
                int b = values.top();
                values.pop();
                int a = values.top();
                values.pop();
                char op = operators.top();
                operators.pop();
                values.push(applyOperation(a, b, op));
            }
            operators.pop();
        }
        else {
            while (!operators.empty() && precedence(ch) <= precedence(operators.top())) {
                int b = values.top();
                values.pop();
                int a = values.top();
                values.pop();
                char op = operators.top();
                operators.pop();
                values.push(applyOperation(a, b, op));
            }
            operators.push(ch);
        }
    }

    while (!operators.empty()) {
        int b = values.top();
        values.pop();
        int a = values.top();
        values.pop();
        char op = operators.top();
        operators.pop();
        values.push(applyOperation(a, b, op));
    }

    return values.top();
}

int main() {
    string expression;
    cout << "Введите арифметическое выражение: ";
    getline(cin, expression);

    int result = evaluateExpression(expression);
    cout << "Результат: " << result << endl;

    return 0;
}
