#include <iostream>
#include <string>
#include <set>


class SetManager {
public:
	static std::string ValidateInpt() {
		std::string validator;
		int inpt;

		std::cout << "Please enter an integer value: ";

		while (true) {
			std::cin >> validator;

			if (validator == "q" || validator == "Q") {
				return validator;
			}
			try {
				inpt = stoi(validator);
				return std::to_string(inpt);
			}
			catch (std::invalid_argument) {
				std::cout << "Please enter an integer value: ";
			}
		}
	}


	static bool find(std::set<int>& inptSet, std::string searchedParam) {
		if (searchedParam == "q" || searchedParam == "Q") {
			return false;
		} else if (inptSet.find(stoi(searchedParam)) != inptSet.end()) {
			std::cout << "found!\n";
			return true;
		}
		return false;
	}

	static void erase(std::set<int>& inptSet, std::string searchedParam) {
		if (searchedParam == "q" || searchedParam == "Q") {
			return;
		}
		else if (SetManager::find(inptSet, searchedParam) == true) {
			inptSet.erase(stoi(searchedParam));
			std::cout << "Removed!\n";
		}
		else {
			std::cout << "Not in Data Set!\n";
		}
	}

	static void toString(std::set<int>& inptSet) {
		std::cout << "your set: ";
		for (int num : inptSet) {
			std::cout << num << " ";
		}
	}


};

int main() {
	std::set<int> usrInptSet;
	std::string inpt = "";

	while (true) {
		inpt = SetManager::ValidateInpt();

		if (inpt == "q" || inpt == "Q") {
			break;
		};
		
		usrInptSet.insert(stoi(inpt));
	}

	std::cout << "Search for a Number! \n";
	SetManager::find(usrInptSet, SetManager::ValidateInpt());
	SetManager::erase(usrInptSet, SetManager::ValidateInpt());
	SetManager::toString(usrInptSet);

	return 0;
}
