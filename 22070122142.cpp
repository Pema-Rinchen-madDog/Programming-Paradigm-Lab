#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;
public:
    Person(string n = "", int a = 0) : name(n), age(a) {}
    
    friend istream& operator>>(istream& input, Person& person) {
        cout << "Enter name: ";
        input >> person.name;
        cout << "Enter age: ";
        input >> person.age;
    }
    friend ostream & operator<<(ostream& output,Person& person){
		cout<<"Name:";
    	output<<person.name<<endl;
    	cout<<"Age:";
    	output<<person.age;
	}
	Person operator+(const Person& other) const {
        Person combined;
        combined.name = this->name + " & " + other.name;
        combined.age = this->age + other.age;
        return combined;
    }
};
int main() {
    Person person,person1;
    cin >> person;
    cin >> person1;
    cout << "Person Details: " <<endl<< person << endl;
    Person combinedPerson = person + person1;
    cout << "Combined Person Details: " << combinedPerson << endl;
    return 0;
}

