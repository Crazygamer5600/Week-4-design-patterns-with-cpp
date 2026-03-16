#include <iostream>
#include <string>
#include <set>

int main() {
	std::set<int> usrInptSet;
	int inpt = NULL;
	std::string validator;

	std::cout << "Please enter an integer value: ";
	while (inpt == NULL) {
		std::cin >> validator;
		try {
			inpt = stoi(validator);
		}catch(std::invalid_argument){
			std::cout << "Please enter an integer value: ";
		}
	}
	
}
