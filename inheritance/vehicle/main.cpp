#include <iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;


class Vehicle
{
protected:
    string manufacturer;
    int year;
    string color;

public:
    string getManufacturer()
    {
        return manufacturer;
    }
    int getYear()
    {
        return year;
    }
    string getColor()
    {
        return color;
    }
    void setManufacturer(string value)
    {
        this->manufacturer = value;
    }
    void setYear(int value)
    {
        year = value; // this->year = value
    }
    void setColor(string value)
    {
        this->color = value;
    }
    Vehicle()
    {
        cout << "\nAn instance has been derived from Vehicle" << endl;
    }
    Vehicle(string manufacturer, int year, string color) : Vehicle()
    {
        cout << "\nAn instance with full parameters has been derived from Vehicle" << endl;
        
    }
    virtual void start()
    {
        cout << "Vehicle has been started" << endl;
    }
    virtual void stop()
    {
        cout << "Vehicle has been stopped" << endl;
    }
    virtual void drive()
    {
        cout << "Vehicle is being driven..." << endl;
    }
    virtual string toString(){
        return manufacturer + " - " + std::to_string(year) + " - " + color ;
    }
};
class Car : public Vehicle
{
public:
    Car()
    {
        cout << "\nAn instance has been derived from Car" << endl;
    }
    Car(string manufacturer, int year, string color) : Vehicle(manufacturer, year, color)
    {
        cout << "\nAn instance with full parameters has been derived from Car" << endl;
        this->manufacturer = manufacturer;
        this->year = year;
        this->color = color;
    }
    void openSunroof()
    {
        cout << "The sunroof has been opened." << endl;
    }
    void drive() override
    {
        cout << "The car manufacturer by " << this->manufacturer << " is being driven." <<  endl;
    }
};
class Truck : public Vehicle
{
public:
    Truck(string manufacturer, int year, string color) : Vehicle(manufacturer, year, color)
    {
        cout << "\nAn instance with full parameters has been created from Truck" << endl;
    }
    void transport()
    {
        cout << "Transport() has been called" << endl;
    }
    void drive() override
    {
        cout << "The Truck manufacturer by " << this->manufacturer << " is being driven." <<  endl;
    }
};
class Bus : public Vehicle
{
public:
    Bus(string manufacturer, int year, string color) : Vehicle(manufacturer, year, color)
    {
        cout << "\nAn instance with full parameters has been created from Bus" << endl;
    }
    void scheduling()
    {
        cout << "scheduling() has been called" << endl;
    }
    void drive() override
    {
        cout << "The Bus manufacturer by " << this->manufacturer << " is being driven." <<  endl;
    }
};
class SchoolBus : public Bus
{
public:
    SchoolBus(string manufacturer, int year, string color) : Bus(manufacturer, year, color)
    {
        cout << "\nAn instance with full parameters has been created from SchoolBus" << endl;
    }
    void getFare()
    {
        cout << "getFare() has been called " << endl;
    }
    void drive() override
    {
        cout << "The SchoolBus manufacturer by " << this->manufacturer << " is being driven." <<  endl;
    }
};

//-------------------------------------
int main()
{
    Vehicle item2 = Vehicle("Scoda", 2019, "White"); // Base Class
    cout << "Vehicle " << item2.getManufacturer() << endl;

    Car item1 = Car(); // Sub Class
    item1.setManufacturer("TOGG");
    item1.setYear(2020);
    item1.setColor("Red");
    cout << "Vehicle " << item1.toString() << endl;
    item1.openSunroof();

    Car item3 = Car("Opel", 2020, "Black");
    cout << "Vehicle " << item3.toString() << endl;
    item3.openSunroof();

    Bus item4 = Bus("Anadolu Isuzu", 2016, "Red");
    cout << "Vehicle " << item4.toString() << endl;
    item4.scheduling();

    SchoolBus item5 = SchoolBus("Renault", 2018, "White");
    cout << "Vehicle " << item5.toString() << endl;
    item5.scheduling();
    item5.getFare();

    Truck item6 = Truck("Mercedes", 2016, "Blue");
    cout << "Vehicle " << item6.toString() << endl;
    item6.transport();

    item1.drive();
    item1.stop();

    item3.drive();
    item3.stop();

    item4.drive();
    item4.stop();

    item5.drive();
    item5.stop();

    item6.drive();
    item6.stop();

    char c = getchar();
    return 0;
}
