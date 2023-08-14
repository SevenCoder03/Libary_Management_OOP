#include "READER.h"

READER::READER() {}

READER::READER(string idReader, int gender, string personalId, string firstName, string lastName, DATE dayOfBirth, string phoneNumber, string email, DATE cardIssuing, DATE cardExpiry) {
    this->idReader = idReader;
    this->gender = gender;
    this->personalId = personalId;
    this->firstName = firstName;
    this->lastName = lastName;
    this->dayOfBirth = dayOfBirth;
    this->phoneNumber = phoneNumber;
    this->email = email;
    this->cardIssuing = cardIssuing;
    this->cardExpiry = cardExpiry;
}

void READER::setIdReader(string idReader) {
    this->idReader = idReader;
}

string READER::getIdReader() {
    return idReader;
}

void READER::setGender(int gender) {
    this->gender = gender;
}

int READER::getGender() {
    return gender;
}

void READER::setPersonalId(string personalId) {
    this->personalId = personalId;
}

string READER::getPersonalId() {
    return personalId;
}

void READER::setFirstName(string firstName) {
    this->firstName = firstName;
}

string READER::getFirstName() {
    return firstName;
}

void READER::setLastName(string lastName) {
    this->lastName = lastName;
}

string READER::getLastName() {
    return lastName;
}

void READER::setDayOfBirth(DATE dayOfBirth) {
    this->dayOfBirth = dayOfBirth;
}

DATE READER::getDayOfBirth() {
    return dayOfBirth;
}

void READER::setPhoneNumber(string phoneNumber) {
    this->phoneNumber = phoneNumber;
}

string READER::getPhoneNumber() {
    return phoneNumber;
}

void READER::setEmail(string email) {
    this->email = email;
}

string READER::getEmail() {
    return email;
}

void READER::setCardIssuing(DATE cardIssuing) {
    this->cardIssuing = cardIssuing;
}

DATE READER::getCardIssuing() {
    return cardIssuing;
}

void READER::setCardExpiry(DATE cardExpiry) {
    this->cardExpiry = cardExpiry;
}

DATE READER::getCardExpiry() {
    return cardExpiry;
}

READER::~READER() {}
