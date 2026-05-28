#include <iostream>
#include "add.h"
#include "mul.h"
#include "sub.h"
using namespace std;

int main() {
	
	cout << add(3, 4) << '\n';
	cout << sub(2, 3) << '\n';
	cout << mul(3, 5) << '\n';
	cout << mul(-3, 5) << '\n';
	cout << mul(3, -5) << '\n';
	cout << mul(-3, -5) << '\n';
}