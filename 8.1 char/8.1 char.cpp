
#include <iostream>
#include <cstring>
using namespace std;

// Знаходить індекс третьої крапки за допомогою strchr()
int FindThirdDot(const char str[])
{
    const char* first = strchr(str, '.');

    if (first == nullptr)
        return -1;

    const char* second = strchr(first + 1, '.');

    if (second == nullptr)
        return -1;

    const char* third = strchr(second + 1, '.');

    if (third == nullptr)
        return -1;

    return static_cast<int>(third - str);
}

// Замінює кожен четвертий символ
// використовуючи стандартну функцію strlen()
void ReplaceEveryFourthChar(char str[])
{
    size_t length = strlen(str);

    for (size_t i = 3; i < length; i += 4)
    {
        str[i] = '.';
    }
}

int main()
{
    const int SIZE = 256;
    char str[SIZE];

    cout << "Enter a string: ";
    cin.getline(str, SIZE);

    int index = FindThirdDot(str);

    if (index != -1)
    {
        cout << "Index of the third dot: " << index << endl;
        cout << "Position of the third dot: " << index + 1 << endl;
    }
    else
    {
        cout << "The string contains less than three dots." << endl;
    }

    ReplaceEveryFourthChar(str);

    cout << "Modified string: " << str << endl;

    return 0;
}