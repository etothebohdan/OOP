#include <iostream>
#include <cstring>

using namespace std;

class dogs{
	public:
		char breed[64];
		int average_weight;
		int average_height;
		void show_dog(void);
} ;
void dogs::show_dog(void)

{
	cout << "������:" << breed << endl;
	cout << "������� ����:" << average_weight << endl;

}

void main(void) {
	setlocale(LC_ALL, "Ukrainean");
	dogs happy, matt;
	strcpy(happy.breed, "��������"); 
	happy.average_weight = 58;
	happy.average_height = 24;
	strcpy(matt.breed, "���");
	matt.average_weight = 22;
	matt.average_height = 15;
	happy.show_dog();
	matt.show_dog();
	cin.get();
}