#include <iostream>
using namespace std;

class shape
{
private:
    string colour;

public:
    void setcolour(string c)
    {
        colour = c;
    }

    string getcolour()
    {
        return colour;
    }

    virtual void calculatearea() = 0;
};

class circle : public shape
{
private:
    float radius;

public:
    circle(float r)
    {
        radius = r;
    }

    void calculatearea()
    {
        cout << "circle area; " << 3.14 * radius * radius << endl;
    }
};

class rectangle : public shape
{
private:
    float length, width;

public:
    rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    void calculatearea()
    {
        cout << "rectangle area: " << length * width << endl;
    }
};

int main()
{
    float radius, length, width;
    string colour1, colour2;

    cout << "enter radius: ";
    cin >> radius;

    cout << "enter circle colour: ";
    cin >> colour1;

    cout << "enter rectangle length: ";
    cin >> length;

    cout << "enter rectangle width: ";
    cin >> width;

    cout << "enter rectangle colour: ";
    cin >> colour2;

    circle c(radius);
    rectangle r(length, width);

    c.setcolour(colour1);
    r.setcolour(colour2);

    cout << "\ncircle colour: " << c.getcolour() << endl;
    c.calculatearea();

    cout << "rectangle colour: " << r.getcolour() << endl;
    r.calculatearea();

    return 0;
}