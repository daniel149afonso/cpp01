#include <iostream> //input, output objects (cout)
#include <string>
//using namespace std; not allowed

//CHARACTER CLASS
class Character {
	public:
	int	age;
	std::string name;
	void introduce(int age, std::string name){
		std::cout << "Hello I am " << name << ". I am " << age;
	}
};

//BOOK CLASS
class Book {
	public:
	std::string title;
	std::string author;
	int year;

	void introduce(std::string title, std::string ath, int year) {
		std::cout << title << ", " << ath << ", " << year << ".\n";
	}
	void sayHi();
	int booksSold(int nbr);
};

void	Book::sayHi(void) {
	std::cout << "Hello World\n";
}

int		Book::booksSold(int nbr) {
	return (nbr * 3);
}

int	main(void)
{
	//Chararcters
	Character GOAT;
	GOAT.age = 18;
	GOAT.name = "Arya";

	//Book 1
	Book book1;
	book1.title = "Harry Potter";
	book1.author = "JK Rolling";
	book1.year = 1988;
	book1.introduce(book1.title, book1.author, book1.year);
	book1.sayHi();
	std::cout << book1.booksSold(3000) << ".\n";
	//Book 2
	Book book2;
	book2.title = "Game of thrones";
	book2.author = "George Martin";
	book2.year = 1996;
	book2.introduce(book2.title, book2.author, book2.year);
	book2.sayHi();
	return (0);
}