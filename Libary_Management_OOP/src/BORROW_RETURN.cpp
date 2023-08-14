#include "BORROW_RETURN.h"

BORROW_RETURN::BORROW_RETURN() {}

BORROW_RETURN::BORROW_RETURN(int numberTicket, string idReader, int numberBooksToBorrow, vector<string> listBooksToBorrow, DATE borrowDate, DATE returnDate, int status) {
    this->numberTicket = numberTicket;
    this->idReader = idReader;
    this->numberBooksToBorrow = numberBooksToBorrow;
    this->listBooksToBorrow = listBooksToBorrow;
    this->borrowDate = borrowDate;
    this->returnDate = returnDate;
    this->status = status;
}

void BORROW_RETURN::setNumberTicket(int numberTicket) {
    this->numberTicket = numberTicket;
}

int BORROW_RETURN::getNumberTicket() {
    return numberTicket;
}

void BORROW_RETURN::setIdReader(string idReader) {
    this->idReader = idReader;
}

string BORROW_RETURN::getIdReader() {
    return idReader;
}

void BORROW_RETURN::setNumberBooksToBorrow(int numberBooksToBorrow) {
    this->numberBooksToBorrow = numberBooksToBorrow;
}

int BORROW_RETURN::getNumberBooksToBorrow() {
    return numberBooksToBorrow;
}

void BORROW_RETURN::setListBooksToBorrow(vector<string> listBooksToBorrow) {
    this->listBooksToBorrow = listBooksToBorrow;
}

vector<string> BORROW_RETURN::getListBooksToBorrow () {
	return listBooksToBorrow;
}

void BORROW_RETURN::setBorrowDate(DATE borrowDate) {
    this->borrowDate = borrowDate;
}

DATE BORROW_RETURN::getBorrowDate() {
    return borrowDate;
}

void BORROW_RETURN::setReturnDate(DATE returnDate) {
    this->returnDate = returnDate;
}

DATE BORROW_RETURN::getReturnDate() {
    return returnDate;
}

void BORROW_RETURN::setStatus(int status) {
	this->status = status;
}

int BORROW_RETURN::getStatus() {
	return status;
}

int BORROW_RETURN::checkValidExpery() {
    return today().thisIsMagic() - returnDate.thisIsMagic();
}

void BORROW_RETURN::inputATicket(READERSLIST &readersList, BOOKSLIST &booksList, int index) {
//    cout << "\n\n\t\t\t\t\t\t\t\t\t      Enter number ticket          : "; // Them vao khi input tranh roi vao gia tri rac va xung dot lan nhau.
//    cin >> numberTicket;
//    cin.ignore();
    numberTicket = index;
	cout << "\n\t\t\t\t\t\t\t\t\t      Enter reader's identification: ";
	getline(cin,idReader);
	standardizeIdentifier(idReader);
	while (readersList.findReaderById(idReader) == -1) {
		cout << "\n\t\t\t\t\t\t\t\t\t              THIS READER'S IDENTIFICATION ISN'T EXISTING! PLEASE RE-ENTER IT: ";
	    getline(cin,idReader);
	    standardizeIdentifier(idReader);
	}
	if (readersList.checkCardExpiry(idReader) == false) {
		cout << "\n\t\t\t\t\t\t\t\t\t                  [Ticket has expired, please renew to borrow!]\n";
		cout <<  "\n\t\t\t\t\t\t\t\t\t                  To renew your ticket, you need to pay 100.000 VND!\n";
		string answer;
		cout << "\n\t\t\t\t\t\t\t\t\t                  Do you want to renew your card? (Yes/No): ";
		getline(cin, answer);
		standardizeName(answer);
		if (answer == "Yes") {
			readersList.extendCard(idReader);
		}
		else {
			return;
		}
	}
	cout << "\n\t\t\t\t\t\t\t\t\t      Books's number to borrow [1-5]: ";
	cin>> this->numberBooksToBorrow;
	do{
		if (this->numberBooksToBorrow < 1 || this->numberBooksToBorrow > 5) {
			cout <<"\n\t\t\t\t\t\t\t\t\t              [You are only allowed to borrow less than or equal to 5 books!]\n";
			cout << "\n\t\t\t\t\t\t\t\t\t              Re-enter book's number to borrow [1-5]: ";
			cin >> this->numberBooksToBorrow;
		}
	} while (this->numberBooksToBorrow < 1 || this->numberBooksToBorrow > 5);
	cin.ignore();
	for(int i = 0; i < this->numberBooksToBorrow; i++){
		bool Check = true;
		string titleBook;
		cout << "\n\t\t\t\t\t\t\t\t\t      Enter the title of " << setw(4) << left << orderString(i + 1) << " book: " ;
		getline(cin, titleBook);
		standardizeName(titleBook);
		int index;
		do {
            index = booksList.findBookTitle(titleBook);
			if (index == -1) {
				cout << "\n\t\t\t\t\t\t\t\t\t              [There are no books you want to borrow!]\n";
				cout << "\n\t\t\t\t\t\t\t\t\t              Do you want to borrow another book? (Yes/No): ";
				string answer;
				getline(cin, answer);
				standardizeName(answer);
				if (answer == "Yes") {
					cout << "\n\t\t\t\t\t\t\t\t\t              Please re-enter another book's title: ";
					getline(cin, titleBook);
					standardizeName(titleBook);
				}
				else {
					Check = false;
					break;
				}
			}
			if (booksList.checkExistingBook(booksList.getBooksList()[index].getIdBook()) == false) {
				cout << "\n\t\t\t\t\t\t\t\t\t              Sorry!! The library doesn't have enough books to lend you!\n";
				cout << "\n\t\t\t\t\t\t\t\t\t              Do you want to borrow another book? (Yes/No): ";
				string answer;
				getline(cin, answer);
				standardizeName(answer);
				if (answer == "Yes") {
					cout << "\n\t\t\t\t\t\t\t\t\t              Please re-enter another book's tile: ";
					getline(cin, titleBook);
					standardizeName(titleBook);
				}
				else {
					Check = false;
					break;
				}
			}
		} while (index == -1 || booksList.checkExistingBook(booksList.getBooksList()[index].getIdBook()) == false);
		if (Check == true) {
			booksList.fixRemain(booksList.getBooksList()[index].getIdBook(), -1);
            listBooksToBorrow.push_back(titleBook);
		}
	}
	numberBooksToBorrow = listBooksToBorrow.size();
    borrowDate = today();
	returnDate = borrowDate.aWeekAfter();
	status = 1;
	cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t      Input information succesfully!! Press any key to continue. . .";
	getch();
}

void BORROW_RETURN::outputATicket() {
	cout << "\nTicket's number: " << numberTicket;
	cout << "\nReader's Id: " << idReader;
	cout << "\nNumber Books To Borrow: " << numberBooksToBorrow;
	cout << "\nList Books To Borrow: ";
	for (int i = 0; i < listBooksToBorrow.size(); i++) {
		cout << "\n\t" << i + 1 << ". " << listBooksToBorrow[i];
	}
	cout << "\nBorrow Date: " << borrowDate;
	cout << "\nReturn Date: " << returnDate;
	cout << "\nStatus: " << status << endl;
}

void BORROW_RETURN::outputTicketSetw() {
	cout << "\n\t\t\t\t\t\t\t\t" << char(218); for (int i = 0; i < 86; i++) {cout << char(196);}; cout << char(191);
	cout << "\n\t\t\t\t\t\t\t\t" << char(179); cout << "                             "  << char(218); for (int i = 0; i < 26; i++) {cout << char(196);}; cout << char(191) << "                             " << char(179);
	cout << "\n\t\t\t\t\t\t\t\t" << char(179) << "                             " << char(179) << "  BORROW - RETURN TICKET  " << char (179) << "                             " << char(179);
	cout << "\n\t\t\t\t\t\t\t\t" << char(179); cout << "                             "  << char(192); for (int i = 0; i < 26; i++) {cout << char(196);}; cout << char(217) << "           " << char(218); for (int i = 0; i < 11; i++) {cout << char(196);}; cout << char(191) << "     " << char(179);
	cout << "\n\t\t\t\t\t\t\t\t" << char(179); cout << "                                                      "  << "              " << char(179) << "           " << char(179) << "     " << char(179);
	cout << "\n\t\t\t\t\t\t\t\t" << char(179); cout << "                                                      "  << "              " << char(179) << "           " << char(179) << "     " << char(179);
	cout << "\n\t\t\t\t\t\t\t\t" << char(179); cout << "   Ticket's number     : " << setw(10) << left << numberTicket << "                                 " << char(179) << "   Image   " << char(179) << "     " << char(179);
	cout << "\n\t\t\t\t\t\t\t\t" << char(179); cout << "   Reader's ID         : " << setw(10) << left << idReader << "                                 " << char(179) << "   (2x3)   " << char(179) << "     " << char(179);
	cout << "\n\t\t\t\t\t\t\t\t" << char(179); cout << "   Number borrowed book: " << listBooksToBorrow.size() << "                                          " << char(179) << "           " << char(179) << "     " << char(179);
	cout << "\n\t\t\t\t\t\t\t\t" << char(179); cout << "                                                      "  << "              " << char(179) << "           " << char(179) << "     " << char(179);
	cout << "\n\t\t\t\t\t\t\t\t" << char(179); cout << "   Borrowed book's list:                              "  << "              " << char(192); for (int i = 0; i < 11; i++) {cout << char(196);}; cout << char(217) << "     " << char(179);
	for (int i = 0; i < listBooksToBorrow.size(); i++) {
		cout << "\n\t\t\t\t\t\t\t\t" << char(179) << "           " << i + 1 << ". " << setw(50) << left << listBooksToBorrow[i] << "                      " << char(179);
	}
	cout << "\n\t\t\t\t\t\t\t\t" << char(179) << "   Borrow date         : " << borrowDate << "                                                   " << char(179);
	cout << "\n\t\t\t\t\t\t\t\t" << char(179) << "   Return date         : " << returnDate << "                                                   " << char(179);
	cout << "\n\t\t\t\t\t\t\t\t" << char(179) << "   Status              : " << status << "                                                            " << char(179);
	cout << "\n\t\t\t\t\t\t\t\t" << char(179) << "                                                                                      " << char(179);
	cout << "\n\t\t\t\t\t\t\t\t" << char(179) << "                                                   UTH, " << setw(20) << left << borrowDate.printString() << "          " << char(179);
	cout << "\n\t\t\t\t\t\t\t\t" << char(179) << "                                                                                      " << char(179);
	cout << "\n\t\t\t\t\t\t\t\t" << char(179) << "     Thanks for using our services!                         Signed                    " << char(179);
	cout << "\n\t\t\t\t\t\t\t\t" << char(179) << "              See you soon!!!                                                         " << char(179);
	cout << "\n\t\t\t\t\t\t\t\t" << char(179) << "                                                        Head librarian                " << char(179);
	cout << "\n\t\t\t\t\t\t\t\t" << char(179) << "                                                                                      " << char(179);
	cout << "\n\t\t\t\t\t\t\t\t" << char(179) << "                       "; for (int i = 0; i < 40; i++) {cout << char(196);}; cout << "                       " << char(179);
	cout << "\n\t\t\t\t\t\t\t\t" << char(179) << "       (If you satisfy with our services, please rate us on library.ut.edu.vn)        " << char(179);
	cout << "\n\t\t\t\t\t\t\t\t" << char(192); for (int i = 0; i < 86; i++) {cout << char(196);}; cout << char(217);
}

void BORROW_RETURN::readFileABorrowReturn (ifstream &inFile) {
    char x;
    inFile >> this->numberTicket;
    inFile >> x;
    getline(inFile, this->idReader, ',');
    inFile >> this->numberBooksToBorrow;
    inFile >> x;
    for (int i = 0; i < this->numberBooksToBorrow; i++) {
        string titleBook;
        getline(inFile, titleBook, ',');
        this->listBooksToBorrow.push_back(titleBook);
    }
    this->borrowDate.readFileADate(inFile);
    this->returnDate.readFileADate(inFile);
    inFile >> this->status;
}

void BORROW_RETURN::exportFileABorrowReturn (ofstream &outFile) {
    outFile << this->numberTicket << ",";
    outFile << this->idReader << ",";
    outFile << this->numberBooksToBorrow << ",";
    for (int i = 0; i < listBooksToBorrow.size(); i++) {
        outFile << listBooksToBorrow[i] << ",";
    }
    this->borrowDate.exportFileADate(outFile);
    outFile << ",";
    this->returnDate.exportFileADate(outFile);
    outFile << ",";
    outFile << this->status;
}

BORROW_RETURN::~BORROW_RETURN() {}
