#include "STUDENT.h"
#include "FUNCTIONPUBLIC.h"
#include <iomanip>

STUDENT::STUDENT() {}

STUDENT::STUDENT(string idReader, int gender, string personalId, string firstName, string lastName, DATE dayOfBirth, string phoneNumber, string email, DATE cardIssuing, DATE cardExpiry, string classOfStudent) : READER(idReader, gender, personalId, firstName, lastName, dayOfBirth, phoneNumber, email, cardIssuing, cardExpiry) {
    this->classOfStudent = classOfStudent;
}

void STUDENT::setClassOfStudent(string) {
    this->classOfStudent = classOfStudent;
}

string STUDENT::getClassOfStudent() {
    return classOfStudent;
}

void STUDENT::readFileAReader(ifstream &inFile) {
    char x;
    inFile >> x;
    getline(inFile, this->idReader, ',');
    inFile >> this->gender;
    inFile >> x;
    getline(inFile, this->personalId, ',');
    getline(inFile, this->firstName, ',');
    getline(inFile, this->lastName, ',');
    this->dayOfBirth.readFileADate(inFile);
    getline(inFile, this->phoneNumber, ',');
    getline(inFile, this->email, ',');
    this->cardIssuing.readFileADate(inFile);
    this->cardExpiry.readFileADate(inFile);
    getline(inFile, this->classOfStudent, ',');
}

void STUDENT::exportFileAReader(ofstream &outFile) {
    outFile << 1 << ",";
    outFile << this->idReader << ",";
    outFile << this->gender << ",";
    outFile << this->personalId << ",";
    outFile << this->firstName << ",";
    outFile << this->lastName << ",";
    this->dayOfBirth.exportFileADate(outFile);
    outFile << ",";
    outFile << this->phoneNumber << ",";
    outFile << this->email << ",";
    this->cardIssuing.exportFileADate(outFile);
    outFile << ",";
    this->cardExpiry.exportFileADate(outFile);
    outFile << ",";
    outFile << this->classOfStudent << ",";
}

void STUDENT::input() {
    cin.ignore();
	cout << "\n\n\t\t\t\t\t\t\t\t\t      Enter his/her student identification           : ";
	getline(cin, idReader);
	standardizeIdentifier(idReader);
	do {
		if (idReader.length() != 10) {
            cout << "\n\t\t\t\t\t\t\t\t\t           THIS IDENTIFICATION'S LENGTH IS INVALID! PLEASE RE-ENTER: ";
			getline(cin, idReader);
			standardizeIdentifier(idReader);
		}
	}while (idReader.length() != 10);
	cout << "\n\t\t\t\t\t\t\t\t\t      Enter this student's first name                : ";
	getline(cin, firstName);
	standardizeName(firstName);

	cout << "\n\t\t\t\t\t\t\t\t\t      Enter this student's last name                 : ";
	getline(cin, lastName);
	standardizeName(lastName);

	cout << "\n\t\t\t\t\t\t\t\t\t      Enter this student's personal identification   : ";
	getline(cin, personalId);
	standardizeIdentifier(personalId);
	do {
		if (personalId.length() != 12) {
			cout << "\n\t\t\t\t\t\t\t\t\t           THIS IDENTIFICATION'S LENGTH IS INVALID! PLEASE RE-ENTER: ";
			getline(cin, personalId);
            standardizeIdentifier(personalId);
		}
	}while (personalId.length() != 12);

	cout << "\n\t\t\t\t\t\t\t\t\t      Enter this student's date of birth (DD/MM/YYYY)";
	cin >> dayOfBirth;
	do {
        if (dayOfBirth.checkDate() == false) {
            cout << "\n\tDATE FORMAT ERROR!!!\n";
            cout << "\n\t\tRe-enter this student's date if birth (DD/MM/YYYY): ";
            cin >> dayOfBirth;
        }
	}while (dayOfBirth.checkDate() == false);

	cout << "\n\t\t\t\t\t\t\t\t\t      Enter this student's gender [0 (for female)/1 (for male)]: ";
	cin >> gender;
	do {

		if (gender != 0 && gender != 1) {
            cout << "\n\t\t\t\t\t\t\t\t\t           INVALID GENDER FORMAT! PLEASE RE-ENTER: ";
			cin >> gender;
		}
	}while (gender != 0 && gender != 1);

    cin.ignore();
	cout << "\n\t\t\t\t\t\t\t\t\t      Enter this student's class                    : ";
	getline(cin, classOfStudent);
	upperFull(classOfStudent);

	cout << "\n\t\t\t\t\t\t\t\t\t      Enter this student's phone number             : ";
	getline(cin, phoneNumber);
	do {
		if (phoneNumber.length() != 10) {
			cout << "\n\t\t\t\t\t\t\t\t\t           STUDENT's PHONE NUMBER LENGTH ERROR (PHONE NUMBER's LENGTH MUST BE EQUAL TO 10)!\n";
            cout << "\n\t\t\t\t\t\t\t\t\t           Please re-enter this phone number: ";
            getline(cin, phoneNumber);
		}
        if (checkPhoneNumberFormat(phoneNumber) == false) {
            cout << "\n\t\t\t\t\t\t\t\t\t           STUDENT's PHONE NUMBER FORMAT ERROR (ALL PHONE NUMER's LETTERS MUST BE INTEGER NUMBER)!\n";
            cout << "\n\t\t\t\t\t\t\t\t\t           Please re-enter this phone number: ";
            getline(cin, phoneNumber);
        }
		if (phoneNumber[0] != '0') {
			cout << "\n\t\t\t\t\t\t\t\t\t           STUDENT's PHONE NUMBER FORMAT ERROR (PHONE NUMBER's FIRST LETTER MUST BE 0)!\n";
            cout << "\n\t\t\t\t\t\t\t\t\t           Please re-enter this phone number: ";
            getline(cin, phoneNumber);
		}
	} while (phoneNumber[0] != '0' || checkPhoneNumberFormat(phoneNumber) == false || phoneNumber.length() != 10);

	cout << "\n\t\t\t\t\t\t\t\t\t      Enter this student's email                    : ";
	getline(cin, email);
	deleteSpaceFirst(email);
	deleteSpaceLast(email);

	cardIssuing = today();
	cardExpiry = today();
	cardExpiry.setYear(cardExpiry.getYear() + 1);
}

void STUDENT::output() {
	cout << "\n\n\t\t\t\t                                                                  " << char(218); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(191);
	cout << "\n\t\t\t\t\t\t\t\t     " << char(218); for (int i = 0; i < 28; i++) {cout << char(196);}; cout << char(180) << "  READER INFORMATION  " << char(195); for (int i = 0; i < 28; i++) {cout << char(196);}; cout << char(191);
	cout << "\n\t\t\t\t\t                             " << char(179) << "                            " << char(192); for (int i = 0; i < 22; i++) {cout << char(196);}; cout << char(217) << "                            " << char(179);

	string name = firstName + " " + lastName;
    cout << "\n\t\t\t\t\t\t\t\t     " << char(179) << "     Reader's type                      :       Student                         " << char(179);
    cout << "\n\t\t\t\t\t\t\t\t     " << char(179) << "     Reader's identification            :       " << setw(32) << left << idReader << char(179);
    cout << "\n\t\t\t\t\t\t\t\t     " << char(179) << "     Reader's full name                 :       " << setw(32) << name << char(179);
    if(gender == 0) {
        cout << "\n\t\t\t\t\t\t\t\t     " << char(179) << "     Gender                             :       Female                          " << char(179);
    }
    else {
        cout << "\n\t\t\t\t\t\t\t\t     " << char(179) << "     Gender                             :       Male                            " << char(179);
    }
    cout << "\n\t\t\t\t\t\t\t\t     " << char(179) << "     Reader's personal identification   :       " << setw(32) << left << personalId << char(179);
    cout << "\n\t\t\t\t\t\t\t\t     " << char(179) << "     Reader's class                     :       " << setw(32) << left << classOfStudent << char(179);
    cout << "\n\t\t\t\t\t\t\t\t     " << char(179) << "     Reader's date of birth             :       " << setw(32) << left << dayOfBirth << "                      " << char(179);
    cout << "\n\t\t\t\t\t\t\t\t     " << char(179) << "     Reader's phone number              :       " << setw(32) << left << phoneNumber << char(179);
    cout << "\n\t\t\t\t\t\t\t\t     " << char(179) << "     Reader's email                     :       " << setw(32) << left << email << char(179);
    cout << "\n\t\t\t\t\t\t\t\t     " << char(179) << "     Reader's card issuing              :       " << setw(32) << left << cardIssuing << "                      " << char(179);
    cout << "\n\t\t\t\t\t\t\t\t     " << char(179) << "     Reader's card expiration           :       " << setw(32) << left << cardExpiry << "                      " << char(179);
	cout << "\n\t\t\t\t\t                             " << char(179); for (int i = 0; i < 80; i++) {cout << " ";}; cout << char(179);
	cout << "\n\t\t\t\t\t                             " << char(192); for (int i = 0; i < 80; i++) {cout << char(196);}; cout << char(217);
}

void STUDENT::outputSetw() {
	string temp = firstName + " " + lastName;
	string genderTemp;
	if (gender == 0) {
		genderTemp = "Female";
	}
	else {
		genderTemp = "Male";
	}
	cout << setw(10) << left << idReader << "\t " << char(179) << " " << setw(20) << left << temp << "\t     " << char(179) << " " << setw(12) << left << personalId << " " << char(179) << " " << setw(6) << left << genderTemp << "  " << char(179) << "   " << setw(15) << left << dayOfBirth << "   " << char(179) << " " << setw(27) << left << classOfStudent << "  " << char(179) << "    " << phoneNumber << "   " << char(179) << " " << setw(28) << left << email  << "" << char(179) << "    " << setw(12) << left << cardIssuing << "   " << char(179) << "       " << setw(12) << left << cardExpiry <<  "     " << char(179) << " " << "\n";
}

void STUDENT::edit() {
    cin.ignore();
    string newClassOfStudent;
	cout << "\n\t\t\t\t\t Student's old class: " << classOfStudent;
    cout << "\n\n\t\t\t\t\t Student's new class is: ";
    getline(cin, newClassOfStudent);
    upperFull(newClassOfStudent);
    cout << "\n\n\t\t\t\t\t\t\t\t                Change class successfully!!! Press any key to continue. . .";
	getch();
    classOfStudent = newClassOfStudent;
}

STUDENT::~STUDENT() {}
