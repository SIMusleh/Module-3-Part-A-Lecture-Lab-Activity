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
    plant(string n = "Generic Plant", double cost = 1.0, double water = 1.0,
    string s = "Spring", int squares = 1, bool waterStatus = true, int days = 0)
    : name(n), seedCost(cost), waterPerDay(water), season(s), squaresNeeded(squares), needsWater(waterStatus), daysPlanted(days) {}

    
 }