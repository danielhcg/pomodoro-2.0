#include <iostream>
#include <windows.h>

std::string timer(int, int, int, int);
void userPrompt();
void testData();
void userPromptMinutes();

int main() {
	
	//userPrompt();
	//testData();
	userPromptMinutes();
	std::cout << "\n";
	system("PAUSE");

	return 0; 
}



void userPrompt() {
	std::cout << "\t\t\t\tWelcome to Daniel's customizable Pomorodo Timer" << std::endl;
	std::cout << "\n\t\t\t\tPlease enter the following information" << std::endl;

	std::cout << "Interval length(seconds): ";
	int iLength;
	std::cin >> iLength;

	std::cout << "Number of intervals: ";
	int intervalNum;
	std::cin >> intervalNum;

	std::cout << "Short break length(seconds): ";
	int sBLength;
	std::cin >> sBLength;

	std::cout << "Long break length(seconds): ";
	int lBLength;
	std::cin >> lBLength;

	std::cout << "Start timer? (Y/N) : ";
	char choice = 'Y';
	std::cin >> choice;

	if (choice == 'Y' || choice == 'y') {
		std::cout << timer(iLength, intervalNum, sBLength, lBLength);
	}
}

std::string timer(int iLgth, int itvLNm, int sBLth, int lBlth) {

	std::cout << "\a\nBegin! " << std::endl;

	for (int i = 1; i < itvLNm; i++) {
		std::cout << "\nPomorodo: " << i << "\n";
		Sleep(iLgth * 1000); // 6000 means in seconds
		std::cout << "\aPomorodo completed. \n";


		std::cout << "\nBegin " << sBLth << "s short break" << std::endl;
		Sleep(sBLth * 1000);  // 6000 means in seconds
		std::cout << "\aShort break completed.\n";

		if (i == itvLNm - 1) {
			std::cout << "\a\nPomorodo " << i + 1 << " completed. \n";
			std::cout << "Begin " << lBlth << "s long break" << std::endl;
			Sleep(lBlth * 1000); // in seconds
			
		}

	}
	std::cout << "\n";
	std::cout << "\a";

	return "Done!";
}

void testData(){

	const int a = 5, b = 4, c = 2, d = 5;

	std::cout << "\t\t\t\tWelcome to Daniel's customizable Pomorodo Timer" << std::endl;
	std::cout << "\n\t\t\t\tPlease enter the following information" << std::endl;

	std::cout << "Interval length(seconds): " << a << std::endl;

	std::cout << "Number of intervals: " << b << std::endl;

	std::cout << "Short break length(seconds): " << c << std::endl;

	std::cout << "Long break length(seconds): " << d << std::endl;

	std::cout << "Start timer? (Y/N) : ";
	char choice = 'Y';
	std::cin >> choice;

	std::cout << timer(a, b, c, d);

}

void userPromptMinutes() {
	std::cout << "\t\t\t\tWelcome to Daniel's customizable Pomorodo Timer" << std::endl;
	std::cout << "\n\t\t\t\tPlease enter the following information" << std::endl;

	std::cout << "Interval length(minutes): ";
	int iLength;
	std::cin >> iLength;

	std::cout << "Number of intervals: ";
	int intervalNum;
	std::cin >> intervalNum;

	std::cout << "Short break length(minutes): ";
	int sBLength;
	std::cin >> sBLength;

	std::cout << "Long break length(seconds): ";
	int lBLength;
	std::cin >> lBLength;

	std::cout << "Start timer? (Y/N) : ";
	char choice = 'Y';
	std::cin >> choice;

	if (choice == 'Y' || choice == 'y') {
		for (int i = 1; i < intervalNum; i++) {
			std::cout << "\nPomorodo: " << i << "\n";
			Sleep(iLength * 60000); // 60000 means in minutes
			std::cout << "\aPomorodo completed. \n";


			std::cout << "\nBegin " << sBLength << "s short break" << std::endl;
			Sleep(sBLength * 60000);  // 60000 means in minutes
			std::cout << "\aShort break completed.\n";

			if (i == intervalNum - 1) {
				std::cout << "\a\nPomorodo " << i + 1 << " completed. \n";
				std::cout << "Begin " << lBLength << "s long break" << std::endl;
				Sleep(lBLength * 60000); // 60000 means in minutes
			}
		}
		std::cout << "\n";
		std::cout << "\a";
	}
}

