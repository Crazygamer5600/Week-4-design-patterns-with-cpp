#include <iostream>
#include <string>
#include <set>

class Validator {
public:
	static int getValidInt() {
		std::string validator;
		int inpt = NULL;

		std::cout << "Please enter an integer value: ";

		while (inpt == NULL) {
			std::cin >> validator;

			try {
				inpt = stoi(validator);
			}
			catch (std::invalid_argument) {
				std::cout << "Please enter an integer value: ";
			}
		}
		return inpt;
	}

};

int main() {
	std::set<int> usrInptSet;
	usrInptSet = { Validator::getValidInt()};
	return 0;
}
