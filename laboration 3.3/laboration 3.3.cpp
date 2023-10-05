#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x, y, R, k;
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	k = 1;
	if (x <= R) 
		y = -((x + 4) / (R+4));
	else 
		if (R <= x && x < 0) 
			y = sqrt(R * R - x*x);
		else 
			if (0 < x && x <= 6) 
				y = ((6*R) - (6*R*x))/6;
			else
				y = k * x - 6;
	cout << "y = " << y;
	return 0;
}



