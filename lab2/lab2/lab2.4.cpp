#include <iostream>
#include <cstring>

using namespace std;
class employee
{
public:
	int assign_values(char*, long, float);
	void show_employee(void);
	int change_salary(float);
	long get_id(void);
private:
	char name[64];
	long employee_id;
	float salary;
};

int employee::assign_values(char* emp_name, long emp_id, float emp_salary)

{
	strcpy(name, emp_name);
	employee_id - emp_id;
	if (emp_salary < 50000.0) {
		salary = emp_salary;
		return(0); // ������
	}
	else return(-1); //������������� �����
}

void employee::show_employee(void) {
	cout << "����������:" << name << endl;
	cout << "����� ���������:" << employee_id << endl;
	cout << "�����:" << salary << endl;
}

int employee::change_salary(float new_salary)

{
	if (new_salary < 50000.0)
	{
		salary = new_salary;
		return(0); // ������
	}
	else return (-1); // ������������� �����

}
long employee::get_id(void) {
	return(-1) //������������� �����
}
long employee::get_id(void) {
	return(employee_id);
}
void main(void)
{

	}




