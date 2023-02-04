#include <iostream>
using namespace std;
class human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    void setWeigth(int w)
    {
        this->weight = w;
    }
};
class Male : public human
{
public:
    string color;

    void sleep()
    {
        cout << "male sleeting"<< endl;
    }
};

int main()
{
    Male object1;
    cout << object1.age;

    return 0;
}
