#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int id, age;
    string name;
    double height;

    // เพิ่มเอาเอง
public:
    Student(int i, string n, int a, double h)
    {
        id = i;
        name = n;
        age = a;
        height = h;

    }

    int getID()
    {
        return id;
    }
    string getName(){
        return name;
    }
    int getAge()
    {
        return age;
    }
    double getHeight()
    {
        return height;
    }
    // เพิ่มเอาเอง
};

int main ()
{
    Student noctis(36548,"noctis",20,176);
    Student ignis(36549,"ignis",22,183);
    Student Gladiolus(36550,"Gladiolus",23,198);
    Student Prompto(36551,"Prompto",20,173);

    cout << "id " << noctis.getID() << endl;
    cout << "name " << noctis.getName() << endl;
    cout << "age " << noctis.getAge() << endl;
    cout << "height " << noctis.getHeight() << endl;
    cout << endl;
    cout << endl;

    cout << "id " << ignis.getID() << endl;
    cout << "name " << ignis.getName() << endl;
    cout << "age " << ignis.getAge() << endl;
    cout << "height " << ignis.getHeight() << endl;
    cout << endl;
    cout << endl;

    cout << "id " << Gladiolus.getID() << endl;
    cout << "name " << Gladiolus.getName() << endl;
    cout << "age " << Gladiolus.getAge() << endl;
    cout << "height " << Gladiolus.getHeight() << endl;
    cout << endl;
    cout << endl;

    cout << "id " << Prompto.getID() << endl;
    cout << "name " << Prompto.getName() << endl;
    cout << "age " << Prompto.getAge() << endl;
    cout << "height " << Prompto.getHeight() << endl;
    cout << endl;
    cout << endl;

    return 0;
}
