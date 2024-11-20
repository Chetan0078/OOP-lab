#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int width;

    public:
        // Default constructor
        Rectangle() {
            length = 0;
            width = 0;
        }

        // Parameterized constructor
        Rectangle(int l, int w) {
            length = l;
            width = w;
        }

        // Method to calculate the area of the rectangle
        int area() {
            return length * width;
        }

        // Method to display the dimensions
        void display() {
            cout << "Length: " << length << ", Width: " << width << endl;
        }
};

int main() {
    // Creating objects using different constructors
    Rectangle rect1;             // Default constructor
    Rectangle rect2(10, 5);      // Parameterized constructor

    // Displaying the details of both rectangles
    cout << "Rectangle 1:" << endl;
    rect1.display();
    cout << "Area: " << rect1.area() << endl << endl;

    cout << "Rectangle 2:" << endl;
    rect2.display();
    cout << "Area: " << rect2.area() << endl;

    return 0;
}
