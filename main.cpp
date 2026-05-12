#include <bits/stdc++.h>

using namespace std;

int add(int a, int b) {
	int z = a + b;
	return z;
}

int sub(int a, int b) {
	int z = a - b;
	return z;
}

int main() {
	int a = 10;
	int b = 5;
	int add_res = add(a, b);
	int sub_res = sub(a, b);
	cout << sub_res << '\n';
	return 0;
	
}
