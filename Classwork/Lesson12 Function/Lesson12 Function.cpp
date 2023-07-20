#include <iostream>

using namespace std;

void greeting()
{
	cout << "Добро пожаловать!" << endl;
}

void start(int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << i << endl;
	}
}

void char_count(char symb, int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << symb << endl;
	}
}

void calculator(int a, int b)
{
	cout << a + b << endl;
}

int MyFunc(int count1, int count2)
{
	int key;
	key = count1 * count2;
	return key;
}

int MaxFunc(int count1, int count2)
{
	if (count1 > count2) {
		return count1;
	}
	else {
		return count2;
	}

}

int MaxFunc2(int count1, int count2)
{
	int max = 0;
	if (count1 > max) {
		return count1;
	}
	else {
		return count2;
	}

}

void MyFunc()
{
	static int a = 0;
	a++;
	cout << a;
}

void test();

int main()
{
	setlocale(LC_ALL, "Rus");

	//start(8);

	//calculator(2,2);

	//int res = MyFunc(4, 6);
	//cout << MyFunc(7, 8) << endl;
	//cout << res << endl;
	int num1, num2;
	cout << "ВВедите два числа: ";
	cin >> num1 >> num2;

	cout << MaxFunc(num1, num2) << endl;


}


void test()
{
	cout << "test" << endl;
}