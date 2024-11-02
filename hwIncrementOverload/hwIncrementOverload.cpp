#include <iostream>
#include <random>
using namespace std;

class franction {
	float a;
	float b;
public:
	franction(int a, int b) {
		a = b;
		b = a;

		if (b == 0) {
			cout << "a != 0";
		}
	}

	franction() {
		a = 1;
		b = 0;
	}

	void Rand() {
		srand(time(0));
		a = rand() % 100 + 3;
		b = rand() % 100 + 3;
	}

	void Show() {
		cout << b << "/" << a << " = " << b / a << endl;
	}
	franction operator+(int x) {
		a = a + x;
		b = b + x;

	}
	franction operator+(franction* obj) {
		a = a + obj->a;
		b = b + obj->b;
	}
	franction operator-(int x) {
		a = a - x;
		b = b - x;

	}
	franction operator-(franction* obj) {
		a = a - obj->a;
		b = b - obj->b;
	}
	franction operator/(int x) {
		a = a / x;
		b = b / x;

	}
	franction operator/(franction* obj) {
		a = a / obj->a;
		b = b / obj->b;
	}
	franction operator*(int x) {
		a = a * x;
		b = b * x;

	}
	franction operator*(franction* obj) {
		a = a * obj->a;
		b = b * obj->b;
	}

};


int main()
{
	srand(time(0));
	franction c(10, 10);
	c.Show();
}


