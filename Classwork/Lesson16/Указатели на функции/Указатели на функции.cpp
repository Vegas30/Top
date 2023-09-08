#include <iostream>
using namespace std;
int add(int n, int m)
{
	return n + m;
}
int division(int n, int m)
{
	return n / m;
}
int mult(int n, int m)
{
	return n * m;
}
int subt(int n, int m)
{
	return n - m;
}

int main()
{
	int (*par)(int, int); // Указатель на функцию.
	int a = 6, b = 2;
	char c = '+';
	par = add;
	while (c != ' ')
	{
		cout << "\n Arguments: a = " << a << ", b = "
			<< b;
		cout << ". Result for c = \'" << c << "\':";
		switch (c)
		{
		case '+':
		{
			par = add;
			c = '/';
			break;
		}
		case '-':
		{
			par = subt;
			c = ' ';
			break;
		}
		case '*':
		{
			par = mult;
			c = '-';
			break;
		}
		case '/':
		{
			par = division;
			c = '*';
			break;
		}
		}
	}
}
