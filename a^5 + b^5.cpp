#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, x = 0, y = 0;
	cout << "Enter value of a:  \n";
		cin >> a;
		cout << "Enter value of b:  \n";
		cin >> b;
		x = (a * a * a * a * a) + (b * b * b * b * b);
		y = ((a + b) * ((a * a * a * a) - ((a * a * a) * b) + ((a * a) * (b * b))- ((a) * (b * b * b)) + (b * b * b * b)));
		if (x==y)
		{
			cout << "Correct!  ";
		}
		else
		{
			cout << "Wrong!  ";
		}
}