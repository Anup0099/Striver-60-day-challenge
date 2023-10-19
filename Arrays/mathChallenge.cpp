#include <iostream>
#include <string>
#include <stack>

using namespace std;

// Function to perform arithmetic operations
int performOperation(char op, int num1, int num2)
{
    switch (op)
    {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        return num1 / num2;
    default:
        return 0; // Invalid operation
    }
}

// Function to evaluate a mathematical expression
int evaluateExpression(const string &str)
{
    stack<int> numStack; // Stack to store numbers
    stack<char> opStack; // Stack to store operators

    for (char ch : str)
    {
        if (isdigit(ch))
        {
            // Read the entire number and push it onto the number stack
            int num = ch - '0';
            while (isdigit(str[++ch - '0']))
            {
                num = num * 10 + (ch - '0');
            }
            numStack.push(num);
        }
        else if (ch == '(')
        {
            opStack.push(ch);
        }
        else if (ch == ')')
        {
            // Evaluate the expression inside parentheses
            while (!opStack.empty() && opStack.top() != '(')
            {
                int num2 = numStack.top();
                numStack.pop();
                int num1 = numStack.top();
                numStack.pop();
                char op = opStack.top();
                opStack.pop();
                numStack.push(performOperation(op, num1, num2));
            }
            opStack.pop(); // Pop '('
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            // Evaluate operators according to precedence and associativity
            while (!opStack.empty() && opStack.top() != '(' &&
                   ((ch == '+' || ch == '-') && (opStack.top() == '*' || opStack.top() == '/')))
            {
                int num2 = numStack.top();
                numStack.pop();
                int num1 = numStack.top();
                numStack.pop();
                char op = opStack.top();
                opStack.pop();
                numStack.push(performOperation(op, num1, num2));
            }
            opStack.push(ch);
        }
    }

    // Evaluate any remaining operators
    while (!opStack.empty())
    {
        int num2 = numStack.top();
        numStack.pop();
        int num1 = numStack.top();
        numStack.pop();
        char op = opStack.top();
        opStack.pop();
        numStack.push(performOperation(op, num1, num2));
    }

    // The result will be at the top of the number stack
    return numStack.top();
}

#include <algorithm>

int main()
{
    string str = "10 + 2 * 6";
    cout << evaluateExpression(str) << endl;

    str = "100 * 2 + 12";
    cout << evaluateExpression(str) << endl;

    str = "100 * ( 2 + 12 )";
    cout << evaluateExpression(str) << endl;

    str = "100 * ( 2 + 12 ) / 14";
    cout << evaluateExpression(str) << endl;

    return 0;
}