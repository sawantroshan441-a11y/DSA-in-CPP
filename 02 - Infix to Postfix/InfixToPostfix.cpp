#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to return precedence of operators
int precedence(char op)
{
    if (op == '^')
        return 3;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return 0;
}

int main()
{
    string infix, postfix = "";
    stack<char> s;

    cout << "Enter Infix Expression: ";
    cin >> infix;

    for (int i = 0; i < infix.length(); i++)
    {
        char ch = infix[i];

        // If operand, add to postfix
        if (isalnum(ch))
        {
            postfix += ch;
        }

        // If opening parenthesis, push to stack
        else if (ch == '(')
        {
            s.push(ch);
        }

        // If closing parenthesis
        else if (ch == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                postfix += s.top();
                s.pop();
            }

            if (!s.empty())
                s.pop(); // Remove '('
        }

        // If operator
        else
        {
            while (!s.empty() &&
                   precedence(s.top()) >= precedence(ch) &&
                   s.top() != '(')
            {
                postfix += s.top();
                s.pop();
            }

            s.push(ch);
        }
    }

    // Pop remaining operators
    while (!s.empty())
    {
        postfix += s.top();
        s.pop();
    }

    cout << "\nInfix Expression : " << infix << endl;
    cout << "Postfix Expression : " << postfix << endl;

    return 0;
}
