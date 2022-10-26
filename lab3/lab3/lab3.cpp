# include <iostream>
using namespace std;

class AB 
{
private:
    int a;
    int b;
public:
    AB()   
    {
        a = 0;
        b = 0;
        cout << "Работа конструктора при создании нового объекта: " << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl << endl;
    }

    void setAB() 
    {
        cout << "Введите целое число а: ";
        cin >> a;
        cout << "Введите целое число b: ";
        cin >> b;
    }

    void getAB() 
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "rus");

    AB obj1;     

    obj1.setAB();  
    obj1.getAB();   

    AB obj2;    
    return 0;
}