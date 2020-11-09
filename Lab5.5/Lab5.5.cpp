// Lab 5.5.cpp
// Михайлов Олександр
// Рекурсивні функції
//Варіант 24

#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>

using namespace std;

double f(double n, double r, double k, int i, int level, int depth) {
	if (level > depth)
		depth = level;
	cout << " level = " << level << endl;

	if (n == 0 && r == 0)
		return 1;
	else if (n > 0 && r >= 0 && r <= (n * (k - 1) + 1)) {
		int S = 0;
		do {
			S += f(n - 1, r - i, k, i, level + 1, depth);
			i++;
		} while (i <= (k - 1));
	}
	else
		return 0;
}

int main()
{
	srand((unsigned)time(NULL));

	double n, r, x, k;
	int depth = 0, level, i = 0;
	int t = rand() % 11;
	int m = pow(10, t);
	
	cout << "n = "; cin >> n;
	cout << "r = "; cin >> r;
	cout << "k = "; cin >> k;

	int s = 0;
	do {
		s += f(n, i, k, i, 1, depth);
		i++;
	} while (i <= n * (k - 1));

	s %= m;
	x = s;

	cout << "depth = " << depth << endl;
	cout << "x = " << x << endl;

	cin.get();
	return 0;
}
