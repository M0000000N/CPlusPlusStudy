#include <iostream> // 표준 파일 입출력은 이 헤더를 포함해야 한다.
#include <iomanip>  // 입출력과 관련된 조작을 위한 헤더다.
#include <fstream>
#include <sstream>

using namespace std;

std::string StringProgram()
{
    struct student
    {
        string name[5] = { "Name", "김재성", "용준헌", "김재민", "문수진"};
        string age[5] = { "Age", "31", "28", "25", "문수진"};
    };
    student student;

    int size = 12;
    // cout으로 출력
   /* cout << setfill('-') << setw(size * 2 + 3) << "\n";
    cout << "|" << setfill(' ') << setw(size) << left  << student.name[0] << "|" << setfill(' ') << setw(size) << right << student.age[0] << "|" << "\n";
    cout << setfill('-') << setw(size * 2 + 3) << "\n";
    for (int i = 1; i < 5; i++)
    {
        cout << "|" << setfill(' ') << setw(size) << left << student.name[i] << "|" << setfill(' ') << setw(size) << right << student.age[i] << "|" << "\n";
    }
    std::cout << std::setfill('-') << std::setw(size * 2 + 3) << "\n";*/


    stringstream A;

    A << setfill('-') << setw(size * 2 + 4) << "\n";
    A << "|" << setfill(' ') << setw(size)  << left << student.name[0] << "|" << setw(size) << right << student.age[0] << "|" << "\n";
    A << setfill('-') << setw(size * 2 + 4) << "\n";
    for (int i = 1; i < 5; i++)
    {
        A << "|" << setfill(' ') << setw(size) << left << student.name[i] << "|" << setw(size) << right << student.age[i] << "|" << "\n";
    }
    A << setfill('-') << setw(size * 2 + 4) << "\n";



    return A.str();
}

int main()
{
    //ofstream of("temp.txt");
    //of << StringProgram();
    ////cout << StringProgram();

    struct student
    {
        string name[5] = { "Name", "김재성", "용준헌", "김재민", "문수진" };
        string age[5] = { "Age", "31", "28", "25", "25" };
    };
    student student;

    int size = 12;


    // printf로 출력
    printf("%028c\n", ' ');
    printf("0%-12s0%12s0\n", student.name[0].c_str(), student.age[0].c_str());
    printf("%028c\n", ' ');
    for (int i = 1; i < 5; i++)
    {
        printf("0%-12s0%12s0\n", student.name[i].c_str(), student.age[i].c_str());
    }
    printf("%028c\n", ' ');

    return 0;
}

