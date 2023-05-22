#include <iostream>
#include <string>
#include <stack>

using namespace std;

// 二項演算子の優先順位を返す関数
int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

// 二項演算を行う関数
double applyOperator(double a, double b, char op) {
    switch (op) {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    default:
        return 0.0; // エラー時は適切な処理を行ってください
    }
}

// 数式の評価を行う関数
double evaluateExpression(const string& expression) {
    stack<double> operandStack;
    stack<char> operatorStack;

    for (char c : expression) {
        if (isdigit(c)) {
            // 数字をoperandStackにプッシュ
            operandStack.push(c - '0');
        }
        else if (c == '(') {
            // '('をoperatorStackにプッシュ
            operatorStack.push(c);
        }
        else if (c == ')') {
            // '('に出会うまで演算を行う
            while (!operatorStack.empty() && operatorStack.top() != '(') {
                char op = operatorStack.top();
                operatorStack.pop();
                double b = operandStack.top();
                operandStack.pop();
                double a = operandStack.top();
                operandStack.pop();
                double result = applyOperator(a, b, op);
                operandStack.push(result);
            }
            // '('を捨てる
            if (!operatorStack.empty() && operatorStack.top() == '(')
                operatorStack.pop();
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/') {
            // 演算子を処理する
            while (!operatorStack.empty() && precedence(operatorStack.top()) >= precedence(c)) {
                char op = operatorStack.top();
                operatorStack.pop();
                double b = operandStack.top();
                operandStack.pop();
                double a = operandStack.top();
                operandStack.pop();
                double result = applyOperator(a, b, op);
                operandStack.push(result);
            }
            operatorStack.push(c);
        }
    }

    // 残った演算子を処理する
    while (!operatorStack.empty()) {
        char op = operatorStack.top();
        operatorStack.pop();
        double b = operandStack.top();
        operandStack.pop();
        double a = operandStack.top();
        operandStack.pop();
        double result = applyOperator(a, b, op);
        operandStack.push(result);
    }

    // 最終結果を返す
    return operandStack.top();
}

int main() {
    string expression;
    cout << "数式を入力してください(例 : 2 + 3) : ";
    getline(cin, expression);

    double result = evaluateExpression(expression);
    cout << "結果: " << result << endl;

    return 0;
}