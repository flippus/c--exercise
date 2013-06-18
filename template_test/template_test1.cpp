#include <iostream>
using std::cout;

template <typename T>
void func(T const &)
{
 cout << "T template\n";
}

template <>
void func<int>(int const &)
{
 cout << "int template\n";
}

int main()
{
 func(1.2);
 func(0);
 func(2.5);
 func(2);

}
