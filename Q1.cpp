#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 50; i++)
	{
		if ((i % 3 == 0 && i % 5 == 0) || (i % 3 == 0 && i % 7 == 0) || (i % 5 == 0 && i % 7 == 0))
			cout << "fizzbuzzwoof" << endl;
		else
			if (i % 3 == 0)
				cout << "fizz" << endl;
			else
				if (i % 5 == 0)
					cout << "buzz" << endl;
				else
					if (i % 7 == 0)
						cout << "woof" << endl;
					else
						cout << i << endl;
	}
	return 0;
}