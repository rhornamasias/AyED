#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double calculopi (int ult_iter) {
	double pi = 0.0;
	
	for (int n = 0; n < ult_iter; n++) {
		double elem = (n % 2 ==  0) ? 1.0 / (2 * n + 1) : -1.0 / (2 * n + 1);
		pi += elem;
	}
	
	return pi * 4;
}

int main() {
	int iter = 1000000 ;
	double res = calculopi (iter);

	cout << "El valor de pi, aproximado a sus primeros 6 decimales es = " << setprecision (6) << fixed << res;

	return 0;
}

