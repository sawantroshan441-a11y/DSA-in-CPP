#include <iostream>
#include <stack>
using namespace std;

// Function to check operator priority
int precedence(char op)
{
    if(op == '+' || op == '-')
        return 1;
    if(op == '*' || op == '/')
        return 2;
    return 0;
}

int main()
{
    string infix, postfix = "";

    cout << "Enter Infix Expression: ";
    cin >> infix;

    stack<char> s;

    for(int i = 0; i < infix.length(); i++)
    {
        char ch = infix[i];

        // If character is operand
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            postfix = postfix + ch;
        }
        else
        {
            while(!s.empty() && precedence(s.top()) >= precedence(ch))
            {
                postfix = postfix + s.top();
                s.pop();
            }
            s.push(ch);
        }
    }

    // Pop remaining operators
    while(!s.empty())
    {
        postfix = postfix + s.top();
        s.pop();
    }

    cout << "Infix Expression : " << infix << endl;
    cout << "Postfix Expression : " << postfix << endl;

    return 0;
}
