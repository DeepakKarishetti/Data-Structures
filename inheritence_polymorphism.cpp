// inheritance ond polymorphism of classes implementation in cpp

#include <iostream>

using namespace std;

// parent class
class animal
{
	public:
		string name;
		virtual void print();  // polymorphism
		virtual void speak() = 0;
};

// inheriting the parent class by the subclass
class dog : public animal
{
	public:
		string breed;
		void print();
		void speak() 
		{
			cout << "Woof!" << "\n";
		}
};

//
class cat : public animal
{
	public:
		int age;
		void print();
		void speak()
		{
			cout << "Meow!" << "\n";
		}
};

void animal::print()
{
	cout << "My name is: " << name << "\n";
	speak();
}

void dog::print()
{
	//cout << "My name is " << name << "." << "\n";
	// Improve the print() method by reusing the superclass behaviour
	animal::print();
	cout << "I am a " << breed << "\n";
	cout << "And I am a DOG!" << "\n";
}

void cat::print()
{
	animal::print();
	cout << "I am " << age << " years old CAT!" << "\n";
}

// inheriting the dog child class
class pup : public dog
{
	public:
		string who;
		void print();	
		void speak()
		{
			cout << "Awoooo!" << "\n";
		}
};

void pup::print()
{
	dog::print();
	cout << "I am a pupper!" << "\n";
}

// Polymorphism
void print_animal(animal &a)
{
	a.print();
}

int main()
{
	dog d;
	d.name = "Pogo";
	d.breed = "French Bulldog";
	//d.print();
	print_animal(d);

	cat c;
	c.name = "Sheldon";
	c.age = 2;
	//c.print();
	print_animal(c);

	pup p;
	p.name = "Silver";
	p.breed = "Pug";
	//p.print();
	print_animal(p);

	return 0;

}
