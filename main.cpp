#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: " << '\n';
    int a, b, max, min;
    cin >> a >> b;
    max = a + b;
    if ((a - b) > max)
        max = a - b;
    if (a * b > max)
        max = a* b;
    if (a / b > max)
        max = a / b;

    min = a + b;
    if ((a - b) < min)
        min = a - b;
    if (a * b < min)
        min = a* b;
    if (a / b < min)
        min = a / b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n'
         << "max = " << max << '\n'
         << "min = " << min << '\n';
    return 0;
}
