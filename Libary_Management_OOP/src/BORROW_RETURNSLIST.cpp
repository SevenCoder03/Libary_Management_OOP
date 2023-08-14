#include "BORROW_RETURNSLIST.h"
#include <fstream>

BORROW_RETURNSLIST::BORROW_RETURNSLIST() {}

void BORROW_RETURNSLIST::setBRsList(vector<BORROW_RETURN> BRsList) {
    this->BRsList = BRsList;
}

vector<BORROW_RETURN> BORROW_RETURNSLIST::getBRsList() {
    return BRsList;
}

void BORROW_RETURNSLIST::input(READERSLIST &readersList, BOOKSLIST &booksList) {
	int quantitiesBRsList;
	cout << "\t\t\t\t\t\t\t\t\t                   Enter the quantity of tickets: ";
	cin >> quantitiesBRsList;
	cin.ignore();
	for (int i = 0; i < quantitiesBRsList; i++) {
		BORROW_RETURN temp;
		system("cls");
		cout << "\n\t\t\t\t\t\t\t\t\t\t  " << char(218); for (int i = 0; i < 52; i++) {cout << char(196);}; cout << char(191);
		cout << "\n\t\t\t\t\t\t\t\t\t\t  " << char(179) << "        INPUT INFORMATION OF THE " << setw(4) << left << orderString(BRsList.size() + 1) << " TICKET        " << char(179);
		cout << "\n\t\t\t\t\t\t\t\t\t\t  " << char(192); for (int i = 0; i < 52; i++) {cout << char(196);}; cout << char(217);
		temp.inputATicket(readersList, booksList, BRsList.size() + 1);
		if (temp.getListBooksToBorrow().size() != 0) {
			this->BRsList.push_back(temp);
		}
	}
}

void BORROW_RETURNSLIST::output() {
	for (int i = 0; i < BRsList.size(); i++) {

		BRsList[i].outputTicketSetw();
	}
}

void BORROW_RETURNSLIST::isReturnBook(string idReader) {
	bool Check = false;
	for (int i = 0; i < BRsList.size(); i++) {
		if (BRsList[i].getIdReader() == idReader) {
			if (BRsList[i].getStatus() == 0){
                cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t   Ticket number: " << BRsList[i].getNumberTicket();
				cout << "\n\n\t\t\t\t\t\t\t\t\t       This reader has returned books! Press any key to continue. . .";
				getch();
			}
			else {
			    cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t   Ticket number: " << BRsList[i].getNumberTicket();
				cout << "\n\n\t\t\t\t\t\t\t\t\t      This reader hasn't returned books! Press any key to continue. . .";
				getch();
			}
			Check = true;
		}
	}
	if (Check == false) {
		cout << "\n\n\t\t\t\t\t\t\t\t\t   This reader still doesn't have a ticket! Press any key to continue. . .";
		getch();
	}
}

void BORROW_RETURNSLIST::returnBook (string idReader, int numberTicket) {
	bool Check = false;
	for (int i = 0; i < BRsList.size(); i++) {
		if (BRsList[i].getIdReader() == idReader && numberTicket == BRsList[i].getNumberTicket()) {
			if (BRsList[i].getStatus() == 1) {
				if (today().thisIsMagic() - BRsList[i].getReturnDate().thisIsMagic() <= 0) {
					cout << "\n\n\t\t\t\t\t\t\t\t\t                 Successful book return!";
                    BRsList[i].setStatus(0);
					getch();
				}
				else {
					cout << "\n\t\t\t\t\t\t\t\t\t                        THIS READER MISSED THE DUE DATE: " << abs(today().thisIsMagic() - BRsList[i].getReturnDate().thisIsMagic());
					cout << "\n\n\t\t\t\t\t\t\t\t\t                        THE AMOUNT YOU MUST TO PAY IS " << abs(today().thisIsMagic() - BRsList[i].getReturnDate().thisIsMagic()) * 5000 << " VND";
					string ans;
					cout << "\n\n\t\t\t\t\t\t\t\t\t                        Do you want to pay now? (Yes/No): ";
					getline(cin, ans);
					standardizeName(ans);
					if (ans == "Yes") {
						cout << "\n\n\t\t\t\t\t\t\t\t\t                 Return successfully! Press any key to continue. . .";
						getch();
						BRsList[i].setStatus(0);
					}
					else {
						cout << "\n\n\t\t\t\t\t\t\t\t\t              Return unsuccessfully! Press any key to continue. . .";
						getch();
					}
				}
			}
			else {
				cout << "\n\n\t\t\t\t\t\t\t\t\t    This reader already returned books! Press any key to continue. . .";
				getch();
			}
			Check = true;

		}
	}
	if (Check == false) {
		cout << "\n\n\t\t\t\t\t\t\t\t\t   This reader still doesn't have a ticket! Press any key to continue. . .";
		getch();
	}
}

void BORROW_RETURNSLIST::findTicketInformationByIdOfReader(string idReader) {
	bool Check = false;
	for (int i = 0; i < BRsList.size(); i++) {
		if (BRsList[i].getIdReader() == idReader) {
			BRsList[i].outputTicketSetw();
			Check = true;
		}
	}
	if (Check == false) {
		cout << "\n\n\t\t\t\t\t                                                  This reader doesn't have any ticket!";
	}
}

void BORROW_RETURNSLIST::loseBookReport(string idReader, int numberTicket, BOOKSLIST &booksList) {
	bool Check = false;
	double totalPrice = 0;
	for (int i = 0; i < BRsList.size(); i++) {
		if (BRsList[i].getIdReader() == idReader && BRsList[i].getNumberTicket() == numberTicket && BRsList[i].getStatus() == 1) {
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t   Information of this reader's ticket\n";
			BRsList[i].outputTicketSetw();
			cout << endl;
			string answer;
            cin.ignore();
			do {
				string titleBook;
				cout << "\n\t\t\t\t\t\t\t\t\t\tEnter the title of the lost book: ";
				getline(cin, titleBook);
				standardizeName(titleBook);
				for (int j = 0; j < BRsList[i].getListBooksToBorrow().size(); j++) {
					if (BRsList[i].getListBooksToBorrow()[j] == titleBook) {
                        int index = booksList.findBookTitle(titleBook);
						totalPrice += booksList.getBooksList()[index].getCoverPrice();
						booksList.fixTotal(booksList.getBooksList()[index].getIdBook(), -1);
						vector<string> Temp = BRsList[i].getListBooksToBorrow();
						Temp.erase(Temp.begin() + j);
						BRsList[i].setListBooksToBorrow(Temp);
						BRsList[i].setNumberBooksToBorrow(Temp.size());
						if(Temp.size() == 0) {
                            BRsList[i].setStatus(0);
						}
					}
				}
				cout << "\n\t\t\t\t\t\t\t\t\t\tDid you lose any more books? (Yes/No): ";
				getline(cin, answer);
				standardizeName(answer);
			} while (answer == "Yes");
		}
		else {
            //continue;
		}
	}
    cout << "\n\n\t\t\t\t\t\t\t\t         [ANNOUNCEMENT] THE TOTAL AMOUNT YOU HAVE TO PAY IS: " << totalPrice << " VND.";
}

void BORROW_RETURNSLIST::readFile() {
    ifstream inFile;
    inFile.open("Data Borrow Return.txt", ios::in);
    int Count = 0;
    while (!inFile.eof()) {
        BORROW_RETURN BR;
        BR.readFileABorrowReturn(inFile);
        BRsList.push_back(BR);
        inFile.ignore();
        Count++;
        if (inFile.eof()) {
            break;
        }
    }
    inFile.close();
}

void BORROW_RETURNSLIST::exportFile () {
    ofstream outFile;
    outFile.open("Data Borrow Return.txt", ios::out);
    for (int i = 0; i < BRsList.size(); i++) {
        if (i != BRsList.size() - 1) {
            BRsList[i].exportFileABorrowReturn(outFile);
            outFile << endl;
        }
        else {
            BRsList[i].exportFileABorrowReturn(outFile);
        }
    }
    outFile.close();
}

void BORROW_RETURNSLIST::deleteTicket (string idReader) {
    for (int i = 0; i < BRsList.size(); i++) {
        if (BRsList[i].getIdReader() == idReader) {
            BRsList.erase(BRsList.begin() + i);
        }
    }
}

BORROW_RETURNSLIST::~BORROW_RETURNSLIST() {}
