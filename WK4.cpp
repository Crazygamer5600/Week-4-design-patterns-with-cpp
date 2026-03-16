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
			std::cout << "found!\n";
			return *inptSet.find(searchedParam);
		}
		return NULL;
	}

	static void erase(std::set<int> inptSet, int searchedParam) {
		if (SetManager::find(inptSet, searchedParam) != NULL) {
			inptSet.erase(searchedParam);
			std::cout << "Removed!";
		} else {
			std::cout << "Not in Data Set!";
		}
	}

	static void toString(std::set<int> inptSet) {
		std::cout << "your set";
		for (int num : inptSet) {
			std::cout << num<<" ";
		}
	}
	

};

int main() {
	std::set<int> usrInptSet;
	usrInptSet = { SetManager::ValidateInpt()};
	std::cout << "Search for a Number! \n";
	SetManager::find(usrInptSet, SetManager::ValidateInpt());
	SetManager::erase(usrInptSet, SetManager::ValidateInpt());
	SetManager::toString(usrInptSet);
	
	return 0;
}
