#include<iostream>
using namespace std;

class Complex
{
	private:
		float real;
		float imag;
		
	public:
		// Default constructor 
		Complex() {
			real = 0;
			imag = 0;
		}
		
		// Parameterized constructor
		Complex(float r, float i) {
			real = r;
			imag = i;
		}
		//copy constructor
		complex(const Complex& copied){
			real=copied.real;
			imag=copied.imag;
		}
		friend Complex add(Complex c1, Complex c2);
		
		void display() {
			cout << "(" << real << "+" << imag << "i" << ")" << endl;
		}
};

Complex add(Complex c1, Complex c2) {
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp;
	
}

int main() {
	Complex c1(5.3, 5), c2(7.3, 0), c3;
	c3 = add(c1, c2);
	cout << "First complex number is:" << endl;
	c1.display();
	cout << "Second complex number is:" << endl;
	c2.display();
	cout << "Addition of the complex number is:" << endl;
	c3.display();
	
	return 0;
}
