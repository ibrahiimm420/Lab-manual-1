// Task 1
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2, distance;

    // Prompt the user to enter the coordinates of the first point
    cout << "Enter the x-coordinate of the first point: ";
    cin >> x1;
    cout << "Enter the y-coordinate of the first point: ";
    cin >> y1;

    // Prompt the user to enter the coordinates of the second point
    cout << "Enter the x-coordinate of the second point: ";
    cin >> x2;
    cout << "Enter the y-coordinate of the second point: ";
    cin >> y2;

    // Calculate the distance using the distance formula
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    // Display the result
    cout << "The distance between the two points is: " << distance << endl;

    return 0;
}
 
 // Task 2
 #include <iostream>
using namespace std;

int main() {
    double lengthInCentimeters, lengthInMeters, lengthInKilometers;

    // Prompt the user to enter the length in centimeters
    cout << "Enter length in centimeters: ";
    cin >> lengthInCentimeters;

    // Convert centimeters to meters and kilometers
    lengthInMeters = lengthInCentimeters / 100.0; // 1 meter = 100 centimeters
    lengthInKilometers = lengthInCentimeters / 100000.0; // 1 kilometer = 100,000 centimeters

    // Display the result
    cout << "Length in meters: " << lengthInMeters << " meters" << endl;
    cout << "Length in kilometers: " << lengthInKilometers << " kilometers" << endl;

    return 0;
}

// Task 3
#include <iostream>
using namespace std;

int main() {
    double a, b, result;

    // Prompt the user to enter the values of 'a' and 'b'
    cout << "Enter the value of 'a': ";
    cin >> a;
    cout << "Enter the value of 'b': ";
    cin >> b;

    // Calculate the result of the polynomial
    result = a * a + 2 * a * b + b * b;

    // Display the result
    cout << "Result of the polynomial a^2 + 2ab + b^2 is: " << result << endl;

    return 0;
}

// Task 4
#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;

    // Prompt the user to enter temperature in Fahrenheit
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5.0/9.0;

    // Display the result
    cout << "Temperature in Celsius: " << celsius << " degrees Celsius" << endl;

    return 0;
}

