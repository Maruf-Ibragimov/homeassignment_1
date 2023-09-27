#include <iostream>

using namespace std;

int main() {
    double length, width, area, perimeter;

    cout << "Can you please write the length of the area: ";
    cin >> length;

    cout << "Can you please write the width of the area: ";
    cin >> width;

    area = length * width;
    perimeter = 2 * (length + width);

    cout << "The are: " << area << " " << "The perimeter of the rectangle area: " << perimeter << endl;


    return 0;
}
