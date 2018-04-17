#include <string>
#include <iostream>
#include <ctime>

using namespace std;

string authors[5] = {"author1","author2","author3","author4","author5"};
string books[5] = { "book1","book2","book3","book4","book5" };
string p_houses[5] = { "house1","house2","house3","house4","house5" };

class Book {
private:
	string author;
	string book_name;
	string publishing_house;
	int year;
	int number_of_pages;
public:
	void setBookAllParametrsRnd() {
		author = authors[rand() % 5];
		book_name = books[rand() % 5];
		publishing_house = p_houses[rand() % 5];
		year = 1945 + rand() % 85;
		number_of_pages = 120 + rand() % 1000;
	}
	void setBookAllParametrs() {
		cout << "Пожалуйста введите автора книги: ";
		getline(cin, author);

		cout << "Пожалуйста введите название книги: ";
		getline(cin, book_name);

		cout << "Пожалуйста введите издательство книги: ";
		getline(cin, publishing_house);

		cout << "Пожалуйста введите год выпуска книги: ";
		cin >> year;

		cout << "Пожалуйста введите количество страниц книги: ";
		cin >> number_of_pages;
	}

	void setBookName(const string &book_name) {
		this->book_name = book_name;
	}
	void setBookAuthor(const string &author) {
		this->author = author;
	}
	void setBookPublishing_house(const string &piblishing_house) {
		this->publishing_house = publishing_house;
	}
	void setBookYear(const int &year) {
		this->year = year;
	}
	void setBookNumber_of_pages(const int &number_of_pages) {
		this->number_of_pages = number_of_pages;
	}

	void getBook() {
		cout << "Author: " << author << endl;
		cout << "Book name: " << book_name << endl;
		cout << "Publishing House: " << publishing_house << endl;
		cout << "Year: " << year << endl;
		cout << "Number of pages: " << number_of_pages << endl;
		cout << endl;
	}

	void getBookAuthor(string buf_author) {
		if (this->author == buf_author) {
			getBook();
		}
	}
	void getBookPublishing_house(string buf_house) {
		if (this->publishing_house == buf_house) {
			getBook();
		}
	}
	void betBookYear(int year) {
		if (this->year > year) {
			getBook();
		}
	}
};