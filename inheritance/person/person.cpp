/*.
"Student" (Öğrenci) ve "Teacher" (Öğretmen) sınıflarını "Person" sınıfından türetin.
"Student" sınıfı, öğrenci numarası için ek bir özelliğe sahip olmalıdır.
"Teacher" sınıfı, öğrettikleri ders için ek bir özelliğe sahip olmalıdır.
Her sınıf, bilgilerini görüntülemek için bir yönteme sahip olmalıdır.
*/
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Person
{
protected:
    string name;
    int age;

public:
    string getName()
    {
        return name;
    };
    int getAge()
    {
        return age;
    };
    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    Person()
    {
        cout << "Person ctor created" << endl;
    }
    Person(string name, int age) : Person()
    {
        cout << "full parameter Person ctor created" << endl;
        this->name = name;
        this->age = age;
    }
    virtual void displayInfo()
    {
        cout << "İsim: " << name << ", Yaş: " << age << endl;
    }
};

class Student : public Person
{
private:
    string schoolNumber;

public:
    Student(string name, int age, string schoolNumber) : Person(name, age)
    {
        this->schoolNumber = schoolNumber;
    }
    void displayInfo() override
    {
        cout << "Ogrenci Bilgileri -> Isim: " << name << ", Yas: " << age << ", Ogrenci Numarasi: " << schoolNumber << endl;
    }
};
class Teacher : public Person
{
private:
    string subject;

public:
    Teacher(string name, int age, string subject) : Person(name, age)
    {
        this->subject = subject;
    }
    void displayInfo() override
    {
        cout << "Ogretmen Bilgileri -> Isim: " << name << ", Yas: " << age << ", Ders: " << subject << endl;
    }
};

int main()
{
    Student student = Student("Ahmet", 20, "1235");
    Teacher teacher = Teacher("Elif", 35, "Matematik");
    student.displayInfo();
    teacher.displayInfo();
    char c = getchar();
    return 0;
}