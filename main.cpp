#include <iostream>
#include <string>
using namespace std;
string name="hello world";
class Myclass
{
private:
    int age;
public:

    explicit Myclass (int age);
    Myclass ();
    Myclass (const Myclass& myclass);
};

Myclass::Myclass(int age)
{
    this->age=age;
}

Myclass::Myclass()
{

}

Myclass::Myclass(const Myclass &myclass)
{
    this->age = myclass.age;
}

void test( Myclass& myclass)
{

}
int main() {

    Myclass my = 3;
    return 0;
}