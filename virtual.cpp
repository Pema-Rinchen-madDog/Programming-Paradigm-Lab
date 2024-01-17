#include <iostream>
using namespace std;
//class for person
class Person {
	protected:
    	string name;
    	int age;

public:
    virtual void getdata() {
    	cout<<"enter your name";
        cin >> name >> age;
    }
    virtual void putdata() {
        cout << name << " " << age << " ";
    }
};

//class for Professor
class Professor: public Person{
	int publications ;
	int sumOfMarks; 
	int cur_id;
  	static int id;
   	 	
public:
    Professor() {
        cur_id = ++id;
        sumOfMarks=0;
    }
	virtual void getdata() {
		Person::getdata();
    	cout<<"enter your publication";
        cin >> publications;
    }
    virtual void putdata() {
    	Person::putdata();
        cout << name << " " << age << " "<< publications << " ";
    }
};
//class for Studnet
class Student : public Person{
	int marks[6];
	int cur_id;
	static int id;
	int sumOfMarks;
	
public:
    Student() {
        cur_id = ++id;
    }
	void getdata() {
        Person::getdata();
        cout<<"enter your marks";
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
            sumOfMarks += marks[i];
        }
    }
    void putdata() {
        Person::putdata();
        cout << sumOfMarks << " " << cur_id << endl;
    }
};
int Professor::id=1;
int Student::id=1;
int main() {
    int n;
    cout<<"enter number of people";
    cin >> n;
    Person* people[n];

    for (int i = 0; i < n; ++i) {
    	cout<<"what is your operation \n 1. Professor 2.Student";
        int type;
        cin >> type;
        if (type == 1) {
            people[i] = new Professor();
        } else if (type == 2) {
            people[i] = new Student();
        }
        people[i]->getdata(); 
    }
    cout<<"putdata";
    for (int i = 0; i < n; ++i) {
        people[i]->putdata();
        delete people[i]; 
    }
	cout<<"hey";
    return 0;
}
