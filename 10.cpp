#include <iostream>
#include <cmath>

class Complex {
private:
    int real;
    int imag;

public:
    void get_data() {
        std::cout << "Enter real part of complex number: ";
        std::cin >> real;
        std::cout << "Enter imaginary part of complex number: ";
        std::cin >> imag;
    }

    void operator++() {
        ++real;
        ++imag;
    }

    void operator--() {
        --real;
        --imag;
    }

    Complex operator+(const Complex& other) {
        Complex temp;
        temp.real = real + other.real;
        temp.imag = imag + other.imag;
        return temp;
    }

    bool operator<(const Complex& other) {
        if (real < other.real)
            return true;
        if (real == other.real && imag < other.imag)
            return true;
        return false;
    }

    void display() {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    int choice;
    Complex a, b, result;
    a.get_data();
    b.get_data();

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Increment complex number 'a'\n";
        std::cout << "2. Decrement complex number 'b'\n";
        std::cout << "3. Add 'a' and 'b'\n";
        std::cout << "4. Compare 'a' and 'b'\n";
        std::cout << "5. Display 'a' and 'b'\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                ++a;
                std::cout << "Incremented 'a': ";
                a.display();
                break;
            case 2:
                --b;
                std::cout << "Decremented 'b': ";
                b.display();
                break;
            case 3:
                result = a + b;
                std::cout << "Result of 'a + b': ";
                result.display();
                break;
            case 4:
                if (a < b)
                    std::cout << "'a' is less than 'b'\n";
                else
                    std::cout << "'a' is not less than 'b'\n";
                break;
            case 5:
                std::cout << "Complex number 'a': ";
                a.display();
                std::cout << "Complex number 'b': ";
                b.display();
                break;
            case 6:
                std::cout << "Exiting the program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 8);

    return 0;
}
