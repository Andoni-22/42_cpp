//
// Created by Andoni Fiat arriola on 12/6/22.
//

#include <iostream>

std::string print_mayus_str(std::string str) {
	std::string new_str;
	std::size_t i;
	char 		c;

	i = 0;
	while (i < str.length()) {
		if (str[i] >= 97 && str[i] <=122) {
			c = str[i] - 32;
			std::cout << c;
		} else {
			std::cout << str[i];
		}
		i++;
	}

	return (new_str);
}

int main(int argc, char *argv[]) {
	int i;

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 0;
	while (argv[i] != nullptr) {
		if (i != 0) {
			std::cout << print_mayus_str(argv[i]);
			std::cout << " ";
		}
		i++;
	}
	std::endl (std::cout);
	return (0);
}
