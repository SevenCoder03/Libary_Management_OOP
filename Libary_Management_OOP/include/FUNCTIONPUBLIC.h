#ifndef FUNCTIONPUBLIC_H
#define FUNCTIONPUBLIC_H
#include <conio.h>
#include <iostream>
#include <string.h>

using namespace std;

void deleteSpaceFirst (string &Temporary);
void deleteSpaceLast (string &Temporary);
void deleteSpace (string &Temporary);
void upper (string &Temporary);
void upperFull(string &Temporary);
void standardizeIdentifier (string &Temporary);
void standardizeName(string &Temporary);
string orderString(int x);
bool checkPhoneNumberFormat(string x);
void viewInfo();
void showExitMenu();
void showMainMenuAdmin();
void sshowMainMenuUser();
void rules();

#endif
