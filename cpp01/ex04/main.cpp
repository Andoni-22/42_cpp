
#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
	std::string name;
	std::string data;
	char tmp;
	std::ifstream file;

	if (argc != 4) {
		std::cout<<"Error: Incorrect params"<<std::endl;
		return (-1);
	}
	name = argv[1];
	file.open(name);
	while (file) {
		tmp = file.get();
		data = data + tmp;
	}
	std::cout<<data<<std::endl;
	return (0);
}
