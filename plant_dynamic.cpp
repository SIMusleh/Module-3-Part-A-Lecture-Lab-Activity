/* Program name: plant_dynamic.cpp
 * Author: Sahar Musleh
 * Date last updated: 11/13/2025
 * Purpose: Demonstrate dynamic object and dynamic array using Plant class from midterm project.
 */

#include <iostream>
#include <string>
using namespace std;

class Plant {
private:
    string name;
    double seedCost;
    double waterPerDay;
    string season;
    int squaresNeeded;
    bool needsWater;
    int daysPlanted;

public:
    Plant(string n = "Generic Plant", double cost = 1.0, double water = 1.0,
          string s = "Spring", int squares = 1, bool waterStatus = true, int days = 0)
        : name(n), seedCost(cost), waterPerDay(water), season(s),
          squaresNeeded(squares), needsWater(waterStatus), daysPlanted(days) {}

    void display() const {
        cout << "Plant: " << name << ", Cost: $" << seedCost
             << ", Water/day: " << waterPerDay << " quarts"
             << ", Season: " << season
             << ", Squares: " << squaresNeeded
             << ", Needs Water: " << (needsWater ? "Yes" : "No")
             << ", Days Planted: " << daysPlanted << endl;
    }
};

int main() {
    // Dynamic object
    Plant* singlePlant = new Plant("Tomato", 2.5, 1.2, "Summer", 2, true, 5);
    cout << "Single Plant Info:\n";
    singlePlant->display();

    // Dynamic array
    int size = 3;
    Plant* plantArray = new Plant[size]{
        Plant("Rose", 1.0, 0.5, "Spring", 1, true, 2),
        Plant("Corn", 3.0, 1.5, "Summer", 3, true, 10),
        Plant("Apple Tree", 5.0, 2.0, "Fall", 4, false, 30)
    };

    cout << "\nPlant Array Info:\n";
    for (int i = 0; i < size; i++) {
        plantArray[i].display();
    }

    // Clean up
    delete singlePlant;
    delete[] plantArray;

    return 0;
}