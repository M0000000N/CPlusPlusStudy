#include <iostream> // 표준 파일 입출력은 이 헤더를 포함해야 한다.
#include <iomanip>  // 입출력과 관련된 조작을 위한 헤더다.
#include <fstream>
#include <sstream>

using namespace std;

typedef struct _Print
{
	string name[5] = { "Name", "김재성", "용준헌", "김재민", "문수진" };
	string age[5] = { "Age", "31", "28", "25", "25" };
	int size = 12;
}Print;

std::string StringProgram()
{
	Print print;

	stringstream A;

	A << setfill('-') << setw(print.size * 2 + 4) << "\n";
	A << "|" << setfill(' ') << setw(print.size) << left << print.name[0] << "|"
							 << setw(print.size) << right << print.age[0] << "|" << "\n";
	A << setfill('-') << setw(print.size * 2 + 4) << "\n";

	for (int i = 1; i < 5; i++)
	{
		A << "|" << setfill(' ') << setw(print.size) << left << print.name[i] << "|"
								 << setw(print.size) << right << print.age[i] << "|" << "\n";
	}

	A << setfill('-') << setw(print.size * 2 + 4) << "\n";

	return A.str();
}

int main()
{
	Print print;

	ofstream of("temp.txt");
	of << StringProgram();

	// cout으로 출력
	cout << "cout으로 출력한 버전\n";
	cout << setfill('-') << setw(print.size * 2 + 3) << "\n";
	cout << "|" << setfill(' ') << setw(print.size) << left << print.name[0]
		 << "|" << setfill(' ') << setw(print.size) << right << print.age[0] << "|" << "\n";
	cout << setfill('-') << setw(print.size * 2 + 3) << "\n";

	for (int i = 1; i < 5; i++)
	{
		cout << "|" << setfill(' ') << setw(print.size) << left << print.name[i]
			 << "|" << setfill(' ') << setw(print.size) << right << print.age[i] << "|" << "\n";
	}

	std::cout << std::setfill('-') << std::setw(print.size * 2 + 3) << "\n";

	// printf로 출력
	printf("\nprintf()으로 출력한 버전\n");
	printf("---------------------------\n");
	printf("|%-12s|%12s|\n", print.name[0].c_str(), print.age[0].c_str());
	printf("---------------------------\n");

	for (int i = 1; i < 5; i++)
	{
		printf("|%-12s|%12s|\n", print.name[i].c_str(), print.age[i].c_str());
	}

	printf("---------------------------\n");

	return 0;
}

