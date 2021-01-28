#include <iostream>
using namespace std;

bool checkPrime(int x);

int main() 
{
    int x, i;
    bool flag = false;

    cout << "Enter a positive  integer: ";
    cin >> x;

    for(i = 2; i <= x/2; ++i) 
	{
        if (checkPrime(i)) 
		{
            if (checkPrime(x - i)) 
			{
                cout << x << " = " << i << " + " << x-i << endl;
                flag = true;
            }
        }
    }

    if (!flag)
      cout << x << " can't be expressed as sum of two prime numbers.";

    return 0;
}

bool checkPrime(int x)
{
    int i;
    bool isPrime = true;
    if (x == 0 || x == 1) 
	{
        isPrime = false;
    }
    else 
	{
        for(i = 2; i <= x/2; ++i) 
		{
            if(x % i == 0) 
			{
                isPrime = false;
                break;
            }
        }
    }

    return isPrime;
}
