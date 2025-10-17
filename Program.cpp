#include <iostream>
using namespace std;
int main()
{
    char op;
    float a, b;
    int execute = 1;
    do
    {
        cout << "\n Enter 1st Number: ";
        cin >> a;
        cout << " Enter 2nd Number: ";
        cin >> b;

        cout << " \nEnter One of the following options \n +: Addition\n -: Subtraction\n *: Multiplication\n /: Division \n";
        cin >> op;
        switch (op)
        {
        case '+':
            cout << " Addition: " << a + b << endl;
            break;
        case '-':
            cout << " Subtraction: " << a - b << endl;
            break;
        case '*':
            cout << " Multiplication: " << a * b << endl;
            break;
        case '/':
            cout << " Division: " << a / b << endl;
            break;
        default:
            cout << "Invalid Option!";
        }
        cout << " \nEnter:\n 1 to ReExecute Program \n 0 to Exit Program";
        cin >> execute;
    } while (execute == 1);

    cout << " Program is terminated!!!!";

    return 0;
}