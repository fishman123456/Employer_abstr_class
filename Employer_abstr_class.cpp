// Employer_abstr_class.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//1.	Создать абстрактный базовый класс Employer (слу-
//       жащий) с чисто виртуальной функцией Print().Соз -
//          дайте три производных класса : President, Manager,
//          Worker.Переопределите функцию Print() для вывода
//          информации, соответствующей каждому типу слу -
//          жащего.

#include <iostream>
#include <string.h>
using namespace std;
//абстрактный базовый класс
class Animal
{
public:
	//кличка животного
	char Title[20];
	//простой конструктор
	Animal(char* t) {
		strcpy(Title, t);
	}
	//чисто виртуальная функция
	virtual void speak() = 0;
};
//класс лягушка
class Frog : public Animal
{
public:
	Frog(char* Title) : Animal(Title) {};
	virtual void speak() {
		cout << Title << " say " << "\'kwa-kwa\'\n";
	}
};//класс собака
class Dog : public Animal
{
public:
	Dog(char* Title) : Animal(Title) {};
	virtual void speak() {
		cout << Title << " say " << "\'gav-gav\'\n";
	}
};
//класс кошка
class Cat : public Animal
{
public:
	Cat(char* Title) : Animal(Title) {};
	virtual void speak() {
		cout << Title << " say " << "\'myau-myau\'\n";
	}
};
//класс лев
class Lion : public Cat
{
public:
	Lion(char* Title) : Cat(Title) {};
	/*virtual void speak(){
	cout<<Title<<" say "<<"\'rrr-rrr\'\n";
	}*/
	/*virtual int speak(){
	cout<<Title<<" say "<<"\'rrr-rrr\'\n";
	return 0;
	}*/
	virtual void speak(int When) {
		cout << Title << " say " << "\'rrr-rrr\'\n";
	}
};//класс собака
class Dog : public Animal
{
public:
	Dog(char* Title) : Animal(Title) {};
	virtual void speak() {
		cout << Title << " say " << "\'gav-gav\'\n";
	}
};
//класс кошка
class Cat : public Animal
{
public:
	Cat(char* Title) : Animal(Title) {};
	virtual void speak() {
		cout << Title << " say " << "\'myau-myau\'\n";
	}
};
//класс лев
class Lion : public Cat
{
public:
	Lion(char* Title) : Cat(Title) {};
	/*virtual void speak(){
	cout<<Title<<" say "<<"\'rrr-rrr\'\n";
	}*/
	/*virtual int speak(){
	cout<<Title<<" say "<<"\'rrr-rrr\'\n";
	return 0;
	}*/
	virtual void speak(int When) {
		cout << Title << " say " << "\'rrr-rrr\'\n";
	}
};

