#include "BOOK.h"
#include "FUNCTIONPUBLIC.h"
#include <iomanip>
#include <fstream>

BOOK::BOOK() {}

BOOK::BOOK(string idBook, string title, string author, string publisher, int publishYear, string genre, double coverPrice, int total, int remain) {
	this->idBook = idBook;
	this->title = title;
	this->author = author;
	this->publisher = publisher;
	this->publishYear = publishYear;
	this->genre = genre;
	this->coverPrice = coverPrice;
	this->total = total;
	this->remain = remain;
}

void BOOK::setIdBook(string idBook) {
	this->idBook = idBook;
}

string BOOK::getIdBook() {
	return idBook;
}

void BOOK::setTitle(string title) {
	this->title = title;
}

string BOOK::getTitle() {
	return title;
}

void BOOK::setAuthor(string author) {
	this->author = author;
}

string BOOK::getAuthor() {
	return author;
}

void BOOK::setPublisher(string publisher) {
	this->publisher = publisher;
}

string BOOK::getPublisher() {
	return publisher;
}

void BOOK::setPublishYear(int publishYear) {
	this->publishYear = publishYear;
}

int BOOK::getPublishYear() {
	return publishYear;
}

void BOOK::setGenre(string genre) {
	this->genre = genre;
}

string BOOK::getGenre() {
	return genre;
}

void BOOK::setCoverPrice(double coverPrice) {
	this->coverPrice = coverPrice;
}

double BOOK::getCoverPrice() {
	return coverPrice;
}

void BOOK::setTotal (int total) {
	this->total = total;
}

int BOOK::getTotal () {
	return total;
}

void BOOK::setRemain(int remain) {
	this->remain = remain;
}

int BOOK::getRemain() {
	return remain;
}

void BOOK::readFileABook(ifstream &inFile) {
        getline(inFile,this->idBook, ',');
        getline(inFile, this->title, ',');
        getline(inFile,this->author, ',');
        getline(inFile, this->publisher, ',');
        inFile >> this->publishYear;
        char x;
        inFile >> x;
        getline(inFile, genre, ',');
        inFile >> this->coverPrice;
        inFile >> x;
        inFile >> this->total;
        inFile >> x;
        inFile >> this->remain;
}

void BOOK::exportFileABook(ofstream &outFile) {
        outFile << idBook << ",";
        outFile << title << ",";
        outFile << author << ",";
        outFile << publisher << ",";
        outFile << publishYear << ",";
        outFile << genre << ",";
        outFile << coverPrice << ",";
        outFile << total << ",";
        outFile << remain;
}

istream &operator>> (istream &in, BOOK &book) {
	cout << "\n\n\t\t\t\t\t\t\t\t\t           Enter book identification            : ";
	getline(in, book.idBook);
	standardizeIdentifier(book.idBook);
	do {
		if (book.idBook.length() != 10){
			cout << "\n\t\t\t\t\t\t\t\t\t                THIS IDENTIFICATION'S LENGTH IS INVALID! PLEASE RE-ENTER: ";
			getline(in, book.idBook);
			standardizeIdentifier(book.idBook);
		}
	} while (book.idBook.length() != 10);
	cout << "\n\t\t\t\t\t\t\t\t\t           Enter this book's name               : ";
	getline(in, book.title);
	standardizeName(book.title);
	cout << "\n\t\t\t\t\t\t\t\t\t           Enter this book's author's name      : ";
	getline(in, book.author);
	standardizeName(book.author);
	cout << "\n\t\t\t\t\t\t\t\t\t           Enter this book's publisher's name   : ";
	getline(in, book.publisher);
	standardizeName(book.publisher);
	cout << "\n\t\t\t\t\t\t\t\t\t           Enter this book's year of publication: ";
	in >> book.publishYear;
	do {
		if (book.publishYear > today().getYear() || book.publishYear < 868) {
			cout << "\n\t\t\t\t\t\t\t\t\t                INVALID PUBLISH YEAR! PLEASE RE-ENTER: ";
			in >> book.publishYear;
		}
	} while (book.publishYear > today().getYear() || book.publishYear < 868);
	cin.ignore();
	cout << "\n\t\t\t\t\t\t\t\t\t           Enter this book's genre              : ";
	getline(in, book.genre);
	standardizeName(book.genre);
	cout << "\n\t\t\t\t\t\t\t\t\t           Enter this book's cover price        : ";
	in >> book.coverPrice;
	do {
		if (book.coverPrice <= 0) {
			cout << "\n\t\t\t\t\t\t\t\t\t                INVALID COVER PRICE! PLEASE RE-ENTER: ";
			in >> book.coverPrice;
		}
	} while (book.coverPrice <= 0);
	cout << "\n\t\t\t\t\t\t\t\t\t           Enter this book's total              : ";
	in >> book.total;
	do {
		if (book.total < 0) {
			cout << "\n\t\t\t\t\t\t\t\t\t                INVALID BOOK's TOTAL! PLEASE RE-ENTER: ";
			in >> book.total;
		}
	} while (book.total < 0);
	cout << "\n\t\t\t\t\t\t\t\t\t           Enter this book's remaining          : ";
	in >> book.remain;
	do {
		if (book.remain > book.total || book.remain < 0) {
			cout << "\n\t\t\t\t\t\t\t\t\t                INVALID BOOK's REMAINING! PLEASE RE-ENTER: ";
			in >> book.remain;
		}
	} while (book.remain > book.total || book.remain < 0);
}

ostream &operator<< (ostream &out, BOOK book) {
	out << "\n\n\t\t\t\t                                                            " << char(218); for (int i = 0; i < 32; i++) {cout << char(196);}; cout << char(191);
	out << "\n\t\t\t\t\t\t\t     " << char(218); for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(180) << "        BOOK INFORMATION        " << char(195); for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(191);
	out << "\n\t\t\t\t\t                     " << char(179) << "                              " << char(192); for (int i = 0; i < 32; i++) {cout << char(196);}; cout << char(217) << "                              " << char(179);
    out << "\n\t\t\t\t\t\t\t     " << char(179) << "     Book's identification                     :    " << setw(42) << left << book.idBook << char(179);
    out << "\n\t\t\t\t\t\t\t     " << char(179) << "     Book's name                               :    " << setw(42) << left << book.title << char(179);
    out << "\n\t\t\t\t\t\t\t     " << char(179) << "     Book's author's name                      :    " << setw(42) << left << book.author  << char(179);
    out << "\n\t\t\t\t\t\t\t     " << char(179) << "     Book's publisher                          :    " << setw(42) << left << book.publisher << char(179);
    out << "\n\t\t\t\t\t\t\t     " << char(179) << "     Book's year of publication                :    " << setw(42) << left << book.publishYear << char(179);
    out << "\n\t\t\t\t\t\t\t     " << char(179) << "     Book's genre                              :    " << setw(42) << left << book.genre << char(179);
    out << "\n\t\t\t\t\t\t\t     " << char(179) << "     Book's cover price                        :    " << setw(42) << left << book.coverPrice << char(179);
    out << "\n\t\t\t\t\t\t\t     " << char(179) << "     Book's amount                             :    " << setw(42) << left << book.total << char(179);
    out << "\n\t\t\t\t\t\t\t     " << char(179) << "     Number of books remaining                 :    " << setw(42) << left << book.remain << char(179);
	out << "\n\t\t\t\t\t                     " << char(179); for (int i = 0; i < 94; i++) {cout << " ";}; cout << char(179);
	out << "\n\t\t\t\t\t                     " << char(192); for (int i = 0; i < 94; i++) {cout << char(196);}; cout << char(217);
}

void BOOK::output() {
	cout << setw(10) << left << idBook << "  " << char(179) << "  " << setw(42) << left << title << "  " << char(179) << "  " << setw(25) << left << author << "" << char(179) << "  " << setw(27) << left << publisher << "" << char(179) << "      " << setw(8) << left << publishYear << "" << char(179) << "  " << setw(20) << left << genre << "  " << char(179) << "      " << setw(10) << left << coverPrice << "" << char(179) << "     " << setw(6) << left << total << " " << char(179) << "     " << setw(7) << left << remain << "" << char(179) << "\n";
}

BOOK::~BOOK() {}

