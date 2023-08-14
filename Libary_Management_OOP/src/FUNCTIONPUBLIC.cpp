#include "FUNCTIONPUBLIC.h"

void deleteSpaceFirst (string &Temporary) {
	while (true) {
		if (Temporary[0] == ' ') {
			Temporary.erase(Temporary.begin() + 0);
		}
		else {
			break;
		}
	}
}

void deleteSpaceLast (string &Temporary) {
	while (true) {
		if (Temporary[Temporary.length() - 1] == ' ') {
			Temporary.erase(Temporary.end() - 1);
		}
		else {
			break;
		}
	}
}

void deleteSpace (string &Temporary) {
	for (int i = 1; i < Temporary.length(); i++) {
		if (Temporary[i] == ' ') {
			for (int j = i + 1; j < Temporary.length(); j++) {
				if (Temporary[j] == ' ') {
					Temporary.erase(Temporary.begin() + j);
					j--;
				}
				else {
					break;
				}
			}
		}
	}
}

void upper (string &Temporary) {
	for (int i = 0; i < Temporary.length(); i++) {
		if (Temporary[i] >= 65 && Temporary[i] <= 90) {
			Temporary[i] += 32;
		}
		if (Temporary[i] >= '0' && Temporary[i] <= '9') {
			continue;
		}
	}
	if (Temporary[0] >= 'a' && Temporary[0] <= 'z') {
		Temporary[0] -= 32;
	}
	for (int i = 1; i < Temporary.length(); i++) {
		if (Temporary[i] == ' ') {
			if (Temporary[i+1] >= 'a' && Temporary[i+1] <= 'z') {
				Temporary[i+1] -= 32;
			}
		}
	}
}

void upperFull (string &Temporary) {
	for (int i = 0; i < Temporary.length(); i++) {
		if (Temporary[i] >= 97 && Temporary[i] <= 122) {
			Temporary[i] -= 32;
		}
	}
}

void standardizeIdentifier (string &Temporary) {
	for (int i = 0; i < Temporary.length(); i++) {
		if (Temporary[i] >= 'a' && Temporary[i] <= 'z') {
			Temporary[i] -= 32;
		}
	}
	deleteSpaceFirst(Temporary);
	deleteSpaceLast(Temporary);
	upperFull(Temporary);
}

void standardizeName (string &Temporary) {
	deleteSpaceFirst(Temporary);
	deleteSpaceLast(Temporary);
	deleteSpace(Temporary);
	upper(Temporary);
}

string orderString(int x) {
	if (x % 10 == 1 and x != 11) {
		return to_string(x) + "st";
	}
	else if (x % 10 == 2 and x != 12) {
		return to_string(x) + "nd";
	}
	else if (x % 10 == 3 and x != 13) {
		return to_string(x) + "rd";
	}
	else {
		return to_string(x) + "th";
	}
}

bool checkPhoneNumberFormat(string x) {
	int count = 0;
	for (int i = 0; i < 10; i++) {
		if (x[i] != '0' && x[i] != '1' && x[i] != '2' && x[i] != '3' && x[i] != '4' && x[i] != '5' && x[i] != '6' && x[i] != '7' && x[i] != '8' && x[i] != '9' && x[i] != '10') {
			count++;
		}
	}
	if (count == 0) {
		return true;
	}
	else return false;
}
