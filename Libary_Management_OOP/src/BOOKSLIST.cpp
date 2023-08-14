#include "BOOKSLIST.h"
#include "BOOK.h"
#include "FUNCTIONPUBLIC.h"
#define ll long long
#include <iomanip>
#include <fstream>

BOOKSLIST::BOOKSLIST() {}

void BOOKSLIST::readFile () {
    ifstream inFile;
    inFile.open("Data Book.txt", ios::in);
    while (!inFile.eof()) {
        BOOK temp;
        temp.readFileABook(inFile);
        booksList.push_back(temp);
        inFile.ignore();
        if (inFile.eof()) {
            break;
        }
    }
    inFile.close();
}

void BOOKSLIST::exportFIle () {
    ofstream outFile;
    outFile.open("Data Book.txt", ios::out);
    for (int i = 0; i < booksList.size(); i++) {
        if (i != booksList.size() - 1) {
            booksList[i].exportFileABook(outFile);
            outFile << endl;
        }
        else {
            booksList[i].exportFileABook(outFile);
        }
    }
    outFile.close();
}

void BOOKSLIST::setBooksList(vector<BOOK> booksList) {
    this->booksList = booksList;
}

vector<BOOK> BOOKSLIST::getBooksList() {
	return booksList;
}

void BOOKSLIST::input() {
	int quantitiesBooksList;
	cout << "\t\t\t\t\t\t\t\t\t                   Number of books you want to add is: ";
	cin >> quantitiesBooksList;
	cin.ignore();
	for (int i = 0; i < quantitiesBooksList; i++) {
		system("cls");
		cout << "\n\t\t\t\t\t\t\t\t\t\t  " << char(218); for (int i = 0; i < 50; i++) {cout << char(196);}; cout << char(191);
		cout << "\n\t\t\t\t\t\t\t\t\t\t  " << char(179) << "         INPUT INFORMATION OF THE " << setw(4) << left << orderString(i + 1) << " BOOK       " << char(179);
		cout << "\n\t\t\t\t\t\t\t\t\t\t  " << char(192); for (int i = 0; i < 50; i++) {cout << char(196);}; cout << char(217);
		BOOK Temporary;
		cin >> Temporary;
		cin.ignore();
		do {
			if (checkDuplicatedId(Temporary.getIdBook()) == true) {
				cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t      Book identifier duplicate error!\n";
				cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t      Re-enter the identifier of the book: ";
				string Temp;
				getline(cin, Temp);
				standardizeIdentifier(Temp);
				Temporary.setIdBook(Temp);
			}
			if (Temporary.getIdBook().length() != 10) {
				cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t      tLength of identifier is invalid!\n";
				cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t      tRe-enter the identifier of the book: ";
				string Temp;
				getline(cin, Temp);
				standardizeIdentifier(Temp);
				Temporary.setIdBook(Temp);
			}
		} while (checkDuplicatedId(Temporary.getIdBook()) == true || Temporary.getIdBook().length() != 10);
		cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t      Input information succesfully!! Press any key to continue. . .";
		getch();
		booksList.push_back(Temporary);
	}
}

void BOOKSLIST::output() {
	for (int i = 0; i < booksList.size(); i++) {
		cout << "\n\n\t\t        Information Of The Book " << i +  1 << "\n";
		cout << booksList[i];
	}
}

void BOOKSLIST::outputSetw() {
	cout<<"\n    " << char(218); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 46; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(194);for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(194);for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(194);for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(194);for (int i = 0; i < 12; i++) {cout << char(196);}; cout << char(194);for (int i = 0; i < 12; i++) {cout << char(196);}; cout << char(191);
	cout<<"\n    " << char(179) << "   Book's ID  " << char(179) << "                  Book's Title                " << char(179) << "           Author          " << char(179) << "          Publisher          " << char(179) << " Publish Year " << char(179) << "           Genre        " << char(179) << "   Cover Price  " << char(179) << "    Total   " << char(179) << "   Remain   " << char(179);
	cout<<"\n    " << char(195); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 46; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(197);for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(197);for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(197);for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(197);for (int i = 0; i < 12; i++) {cout << char(196);}; cout << char(197);for (int i = 0; i < 12; i++) {cout << char(196);}; cout << char(180);
	cout<< endl;
	for (int i = 0; i < booksList.size(); i++) {
		cout<<"    " << char(179) << "  ";
		booksList[i].output();
		if (i != booksList.size() - 1) {
			cout<<"    " << char(195);  for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 46; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(197);for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(197);for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(197);for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(197);for (int i = 0; i < 12; i++) {cout << char(196);}; cout << char(197);for (int i = 0; i < 12; i++) {cout << char(196);}; cout << char(180) << endl;
		}
		else {
			cout<<"    " << char(195);  for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 46; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(193);for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(193);for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(193);for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(193);for (int i = 0; i < 12; i++) {cout << char(196);}; cout << char(193);for (int i = 0; i < 12; i++) {cout << char(196);}; cout << char(180) << endl;
			cout<<"    " << char(179) << "   NUMBER OF BOOKS IN THE LIBRARY: " << setw(9) << left << booksList.size() << "                                                                                                                                                              " << char(179) << "\n";
			cout<<"    " << char(192);for (int i = 0; i < 202; i++) {cout << char(196);}; cout << char(217)<<"\n";
		}
	}
}
bool BOOKSLIST::checkDuplicatedId (string idBook) {
	for (int i = 0; i < booksList.size(); i++) {
		if (booksList[i].getIdBook() == idBook) {
			return true;
		}
	}
	return false;
}

bool BOOKSLIST::checkExistingBook(string idBook) {
    int index = findBookId(idBook);
	if (booksList[index].getRemain() >= 1) {
		return true;
	}
	else {
		return false;
	}
}

void BOOKSLIST::changeBookInformation(string idBook) {
	bool Check = false;
	for (int i = 0; i < booksList.size(); i++) {
		if (booksList[i].getIdBook() == idBook) {
			Check = true;
			while (true) {
				system("cls");
				cout << "\n\n\t\t\t\t\t\t\t\t\t        FOLLOWING IS ALL THE INFORMATION ABOUT BOOK YOU WANT TO EDIT" << endl;
				cout << booksList[i];
				cout << "\n\n";
				cout << "\n\t\t\t\t\t              " << char(218); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(191) << "  " << char(218);  for (int i = 0; i < 25; i++) {cout << char(196);}; cout << char(191) << "  "  << char(218); for (int i = 0; i < 26; i++) {cout << char(196);}; cout << char(191) << "  "  << char(218); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(191);
				cout << "\n\t\t\t\t\t              " << char(179) << "1. Book's identification" << char(179) << "  " << char(179) << "         2. Title        " << char(179) << "  " << char(179) << "         3. Author        " << char(179) << "  " << char(179) << "      4. Publisher      " << char(179) << "              ";
				cout << "\n\t\t\t\t\t              " << char(192); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(217) << "  " << char(192);  for (int i = 0; i < 25; i++) {cout << char(196);}; cout << char(217) << "  "  << char(192); for (int i = 0; i < 26; i++) {cout << char(196);}; cout << char(217) << "  "  << char(192); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(217);
				cout << "\n";
				cout << "\n\t\t\t\t\t " << char(218); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(191) << "  " << char(218); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(191) << "  " << char(218); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(191) << "  " << char(218); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(191) << "  " << char(218); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(191) << "  ";
				cout << "\n\t\t\t\t\t " << char(179) << "     5. Publish year    " << char(179) << "  " << char(179) << "        6. Genre        " << char(179) << "  " << char(179) << "     7. Cover price     " << char(179) << "  " << char(179) << "        8. Total        " << char(179) << "  " << char(179) << "        9. Remain       " << char(179) << "";
				cout << "\n\t\t\t\t\t " << char(192); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(217) << "  " << char(192); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(217) << "  " << char(192); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(217) << "  " << char(192); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(217) << "  " << char(192); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(217) << "  ";
				cout << "\n";
				cout << "\n\t\t\t\t\t                                                  [ANOUNCEMENT]: Enter 0 to return to menu                                                   \n";
				cout << "\n\n\t\t\t\t\t Enter your number of the factor you want to edit: ";
				int choose;
				cin >> choose;
				if (choose == 1) {
					cin.ignore();
					cout << "\n\t\t\t\t\t Book's old identification: " << booksList[i].getIdBook();
                    string newId;
                    cout << "\n\n\t\t\t\t\t New identification of this book is: ";
					getline(cin, newId);
					standardizeIdentifier(newId);
					do {
						if (checkDuplicatedId(newId) == true) {
							cout << "\n\t\t\t\t\t      BOOK IDENTIFICATION DUPLICATED ERROR!\n\n";
                            cout << "\t\t\t\t\t           Please re-enter this identification: ";
							getline(cin, newId);
							standardizeIdentifier(newId);
						}
						if (newId.length() != 10) {
							cout << "\n\t\t\t\t\t      BOOK IDENTIFICATION LENGTH ERROR!\n\n";
                            cout << "\t\t\t\t\t           Please re-enter this identification: ";
							getline(cin, newId);
							standardizeIdentifier(newId);
						}
					} while (checkDuplicatedId(newId) == true || newId.length() != 10);
					cout << "\n\n\t\t\t\t\t\t\t\t\t       Change identification successfully!!! Press any key to continue. . .";
					getch();
					booksList[i].setIdBook(newId);
				}
				else if (choose == 2) {
					cin.ignore();
					cout << "\n\t\t\t\t\t Book's old title: " << booksList[i].getTitle();
                    cout << "\n\n\t\t\t\t\t New title of this book is: ";
					string newTitle;
					getline(cin, newTitle);
					standardizeName(newTitle);
					cout << "\n\n\t\t\t\t\t\t\t\t\t       Change title successfully!!! Press any key to continue. . .";
					getch();
					booksList[i].setTitle(newTitle);
				}
				else if (choose == 3) {
					cin.ignore();
					string newAuthor;
					cout << "\n\t\t\t\t\t Book's old author: " << booksList[i].getAuthor();
                    cout << "\n\n\t\t\t\t\t New author of this book is: ";
					getline(cin, newAuthor);
					standardizeName(newAuthor);
					cout << "\n\n\t\t\t\t\t\t\t\t\t       Change author successfully!!! Press any key to continue. . .";
					getch();
					booksList[i].setAuthor(newAuthor);
				}
				else if (choose == 4) {
					cin.ignore();
					string newPublisher;
					cout << "\n\t\t\t\t\t Book's old publisher: " << booksList[i].getPublisher();
                    cout << "\n\n\t\t\t\t\t New publisher of this book is: ";
					getline(cin, newPublisher);
					standardizeName(newPublisher);
					cout << "\n\n\t\t\t\t\t\t\t\t\t       Change publisher successfully!!! Press any key to continue. . .";
					getch();
					booksList[i].setPublisher(newPublisher);
				}
				else if (choose == 5) {
					int newPublishYear;
					cout << "\n\t\t\t\t\t Book's old publish year: " << booksList[i].getPublishYear();
                    cout << "\n\n\t\t\t\t\t New publish year of this book is: ";
					cin >> newPublishYear;
					do {
						if (newPublishYear > today().getYear() || newPublishYear < 868) {
							cout << "\n\t\t\t\t\t      INVALID BOOK's PUBLISH YEAR!\n\n";
                            cout << "\t\t\t\t\t           Please re-enter this publish year: ";
							cin >> newPublishYear;
						}
					} while (newPublishYear > today().getYear() || newPublishYear < 868);
					cout << "\n\n\t\t\t\t\t\t\t\t\t       Change publish year successfully!!! Press any key to continue. . .";
					getch();
					booksList[i].setPublishYear(newPublishYear);
				}
				else if (choose == 6) {
					cin.ignore();
					string newGenre;
					cout << "\n\t\t\t\t\t Book's old genre: " << booksList[i].getGenre();
                    cout << "\n\n\t\t\t\t\t New genre of this book is: ";
					getline(cin, newGenre);
					standardizeName(newGenre);
					cout << "\n\n\t\t\t\t\t\t\t\t\t       Change genre successfully!!! Press any key to continue. . .";
					getch();
					booksList[i].setGenre (newGenre);
				}
				else if (choose == 7) {
					double newCoverPrice;
					cout << "\n\t\t\t\t\t Book's old cover price: " << booksList[i].getCoverPrice();
                    cout << "\n\n\t\t\t\t\t New cover price of this book is: ";
					cin >> newCoverPrice;
					do {
						if (newCoverPrice < 0) {
							cout << "\n\t\t\t\t\t      INVALID BOOK's COVER PRICE!\n\n";
                            cout << "\t\t\t\t\t           Please re-enter this cover price: ";
							cin >> newCoverPrice;
						}
					} while (newCoverPrice < 0);
					cout << "\n\n\t\t\t\t\t\t\t\t\t       Change cover price successfully!!! Press any key to continue. . .";
					getch();
					booksList[i].setCoverPrice(newCoverPrice);
				}
				else if (choose == 8) {
					int newTotal;
					cout << "\n\t\t\t\t\t Book's old total: " << booksList[i].getTotal();
                    cout << "\n\n\t\t\t\t\t New total of this book is: ";
					cin >> newTotal;
					do {
						if (newTotal < 0) {
							cout << "\n\t\t\t\t\t      INVALID BOOK's TOTAL (TOTAL MUST BE GREATER THAN 0)!\n\n";
                            cout << "\t\t\t\t\t           Please re-enter this total: ";
							cin >> newTotal;
						}
						if (0 < newTotal && newTotal < booksList[i].getRemain()) {
							cout << "\n\t\t\t\t\t      INVALID BOOK's TOTAL (TOTAL MUST BE GREATER THAN BOOKs REMAINING)!\n\n";
                            cout << "\t\t\t\t\t           Please re-enter this total: ";
							cin >> newTotal;
						}
					} while (newTotal < 0 || 0 < newTotal && newTotal < booksList[i].getRemain());
					cout << "\n\n\t\t\t\t\t\t\t\t\t       Change total successfully!!! Press any key to continue. . .";
					getch();
					booksList[i].setTotal(newTotal);
				}
				else if (choose == 9) {
					int newRemain;
					cout << "\n\t\t\t\t\t Book's old remain: " << booksList[i].getRemain();
                    cout << "\n\n\t\t\t\t\t New remain of this book is: ";
					cin >> newRemain;
					do {
						if (newRemain < 0) {
							cout << "\n\t\t\t\t\t      INVALID BOOK's TOTAL (BOOK's TOTAL MUST BE GREATER THAN 0)!\n\n";
                            cout << "\t\t\t\t\t           Please re-enter this total: ";
							cin >> newRemain;
						}
						if (newRemain > booksList[i].getTotal()) {
							cout << "\n\t\t\t\t\t      INVALID BOOK's TOTAL (BOOK's TOTAL MUST BE SMALLER THAN TOTAL)!\n\n";
                            cout << "\t\t\t\t\t           Please re-enter this total: ";
							cin >> newRemain;
						}
					} while (newRemain < 0 || newRemain > booksList[i].getTotal());
					cout << "\n\n\t\t\t\t\t\t\t\t\t       Change remain successfully!!! Press any key to continue. . .";
					getch();
					booksList[i].setRemain(newRemain);
				}
				else {
					break;
				}
			}
		}
	}
	if (Check == false) {
		cout << "\n\t\t\t\t\t\t\t\t                 Not found this book!!! Press any key to continue. . .";
		getch();
	}
}

void BOOKSLIST::deleteBook(string idBook) {
	bool Check = false;
	for (int i = 0; i < booksList.size(); i++) {
		if (booksList[i].getIdBook() == idBook) {
			booksList.erase(booksList.begin() + i);
			Check = true;
			break;
		}
	}
	if (Check == false) {
		cout << "\n\t\t\t\t\t\t\t\t                 Not found this book!!! Press any key to continue. . .";
		getch();
	}
	else {
		cout << "\n\t\t\t\t\t\t\t\t                 Delete successfully!!! Press any key to continue. . .";
		getch();
	}
}

void BOOKSLIST::sortBookById () {
	for (int i = 0; i < booksList.size() -1; i++) {
		for (int j = i + 1; j < booksList.size(); j++) {
			string temp_1 = booksList[i].getIdBook();
			string temp_2 = booksList[j].getIdBook();
			stringstream x (temp_1);
			ll a; x >> a;
			stringstream y (temp_2);
			ll b; y >> b;
			if (a > b) {
				swap(booksList[i], booksList[j]);
			}
		}
	}
}

int BOOKSLIST::findBookId(string idBook) {
	for (int i = 0; i < booksList.size(); i++) {
		if (booksList[i].getIdBook() == idBook) {
			return i;
		}
	}
	return -1;
}

int BOOKSLIST::findBookTitle(string title) {
	for (int i = 0; i < booksList.size(); i++) {
		if (booksList[i].getTitle() == title) {
			return i;
		}
	}
	return -1;
}

void BOOKSLIST::findBookGenre(string genre) {
	bool Check = false;
	for (int i = 0; i < booksList.size(); i++) {
		if (booksList[i].getGenre() == genre) {
			cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t      FOLLOWING IS ALL THE INFORMATION ABOUT BOOK YOU ARE LOOKING FOR" << endl;
			cout << booksList[i] << endl;
			Check = true;
		}
	}
	if (Check == false) {
		cout << "\n\n\n\t\t\t\t\t\t\t\t\t  SORRY!!! THE BOOK WHOSE INFORMATION YOU ARE LOOKING FOR DOESN'T EXIST!!!";
		cout << "\n\t\t\t\t\t\t\t\t\t                             PLEASE TRY AGAIN!\n\n";
	}
}

void BOOKSLIST::fixRemain(string idBook, int x) {
    for (int i = 0; i < booksList.size(); i++) {
		if (booksList[i].getIdBook() == idBook) {
			booksList[i].setRemain(booksList[i].getRemain() + x);
		}
	}
}

void BOOKSLIST::fixTotal(string idBook, int x) {
    for (int i = 0; i < booksList.size(); i++) {
		if (booksList[i].getIdBook() == idBook) {
			booksList[i].setTotal(booksList[i].getTotal() + x);
		}
	}
}

BOOKSLIST::~BOOKSLIST() {}
