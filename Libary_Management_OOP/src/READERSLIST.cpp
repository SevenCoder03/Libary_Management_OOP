#include "READERSLIST.h"
#include <iomanip>

READERSLIST::READERSLIST() {}

void READERSLIST::setReadersList(vector<READER*> readersList) {
    this->readersList = readersList;
}

vector<READER*> READERSLIST::getReadersList() {
    return this->readersList;
}

void READERSLIST::input(ACCOUNTSLIST &accountsList) {
	int quantitiesReadersList;
	cout << "\t\t\t\t\t\t\t\t\t                  Number of readers you want to add is: ";
	cin >> quantitiesReadersList;
	cin.ignore();
	for (int i = 0; i < quantitiesReadersList; i++) {
		system("cls");
		cout << "\n\t\t\t\t\t\t\t\t\t\t  " << char(218); for (int i = 0; i < 52; i++) {cout << char(196);}; cout << char(191);
		cout << "\n\t\t\t\t\t\t\t\t\t\t  " << char(179) << "        INPUT INFORMATION OF THE " << setw(4) << left << orderString(i + 1) << " READER        " << char(179);
		cout << "\n\t\t\t\t\t\t\t\t\t\t  " << char(192); for (int i = 0; i < 52; i++) {cout << char(196);}; cout << char(217);
        int select;
        cout << "\n\n\t\t\t\t\t\t\t\t\t      Choose an option:\n\t\t\t\t\t\t\t\t\t\t\t\t   1. INPUT A STUDENT\n\t\t\t\t\t\t\t\t\t\t\t\t   2. INPUT A TEACHER\n\n\t\t\t\t\t\t\t\t\t      Your selection is: "; cin >> select;
        do {
			if (select != 1 && select != 2) {
				cout << "\n\t\t\t\t\t                                           YOU HAVE ENTERED AN INVALID SELECTION! PLEASE RE-ENTER: ";
                cin >> select;
			}
		} while (select != 1 && select != 2);
        READER *Temporary;
        if(select == 1) {
            Temporary = new STUDENT;
        }
        else if(select == 2) {
            Temporary = new TEACHER;
        }
		system("cls");
		cout << "\n\t\t\t\t\t\t\t\t\t\t  " << char(218); for (int i = 0; i < 52; i++) {cout << char(196);}; cout << char(191);
		cout << "\n\t\t\t\t\t\t\t\t\t\t  " << char(179) << "        INPUT INFORMATION OF THE " << setw(4) << left << orderString(i + 1) << " READER        " << char(179);
		cout << "\n\t\t\t\t\t\t\t\t\t\t  " << char(192); for (int i = 0; i < 52; i++) {cout << char(196);}; cout << char(217);
		Temporary->input();
		do {
			if (checkDuplicatedIdReader(Temporary->getIdReader()) == true) {
				system("cls");
				cout << "\n\t\t\t\t\t\t\t\t\t\t  " << char(218); for (int i = 0; i < 52; i++) {cout << char(196);}; cout << char(191);
				cout << "\n\t\t\t\t\t\t\t\t\t\t  " << char(179) << "        INPUT INFORMATION OF THE " << setw(4) << left << orderString(i + 1) << " READER        " << char(179);
				cout << "\n\t\t\t\t\t\t\t\t\t\t  " << char(192); for (int i = 0; i < 52; i++) {cout << char(196);}; cout << char(217);
				cout << "\n\n\t\t\t\t                 AFTER REVIEWING THE AVAILABLE DATA, WE NOTICED THAT THIS READER's IDENTIFICATION HAS BEEN MATCHED WITH A PREVIOUS READER!\n";
				cout << "\n\t\t\t\t\t\t\t\t\t         Please re-enter this reader's identification: ";
				string Temp;
				getline(cin, Temp);
				standardizeIdentifier(Temp);
				Temporary->setIdReader(Temp);
			}
			if (Temporary->getIdReader().length() != 10) {
				cout << "\n\t\t\t\t\t\t\t\t\t           THIS IDENTIFICATION'S LENGTH IS INVALID! PLEASE RE-ENTER: ";
				string Temp;
				getline(cin, Temp);
				standardizeIdentifier(Temp);
				Temporary->setIdReader(Temp);
			}
		} while (checkDuplicatedIdReader(Temporary->getIdReader()) == true || Temporary->getIdReader().length() != 10);
		do {
			if (checkDuplicatedPersonalId(Temporary->getPersonalId()) == true) {
				system("cls");
				cout << "\n\t\t\t\t\t\t\t\t\t\t  " << char(218); for (int i = 0; i < 52; i++) {cout << char(196);}; cout << char(191);
				cout << "\n\t\t\t\t\t\t\t\t\t\t  " << char(179) << "        INPUT INFORMATION OF THE " << setw(4) << left << orderString(i + 1) << " READER        " << char(179);
				cout << "\n\t\t\t\t\t\t\t\t\t\t  " << char(192); for (int i = 0; i < 52; i++) {cout << char(196);}; cout << char(217);
				cout << "\n\n\t\t\t\t              AFTER REVIEWING THE AVAILABLE DATA, WE NOTICED THAT THIS READER's PERSONAL IDENTIFICATION HAS BEEN MATCHED WITH A PREVIOUS READER!\n";
				cout << "\n\t\t\t\t\t\t\t\t\t    Please re-enter this reader's personal identification: ";
				string Temp;
				getline(cin, Temp);
				standardizeIdentifier(Temp);
				Temporary->setPersonalId(Temp);
			}
			if (Temporary->getPersonalId().length() != 12) {
				cout << "\n\t\t\t\t\t\t\t\t\t           THIS IDENTIFICATION'S LENGTH IS INVALID! PLEASE RE-ENTER: ";
				string Temp;
				getline(cin, Temp);
				standardizeIdentifier(Temp);
				Temporary->setPersonalId(Temp);
			}
		} while (checkDuplicatedPersonalId(Temporary->getPersonalId()) == true || Temporary->getPersonalId().length() != 12);
        accountsList.inputAAcount(Temporary->getIdReader());
		readersList.push_back(Temporary);
        cout << "\n\n\t\t\t\t\t\t\t\t\t      Input information succesfully!! Press any key to continue. . .";
		getch();
	}
}

void READERSLIST::output() {
	for (int i = 0; i < readersList.size(); i++) {
		cout << "\n\n\t\t Information Of The Reader " << i + 1 << "\n";
		readersList[i] -> output();
	}
}

void READERSLIST::outputStudent() {
	cout<<"\n   " << char(218); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(194);  for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(194);  for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(191);
	cout<<"\n   " << char(179) << " Reader's ID " << char(179) << "         Full Name         " << char(179) << "  Personal ID " << char(179) << "  Gender " << char(179) << "  Day Of Birth  " << char(179) << "         Faculty/Class        " << char(179) << "   Phone Number  " << char(179) << "             Email           " << char(179) << " Card Issue Date " << char(179) << " Card Expiration Date " << char(179);
	cout<<"\n   " << char(195); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(197);  for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(197);  for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(180);
	cout<< endl;
	int total = 0;
	for (int i = 0; i < readersList.size(); i++) {
		if (readersList[i]->getIdReader().substr(0,2) != "00") {
            total++;
			cout << "   " << char(179) << " ";
			readersList[i]->outputSetw();
			if (i != readersList.size() - 1) {
				cout<<"   " << char(195); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(180) << "\n";
			}
			else {
				cout<<"   " << char(192); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(193);  for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(193);  for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(217);
			}
		}
	}
//	cout<<"      " << char(179) << "  TOTAL NUMBER OF STUDENTS: " << total << "                                                                                                                                                                             " << char(179);
//	cout<<"      " << char(218); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(194);  for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(194);  for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(191);
}

void READERSLIST::outputTeacher() {
	cout<<"\n   " << char(218); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(194);  for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(194);  for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(191);
	cout<<"\n   " << char(179) << " Reader's ID " << char(179) << "         Full Name         " << char(179) << "  Personal ID " << char(179) << "  Gender " << char(179) << "  Day Of Birth  " << char(179) << "         Faculty/Class        " << char(179) << "   Phone Number  " << char(179) << "             Email           " << char(179) << " Card Issue Date " << char(179) << " Card Expiration Date " << char(179);
	cout<<"\n   " << char(195); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(197);  for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(197);  for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(180);
	cout<< endl;
	int total = 0;
	for (int i = 0; i < readersList.size(); i++) {
		if (readersList[i]->getIdReader().substr(0,2) == "00") {
            total++;
			cout << "   " << char(179) << " ";
			readersList[i]->outputSetw();
			if (i != readersList.size() - 1) {
				cout<<"   " << char(195); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(180) << "\n";
			}
			else {
				cout<<"   " << char(192); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(193);  for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(193);  for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(217);
			}
		}
	}
//	cout<<"   " << char(179) << "  TOTAL NUMBER OF TEACHERS: " << total << "                                                                                                                                                                             " << char(179);
//	cout<<"\n   " << char(218); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(194);  for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(194);  for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(191);
}

void READERSLIST::outputAllReaders() {
	cout<<"\n   " << char(218); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(194);  for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(194);  for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(191);
	cout<<"\n   " << char(179) << " Reader's ID " << char(179) << "         Full Name         " << char(179) << "  Personal ID " << char(179) << "  Gender " << char(179) << "  Day Of Birth  " << char(179) << "         Faculty/Class        " << char(179) << "   Phone Number  " << char(179) << "             Email           " << char(179) << " Card Issue Date " << char(179) << " Card Expiration Date " << char(179);
	cout<<"\n   " << char(195); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(197);  for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(197);  for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(180);
	cout<< endl;
	int total = 0;
	for (int i = 0; i < readersList.size(); i++) {
        total++;
		cout << "   " << char(179) << " ";
		readersList[i]->outputSetw();
		if (i != readersList.size() - 1) {
			cout<<"   " << char(195); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(197); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(180) << "\n";
		}
		else {
			cout<<"   " << char(192); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(193);  for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(193);  for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(193); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(217);
		}
	}
	cout<<"         TOTAL NUMBER OF READERS: " << total << "                                                ";
//	cout<<"\n   " << char(218); for (int i = 0; i < 13; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 27; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 14; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 9; i++) {cout << char(196);}; cout << char(194);  for (int i = 0; i < 16; i++) {cout << char(196);}; cout << char(194);  for (int i = 0; i < 30; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 29; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 17; i++) {cout << char(196);}; cout << char(194); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(191);
}
bool READERSLIST::checkDuplicatedIdReader (string idReader) {
	for (int i = 0; i < readersList.size(); i++) {
		if (readersList[i]->getIdReader() == idReader) {
			return true;
		}
	}
	return false;
}

bool READERSLIST::checkDuplicatedPersonalId(string newPersonalId) {
    for (int i = 0; i < readersList.size(); i++) {
		if (readersList[i]->getPersonalId() == newPersonalId) {
			return true;
		}
	}
	return false;
}

int READERSLIST::findReaderById(string idReader) {
    for(int i = 0; i < readersList.size(); i++) {
        if(readersList[i]->getIdReader() == idReader) {
            return i;
        }
    }
    return -1;
}

void READERSLIST::findReaderByName(string name) {
	bool Check = false;
    for(int i = 0; i < readersList.size(); i++) {
    	string temp = readersList[i]->getFirstName() + " " + readersList[i]->getLastName();
        if(temp == name) {
			cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t     FOLLOWING IS ALL THE INFORMATION ABOUT READER YOU ARE LOOKING FOR" << endl;
            readersList[i]->output();
            Check = true;
        }
    }
	if (Check == false) {
  		cout << "\n\n\n\t\t\t\t\t\t\t\t\t SORRY!!! THE READER WHOSE INFORMATION YOU ARE LOOKING FOR DOESN'T EXIST!!!";
  		cout << "\n\t\t\t\t\t\t\t\t\t                             PLEASE TRY AGAIN!\n\n";
	}
}

void READERSLIST::changeReaderInformation(string idReader) {
	bool Check = false;
	for (int i = 0; i < readersList.size(); i++) {
		if (readersList[i]->getIdReader() == idReader) {
			Check = true;
			while (true) {
				system("cls");
				cout << "\n\n\t\t\t\t\t\t\t\t\t       FOLLOWING IS ALL THE INFORMATION ABOUT READER YOU WANT TO EDIT" << endl;
				readersList[i]->output();
				if(idReader[0] != '0') {
					cout << "\n\n";
					cout << "\n\t\t\t\t\t              " << char(218); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(191) << "  " << char(218);  for (int i = 0; i < 25; i++) {cout << char(196);}; cout << char(191) << "  "  << char(218); for (int i = 0; i < 26; i++) {cout << char(196);}; cout << char(191) << "  "  << char(218); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(191);
					cout << "\n\t\t\t\t\t              " << char(179) << "1. Reader identification" << char(179) << "  " << char(179) << "        2. Gender        " << char(179) << "  " << char(179) << "3. Personal identification" << char(179) << "  " << char(179) << "      4. First name     " << char(179) << "              ";
					cout << "\n\t\t\t\t\t              " << char(192); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(217) << "  " << char(192);  for (int i = 0; i < 25; i++) {cout << char(196);}; cout << char(217) << "  "  << char(192); for (int i = 0; i < 26; i++) {cout << char(196);}; cout << char(217) << "  "  << char(192); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(217);
					cout << "\n";
					cout << "\n\t\t\t\t\t " << char(218); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(191) << "  " << char(218); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(191) << "  " << char(218); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(191) << "  " << char(218); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(191) << "  " << char(218); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(191) << "  ";
					cout << "\n\t\t\t\t\t " << char(179) << "      5. Last name      " << char(179) << "  " << char(179) << "        6. Class        " << char(179) << "  " << char(179) << "    7. Date of birth    " << char(179) << "  " << char(179) << "    8. Phone number     " << char(179) << "  " << char(179) << "        9. Email        " << char(179) << "";
					cout << "\n\t\t\t\t\t " << char(192); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(217) << "  " << char(192); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(217) << "  " << char(192); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(217) << "  " << char(192); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(217) << "  " << char(192); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(217) << "  ";
					cout << "\n";
					cout << "\n\t\t\t\t\t                                                  [ANOUNCEMENT]: Enter 0 to return to menu                                                   \n";
                    int choose;
                    cout << "\n\n\t\t\t\t\t Enter your number of the factor you want to edit: ";
                    cin >> choose;
                    if (choose == 1) {
                        cin.ignore();
                        cout << "\n\t\t\t\t\t Student's old identification: " << readersList[i]->getIdReader();
                        string newId;
                        cout << "\n\n\t\t\t\t\t New identification of this student is: ";
                        getline(cin, newId);
                        standardizeIdentifier(newId);
                        do {
                            if (checkDuplicatedIdReader(newId) == true) {
                                cout << "\n\t\t\t\t\t      STUDENT IDENTIFICATION DUPLICATED ERROR!\n\n";
                                cout << "\t\t\t\t\t           Please re-enter this identification: ";
                                getline(cin, newId);
                                standardizeIdentifier(newId);
                            }
                            if (newId.length() != 10) {
                                cout << "\n\t\t\t\t\t      STUDENT IDENTIFICATION LENGTH ERROR!\n\n";
                                cout << "\t\t\t\t\t           Please re-enter this identification: ";
                                getline(cin, newId);
                                standardizeIdentifier(newId);
                            }
                            if (newId[0] == '0') {
                                cout << "\n\t\t\t\t\t      STUDENT IDENTIFICATION's FIRST LETTER MUST BE OTHER THAN 0!\n\n";
                                cout << "\t\t\t\t\t           Please re-enter this identification: ";
                                getline(cin, newId);
                                standardizeIdentifier(newId);
                            }
                        } while (checkDuplicatedIdReader(newId) == true || newId.length() != 10 || newId[0] == '0');
                        cout << "\n\n\t\t\t\t\t\t\t\t\t   Change identification successfully!!! Press any key to continue. . .";
                        getch();
                        readersList[i]->setIdReader(newId);
                    }
                    else if (choose == 2) {
                        int newGender;
                        if (readersList[i]->getGender() == 1) {
                        	cout << "\n\t\t\t\t\t Student's old gender: Male";
                        	cout << "\n\n\t\t\t\t\t Student's new gender: Female";
						}
						else {
							cout << "\n\t\t\t\t\t Student's old gender: Female";
							cout << "\n\n\t\t\t\t\t Student's old gender: Male";
						}
						newGender = 1 - readersList[i] -> getGender();
						cout << "\n\n\t\t\t\t\t\t\t\t\t       Change gender successfully!!! Press any key to continue. . .";
                        getch();
                        readersList[i]->setGender(newGender);
                    }
                    else if (choose == 3) {
                        cin.ignore();
                        cout << "\n\t\t\t\t\t Student's old personal identification: " << readersList[i]->getPersonalId();
                        string newPersonalId;
                        cout << "\n\n\t\t\t\t\t New personal identification of this student is: ";
                        getline(cin, newPersonalId);
                        standardizeIdentifier(newPersonalId);
                        do {
                            if (checkDuplicatedPersonalId(newPersonalId) == true) {
                                cout << "\n\t\t\t\t\t      STUDENT PERSONAL IDENTIFICATION DUPLICATED ERROR!\n\n";
                                cout << "\t\t\t\t\t           Please re-enter this personal identification: ";
                                getline(cin, newPersonalId);
                                standardizeIdentifier(newPersonalId);
                            }
                            if (newPersonalId.length() != 12) {
								cout << "\n\t\t\t\t\t      STUDENT PERSONAL IDENTIFICATION LENGTH ERROR!\n\n";
                                cout << "\t\t\t\t\t           Please re-enter this personal identification: ";
                                getline(cin, newPersonalId);
                                standardizeIdentifier(newPersonalId);
                            }
                        } while (checkDuplicatedIdReader(newPersonalId) == true || newPersonalId.length() != 12);
                        cout << "\n\n\t\t\t\t\t\t\t\t     Change personal identification successfully!!! Press any key to continue. . .";
                        getch();
                        readersList[i]->setPersonalId(newPersonalId);
                    }
                    else if (choose == 4) {
                        cin.ignore();
                        cout << "\n\t\t\t\t\t Student's old first name: " << readersList[i]->getFirstName();
                        string newFirstName;
                        cout << "\n\n\t\t\t\t\t Student's new first name is: ";
                        getline(cin, newFirstName);
                        standardizeName(newFirstName);
                        cout << "\n\n\t\t\t\t\t\t\t\t             Change first name successfully!!! Press any key to continue. . .";
                        getch();
                        readersList[i]->setFirstName(newFirstName);
                    }
                    else if (choose == 5) {
                        cin.ignore();
                        cout << "\n\t\t\t\t\t Student's old last name: " << readersList[i]->getLastName();
                        string newLastName;
                        cout << "\n\n\t\t\t\t\t Student's new last name is: ";
                        getline(cin, newLastName);
                        standardizeName(newLastName);
						cout << "\n\n\t\t\t\t\t\t\t\t              Change last name successfully!!! Press any key to continue. . .";
                        getch();
                        readersList[i]->setLastName(newLastName);
                    }
                    else if (choose == 6) {
                        readersList[i]->edit();
                    }
                    else if (choose == 7) {
                    	cout << "\n\t\t\t\t\t Student's old date of birth: " << readersList[i]->getDayOfBirth();
                        DATE newDayOfBirth;
                        cout << "\n\n\t\t\t\t\t Enter new student's date if birth (DD/MM/YYYY)";
                        cin >> newDayOfBirth;
						cout << "\n\n\t\t\t\t\t\t\t\t            Change date of birth successfully!!! Press any key to continue. . .";
                        getch();
                        readersList[i]->setDayOfBirth(newDayOfBirth);
                    }
                    else if (choose == 8) {
                        cin.ignore();
                        string newPhoneNumber;
                    	cout << "\n\t\t\t\t\t Student's old phone number: " << readersList[i]->getPhoneNumber();
						cout << "\n\n\t\t\t\t\t New student's phone number is: ";
						getline(cin, newPhoneNumber);
						do {
                            if (newPhoneNumber.length() != 10) {
								cout << "\n\t\t\t\t\t      STUDENT PHONE NUMBER LENGTH ERROR (PHONE NUMBER's LENGTH MUST BE EQUAL TO 10)!\n\n";
                                cout << "\t\t\t\t\t           Please re-enter this phone number: ";
                                getline(cin, newPhoneNumber);
                            }
                            if (checkPhoneNumberFormat(newPhoneNumber) == false) {
                                cout << "\n\t\t\t\t\t      STUDENT PHONE NUMBER FORMAT ERROR (ALL PHONE NUMER's LETTERS MUST BE INTEGER NUMBER)!\n\n";
                                cout << "\t\t\t\t\t           Please re-enter this phone number: ";
                                getline(cin, newPhoneNumber);
                            }
                            if (newPhoneNumber[0] != '0') {
								cout << "\n\t\t\t\t\t      STUDENT PHONE NUMBER FORMAT ERROR (PHONE NUMBER's FIRST LETTER MUST BE 0)!\n\n";
                                cout << "\t\t\t\t\t           Please re-enter this phone number: ";
                                getline(cin, newPhoneNumber);
                            }
                        } while (newPhoneNumber[0] != '0' || checkPhoneNumberFormat(newPhoneNumber) == false || newPhoneNumber.length() != 10);
						cout << "\n\n\t\t\t\t\t\t\t\t            Change phone number successfully!!! Press any key to continue. . .";
                        getch();
                        readersList[i]->setPhoneNumber(newPhoneNumber);
                    }
                    else if (choose == 9) {
                        cin.ignore();
                        string newEmail;
                    	cout << "\n\t\t\t\t\t Student's old email: " << readersList[i]->getEmail();
						cout << "\n\n\t\t\t\t\t New student's email is: ";
                        getline(cin, newEmail);
                        deleteSpaceFirst(newEmail);
                        deleteSpaceLast(newEmail);
						cout << "\n\n\t\t\t\t\t\t\t\t            Change phone number successfully!!! Press any key to continue. . .";
                        getch();
                        readersList[i]->setEmail(newEmail);
                    }
                    else {
                        break;
                    }
				}
				else {
					cout << "\n\n";
					cout << "\n\t\t\t\t\t              " << char(218); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(191) << "  " << char(218);  for (int i = 0; i < 25; i++) {cout << char(196);}; cout << char(191) << "  "  << char(218); for (int i = 0; i < 26; i++) {cout << char(196);}; cout << char(191) << "  "  << char(218); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(191);
					cout << "\n\t\t\t\t\t              " << char(179) << "1. Reader identification" << char(179) << "  " << char(179) << "        2. Gender        " << char(179) << "  " << char(179) << "3. Personal identification" << char(179) << "  " << char(179) << "      4. First name     " << char(179) << "              ";
					cout << "\n\t\t\t\t\t              " << char(192); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(217) << "  " << char(192);  for (int i = 0; i < 25; i++) {cout << char(196);}; cout << char(217) << "  "  << char(192); for (int i = 0; i < 26; i++) {cout << char(196);}; cout << char(217) << "  "  << char(192); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(217);
					cout << "\n";
					cout << "\n\t\t\t\t\t " << char(218); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(191) << "  " << char(218); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(191) << "  " << char(218); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(191) << "  " << char(218); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(191) << "  " << char(218); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(191) << "  ";
					cout << "\n\t\t\t\t\t " << char(179) << "      5. Last name      " << char(179) << "  " << char(179) << "       6. Faculty       " << char(179) << "  " << char(179) << "    7. Date of birth    " << char(179) << "  " << char(179) << "    8. Phone number     " << char(179) << "  " << char(179) << "        9. Email        " << char(179) << "";
					cout << "\n\t\t\t\t\t " << char(192); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(217) << "  " << char(192); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(217) << "  " << char(192); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(217) << "  " << char(192); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(217) << "  " << char(192); for (int i = 0; i < 24; i++) {cout << char(196);}; cout << char(217) << "  ";
					cout << "\n";
					cout << "\n\t\t\t\t\t                                                  [ANOUNCEMENT]: Enter 0 to return to menu                                                   \n";
                    int choose;
                    cout << "\n\n\t\t\t\t\t Enter your number of the factor you want to edit: ";
                    cin >> choose;
                    if (choose == 1) {
                        cin.ignore();
                        string newId;
                        cout << "\n\t\t\t\t\t Teacher's old identification: " << readersList[i]->getIdReader();
                        cout << "\n\n\t\t\t\t\t New identification of this teacher is: ";
                        getline(cin, newId);
                        standardizeIdentifier(newId);
                        do {
                            if (checkDuplicatedIdReader(newId) == true) {
                                cout << "\n\t\t\t\t\t      TEACHER IDENTIFICATION DUPLICATED ERROR!\n\n";
                                cout << "\t\t\t\t\t           Please re-enter this identification: ";
                                getline(cin, newId);
                                standardizeIdentifier(newId);
                            }
                            if (newId.length() != 10) {
                                cout << "\n\t\t\t\t\t      TEACHER IDENTIFICATION LENGTH ERROR!\n\n";
                                cout << "\t\t\t\t\t           Please re-enter this identification: ";
                                getline(cin, newId);
                                standardizeIdentifier(newId);
                            }
                            if (newId[0] != '0') {
                                cout << "\n\t\t\t\t\t       STUDENT IDENTIFICATION's FIRST LETTER MUST BE EQUAL TO 0!\n\n";
                                cout << "\t\t\t\t\t           Please re-enter this identification: ";
                                getline(cin, newId);
                                standardizeIdentifier(newId);
                            }
                        } while (checkDuplicatedIdReader(newId) == true || newId.length() != 10);
                        cout << "\n\n\t\t\t\t\t\t\t\t\t   Change identification successfully!!! Press any key to continue. . .";
                        getch();
                        readersList[i]->setIdReader(newId);
                    }
                    else if (choose == 2) {
						int newGender;
                        if (readersList[i]->getGender() == 1) {
                        	cout << "\n\t\t\t\t\t Teacher's old gender: Male";
                        	cout << "\n\n\t\t\t\t\t Teacher's new gender: Female";
						}
						else {
							cout << "\n\t\t\t\t\t Teacher's old gender: Female";
							cout << "\n\n\t\t\t\t\t Teacher's old gender: Male";
						}
						newGender = 1 - readersList[i] -> getGender();
						cout << "\n\n\t\t\t\t\t\t\t\t\t       Change gender successfully!!! Press any key to continue. . .";
                        getch();
                        readersList[i]->setGender(newGender);
                    }
                    else if (choose == 3) {
                        cin.ignore();
                        string newPersonalId;
                        cout << "\n\t\t\t\t\t Teacher's old personal identification: " << readersList[i]->getPersonalId();
                        cout << "\n\n\t\t\t\t\t New personal identification of this teacher is: ";
                        getline(cin, newPersonalId);
                        standardizeIdentifier(newPersonalId);
                        do {
                            if (checkDuplicatedPersonalId(newPersonalId) == true) {
                                cout << "\n\t\t\t\t\t      TEACHER PERSONAL IDENTIFICATION DUPLICATED ERROR!\n\n";
                                cout << "\t\t\t\t\t           Please re-enter this personal identification: ";
                                getline(cin, newPersonalId);
                                standardizeIdentifier(newPersonalId);
                            }
                            if (newPersonalId.length() != 12) {
								cout << "\n\t\t\t\t\t      TEACHER PERSONAL IDENTIFICATION LENGTH ERROR!\n\n";
                                cout << "\t\t\t\t\t           Please re-enter this personal identification: ";
                                getline(cin, newPersonalId);
                                standardizeIdentifier(newPersonalId);
                            }
                        } while (checkDuplicatedIdReader(newPersonalId) == true || newPersonalId.length() != 12);
                        cout << "\n\n\t\t\t\t\t\t\t\t\t   Change identification successfully!!! Press any key to continue. . .";
                        getch();
                        readersList[i]->setPersonalId(newPersonalId);
                    }
                    else if (choose == 4) {
                        cin.ignore();
                        cout << "\n\t\t\t\t\t Teacher's old first name: " << readersList[i]->getFirstName();
                        string newFirstName;
                        cout << "\n\n\t\t\t\t\t Teacher's new first name is: ";
                        getline(cin, newFirstName);
                        standardizeName(newFirstName);
                        cout << "\n\n\t\t\t\t\t\t\t\t             Change first name successfully!!! Press any key to continue. . .";
                        getch();
                        readersList[i]->setFirstName(newFirstName);
                    }
                    else if (choose == 5) {
                        cin.ignore();
                        cout << "\n\t\t\t\t\t Teacher's old last name: " << readersList[i]->getFirstName();
                        string newLastName;
                        cout << "\n\n\t\t\t\t\t Teacher's new last name is: ";
                        getline(cin, newLastName);
                        standardizeName(newLastName);
						cout << "\n\n\t\t\t\t\t\t\t\t              Change last name successfully!!! Press any key to continue. . .";
                        getch();
                        readersList[i]->setLastName(newLastName);
                    }
                    else if (choose == 6) {
                        readersList[i]->edit();
                    }
                    else if (choose == 7) {
                    	cout << "\n\t\t\t\t\t Teacher's old date of birth: " << readersList[i]->getDayOfBirth();
                        DATE newDayOfBirth;
                        cout << "\n\n\t\t\t\t\t Enter new teacher's date if birth (DD/MM/YYYY)";
                        cin >> newDayOfBirth;
						cout << "\n\n\t\t\t\t\t\t\t\t            Change date of birth successfully!!! Press any key to continue. . .";
                        getch();
                        readersList[i]->setDayOfBirth(newDayOfBirth);
                    }
                    else if (choose == 8) {
                        cin.ignore();
                        string newPhoneNumber;
                    	cout << "\n\t\t\t\t\t Teacher's old phone number: " << readersList[i]->getPhoneNumber();
						cout << "\n\n\t\t\t\t\t New teacher's phone number is: ";
						getline(cin, newPhoneNumber);
						do {
                            if (newPhoneNumber.length() != 10) {
								cout << "\n\t\t\t\t\t      TEACHER PHONE NUMBER LENGTH ERROR (PHONE NUMBER's LENGTH MUST BE EQUAL TO 10)!\n\n";
                                cout << "\t\t\t\t\t           Please re-enter this phone number: ";
                                getline(cin, newPhoneNumber);
                            }
                            if (checkPhoneNumberFormat(newPhoneNumber) == false) {
                                cout << "\n\t\t\t\t\t      TEACHER PHONE NUMBER FORMAT ERROR (ALL PHONE NUMER's LETTERS MUST BE INTEGER NUMBER)!\n\n";
                                cout << "\t\t\t\t\t           Please re-enter this phone number: ";
                                getline(cin, newPhoneNumber);
                            }
                            if (newPhoneNumber[0] != '0') {
								cout << "\n\t\t\t\t\t      TEACHER PHONE NUMBER FORMAT ERROR (PHONE NUMBER's FIRST LETTER MUST BE 0)!\n\n";
                                cout << "\t\t\t\t\t           Please re-enter this phone number: ";
                                getline(cin, newPhoneNumber);
                            }
                        } while (newPhoneNumber[0] != '0' || checkPhoneNumberFormat(newPhoneNumber) == false || newPhoneNumber.length() != 10);
						cout << "\n\n\t\t\t\t\t\t\t\t            Change phone number successfully!!! Press any key to continue. . .";
                        getch();
                        readersList[i]->setPhoneNumber(newPhoneNumber);
                    }
                    else if (choose == 9) {
                        cin.ignore();
                        string newEmail;
                    	cout << "\n\t\t\t\t\t Teacher's old email: " << readersList[i]->getEmail();
						cout << "\n\n\t\t\t\t\t New teacher's email is: ";
                        getline(cin, newEmail);
                        deleteSpaceFirst(newEmail);
                        deleteSpaceLast(newEmail);
						cout << "\n\n\t\t\t\t\t\t\t\t            Change email successfully!!! Press any key to continue. . .";
                        getch();
                        readersList[i]->setEmail(newEmail);
                    }
                    else {
                        break;
                    }
				}
			}
		}
	}
	if (Check == false) {
		cout << "\n\t\t\t\t\t\t\t\t                 Not found this reader!!! Press any key to continue. . .";
	}
}

void READERSLIST::deleteReaderById(string idReader) {
    for(int i = 0; i < readersList.size(); i++) {
        if(readersList[i]->getIdReader() == idReader) {
            readersList.erase(readersList.begin() + i);
			cout << "\n\t\t\t\t\t\t\t\t               Delete reader successfully!!! Press any key to continue. . .";
            return;
        }
    }
    cout << "\n\t\t\t\t\t\t\t\t                 Not found this reader!!! Press any key to continue. . .";
}

//	Sap Xep Danh Sach Theo ID
void READERSLIST::sortReadersListById() {
    for(int i = 0; i < readersList.size() - 1; i++) {
        for(int j = i + 1; j < readersList.size(); j++) {
            string Temp1 = readersList[i]->getIdReader();
            string Temp2 = readersList[j]->getIdReader();
            if(Temp1[2] == 'H') {
                Temp1[2] = '7';
            }
            if(Temp2[2] == 'H') {
                Temp2[2] = '7';
            }
            stringstream x(Temp1);
            long long a; x >> a;
            stringstream y(Temp2);
            long long b; y >> b;
            if(a > b) {
                swap(readersList[i], readersList[j]);
            }
        }
    }
}

//	Sap Xep Danh Sach Theo Ten
void READERSLIST::sortReadersListByLastName() {
    for(int i = 0; i < readersList.size() - 1; i++) {
        for(int j = i + 1; j < readersList.size(); j++) {
            if(strcmp((char*)readersList[i]->getLastName().c_str(), (char*)readersList[j]->getLastName().c_str()) > 0) {
                swap(readersList[i], readersList[j]);
            }
        }
    }
}

//	Kiem Tra The Da Het Han Hay Chua?
bool READERSLIST::checkCardExpiry(string idReader) {
    for(int i = 0; i < readersList.size(); i++) {
        if(readersList[i]->getIdReader() == idReader) {
            int Term = readersList[i]->getCardExpiry().thisIsMagic() - today().thisIsMagic();
            if(Term > 0) {
                return true;
            }
            else {
                return false;
            }
        }
    }
}


//	Gia Han The
void READERSLIST::extendCard(string idReader) {
	int i = findReaderById(idReader);
	if (i != -1) {
		DATE Temp = readersList[i]->getCardExpiry();
        Temp.setYear(Temp.getYear() + 1);
        readersList[i]->setCardExpiry(Temp);
		cout << "\n\t\t\t\t\t\t\t\t                   Extend successfully!!! Press any key to continue. . .";
		getch();
	}
	else {
		cout << "\n\t\t\t\t\t\t\t\t                 Not found this reader!!! Press any key to continue. . .";
		getch();
	}
}

void READERSLIST::readFile () {
    ifstream inFile;
    inFile.open("Data Reader.txt", ios::in);
    while (!inFile.eof()) {
        int select;
        inFile >> select;
        READER *Temporary;
        if(select == 1) {
            Temporary = new STUDENT;
        }
        else if(select == 2) {
            Temporary = new TEACHER;
        }
        Temporary->readFileAReader(inFile);
        readersList.push_back(Temporary);
        inFile.ignore();
        if (inFile.eof()) {
            break;
        }
    }
    inFile.close();
}

void READERSLIST::exportFile() {
    ofstream outFile;
    outFile.open("Data Reader.txt", ios::out);
    for (int i = 0; i < readersList.size(); i++) {
        if (i != readersList.size() - 1) {
            readersList[i]->exportFileAReader(outFile);
            outFile << endl;
        }
        else {
            readersList[i]->exportFileAReader(outFile);
        }
    }
    outFile.close();
}

READERSLIST::~READERSLIST(){}
