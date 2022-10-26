#include <iostream>
#include <string>

using namespace std;

class Persona
{
public:
    struct PersonBlock { 
        Persona* currentPerson{ nullptr };
        PersonBlock* nextPerson{ nullptr };
    };

    static PersonBlock* personList; 

private: 
    string m_surname; 
    string m_pol; 
    string m_dolgnost; 
    int m_stag;
    int m_kategoria;

public:
    Persona(string surname, string pol, string dolgnost, int stag, int kategoria)
        :m_surname(surname), m_pol(pol), m_dolgnost(dolgnost), m_stag(stag), m_kategoria(kategoria) {}
    

    static void printList() 
    {
        if (!personList)
        {
            cout << "Список пустий." << endl;
            return;
        }

        while (personList)
        {
            cout << personList->currentPerson->getClassName()
                << "\nНазва: " << personList->currentPerson->m_surname 
                << "\nПол: " << personList->currentPerson->m_pol
                << "\nПосада: " << personList->currentPerson->m_dolgnost
                << "\nСтаж: " << personList->currentPerson->m_stag
                << "\nКатегорія: " << personList->currentPerson->m_kategoria << endl;
            personList = personList->nextPerson;
        }
    }

    static void addPersonToList(Persona* person)
    {
        PersonBlock* newPerson = (PersonBlock*)(new size_t(sizeof(Persona*) + sizeof(PersonBlock*)));
        newPerson->currentPerson = person;
        newPerson->nextPerson = nullptr;
        if (!personList)
        {
            personList = newPerson;
        }
        else
        {
            PersonBlock* tempList = personList;
            while (tempList->nextPerson) {
                tempList = tempList->nextPerson;
            }
            tempList->nextPerson = newPerson;
        }
    }

    virtual string getClassName() 
        
    {
        return "Persona";
    };
};

Persona::PersonBlock* Persona::personList = nullptr; 
class Employee :public Persona
{
public:
    Employee(string surname, string pol, string dolgnost, int stag, int kategoria)
        :Persona(surname, pol, dolgnost, stag, kategoria) {}

    string getClassName() override 
    {
        return "Employee";
    }
};

class Engeener :public Employee
{
public:
    Engeener(string surname, string pol, string dolgnost, int stag, int kategoria)
        :Employee(surname, pol, dolgnost, stag, kategoria) {}

    string getClassName() override
    {
        return "Engeener";
    }
};

class Worker :public Persona
{
public:
    Worker(string surname, string pol, string dolgnost, int stag, int kategoria)
        :Persona(surname, pol, dolgnost, stag, kategoria) {}

    string getClassName() override
    {
        return "Worker";
    }
};

int main()
{
    Persona person1{ "Імя1", "М1", "Директор1", 1, 1 };
    Employee person2{ "Імя2", "М2", "Директор2", 2, 2 };
    Engeener person3{ "Імя3", "М3", "Директор3", 3, 3 };
    Worker person4{ "Імя4", "М4", "Директор4", 4, 4 };

    Persona::addPersonToList(&person1);
    Persona::addPersonToList(&person2);
    Persona::addPersonToList(&person3);
    Persona::addPersonToList(&person4);

    Persona::printList();

    cin.clear();
    cin.ignore(32767, '\n');
    cin.get();

    return 0;
}