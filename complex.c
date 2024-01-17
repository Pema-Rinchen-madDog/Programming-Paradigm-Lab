#include<iostream>
using namespace std;

class Complex
{
	private:
		float real;
		float imag;
		
		public:
			Complex(){
				real = 0;
				imag = 0;
				
			}
			Complex(float r, float i){
				real = r;
				imag = i;
				
			}
			friend Complex add(Complex c1, Complex c2);
			void display(){
				cout <<"("<<real<<"+"<<imag<<")"<<endl;
			}
};
Complex add( Complex c1, Complex c2){
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp;
}
int main(){
	Complex c1(2.3,0), c2(3.3,0), c3;
	c3 = add(c1, c2);
	c1.display();
	c2.display();
	cout<<"Addition of the complex number is:"<<endl;
	c3.display();
	return 0;
}
