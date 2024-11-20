#include <iostream>
using namespace std;

class Transportation
{
private:
    double weight, length, width, height;
    string packageType;
    double cost;

public:
    void set_details(double w, double l, double wi, double h, string pt)
    {
        if (w >= 0.1 && w <= 50)
            weight = w;
        if (l >= 10 && l <= 200)
            length = l;
        if (wi >= 10 && wi <= 100)
            width = wi;
        if (h >= 10 && h <= 50)
            height = h;
        packageType = pt;
    }

    void calculateCost(double weight)
    {
        if (weight >= 0.1 && weight <= 1)
        {
            cost = 5 + (2 * weight);
        }
        else if (weight > 1 && weight <= 10)
        {
            cost = 10 + (1.5 * weight);
        }
        else if (weight > 10 && weight <= 50)
        {
            cost = 20 + (1 * weight);
        }
        cout << "Cost based on weight: $" << cost << endl;
    }

    void calculateCost(double length, double width, double height)
    {
        double volume = (length * width * height) / 1000000.0;

        if (volume < 0.1)
        {
            cost = 10 + (0.5 * volume);
        }
        else if (volume >= 0.1 && volume < 0.5)
        {
            cost = 15 + (0.25 * volume);
        }
        else
        {
            cost = 25 + (0.1 * volume);
        }
        cout << "Cost based on dimensions: $" << cost << endl;
    }

    void calculateCost(string packageType, double weight)
    {
        if (packageType == "Ground")
        {
            if (weight >= 0.1 && weight <= 1)
            {
                cost = 5 + (2 * weight);
            }
            else if (weight > 1 && weight <= 10)
            {
                cost = 10 + (1.5 * weight);
            }
            else if (weight > 10 && weight <= 50)
            {
                cost = 20 + (1 * weight);
            }
        }
        else if (packageType == "Air")
        {
            if (weight >= 0.1 && weight <= 1)
            {
                cost = 10 + (3 * weight);
            }
            else if (weight > 1 && weight <= 10)
            {
                cost = 20 + (2 * weight);
            }
            else if (weight > 10 && weight <= 50)
            {
                cost = 30 + (1.5 * weight);
            }
        }
        else if (packageType == "Express")
        {
            if (weight >= 0.1 && weight <= 1)
            {
                cost = 15 + (4 * weight);
            }
            else if (weight > 1 && weight <= 10)
            {
                cost = 30 + (3 * weight);
            }
            else if (weight > 10 && weight <= 50)
            {
                cost = 40 + (2 * weight);
            }
        }
        cout << "Cost for " << packageType << " package based on weight: $" << cost << endl;
    }
};

int main()
{
    Transportation t1;
    t1.set_details(25.5, 100, 40, 30, "Air");

    t1.calculateCost(5.0);

    t1.calculateCost(100, 40, 30);

    t1.calculateCost("Express", 3.5);
    return 0;
}