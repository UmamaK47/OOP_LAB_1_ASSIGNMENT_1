//LAB TASK 1
/*
#include<iostream>
#include<string>
using namespace std;
class Dog {
public:
	string name, breed;
	int age;
	void bark() {
		cout << name << " says woof!" << endl;
	}
};
class Person {
public:
	string name;
	Dog pet;
	void introducePet() {
		cout << "My dog's name is " << pet.name << ". It's a " << pet.breed << " and its " << pet.age << " years old." << endl;
		pet.bark();
	}
};
int main() {
	Person person1;
	person1.name = "Bob";
	person1.pet.name = "Buddy";
	person1.pet.breed = "Husky";
	person1.pet.age = 2;
	person1.introducePet();
	return 0;
}
*/

//LAB TASK 2
/*
#include<iostream>
#include<string>
#include<vector>
using namespace std;


class House {
public:
	vector<string>name;
	vector<int>age;
	void addPerson(string person_name, int person_age) {
		name.push_back(person_name);
		age.push_back(person_age);
	}
	void displayPerson() {
		cout << "Persons in the house:" << endl;
		for (int i = 0; i < name.size(); ++i) {
			cout << "Name: " << name[i] << ", Age: " << age[i] << endl;
		}
	}
};
int main() {
	House p1;
	p1.addPerson("Bob", 25);
	p1.addPerson("Alex", 23);
	p1.displayPerson();
	return 0;
}
*/


//LAB TASK 3
/*
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Dog {
public:
	string name, breed;
	int age;
	void bark() {
		cout << name << " says woof!" << endl;
	}
};
class Person {
public:
	string name;
	int age;
	Dog pet;
	void introducePet() {
		cout << "Dog Name: " << pet.name << ", Breed: " << pet.breed << ", Age: " << pet.age  << endl;
		pet.bark();
	}
};

class House {
public:
	Person person1;
	vector<string>name;
	vector<int>age;
	void addPerson(string person_name, int person_age) {
		name.push_back(person_name);
		age.push_back(person_age);
	}
	void displayPerson() {
		cout << "\nPersons in the house:" << endl;
		for (int i = 0; i < name.size(); ++i) {
			cout << "Name: " << name[i] << ", Age: " << age[i] << endl;
		}
	}
};
int main() {
	House p1;
	p1.addPerson("Bob", 25);
	p1.addPerson("Alex", 23);
	p1.person1.pet.name = "Misty";
	p1.person1.pet.breed = "Dobberman";
	p1.person1.pet.age = 3;
	p1.displayPerson(); 
	p1.person1.introducePet();
	return 0;
}
*/
/*
//HOME TASK 4
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Dog {
public:
	string name, breed;
	int age;
	void bark() {
		cout << name << " says woof!" << endl;
	}
};
class Person {
public:
	string name;
	int age;
	Dog pet;
	void introducePet() {
		cout << "My dog's name is " << pet.name << ". It's a " << pet.breed << " and its " << pet.age << " years old." << endl;
		pet.bark();
	}
	void newPet(string newName, string newBreed, int newAge) {
		pet.name = newName;
		pet.breed = newBreed;
		pet.age = newAge;
	}
};

class House {
public:
	Person person1;
	vector<string>name;
	vector<int>age;
	void addPerson(string person_name, int person_age) {
		name.push_back(person_name);
		age.push_back(person_age);
	}
	void displayPerson() {
		cout << "\nPersons in the house:" << endl;
		for (int i = 0; i < name.size(); ++i) {
			cout << "Name: " << name[i] << ", Age: " << age[i] << endl;
		}
	}
};
int main() {
	House p1;
	p1.addPerson("Bob", 25);
	p1.addPerson("Alex", 23);
	p1.person1.pet.name = "Misty";
	p1.person1.pet.breed = "Dobberman";
	p1.person1.pet.age = 3;
	p1.displayPerson();
	cout << "\nInitial Pets: \n";
	p1.person1.introducePet();
	cout << "\nNew Pet: \n";
	p1.person1.newPet("Max", "Chihuahua", 1);
	p1.person1.introducePet(); 
	return 0;
}
*/

//HOME TASK 5
/*
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Neighborhood {
public:
	vector<string>houses;
	string name[8] = {"Bob", "Alex", "Sara", "Alice", "Noah", "Tom", "Beth", "Lily"};
	void addHouse(string house) {
		houses.push_back(house);
	}
	void display() {
		for (int i = 0; i < houses.size(); i++) {
			cout <<"\n"<< houses[i] << ": \nInhabitants: ";
			for (int j = i * 3; j < (i * 3 + 3); ++j) {
				cout << name[j];
				if (j < (i * 3 + 2)) {
					cout << ", ";
				}
			}
		}
	}
};
int main()
{
	Neighborhood house;
	house.addHouse("House 1");
	house.addHouse("House 2");
	house.addHouse("House 3");
	house.display();
	return 0;
}
*/
/*
//HOME TASK 6
#include <iostream> 
using namespace std;
class Vehicle {
private:
	string make;
	string model; 
	int year;
public:
	Vehicle(string mk, string mdl, int yr) : make(mk), model(mdl), year(yr) {}
	void setMake(string mk) {
		make = mk;
	}
	void setModel(string mdl) {
		model = mdl;
	}
	void setYear(int yr) {
		year = yr;
	}
	void displayVehicleInfo() {
	 cout << "Make: " << make << ", Model: " << model << ", Year: " << year << endl;
	}
	//Method for service checks
	void service(long int& miles) {
		if (miles > 10000) {
			cout << "\nCar needs servicing!";
		}
		else {
			cout << "\nCar does not need servicing!";
		}
	}
};
int main() {
	Vehicle myVehicle("Toyota", "Corolla", 2020);
	myVehicle.displayVehicleInfo();
	cout << "Enter car milage: ";
	long int miles;
	cin >> miles;
	myVehicle.service(miles);
	return 0;
}
*/