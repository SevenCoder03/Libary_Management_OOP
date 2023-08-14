#include <iostream>
#include <vector>
#include <map>
#include <conio.h>
#include "BORROW_RETURNSLIST.h"
#include "ACCOUNTSLIST.h"
#include "ADMIN.h"
#include "USER.h"

READERSLIST readersList;
BOOKSLIST booksList;
BORROW_RETURNSLIST BRsList;
ACCOUNTSLIST accountsList;

using namespace std;

int passAccount() {
    int ch;
	string username, password;
	cout << "\n\n                                                                       " << char(218) << char(196) << char (191) << "  " << char(218) << char(196) << char (191) << " " <<char(218) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(191) << " " << char(218) << char(196) << char (191) << "  " << char(218) << char(196) << char (191) << endl;
	cout << "                                                                       " << char(179) << " " << char (179) << "  " << char(179) << " " << char(179) << " " << char (192) << char(196) << char(196) << char(191) << " " <<char(218) << char(196) << char(196) << char(217) << " " << char(179) << " " << char (179) << "  " << char(179) << " " << char(179) << "    UNIVERSITY OF TRANSPORT HOCHIMINH CITY" << endl;
	cout << "                                                                       " << char(179) << " " << char (179) << "  " << char(179) << " " << char(179) << "    " << char (179) << " " << char(179) << "    " << char(179) << " " << char (192) << char(196) << char(196) << char(217) << " " << char(179) << endl;
	cout << "                                                                       " << char(179) << " " << char (179) << "  " << char(179) << " " << char(179) << "    " << char (179) << " " << char(179) << "    " << char(179) << " " << char (218) << char(196) << char(196) << char(191) << " " << char(179) << "      TRUONG DAI HOC GIAO THONG VAN TAI" << endl;
	cout << "                                                                       " << char(179) << " " << char (192) << char(196) << char(196) << char(217) << " " << char(179) << "    " << char (179) << " " << char(179) << "    " << char(179) << " " << char (179) << "  " << char(179) << " " << char(179) << "            THANH PHO HO CHI MINH" << endl;
	cout << "                                                                       " << char(192) << char(196) << char (196) << char (196) << char (196) << char (196) << char (196) << char(217) <<- "    " << char (192) << char(196) << char(217) << "    " << char (192) << char(196) << char(217) << "  " << char (192) << char(196) << char(217) << endl;
	cout << "\n"; for (int i = 0; i < 211; i++) {cout << char(196);};

    cout<<"\n\n                                                                                                                                                         -- IDIOMS --" << char();
    cout<<"\n                                               " << char(218); for (int i = 0; i < 23; i++) {cout << char(196);}; cout << char(191);
	cout<<"\n        " << char(218); for (int i = 0; i < 38; i++) {cout << char(196);};  cout << char(180) << "     LIBRARY RULES     " << char(195); for (int i = 0; i < 38; i++) {cout << char(196);}; cout << char(191);
	cout<<"\n        " << char(179) << "                                      " << char(192); for (int i = 0; i < 11; i++) {cout << char(196);}; ; cout << char(194); for (int i = 0; i < 11; i++) {cout << char(196);}; cout << char(217) << "                                      " << char(179) << "           Behind the success of a man, is the figure of a woman,";
	cout<<"\n        " << char(179) << "                 ABOUT READERS                    " << char(179) << "                   ABOUT BOOKS                    " << char(179) << "                    and behind anyone's success is at least one book, or even a bookshelf.";
	cout<<"\n        " << char(179) << "                                                  " << char(179) << "                                                  " << char(179) << "                                                                      -- INCOGNITO --";
	cout<<"\n        " << char(195); for (int i = 0; i < 50; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 50; i++) {cout << char(196);}; cout << char(180);
	cout<<"\n        " << char(179) << "                                                  " << char(179) << "                                                  " << char(179) << "           Whoever reads a book and does not know more than what is written in it,";
	cout<<"\n        " << char(179) << " - READER'S ID      : 10 characters               " << char(179) << " - BOOK'S ID          : 10 characters             " << char(179) << "                  has only used half of it. Books make the human mind deeper and brighter.";
	cout<<"\n        " << char(179) << " - FULL NAME        : less than 30 characters     " << char(179) << " - BOOK'S TITLE,                                  " << char(179) << "                                                                    -- G. LETSXINH --";
	cout<<"\n        " << char(179) << "                                                  " << char(179) << "   PUBLISHER, AUTHOR  : less than 60 characters   " << char(179);
	cout<<"\n        " << char(179) << " - PERRSONAL ID     : 12 characters               " << char(179) << " - BOOK'S PUBLISH YEAR: input only year           " << char(179);
	cout<<"\n        " << char(179) << " - EMAIL            : less than 60 characters     " << char(179) << " - BOOK'S GENRE       : less than 30 characters   " << char(179) << "                                      WELCOME TO OUR LIBRARY";
	cout<<"\n        " << char(179) << " - GENDER           : input 1 (for Male)          " << char(179) << " - COVER PRICE UNIT   : thousands VND             " << char(179);
	cout<<"\n        " << char(179) << "                      input 0 (for Female)        " << char(179) << "                                                  " << char(179) << "                             PLEASE LOGIN TO EXPERIENCE OUR SERVICE!";
	cout<<"\n        " << char(179) << " - HOW TO INPUT DATE: input day - press Enter     " << char(179) << "                                                  " << char(179);
	cout<<"\n        " << char(179) << "                      input month - press Enter   " << char(179) << "                                                  " << char(179);
	cout<<"\n        " << char(179) << "                      input year - press Enter    " << char(179) << "                                                  " << char(179);
	cout<<"\n        " << char(179) << "                                                  " << char(179) << "                                                  " << char(179) << "                              " << char(218); for (int i = 0; i < 35; i++) {cout << char(196);}; cout << char(191);
	cout<<"\n        " << char(195); for (int i = 0; i < 50; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 50; i++) {cout << char(196);}; cout << char(180) << "                              " << char(179) << "               LOGIN               " << char(179);
	cout<<"\n        " << char(179) << "           - Only allowed to borrow less than or equal to 5 books/time                               " << char(179) << "                              " << char(192); for (int i = 0; i < 35; i++) {cout << char(196);}; cout << char(217);
	cout<<"\n        " << char(179) << "           - If the return date is overdue, pay a fine of 5000 VND per day                           " << char(179);
	cout<<"\n        " << char(179) << "           - If the book is lost, compensation must be paid according to the cover price.            " << char(179);
	cout<<"\n        " << char(192); for (int i = 0; i < 101; i++) {cout << char(196);}; cout << char(217) << "                              Enter your username: ";
    cin  >> username;
    cout << "\n                                                                                                                                             Enter your password: ";
	ch = getch();
	while (ch != 13) {
        if(ch != 8) {
            password.push_back(ch);
            cout << '*';
        }
        else {
            if(password.size() != 0) {
                password.erase(password.end() - 1);
                cout << "\b \b";
            }
        }
        ch = getch();
	}
	if (accountsList.checkAccount(username, password) != -1)
		return accountsList.checkAccount(username, password);
    return -1;
}

void outputReaderBorrowBook() {
	cout<<"\n\t\t\t\t                                         " << char(218); for (int i = 0; i < 69; i++) {cout << char(196);}; cout << char(191);
	cout<<"\n\t\t\t\t                                         " << char(179) << "                   READERS WHO ARE BORROWING BOOKS                   " << char(179);
	cout<<"\n\t\t\t\t                                         " << char(192); for (int i = 0; i < 69; i++) {cout << char(196);}; cout << char(217) << endl;
	cout<<"\n   " << char(218); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(191);
	cout<<"\n   " << char(179) << " READER'S ID " << char(179) << "         FULL NAME         " << char(179) << "  PERSONAL ID " << char(179) << "  GENDER " << char(179) << "  DAY OF BIRTH  " << char(179) << "         FACULTY/CLASS        " << char(179) << "   PHONE NUMBER  " << char(179) << "             EMAIL           " << char(179) << " CARD ISSUE DATE " << char(179) << " CARD EXPIRATION DATE " << char(179);
	cout<<"\n   " << char(195); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(180);
	cout<< endl;
	int total = 0;
    for(int i = 0; i < BRsList.getBRsList().size(); i++) {
        if(BRsList.getBRsList()[i].getStatus() == 1) {
            total++;
            string id = BRsList.getBRsList()[i].getIdReader();
            int index = readersList.findReaderById(id);
            cout << "   " << char(179) << " ";
            readersList.getReadersList()[index]->outputSetw();
           	if (i != BRsList.getBRsList().size() - 1) {
				cout << "   " << char(195); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(180) << "\n";
			}
			else {
				cout << "   " << char(192); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(217) << "\n";
			}
        }
    }
	cout<<"   " << char(179) << "  THE NUMBER OF PEOPLE WHO ARE BORROWING BOOKS: " << total << "                                                                                                                                                          " << char(179);
	cout<<"\n   " << char(218); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(191);
}
//	List Of Overdue Readers
void outputReaderBorrowBookOverDeadline() {
	cout<<"\n\t\t\t\t                                         " << char(218); for (int i = 0; i < 69; i++) {cout << char(196);}; cout << char(191);
	cout<<"\n\t\t\t\t                                         " << char(179) << "                 READERS WHO HAVE RETURNED BOOKS LATE                " << char(179);
	cout<<"\n\t\t\t\t                                         " << char(192); for (int i = 0; i < 69; i++) {cout << char(196);}; cout << char(217) << endl;
	cout<<"\n   " << char(218); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(191);
	cout<<"\n   " << char(179) << " READER'S ID " << char(179) << "         FULL NAME         " << char(179) << "  PERSONAL ID " << char(179) << "  GENDER " << char(179) << "  DAY OF BIRTH  " << char(179) << "         FACULTY/CLASS        " << char(179) << "   PHONE NUMBER  " << char(179) << "             EMAIL           " << char(179) << " CARD ISSUE DATE " << char(179) << " CARD EXPIRATION DATE " << char(179);
	cout<<"\n   " << char(195); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(180);
	cout<< endl;
	int total = 0;
    for(int i = 0; i < BRsList.getBRsList().size(); i++) {
        string id = BRsList.getBRsList()[i].getIdReader();
        if(BRsList.getBRsList()[i].getStatus() == 1 && BRsList.getBRsList()[i].checkValidExpery() > 0) {
            total++;
            int index = readersList.findReaderById(id);
            cout << "   " << char(179) << " ";
            readersList.getReadersList()[index]->outputSetw();
           	if (i != BRsList.getBRsList().size() - 1) {
				cout << "   " << char(195); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(180) << "\n";
			}
			else {
				cout << "   " << char(192); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(217) << "\n";
			}
        }
    }
	cout<<"   " << char(179) << "  THE NUMBER OF PEOPLE WHO PAY BOOKS LATE: " << total << "                                                                                                                                                               " << char(179);
	cout<<"\n   " << char(218); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(191);
}
//	The 5 Most Borrowed Books
void top5MostBorrowBook() {
    map <string, int> top5;
    for(int i = 0; i < BRsList.getBRsList().size(); i++) {
        vector<string> List = BRsList.getBRsList()[i].getListBooksToBorrow();
        for(int i = 0; i < List.size(); i++) {
            top5[List[i]]++;
        }
    }
    int i = 1;
    while(i != 6){
        int Max = 0;
        string res;
        for(auto it : top5) {
            if(it.second > Max) {
                Max = it.second;
                res = it.first;
            }
        }
		cout<<"\n\t\t\t\t                                                      " << char(218); for (int i = 0; i < 3; i++) {cout << char(196);}; cout << char(191);
		cout<<"\n\t\t\t\t                                                      " << char(179) << " " << i << " " << char(179) << "    " << res;
		cout<<"\n\t\t\t\t                                                      " << char(192); for (int i = 0; i < 3; i++) {cout << char(196);}; cout << char(217);
        top5.erase(res);
        i++;
    }
    cout << endl;
}

void rules() {
	system("cls");
	cout<<"\n\t\t\t\t\t\t                                               " << char(218); for (int i = 0; i < 23; i++) {cout << char(196);}; cout << char(191) << endl;
	cout<<"\t\t\t\t\t\t        " << char(218); for (int i = 0; i < 38; i++) {cout << char(196);};  cout << char(180) << "     LIBRARY RULES     " << char(195); for (int i = 0; i < 38; i++) {cout << char(196);}; cout << char(191);
	cout<<"\n\t\t\t\t\t\t        " << char(179) << "                                      " << char(192); for (int i = 0; i < 11; i++) {cout << char(196);}; ; cout << char(194); for (int i = 0; i < 11; i++) {cout << char(196);}; cout << char(217) << "                                      " << char(179);
	cout<<"\n\t\t\t\t\t\t        " << char(179) << "                 ABOUT READERS                    " << char(179) << "                   ABOUT BOOKS                    " << char(179);
	cout<<"\n\t\t\t\t\t\t        " << char(179) << "                                                  " << char(179) << "                                                  " << char(179);
	cout<<"\n\t\t\t\t\t\t        " << char(195); for (int i = 0; i < 50; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 50; i++) {cout << char(196);}; cout << char(180);
	cout<<"\n\t\t\t\t\t\t        " << char(179) << "                                                  " << char(179) << "                                                  " << char(179);
	cout<<"\n\t\t\t\t\t\t        " << char(179) << " - READER'S ID      : 10 characters               " << char(179) << " - BOOK'S ID          : 10 characters             " << char(179);
	cout<<"\n\t\t\t\t\t\t        " << char(179) << " - FULL NAME        : less than 30 characters     " << char(179) << " - BOOK'S TITLE,                                  " << char(179);
	cout<<"\n\t\t\t\t\t\t        " << char(179) << "                                                  " << char(179) << "   PUBLISHER, AUTHOR  : less than 60 characters   " << char(179);
	cout<<"\n\t\t\t\t\t\t        " << char(179) << " - PERRSONAL ID     : 12 characters               " << char(179) << " - BOOK'S PUBLISH YEAR: input only year           " << char(179);
	cout<<"\n\t\t\t\t\t\t        " << char(179) << " - EMAIL            : less than 60 characters     " << char(179) << " - BOOK'S GENRE       : less than 30 characters   " << char(179);
	cout<<"\n\t\t\t\t\t\t        " << char(179) << " - GENDER           : input 1 (for Male)          " << char(179) << " - COVER PRICE UNIT   : thousands VND             " << char(179);
	cout<<"\n\t\t\t\t\t\t        " << char(179) << "                      input 0 (for Female)        " << char(179) << "                                                  " << char(179);
	cout<<"\n\t\t\t\t\t\t        " << char(179) << " - HOW TO INPUT DATE: input day - press Enter     " << char(179) << "                                                  " << char(179);
	cout<<"\n\t\t\t\t\t\t        " << char(179) << "                      input month - press Enter   " << char(179) << "                                                  " << char(179);
	cout<<"\n\t\t\t\t\t\t        " << char(179) << "                      input year - press Enter    " << char(179) << "                                                  " << char(179);
	cout<<"\n\t\t\t\t\t\t        " << char(179) << "                                                  " << char(179) << "                                                  " << char(179);
	cout<<"\n\t\t\t\t\t\t        " << char(195); for (int i = 0; i < 50; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 50; i++) {cout << char(196);}; cout << char(180);
	cout<<"\n\t\t\t\t\t\t        " << char(179) << "           - Only allowed to borrow less than or equal to 5 books/time                               " << char(179);
	cout<<"\n\t\t\t\t\t\t        " << char(179) << "           - If the return date is overdue, pay a fine of 5000 VND per day                           " << char(179);
	cout<<"\n\t\t\t\t\t\t        " << char(179) << "           - If the book is lost, compensation must be paid according to the cover price.            " << char(179);
	cout<<"\n\t\t\t\t\t\t        " << char(192); for (int i = 0; i < 101; i++) {cout << char(196);}; cout << char(217) << endl;
}

void showMainMenuAdmin(){
	system("cls");
	cout << "\n\n";
	cout<<"\n\t\t\t\t                                         " << char(218); for (int i = 0; i < 68; i++) {cout << char(196);}; cout << char(191);
	cout<<"\n\t\t\t\t                                         " << char(179) << "                     LIBRARY MANAGEMENT PROGRAM                     " << char(179);
	cout<<"\n\t\t\t\t                                         " << char(192); for (int i = 0; i < 68; i++) {cout << char(196);}; cout << char(217);
	cout << endl;
	cout << "\n\t\t\t\t\t\t\t     (Please note that when choosing an option, you must enter the correct number for that option,";
	cout << "\n\t\t\t\t\t\t\t\t\t\t    otherwise the program will return abnormal errors)\n";
	cout<<"\n\t\t\t\t " << char(218); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 73; i++) {cout << char(196);}; cout << char(191);
	cout<<"\n\t\t\t\t " << char(179) << "         READERS MANAGEMENT         " << char(179) << "          BOOKS MANAGEMENT          " << char(179) << "                         BORROWING AND RETURNING                         " << char(179);
	cout<<"\n\t\t\t\t " << char(195); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(180);
	cout<<"\n\t\t\t\t " << char(179) << "                                    " << char(179) << "                                    " << char(179) << "                                    " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t " << char(179) << "  11  : Input readers               " << char(179) << "  21  : Input books                 " << char(179) << "  31  : Borrow books                " << char(179) << "  34  : Output ALL ticket           " << char(179);
	cout<<"\n\t\t\t\t " << char(179) << "  12  : Edit readers                " << char(179) << "  22  : Edit book's information     " << char(179) << "  32  : Return books                " << char(179) << "  35  : Lose book report            " << char(179);
	cout<<"\n\t\t\t\t " << char(179) << "  13  : Delete readers              " << char(179) << "  23  : Delete books                " << char(179) << "  33  : Find a ticket's information " << char(179) << "  36  : Check returned book or not  " << char(179);
	cout<<"\n\t\t\t\t " << char(179) << "                                    " << char(179) << "                                    " << char(179) << "                                    " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t " << char(179) << "  14x : Output readers's list       " << char(179) << "  24  : Output books's list by ID   "; cout << char (195); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(180);
	cout<<"\n\t\t\t\t " << char(179) << "         141 : order by ID          " << char(179) << "                                    " << char(179) << "                               STATISTICS                                " << char(179);
	cout<<"\n\t\t\t\t " << char(179) << "         142 : order by last name   " << char(179) << "  25x : Find books                  " << char(195); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(180);
	cout<<"\n\t\t\t\t " << char(179) << "         143 : only students        " << char(179) << "         251 : by ID                " << char(179) << "                                    " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t " << char(179) << "         144 : only teachers        " << char(179) << "         252 : by name              " << char(179) << "  41  : Readers are borrowing books " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t " << char(179) << "                                    " << char(179) << "         253 : by genre             " << char(179) << "  42  : Readers are late to return  " << char(179) << "  43  : Top 05 most popular books   " << char(179);
	cout<<"\n\t\t\t\t " << char(179) << "  15x : Find readers                " << char(195); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(180) << "        books                       " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t " << char(179) << "         151 : by ID                " << char(179) << "         ACCOUNT MANAGEMENT         " << char(179) << "                                    " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t " << char(179) << "         152 : by name              " << char(195); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(180);
	cout<<"\n\t\t\t\t " << char(179) << "                                    " << char(179) << "                                    " << char(179) << "                            MORE INFORMATION                             " << char(179);
	cout<<"\n\t\t\t\t " << char(179) << "  16  : Check ticket's expiration   " << char(179) << "  26   : Change your user name      " << char(195); for (int i = 0; i < 73; i++) {cout << char(196);}; cout << char(180);
	cout<<"\n\t\t\t\t " << char(179) << "  17  : Extend reader's ticket      " << char(179) << "  27   : Change your password       " << char(179) << "        666 : DATA ENTRY RULES              777 : GROUP INFORMATION      " << char(179);
	cout<<"\n\t\t\t\t " << char(179) << "                                    " << char(179) << "                                    " << char(179) << "                                                                         " << char(179);
	cout<<"\n\t\t\t\t " << char(192); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(193);  for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(193);  for (int i = 0; i < 73; i++) {cout << char(196);}; cout << char(217);
	cout<<"\n\n\t\t\t\t      " << "                                                     [ANOUNCEMENT]: Press 000 to log out                                                         ";
}

void showMainMenuUser() {
    system("cls");
	cout << "\n\n\n";
	cout<<"\n\t\t\t\t                                         " << char(218); for (int i = 0; i < 68; i++) {cout << char(196);}; cout << char(191);
	cout<<"\n\t\t\t\t                                         " << char(179) << "                     LIBRARY MANAGEMENT PROGRAM                     " << char(179);
	cout<<"\n\t\t\t\t                                         " << char(192); for (int i = 0; i < 68; i++) {cout << char(196);}; cout << char(217);
	cout << endl;
	cout << "\n\t\t\t\t\t\t\t     (Please note that when choosing an option, you must enter the correct number for that option,";
	cout << "\n\t\t\t\t\t\t\t\t\t\t    otherwise the program will return abnormal errors)\n";
	cout<<"\n\t\t\t\t\t\t   " << char(218); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(191);
	cout<<"\n\t\t\t\t\t\t   " << char(179) << "         READERS MANAGEMENT         " << char(179) << "          BOOKS MANAGEMENT          " << char(179) << "      BORROWING AND RETURNING       " << char(179);
	cout<<"\n\t\t\t\t\t\t   " << char(195); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(180);
	cout<<"\n\t\t\t\t\t\t   " << char(179) << "                                    " << char(179) << "                                    " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t\t\t   " << char(179) << "  11  : Output your information     " << char(179) << "  21  : Output books's list by ID   " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t\t\t   " << char(179) << "                                    " << char(179) << "                                    " << char(179) << "  31  : Find ticket's information   " << char(179);
	cout<<"\n\t\t\t\t\t\t   " << char(179) << "  12  : Check your                  " << char(179) << "  22x : Find books                  " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t\t\t   " << char(179) << "               ticket's expiration  " << char(179) << "                                    " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t\t\t   " << char(179) << "                                    " << char(179) << "         221 : by ID                "; cout << char (195); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(180);
	cout<<"\n\t\t\t\t\t\t   " << char(195); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(180) << "                                    " << char(179) << "             STATISTIC              " << char(179);
	cout<<"\n\t\t\t\t\t\t   " << char(179) << "         ACCOUNT MANAGEMENT         " << char(179) << "         222 : by name              " << char(195); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(180);
	cout<<"\n\t\t\t\t\t\t   " << char(195); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(180) << "                                    " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t\t\t   " << char(179) << "                                    " << char(179) << "         223 : by genre             " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t\t\t   " << char(179) << "  13  : Change your user name       " << char(179) << "                                    " << char(179) << "  41  : Top 05 most popular books   " << char(179);
	cout<<"\n\t\t\t\t\t\t   " << char(179) << "  14  : Change your user password   " << char(179) << "                                    " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t\t\t   " << char(179) << "                                    " << char(179) << "                                    " << char(179) << "                                    " << char(179);
    cout<<"\n\t\t\t\t\t\t   " << char(192); for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(193);  for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(193);  for (int i = 0; i < 36; i++) {cout << char(196);}; cout << char(217);
	cout<<"\n\n\t\t\t\t     " << "                                                     [ANOUNCEMENT]: Press 000 to log out                                                        ";
}

void showExitMenu(){
    cout<<"\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t        HAVE A GREAT WORKING DAY";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t               THANK YOU AND SEE YOU SOON";
    cout<<"\n\n\t\t\t\t                                        (If you satisfy with our services, please rate us on library.ut.edu.vn!)\n\n\n\n\n\n";
    getch();
}

void viewInfo(){
	system("cls");
	cout<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t\t" << "             "; cout << char(218); for (int i = 0; i < 47; i++) {cout << char(196);}; cout << char(191);
	cout<<"\n\t\t\t\t\t\t\t\t\t" << "             " << char(179) << " TOPIC INFORMATION: LIBRARY MANAGEMENT PROJECT " << char(179);
	cout<<"\n\t\t\t\t\t\t\t\t\t" << char(218); for (int i = 0; i < 12; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 23; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 23; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 12; i++) {cout << char(196);}; cout << char(191);
	cout<<"\n\t\t\t\t\t\t\t\t\t" << char(179) << "     GROUP'S MEMBER INFORMATION     " << char(179) << "       SUBJECT'S INFORMATION        " << char(179);
	cout<<"\n\t\t\t\t\t\t\t\t\t" << char(195); for (int i = 0; i < 12; i++) {cout << char(196);}; cout << char(196); for (int i = 0; i < 23; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 23; i++) {cout << char(196);}; cout << char(196); for (int i = 0; i < 12; i++) {cout << char(196);}; cout << char(180);
	cout<<"\n\t\t\t\t\t\t\t\t\t" << char(179) << "                                    " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t\t\t\t\t\t" << char(179) << "     01. Nguyen Duc Thiep           " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t\t\t\t\t\t" << char(179) << "         Student ID: 21H1120054     " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t\t\t\t\t\t" << char(179) << "     02. Ho Chi Nhan                " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t\t\t\t\t\t" << char(179) << "         Student ID: 21H1120013     " << char(179) << " Subject   : Object-oriented        " << char(179);
	cout<<"\n\t\t\t\t\t\t\t\t\t" << char(179) << "     03. Do Kim Lam                 " << char(179) << "                       programming  " << char(179);
	cout<<"\n\t\t\t\t\t\t\t\t\t" << char(179) << "         Student ID: 21H1120042     " << char(179) << " Instructor: Nguyen Thi Khanh Tien  " << char(179);
	cout<<"\n\t\t\t\t\t\t\t\t\t" << char(179) << "     04. Vo Thai Son                " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t\t\t\t\t\t" << char(179) << "         Student ID: 21H1120019     " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t\t\t\t\t\t" << char(179) << "     05. Phan Tan Vuong             " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t\t\t\t\t\t" << char(179) << "         Student ID: 2051040190     " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t\t\t\t\t\t" << char(179) << "                                    " << char(179) << "                                    " << char(179);
	cout<<"\n\t\t\t\t\t\t\t\t\t" << char(195); for (int i = 0; i < 12; i++) {cout << char(196);}; cout << char(196); for (int i = 0; i < 23; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 23; i++) {cout << char(196);}; cout << char(196); for (int i = 0; i < 12; i++) {cout << char(196);}; cout << char(180);
	cout<<"\n\t\t\t\t\t\t\t\t\t" << char(179) << "             CN21CLCA, UNIVERSITY OF TRANSPORT HOCHIMINH CITY            " << char(179);
	cout<<"\n\t\t\t\t\t\t\t\t\t" << char(192); for (int i = 0; i < 12; i++) {cout << char(196);}; cout << char(196); for (int i = 0; i < 23; i++) {cout << char(196);}; cout << char(196); for (int i = 0; i < 23; i++) {cout << char(196);}; cout << char(196); for (int i = 0; i < 12; i++) {cout << char(196);}; cout << char(217);
}

void menuAdmin(int index) {
    while (true) {
    	showMainMenuAdmin();
    	int selection;
    	cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t     PLEASE ENTER YOUR SELECTION: ";
    	cin>> selection;
    	cin.ignore();
    	if (selection == 11) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t         [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 11 (INPUT READERS)\n";
			cout << "\n\t\t\t\t\t\t\t\t\t      (With this option, you can input unlimited number of readers)\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t       PLEASE ENTER THE FOLLOWING REQUIREMENTS . . .\n\n";
    		readersList.input(accountsList);
    		readersList.exportFile();
    		accountsList.exportFile();
		}
		else if (selection == 12) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t         [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 12 (EDIT A READER)\n";
			cout << "\n\t\t\t\t\t           (With this option, you can easily edit any reader's information (Condition: remember student/teacher identification))\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t       PLEASE ENTER THE FOLLOWING REQUIREMENTS . . .\n\n";
			string idReader;
			cout << "\t\t\t\t\t\t\t\t\t           Reader's identification you want to edit: ";
			getline(cin, idReader);
			standardizeIdentifier(idReader);
			readersList.changeReaderInformation(idReader);
			readersList.exportFile();
		}
		else if (selection == 13) {
			system("cls");
			string idReader;
			cout << "\n\n\t\t\t\t\t\t\t\t\t        [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 13 (DELETE A READER)\n";
			cout << "\n\t\t\t\t\t                 (With this option, you can easily delete any reader (Condition: remember student/teacher identification))\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t       PLEASE ENTER THE FOLLOWING REQUIREMENTS . . .\n\n";
			cout << "\t\t\t\t\t\t\t\t\t       Enter reader's identification you want to delete: ";
			getline(cin, idReader);
			standardizeIdentifier(idReader);
			readersList.deleteReaderById(idReader);
			BRsList.deleteTicket(idReader);
			accountsList.deleteAccount(idReader);
			readersList.exportFile();
			BRsList.exportFile();
			accountsList.exportFile();
			getch();
//			showMainMenu();
		}
		else if (selection == 141) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t     [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 141 (OUTPUT READER's LIST SORTED BY READER IDENTIFICATION)\n";
			cout << "\n\t\t\t\t\t                                 (With this option, we will show you all readers (order by identification))\n";
			readersList.sortReadersListById();
			readersList.outputAllReaders();
			readersList.exportFile();
			cout<<"\n\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 142) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t    [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 142 (OUTPUT READER's LIST SORTED BY LAST NAME)\n";
			cout << "\n\t\t\t\t\t                                    (With this option, we will show you all readers (order by last name))\n";
			readersList.sortReadersListByLastName();
			readersList.outputAllReaders();
			readersList.exportFile();
			cout<<"\n\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 143) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t              [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 143 (OUTPUT STUDENT's LIST)\n";
			cout << "\n\t\t\t\t\t                                              (With this option, we will show you all students)\n";
			readersList.outputStudent();
			cout<<"\n\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 144) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t              [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 143 (OUTPUT TEACHER's LIST)\n";
			cout << "\n\t\t\t\t\t                                              (With this option, we will show you all teachers)\n";
			readersList.outputTeacher();
			cout<<"\n\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 151) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 151 (FIND A READER BY IDENTIFICATION)\n";
			cout << "\n\t\t\t\t\t       (With this option, you can easily search for any reader's information (Condition: remember student/teacher identification))\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t       PLEASE ENTER THE FOLLOWING REQUIREMENTS . . .\n\n";
			string idReader;
			cout << "\t\t\t\t\t\t\t\t                  Reader's identification you want to find is: ";
			getline(cin, idReader);
			standardizeIdentifier(idReader);
			int temp = readersList.findReaderById(idReader);
			if (temp != -1) {
				cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t     FOLLOWING IS ALL THE INFORMATION ABOUT READER YOU ARE LOOKING FOR" << endl;
				readersList.getReadersList()[readersList.findReaderById(idReader)]->output();
			}
			else {
				cout << "\n\n\n\t\t\t\t\t\t\t\t\t SORRY!!! THE READER WHOSE INFORMATION YOU ARE LOOKING FOR DOESN'T EXIST!!!";
				cout << "\n\t\t\t\t\t\t\t\t\t                             PLEASE TRY AGAIN!\n\n";
			}
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t   ";
			cout<<"\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 152) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t    [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 151 (FIND A READER BY FULL NAME)\n";
			cout << "\n\t\t\t\t\t            (With this option, you can easily search for any reader's information (Condition: remember student/teacher full name))\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t       PLEASE ENTER THE FOLLOWING REQUIREMENTS . . .\n\n";
			string name;
			cout << "\t\t\t\t\t\t\t\t                    Reader's full name you want to find is: ";
			getline(cin, name);
			standardizeName(name);
			readersList.findReaderByName(name);
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t   ";
			cout<<"\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 16) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t     [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 16 (CHECK TICKET's EXPIRATION)\n";
			cout << "\n\t\t\t\t\t        (With this option, you can easily search for any reader's ticket's expiration (Condition: remember student/teacher full name))\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t       PLEASE ENTER THE FOLLOWING REQUIREMENTS . . .\n\n";
			string idReader;
			cout << "\t\t\t\t\t\t\t             Reader's identification you want to check whose ticket's expiration is: ";
			getline(cin, idReader);
			standardizeIdentifier(idReader);
			int j = readersList.findReaderById(idReader);
			if (j != -1) {
				if (readersList.checkCardExpiry(idReader) == true) {
					cout << "\n\t\t\t\t\t\t\t\t                                    STILL UNEXPIRED!" << endl;
				}
				else {
					cout << "\n\t\t\t\t\t\t\t\t                                        EXPIRED!" << endl;
				}
				cout << "\n\t\t\t\t\t\t\t\t\t\t\t   ";
			    cout<<"\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			}
			else {
				cout << "\n\t\t\t\t\t\t\t\t                 Not found this reader!!! Press any key to continue. . .";
			}
			getch();
//			showMainMenu();
		}
		else if (selection == 17) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t     [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 17 (EXTEND TICKET's EXPIRATION)\n";
			cout << "\n\t\t\t\t\t          (With this option, you can easily extend any reader's ticket's expiration (Condition: remember student/teacher full name))\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t       PLEASE ENTER THE FOLLOWING REQUIREMENTS . . .\n\n";
			string idReader;
			cout << "\t\t\t\t\t\t\t             Reader's identification you want to extend whose ticket's expiration is: ";
			getline(cin, idReader);
			standardizeIdentifier(idReader);
			readersList.extendCard(idReader);
			readersList.exportFile();
//			showMainMenu();
		}
		else if (selection == 21) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t          [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 21 (INPUT BOOKS)\n";
			cout << "\n\t\t\t\t\t\t\t\t\t       (With this option, you can input unlimited number of books)\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t       PLEASE ENTER THE FOLLOWING REQUIREMENTS . . .\n\n";
			booksList.input();
			booksList.exportFIle();
		}
		else if (selection == 22) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t          [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 12 (EDIT A BOOK)\n";
			cout << "\n\t\t\t\t\t                  (With this option, you can easily edit any book's information (Condition: remember book identification))\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t       PLEASE ENTER THE FOLLOWING REQUIREMENTS . . .\n\n";
			cout << "\t\t\t\t\t\t\t\t\t            Book's identification you want to edit: ";
			string idBook;
			getline(cin, idBook);
			standardizeIdentifier(idBook);
			booksList.changeBookInformation(idBook);
            booksList.exportFIle();
		}
		else if (selection == 23) {
			system("cls");
			string idReader;
			cout << "\n\n\t\t\t\t\t\t\t\t\t         [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 23 (DELETE A BOOK)\n";
			cout << "\n\t\t\t\t\t                       (With this option, you can easily delete any book (Condition: remember book identification))\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t       PLEASE ENTER THE FOLLOWING REQUIREMENTS . . .\n\n";
			cout << "\t\t\t\t\t\t\t\t\t        Enter book's identification you want to delete: ";
			string idBook;
			getline(cin, idBook);
			standardizeIdentifier(idBook);
			booksList.deleteBook(idBook);
			booksList.exportFIle();
//			showMainMenu();
		}
		else if (selection == 24) {
			booksList.sortBookById();
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t        [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 24 (OUTPUT BOOKS's LIST SORTED BY BOOK IDENTIFICATION)\n";
			cout << "\n\t\t\t\t\t                                  (With this option, we will show you all books (order by identification))\n";
			booksList.outputSetw();
			booksList.exportFIle();
			cout<<"\n\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 251) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t  [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 251 (FIND A BOOK BY IDENTIFICATION)\n";
			cout << "\n\t\t\t\t\t              (With this option, you can easily search for any book's information (Condition: remember book identification))\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t       PLEASE ENTER THE FOLLOWING REQUIREMENTS . . .\n\n";
			string idBook;
			cout << "\t\t\t\t\t\t\t\t                   Book's identification you want to find is: ";
			getline(cin, idBook);
			standardizeIdentifier(idBook);
			if (booksList.findBookId(idBook) != -1) {
				cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t      FOLLOWING IS ALL THE INFORMATION ABOUT BOOK YOU ARE LOOKING FOR" << endl;
				cout << booksList.getBooksList()[booksList.findBookId(idBook)];
			}
			else {
				cout << "\n\n\n\t\t\t\t\t\t\t\t\t  SORRY!!! THE BOOK WHOSE INFORMATION YOU ARE LOOKING FOR DOESN'T EXIST!!!";
				cout << "\n\t\t\t\t\t\t\t\t\t                             PLEASE TRY AGAIN!\n\n";
			}
			cout<<"\n\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 252) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t       [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 252 (FIND A BOOK BY TITLE)\n";
			cout << "\n\t\t\t\t\t                 (With this option, you can easily search for any book's information (Condition: remember book's title))\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t       PLEASE ENTER THE FOLLOWING REQUIREMENTS . . .\n\n";
			string bookTitle;
			cout << "\t\t\t\t\t\t\t\t                   Book's title you want to find is: ";
			getline(cin, bookTitle);
			standardizeName(bookTitle);
			if (booksList.findBookTitle(bookTitle) != -1) {
				cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t      FOLLOWING IS ALL THE INFORMATION ABOUT BOOK YOU ARE LOOKING FOR" << endl;
				cout << booksList.getBooksList()[booksList.findBookTitle(bookTitle)];
			}
			else {
				cout << "\n\n\n\t\t\t\t\t\t\t\t\t  SORRY!!! THE BOOK WHOSE INFORMATION YOU ARE LOOKING FOR DOESN'T EXIST!!!";
				cout << "\n\t\t\t\t\t\t\t\t\t                             PLEASE TRY AGAIN!\n\n";
			}
			cout<<"\n\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 253) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t       [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 253 (FIND A BOOK BY GENRE)\n";
			cout << "\n\t\t\t\t\t                 (With this option, you can easily search for any book's information (Condition: remember book's genre))\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t       PLEASE ENTER THE FOLLOWING REQUIREMENTS . . .\n\n";
			string genre;
			cout << "\t\t\t\t\t\t\t\t                   Book's genre you want to find is: ";
			getline(cin, genre);
			standardizeName(genre);
			booksList.findBookGenre(genre);
			cout<<"\n\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 26) {
            system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t      [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 26 (CHANGE YOUR USER NAME)\n";
			string newUserName;
			cout << "\n\n\t\t\t\t\t\t\t\t\t                  Enter your new user name: ";
			getline(cin, newUserName);
			do {
                if (accountsList.checkDuplicatedUsername(newUserName) == true) {
                    cout << "\n\n\t\t\t\t\t\t\t\t\t                      DUPLICATED USER NAME ERROR!";
                    cout << "\n\n\t\t\t\t\t\t\t\t\t                  Please re-enter your new user name: ";
                    getline(cin, newUserName);
                }
			} while (accountsList.checkDuplicatedUsername(newUserName) == true);
            accountsList.getAccountsList()[index]->changeUserName(newUserName);
            accountsList.exportFile();
            cout << "\n\n\t\t\t\t\t\t\t\t\t      Change username successfully! Press any key to continue. . .";
            getch();
            break;
		}
		else if (selection == 27) {
            system("cls");
			int ch;
			cout << "\n\n\t\t\t\t\t\t\t\t\t      [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 27 (CHANGE YOUR PASSWORD)\n";
			string oldPassword;
			cout << "\n\n\t\t\t\t\t\t\t\t\t                  Enter your old password: ";
            ch = getch();
            while (ch != 13) {
                if(ch != 8) {
                    oldPassword.push_back(ch);
                    cout << '*';
                }
                else {
                    if(oldPassword.size() != 0) {
                        oldPassword.erase(oldPassword.end() - 1);
                        cout << "\b \b";
                    }
                }
                ch = getch();
            }
			do {
                if (accountsList.getAccountsList()[index]->getPassword() != oldPassword) {
                    cout << "\n\n\t\t\t\t\t\t\t\t\t                          INCORRECT PASSWORD!";
                    cout << "\n\n\t\t\t\t\t\t\t\t\t                  Please re-enter your old password: ";
                    oldPassword.clear();
                    ch = getch();
                    while (ch != 13) {
                        if(ch != 8) {
                            oldPassword.push_back(ch);
                            cout << '*';
                        }
                        else {
                            if(oldPassword.size() != 0) {
                                oldPassword.erase(oldPassword.end() - 1);
                                cout << "\b \b";
                            }
                        }
                        ch = getch();
                    }
                }
			} while (accountsList.getAccountsList()[index]->getPassword() != oldPassword);
			string newPassword;
			cout << "\n\n\t\t\t\t\t\t\t\t\t                  Enter your new password: ";
            ch = getch();
            while (ch != 13) {
                if(ch != 8) {
                    newPassword.push_back(ch);
                    cout << '*';
                }
                else {
                    if(newPassword.size() != 0) {
                        newPassword.erase(newPassword.end() - 1);
                        cout << "\b \b";
                    }
                }
                ch = getch();
            }
			do {
                if (accountsList.getAccountsList()[index]->getPassword() == newPassword) {
                    cout << "\n\n\t\t\t\t\t\t\t\t\t                          NEW PASSWORD MUST BE DIFFERENT WITH OLD PASSWORD!";
                    cout << "\n\n\t\t\t\t\t\t\t\t\t                  Please re-enter your new password: ";
                    newPassword.clear();
                    ch = getch();
                    while (ch != 13) {
                        if(ch != 8) {
                            newPassword.push_back(ch);
                            cout << '*';
                        }
                        else {
                            if(newPassword.size() != 0) {
                                newPassword.erase(newPassword.end() - 1);
                                cout << "\b \b";
                            }
                        }
                        ch = getch();
                    }
                }
			} while (accountsList.getAccountsList()[index]->getPassword() == newPassword);

			string newNewPassword;
			cout << "\n\n\t\t\t\t\t\t\t\t\t                  Confirm password: ";
            ch = getch();
            while (ch != 13) {
                if(ch != 8) {
                    newNewPassword.push_back(ch);
                    cout << '*';
                }
                else {
                    if(newNewPassword.size() != 0) {
                        newNewPassword.erase(newNewPassword.end() - 1);
                        cout << "\b \b";
                    }
                }
                ch = getch();
            }
			do {
                if (newPassword != newNewPassword) {
                    cout << "\n\n\t\t\t\t\t\t\t\t\t                          CONFIRMED PASSWORD MUST BE EQUAL TO NEW PASSWORD!";
                    cout << "\n\n\t\t\t\t\t\t\t\t\t                  Please re-enter your new password: ";
                    newNewPassword.clear();
                    ch = getch();
                    while (ch != 13) {
                        if(ch != 8) {
                            newNewPassword.push_back(ch);
                            cout << '*';
                        }
                        else {
                            if(newNewPassword.size() != 0) {
                                newNewPassword.erase(newNewPassword.end() - 1);
                                cout << "\b \b";
                            }
                        }
                        ch = getch();
                    }
                }
			} while (newPassword != newNewPassword);
            accountsList.getAccountsList()[index]->changePassword(newPassword);
            accountsList.exportFile();
            cout << "\n\n\t\t\t\t\t\t\t\t\t      Change password successfully! Press any key to continue. . .";
            getch();
            break;
		}
		else if (selection == 31) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t           [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 31 (BORROW BOOKS)\n";
			cout << "\n\t\t\t\t\t                    (With this option, readers can borrow books after the librarian completes the information entry)\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t       PLEASE ENTER THE FOLLOWING REQUIREMENTS . . .\n\n";
			BRsList.input(readersList, booksList);
			BRsList.exportFile();
			cout<<"\n\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 32) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t           [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 32 (RETURN BOOKS)\n";
			cout << "\n\t\t\t\t\t                    (With this option, readers can return books after the librarian completes the information entry)\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t       PLEASE ENTER THE FOLLOWING REQUIREMENTS . . .\n\n";
			string idReader;
			cout << "\t\t\t\t\t\t\t\t\t                   Enter reader's identification: ";
			getline(cin, idReader);
			int numberTicket;
			cout << "\t\t\t\t\t\t\t\t\t                   Enter number ticket: ";
			cin >> numberTicket;
			cin.ignore();
			standardizeIdentifier(idReader);
			BRsList.returnBook(idReader, numberTicket);
			BRsList.exportFile();
//			showMainMenu();
		}
		else if (selection == 33) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t    [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 33 (FIND A READER's TICKET)\n";
			cout << "\n\t\t\t\t\t        (With this option, you can easily find any reader's ticket information (Condition: remember student/teacher identification))\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t       PLEASE ENTER THE FOLLOWING REQUIREMENTS . . .\n\n";
			string idReader;
			cout << "\t\t\t\t\t\t\t\t\t           Reader's identification you want to find: ";
			getline(cin, idReader);
			standardizeIdentifier(idReader);
			BRsList.findTicketInformationByIdOfReader(idReader);
			cout<<"\n\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 34) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t  [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 34 (OUTPUT ALL READER's TICKET)\n";
			BRsList.output();
			cout<<"\n\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 35) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t        [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 35 (LOSE BOOK REPORT)\n";
			cout << "\n\t\t\t\t\t        (With this option, you can easily find any reader's ticket information (Condition: remember student/teacher identification))\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t       PLEASE ENTER THE FOLLOWING REQUIREMENTS . . .\n\n";
			string idReader;
			cout << "\n\t\t\t\t\t\t\t\t\t\tEnter reader's identification you want to report: ";
			getline(cin, idReader);
			standardizeIdentifier(idReader);
			int numberTicket;
			cout << "\n\t\t\t\t\t\t\t\t\t\tEnter number ticket: ";
			cin >> numberTicket;
			BRsList.loseBookReport(idReader, numberTicket, booksList);
			BRsList.exportFile();
			getch();
		}
		else if (selection == 36) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t   [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 36 (CHECK A READER's STATUS)\n";
			cout << "\n\t\t\t\t\t       (With this option, you can easily check any reader's status information (Condition: remember student/teacher identification))\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t       PLEASE ENTER THE FOLLOWING REQUIREMENTS . . .\n\n";
			string idReader;
			cout << "\t\t\t\t\t\t\t\t\t           Reader's identification you want to check: ";
			getline(cin, idReader);
			standardizeIdentifier(idReader);
			BRsList.isReturnBook(idReader);
//			showMainMenu();
		}
		else if (selection == 41) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t            [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 41 (OUTPUT READERS WHO ARE BORROWING BOOKS)\n";
			cout << "\n\t\t\t\t\t                                               (Following are all information about them)\n";
			outputReaderBorrowBook();
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t   ";
			cout<<"\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 42) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t            [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 42 (OUTPUT READERS WHO LATE TO RETURN BOOKS)\n";
			cout << "\n\t\t\t\t\t                                               (Following are all information about them)\n";
			outputReaderBorrowBookOverDeadline();
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t   ";
			cout<<"\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 43) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t                   [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 43 (TOP 5 MOST POPULAR BOOKS)\n";
			cout << "\n\t\t\t\t\t                                               (Following are all information about them)\n\n\n";
			cout<<"\n\t\t\t\t                                         " << char(218); for (int i = 0; i < 69; i++) {cout << char(196);}; cout << char(191);
			cout<<"\n\t\t\t\t                                         " << char(179) << "                       TOP 5 MOST POPULAR BOOKS                      " << char(179);
			cout<<"\n\t\t\t\t                                         " << char(192); for (int i = 0; i < 69; i++) {cout << char(196);}; cout << char(217) << endl;
			top5MostBorrowBook();
			cout<<"\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 666) {
			rules();
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t   ";
			cout << "\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 777) {
			viewInfo();
			cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t     ";
			cout << "\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 000) {
            readersList.exportFile();
            booksList.exportFIle();
            BRsList.exportFile();
            cout<<"\n\t\t\t\t\t\t\t\t\t\t           Do you want to log out? [Yes/No]: ";
            string answer;
            getline(cin, answer);
            standardizeName(answer);
            if (answer == "Yes") {
                showExitMenu();
                break;
            }
		}
	}
}

void menuUser(int index) {
    while (true) {
    	showMainMenuUser();
    	int selection;
    	cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t    PLEASE ENTER YOUR SELECTION: ";
    	cin>> selection;
    	cin.ignore();
    	if (selection == 11) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t                  [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 11\n";
			cout << "\n\t\t\t\t\t\t\t\t\t                  (Following are all of your information)\n";
			readersList.getReadersList()[readersList.findReaderById(accountsList.getAccountsList()[index]->getId())]->output();
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t   ";
			cout << "\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
		}
    	if (selection == 12) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t                  [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 12\n";
			int j = readersList.findReaderById(accountsList.getAccountsList()[index]->getId());
			if (j != -1) {
				if (readersList.checkCardExpiry(accountsList.getAccountsList()[index]->getId()) == true) {
					cout << "\n\t\t\t\t\t\t\t\t                            f  Your ticket is still unexpired!" << endl;
				}
				else {
					cout << "\n\t\t\t\t\t\t\t\t                                   Your ticket is expired!" << endl;
				}
				cout << "\n\t\t\t\t\t\t\t\t\t\t\t   ";
			    cout<<"\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			}
			else {
				cout << "\n\t\t\t\t\t\t\t\t                 Not found this reader!!! Press any key to continue. . .";
			}
			getch();
		}
		if (selection == 13) {
            system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t      [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 13 (CHANGE YOUR USER NAME)\n";
			string newUserName;
			cout << "\n\n\t\t\t\t\t\t\t\t\t                  Enter your new user name: ";
			getline(cin, newUserName);
			do {
                if (accountsList.checkDuplicatedUsername(newUserName) == true) {
                    cout << "\n\n\t\t\t\t\t\t\t\t\t                      DUPLICATED USER NAME ERROR!";
                    cout << "\n\n\t\t\t\t\t\t\t\t\t                  Please re-enter your new user name: ";
                    getline(cin, newUserName);
                }
			} while (accountsList.checkDuplicatedUsername(newUserName) == true);
            accountsList.getAccountsList()[index]->changeUserName(newUserName);
            accountsList.exportFile();
            cout << "\n\n\t\t\t\t\t\t\t\t\t      Change username successfully! Press any key to continue. . .";
            getch();
            break;
		}
		if (selection == 14) {
            system("cls");
			int ch;
			cout << "\n\n\t\t\t\t\t\t\t\t\t      [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 14 (CHANGE YOUR PASSWORD)\n";
			string oldPassword;
			cout << "\n\n\t\t\t\t\t\t\t\t\t                  Enter your old password: ";
            ch = getch();
            while (ch != 13) {
                if(ch != 8) {
                    oldPassword.push_back(ch);
                    cout << '*';
                }
                else {
                    if(oldPassword.size() != 0) {
                        oldPassword.erase(oldPassword.end() - 1);
                        cout << "\b \b";
                    }
                }
                ch = getch();
            }
			do {
                if (accountsList.getAccountsList()[index]->getPassword() != oldPassword) {
                    cout << "\n\n\t\t\t\t\t\t\t\t\t                          INCORRECT PASSWORD!";
                    cout << "\n\n\t\t\t\t\t\t\t\t\t                  Please re-enter your old password: ";
                    oldPassword.clear();
                    ch = getch();
                    while (ch != 13) {
                        if(ch != 8) {
                            oldPassword.push_back(ch);
                            cout << '*';
                        }
                        else {
                            if(oldPassword.size() != 0) {
                                oldPassword.erase(oldPassword.end() - 1);
                                cout << "\b \b";
                            }
                        }
                        ch = getch();
                    }
                }
			} while (accountsList.getAccountsList()[index]->getPassword() != oldPassword);
			string newPassword;
			cout << "\n\n\t\t\t\t\t\t\t\t\t                  Enter your new password: ";
            ch = getch();
            while (ch != 13) {
                if(ch != 8) {
                    newPassword.push_back(ch);
                    cout << '*';
                }
                else {
                    if(newPassword.size() != 0) {
                        newPassword.erase(newPassword.end() - 1);
                        cout << "\b \b";
                    }
                }
                ch = getch();
            }
			do {
                if (accountsList.getAccountsList()[index]->getPassword() == newPassword) {
                    cout << "\n\n\t\t\t\t\t\t\t\t\t                          NEW PASSWORD MUST BE DIFFERENT WITH OLD PASSWORD!";
                    cout << "\n\n\t\t\t\t\t\t\t\t\t                  Please re-enter your new password: ";
                    newPassword.clear();
                    ch = getch();
                    while (ch != 13) {
                        if(ch != 8) {
                            newPassword.push_back(ch);
                            cout << '*';
                        }
                        else {
                            if(newPassword.size() != 0) {
                                newPassword.erase(newPassword.end() - 1);
                                cout << "\b \b";
                            }
                        }
                        ch = getch();
                    }
                }
			} while (accountsList.getAccountsList()[index]->getPassword() == newPassword);

			string newNewPassword;
			cout << "\n\n\t\t\t\t\t\t\t\t\t                  Confirm password: ";
            ch = getch();
            while (ch != 13) {
                if(ch != 8) {
                    newNewPassword.push_back(ch);
                    cout << '*';
                }
                else {
                    if(newNewPassword.size() != 0) {
                        newNewPassword.erase(newNewPassword.end() - 1);
                        cout << "\b \b";
                    }
                }
                ch = getch();
            }
			do {
                if (newPassword != newNewPassword) {
                    cout << "\n\n\t\t\t\t\t\t\t\t\t                          CONFIRMED PASSWORD MUST BE EQUAL TO NEW PASSWORD!";
                    cout << "\n\n\t\t\t\t\t\t\t\t\t                  Please re-enter your new password: ";
                    newNewPassword.clear();
                    ch = getch();
                    while (ch != 13) {
                        if(ch != 8) {
                            newNewPassword.push_back(ch);
                            cout << '*';
                        }
                        else {
                            if(newNewPassword.size() != 0) {
                                newNewPassword.erase(newNewPassword.end() - 1);
                                cout << "\b \b";
                            }
                        }
                        ch = getch();
                    }
                }
			} while (newPassword != newNewPassword);
            accountsList.getAccountsList()[index]->changePassword(newPassword);
            accountsList.exportFile();
            cout << "\n\n\t\t\t\t\t\t\t\t\t      Change password successfully! Press any key to continue. . .";
            getch();
            break;
		}
		if (selection == 21) {
            booksList.sortBookById();
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t        [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 21 (OUTPUT BOOKS's LIST SORTED BY BOOK IDENTIFICATION)\n";
			cout << "\n\t\t\t\t\t                                  (With this option, we will show you all books (order by identification))\n";
			booksList.outputSetw();
			booksList.exportFIle();
			cout<<"\n\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
		}
		if (selection == 221) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t  [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 251 (FIND A BOOK BY IDENTIFICATION)\n";
			cout << "\n\t\t\t\t\t              (With this option, you can easily search for any book's information (Condition: remember book identification))\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t       PLEASE ENTER THE FOLLOWING REQUIREMENTS . . .\n\n";
			string idBook;
			cout << "\t\t\t\t\t\t\t\t                   Book's identification you want to find is: ";
			getline(cin, idBook);
			standardizeIdentifier(idBook);
			if (booksList.findBookId(idBook) != -1) {
				cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t      FOLLOWING IS ALL THE INFORMATION ABOUT BOOK YOU ARE LOOKING FOR" << endl;
				cout << booksList.getBooksList()[booksList.findBookId(idBook)];
			}
			else {
				cout << "\n\n\n\t\t\t\t\t\t\t\t\t  SORRY!!! THE BOOK WHOSE INFORMATION YOU ARE LOOKING FOR DOESN'T EXIST!!!";
				cout << "\n\t\t\t\t\t\t\t\t\t                             PLEASE TRY AGAIN!\n\n";
			}
			cout<<"\n\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
		}
		else if (selection == 222) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t       [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 252 (FIND A BOOK BY TITLE)\n";
			cout << "\n\t\t\t\t\t                 (With this option, you can easily search for any book's information (Condition: remember book's title))\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t       PLEASE ENTER THE FOLLOWING REQUIREMENTS . . .\n\n";
			string bookTitle;
			cout << "\t\t\t\t\t\t\t\t                   Book's title you want to find is: ";
			getline(cin, bookTitle);
			standardizeName(bookTitle);
			if (booksList.findBookTitle(bookTitle) != -1) {
				cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t      FOLLOWING IS ALL THE INFORMATION ABOUT BOOK YOU ARE LOOKING FOR" << endl;
				cout << booksList.getBooksList()[booksList.findBookTitle(bookTitle)];
			}
			else {
				cout << "\n\n\n\t\t\t\t\t\t\t\t\t  SORRY!!! THE BOOK WHOSE INFORMATION YOU ARE LOOKING FOR DOESN'T EXIST!!!";
				cout << "\n\t\t\t\t\t\t\t\t\t                             PLEASE TRY AGAIN!\n\n";
			}
			cout<<"\n\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 223) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t       [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 253 (FIND A BOOK BY GENRE)\n";
			cout << "\n\t\t\t\t\t                 (With this option, you can easily search for any book's information (Condition: remember book's genre))\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t       PLEASE ENTER THE FOLLOWING REQUIREMENTS . . .\n\n";
			string genre;
			cout << "\t\t\t\t\t\t\t\t                   Book's genre you want to find is: ";
			getline(cin, genre);
			standardizeName(genre);
			booksList.findBookGenre(genre);
			cout<<"\n\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 31) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t\t\t[ANNOUNCEMENT] YOU HAVE CHOSE OPTION 31 (FIND YOUR TICKET's INFORMATION)\n";
			cout << "\n\n\t\t\t\t\t\t\t\t\t     (With this option, you can easily find your ticket information)\n";
			BRsList.findTicketInformationByIdOfReader(accountsList.getAccountsList()[index]->getId());
			cout<<"\n\n\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 41) {
			system("cls");
			cout << "\n\n\t\t\t\t\t\t\t                   [ANNOUNCEMENT] YOU HAVE CHOSE OPTION 41 (TOP 5 MOST POPULAR BOOKS)\n";
			cout << "\n\t\t\t\t\t                                               (Following are all information about them)\n\n\n";
			cout<<"\n\t\t\t\t                                         " << char(218); for (int i = 0; i < 69; i++) {cout << char(196);}; cout << char(191);
			cout<<"\n\t\t\t\t                                         " << char(179) << "                       TOP 5 MOST POPULAR BOOKS                      " << char(179);
			cout<<"\n\t\t\t\t                                         " << char(192); for (int i = 0; i < 69; i++) {cout << char(196);}; cout << char(217) << endl;
			top5MostBorrowBook();
			cout<<"\n\t\t\t\t " << "                                                  [ANOUNCEMENT]: Press any key to return to MENU . . .";
			getch();
//			showMainMenu();
		}
		else if (selection == 000) {
            cout<<"\n\t\t\t\t\t\t\t\t\t\t           Do you want to log out? [Yes/No]: ";
            string answer;
            getline(cin, answer);
            standardizeName(answer);
            if (answer == "Yes") {
                showExitMenu();
                break;
            }
		}
	}
}


int main() {
    booksList.readFile();
    BRsList.readFile();
    readersList.readFile();
    accountsList.readFile();

    while (true) {
        system("cls");
        int index = passAccount();
        if (index != -1) {
            cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\t  [ANNOUNCEMENT] Login successfully! Press any key to continue!";
            getch();
            if (accountsList.getAccountsList()[index]->getFormat() == 1) {
                menuAdmin(index);
//                system("pause");
            }
            else {
                menuUser(index);
            }
        }
        else {
            cout << "\n\n\n\n\t\t\t\t\t\t\t      YOUR ACCOUNT ISN'T EXISTING! PLEASE CONTACT ADMINISTRATOR TO CREATE AN ACOUNT NOW!\n\n\n\t\t\t\t\t\t\t\t\t\t [ANNOUNCEMENT] ";
            system("pause");
        }
    }
    return 0;
}

