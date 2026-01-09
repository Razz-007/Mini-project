// Name: Hrishikesh Bhuyan
// Enrollment id: ADTU/2025-29/BCSM/060
#include <iostream>
using namespace std;
int main()
{
    // question 1: Problem Title: The Farmer’s Fencing Problem
    int w, l;
    cout << "Enter width: ";
    cin >> w;
    cout << "Enter length:";
    cin >> l;
    int area = l * w;
    cout << "Area=" << area << endl;
    int perimeter = 2 * (l + w);
    cout << "Perimeter=" << perimeter << endl;
    return 0;
}
