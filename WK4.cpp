#include <iostream>
#include <string>
#include <set>

class SetManager {
public:
	static int ValidateInpt() {
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
	static int find(std::set<int> inptSet, int searchedParam) {
		if (inptSet.find(searchedParam) != inptSet.end()) {
			std::cout << "found!";
			return *inptSet.find(searchedParam);
		}
		return NULL;
	}


};

int main() {
	std::set<int> usrInptSet;
	usrInptSet = { SetManager::ValidateInpt()};
	SetManager::find(usrInptSet, SetManager::ValidateInpt());
	return 0;
}
