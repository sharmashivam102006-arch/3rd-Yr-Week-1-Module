#include <iostream>
using namespace std;

// 1. Number Square
void squarePattern(int n)
{
    cout << "\n1. Number Square\n";
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            cout << "1 ";
        cout << endl;
    }
}

// 2. Incrementing Pattern
void incrementingPattern(int n)
{
    cout << "\n2. Incrementing Pattern\n";
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            cout << j << " ";
        cout << endl;
    }
}

// 3. Right Triangle
void rightTriangle(int n)
{
    cout << "\n3. Right Triangle\n";
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
            cout << j << " ";
        cout << endl;
    }
}

// 4. Inverted Diamond Pattern
void invertedDiamond(int n)
{
    cout << "\n4. Inverted Diamond Pattern\n";

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j < i; j++)
            cout << i << " ";

        for(int j = i; j <= n; j++)
            cout << n + 2 << " ";

        cout << endl;
    }
}

// 5. Sandwich Pattern
void sandwichPattern()
{
    cout << "\n5. Sandwich Pattern\n";

    cout << "3 3 3 3 3 3\n";
    cout << "4 4 4 4 4\n";
    cout << " 5 5 5 5\n";
    cout << "4 4 4 4 4\n";
    cout << "3 3 3 3 3 3\n";
}

// 6. Incrementing Diamond Pattern
void incrementingDiamond()
{
    cout << "\n6. Incrementing Diamond Pattern\n";

    cout << "3\n";
    cout << "4 4\n";
    cout << "5 5 5\n";
    cout << "6 6 6 6\n";
    cout << "7 7 7 7 7\n";
    cout << "6 6 6 6\n";
    cout << "5 5 5\n";
    cout << "4 4\n";
    cout << "3\n";
}

int main()
{
    int n = 5;

    squarePattern(n);
    incrementingPattern(n);
    rightTriangle(n);
    invertedDiamond(n);
    sandwichPattern();
    incrementingDiamond();

    return 0;
}