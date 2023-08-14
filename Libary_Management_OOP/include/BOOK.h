#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include "DATE.h"

using namespace std;

class BOOK
{
	private:
		string idBook;
		string title;
		string author;
		string publisher;
		int publishYear;
		string genre;
		double coverPrice;
		int total;
		int remain;
	public:
		BOOK ();
		BOOK (string, string, string, string, int, string, double, int, int);
		void setIdBook (string);
		string getIdBook ();
		void setTitle (string);
		string getTitle ();
		void setAuthor (string);
		string getAuthor ();
		void setPublisher (string);
		string getPublisher ();
		void setPublishYear (int);
		int getPublishYear ();
		void  setGenre (string);
		string getGenre ();
		void setCoverPrice (double);
		double getCoverPrice ();
		void setTotal (int);
		int getTotal ();
		void setRemain (int);
		int getRemain ();
		void output();
		friend istream &operator>> (istream &in, BOOK &book);
		friend ostream &operator<< (ostream &out, BOOK book);
		void readFileABook(ifstream &inFile);
		void exportFileABook (ofstream &outFile);
		~BOOK ();
};

#endif
