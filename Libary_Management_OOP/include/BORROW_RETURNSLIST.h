#ifndef BORROW_RETURNSLIST_H
#define BORROW_RETURNSLIST_H
#include <iostream>
#include "BORROW_RETURN.h"

using namespace std;

class BORROW_RETURNSLIST
{
	private:
		vector<BORROW_RETURN> BRsList;
	public:
		BORROW_RETURNSLIST();
		void setBRsList(vector<BORROW_RETURN>);
		vector<BORROW_RETURN> getBRsList();
		void input(READERSLIST&, BOOKSLIST&);
		void output();
		void isReturnBook(string);
		void returnBook(string, int);
		void findTicketInformationByIdOfReader(string);
		void outputTickesBorrowsList();
		void loseBookReport(string, int, BOOKSLIST&);
		void readFile ();
		void exportFile ();
		void deleteTicket (string);
		~BORROW_RETURNSLIST();
};

#endif
