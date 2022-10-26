#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <sstream>

using namespace std;



int main()
{
    setlocale(LC_ALL, "Ukraine");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int x = 0, y = 0;
    string strf, vibor2;
    int vibor1;
    struct Student
    {

        string fame;
        string name;
        string surname;
        int group;
        string inst;
    };
    string stra;
    ifstream in("F://lab1.txt");
    int count = 0;
    getline(in, stra, '\0');
    in.seekg(0);
    while (getline(in, strf))
    {
        y++;
    }
    stringstream ff;
    ff.str(stra);
    Student* mas = new Student[y];
    for (int i = 0; i < y; i++) {
        ff >> mas[i].fame >> mas[i].name >> mas[i].surname >> mas[i].group >> mas[i].inst;
    }
    cout << "Виберіть навчальний заклад: " << endl;
    for (int i = 0; i < y; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (mas[i].inst == mas[j].inst) break;
        }
        if (j == i) cout << mas[i].inst << endl;
    }
    cout << endl;
    cin >> vibor2;
    cout << endl;
    cout << "Виберіть группу: " << endl;
    for (int i = 0; i < y; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (mas[i].group == mas[j].group) break;
        }
        if (j == i) cout << mas[i].group << endl;
    }
    cout << endl;
    cin >> vibor1;
    cout << endl;
    for (int i = 0; i < y; i++)
    {
        if (mas[i].group == vibor1)
        {

            if (mas[i].inst == vibor2)
            {

                cout << mas[i].fame << endl;
                cout << endl;
            }
        }
    }


}