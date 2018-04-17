#include "Book.h"

void main() {
	system("chcp 1251");
	system("cls");

	Book *books = new Book[10];
	
	for (int i = 0; i < 10; i++) {
		books[i].setBookAllParametrsRnd();
	}

	cout << "All books" << endl;
	cout << "----------------" << endl;
	for (int i = 0; i < 10; i++) {
		books[i].getBook();
	}
	cout << "End All books" << endl;
	cout << "-----------------" << endl;
	cout << endl;

	cout << "Only author1 books" << endl;
	cout << "----------------" << endl;
	for (int i = 0; i < 10; i++) {
		books[i].getBookAuthor("author1");
	}
	cout << "End author1 books" << endl;
	cout << "-----------------" << endl;
	cout << endl;

	cout << "Only house1 books" << endl;
	cout << "----------------" << endl;
	for (int i = 0; i < 10; i++) {
		books[i].getBookPublishing_house("house1");
	}
	cout << "End house1 books" << endl;
	cout << "-----------------" << endl;
	cout << endl;

	cout << "Only 1990+ year books" << endl;
	cout << "----------------" << endl;
	for (int i = 0; i < 10; i++) {
		books[i].betBookYear(1990);
	}
	cout << "End 1990+ year books" << endl;
	cout << "-----------------" << endl;
	cout << endl;

	system("pause");
}