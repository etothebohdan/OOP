#include <iostream>
#include <cstring>

using namespace std;

class employee
{
public:
	char name[64];
	long employee id;
	float salary;
	void show_employee(void);
};

void employee::show_employee(void)

{
	cout << "��'�:" << name << endl;
	cout << "����� ���������:" << employee_id << endl;
	cout << "�����:" << salary << endl;
};

void main(void)
{
	setlocale(LC_ALL, "Ukrinian");
	employee worker, boss;
	strcpy(worker.name, "�������� �����������");
	worker.employee_id = 12345;
	worker.salary = 25000;
	strcpy(boss.name, "�������� ���������");
	boss.employee_id = 101;
	boss.salary = 101101.00;
	worker.show_employee();
	boss.show_employee();
	cin.get();
	
}