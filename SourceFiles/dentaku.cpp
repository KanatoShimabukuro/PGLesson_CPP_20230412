#include <iostream>
#include <string>
#include <stack>

using namespace std;

// �񍀉��Z�q�̗D�揇�ʂ�Ԃ��֐�
int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

// �񍀉��Z���s���֐�
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
        return 0.0; // �G���[���͓K�؂ȏ������s���Ă�������
    }
}

// �����̕]�����s���֐�
double evaluateExpression(const string& expression) {
    stack<double> operandStack;
    stack<char> operatorStack;

    for (char c : expression) {
        if (isdigit(c)) {
            // ������operandStack�Ƀv�b�V��
            operandStack.push(c - '0');
        }
        else if (c == '(') {
            // '('��operatorStack�Ƀv�b�V��
            operatorStack.push(c);
        }
        else if (c == ')') {
            // '('�ɏo��܂ŉ��Z���s��
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
            // '('���̂Ă�
            if (!operatorStack.empty() && operatorStack.top() == '(')
                operatorStack.pop();
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/') {
            // ���Z�q����������
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

    // �c�������Z�q����������
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

    // �ŏI���ʂ�Ԃ�
    return operandStack.top();
}

int main() {
    string expression;
    cout << "��������͂��Ă�������(�� : 2 + 3) : ";
    getline(cin, expression);

    double result = evaluateExpression(expression);
    cout << "����: " << result << endl;

    return 0;
}