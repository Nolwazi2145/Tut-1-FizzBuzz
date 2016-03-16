#include<iostream>
using namespace std;

int main()
{
	int i;
	for (i = 0; i <= 50; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			cout << "FizzBuzz" << endl;
		else
			if (i % 3 == 0)
				cout << "Fizz" << endl;
