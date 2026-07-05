#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string postfix;
    cout << "Enter Postfix Expression: ";
    cin >> postfix;

    stack<int> s;

    for (char ch : postfix)
    {
        if (isdigit(ch))
        {
            s.push(ch - '0'); // Convert character to integer
        }
        else
        {
            int b = s.top();
            s.pop();

            int a = s.top();
            s.pop();

            switch (ch)
            {
            case '+':
                s.push(a + b);
                break;

            case '-':
                s.push(a - b);
                break;

            case '*':
                s.push(a * b);
                break;

            case '/':
                s.push(a / b);
                break;
            }
        }
    }

    cout << "\nPostfix Expression : " << postfix << endl;
    cout << "Result : " << s.top() << endl;

    return 0;
}
