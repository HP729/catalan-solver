#include <iostream>
using namespace std;

unsigned long long int calcCatalan(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        unsigned long long int val = 0;
        for (int i = 0; i < n; i++)
        {
            val += calcCatalan(i) * calcCatalan(n - 1 - i);
        }
        return val;
    }
}

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);

    // Checks if input is valid.
    if (n < 0)
    {
        cerr << "Value must be greater than 0!" << endl;
        return 1;
    }

    unsigned long long int answer = calcCatalan(n);
    cout << answer << endl;

    return 0;
}