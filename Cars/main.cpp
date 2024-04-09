#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <fstream>


using namespace std;


void Lab1()
{
	std::ifstream infile(".\\Cars.txt", std::ios::in);
	std::vector<std::string> cars;
	std::string line;
	while (getline(infile, line))
		if(!line.empty())
			cars.push_back(line);
	
	std::sort(begin(cars),std::end(cars), [] (std::string line1, std::string line2){
		return line2.length() > line1.length();
		});

	for (std::string c : cars)
		std::cout << c << std::endl;
}
void Lab2()
{
	std::ifstream infile(".\\Birds.txt", std::ios::in);
	std::vector<std::string> birds;
	std::string line;
	while (getline(infile, line))
		if (!line.empty())
			birds.push_back(line);

	std::sort(begin(birds),std::end(birds), [] (std::string line1, std::string line2){
		return line2.length() > line1.length();
		});

	for (std::string c : birds)
		std::cout << c << std::endl;

}

int main()
{
	Lab1();
	Lab2();
	// Lab3();
	// Lab4();
	// Lab5();
	// Lab6();
	return 0;
}



