#include <iostream>

using namespace std;
int fibonacci(int n);
int main()
{
	int testCaseNum;
	cin >> testCaseNum;
	int N;
	while (testCaseNum--)
	{
		cin >> N;
		if (N == 0) cout << 1 << " " << 0;
		else if (N == 1) cout << 0 << " " << 1;
		else if (N == 2) cout << 1 << " " << 1;
		else
		{
			cout << fibonacci(N - 1) << " " << fibonacci(N);
		}
	}

	return 0;
}

int fibonacci(int n) {
	if (n == 0) {
		
		return 0;
	}
	else if (n == 1) {
		
		return 1;
	}
	else {
		return (fibonacci(n-1) + fibonacci(n-2));
	}
}