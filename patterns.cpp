#include <iostream>
using namespace std;

// 1. Square Pattern
void squarePattern(int n)
{
    cout << "\n1. Square Pattern\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout << "*";
        cout << endl;
    }
}

// 2. Hollow Square Pattern
void hollowSquare(int n)
{
    cout << "\n2. Hollow Square Pattern\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

// 3. Triangle Pattern
void trianglePattern(int n)
{
    cout << "\n3. Triangle Pattern\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout << "*";
        cout << endl;
    }
}

// 4. Inverted Triangle Pattern
void invertedTriangle(int n)
{
    cout << "\n4. Inverted Triangle Pattern\n";
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            cout << "*";
        cout << endl;
    }
}

// 5. Pyramid Pattern
void pyramidPattern(int n)
{
    cout << "\n5. Pyramid Pattern\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
            cout << " ";

        for(int j=1;j<=2*i-1;j++)
            cout << "*";

        cout << endl;
    }
}

// 6. Diamond Pattern
void diamondPattern(int n)
{
    cout << "\n6. Diamond Pattern\n";

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
            cout << " ";

        for(int j=1;j<=2*i-1;j++)
            cout << "*";

        cout << endl;
    }

    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
            cout << " ";

        for(int j=1;j<=2*i-1;j++)
            cout << "*";

        cout << endl;
    }
}

// 7. Half Diamond Pattern
void halfDiamond(int n)
{
    cout << "\n7. Half Diamond Pattern\n";

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout << "*";
        cout << endl;
    }

    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            cout << "*";
        cout << endl;
    }
}

// 8. Half Diamond Inverted Pattern
void halfDiamondInverted(int n)
{
    cout << "\n8. Half Diamond Inverted Pattern\n";

    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            cout << "*";
        cout << endl;
    }

    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout << "*";
        cout << endl;
    }
}

int main()
{
    int n = 5;

    squarePattern(n);
    hollowSquare(n);
    trianglePattern(n);
    invertedTriangle(n);
    pyramidPattern(n);
    diamondPattern(n);
    halfDiamond(n);
    halfDiamondInverted(n);

    return 0;
}