#include <iostream>
#include <vector>
#include <iomanip>
#include "READERSLIST.h"
#include "BOOKSLIST.h"
#include "DATE.h"
#include "FUNCTIONPUBLIC.h"
#include <fstream>

using namespace std;
#pragma once
class BORROW_RETURN {
    private:
        int numberTicket;
        string idReader;
        int numberBooksToBorrow;
        vector<string> listBooksToBorrow;
        DATE borrowDate;
        DATE returnDate;
        int status;
    public:
        BORROW_RETURN();
        BORROW_RETURN(int, string, int, vector<string>, DATE, DATE, int);
        void setNumberTicket(int);
        int getNumberTicket();
        void setIdReader(string);
        string getIdReader();
        void setNumberBooksToBorrow(int);
        void setListBooksToBorrow(vector<string>);
        vector<string> getListBooksToBorrow();
        int getNumberBooksToBorrow();
        void setBorrowDate(DATE);
        DATE getBorrowDate();
        void setReturnDate(DATE);
        DATE getReturnDate();
        void setStatus(int);
		int getStatus();
        int checkValidExpery();
		void inputATicket(READERSLIST&, BOOKSLIST&, int index);
		void outputATicket();
		void outputTicketSetw();
		void readFileABorrowReturn(ifstream &inFile);
		void exportFileABorrowReturn (ofstream &outFile);
        ~BORROW_RETURN();
};
