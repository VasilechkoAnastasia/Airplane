#include <iostream>
#include <string>
using namespace std;

class Airplane
{
    string type;
    int pass;
    int maxPass;

public:
    Airplane(string type, int maxPassengers) : type(type), pass(0), maxPass(maxPassengers) {}

    bool operator==(const Airplane& other) const
    {
        return this->type == other.type;
    }

    Airplane& operator++()
    {
        if (pass < maxPass)
        {
            ++pass;
        }
        return *this;
    }

    Airplane& operator--()
    {
        if (pass > 0)
        {
            --pass;
        }
        return *this;
    }

    bool operator>(const Airplane& other) const
    {
        return this->maxPass > other.maxPass;
    }

    void Display() const
    {
        cout << "Type: " << type << ", Passengers: " << pass
            << "/" << maxPass << endl;
    }
};

int main()
{
    int max1, max2;
    cout << "Input max passengers for plane 1: ";
    cin >> max1;
    cout << "Input max passengers for plane 2: ";
    cin >> max2;
    Airplane plane1("Plane1", max1);
    Airplane plane2("Plane2", max2);

    if (plane1 == plane2)
    {
        cout << "Passangers in plane 1 = passangers in plane 2" << endl;
    }
    else
    {
        cout << "Passangers in plane 1 = passangers in plane 2" << endl;
    }

    ++plane1;
    ++plane1;
    plane1.Display();
    --plane1;
    plane1.Display();

    if (plane1 > plane2)
    {
        cout << "Passangers in plane 1 > passangers in plane 2" << endl;
    }
    else
    {
        cout << "Passangers in plane 1 < passangers in plane 2" << endl;
    }
}