#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Dashboard class
class Dashboard {
public:
    Dashboard(string title) : title(title) {}

    void addWidget(string name) {
        widgets.push_back(name);
    }

    void display() {
        cout << "Dashboard: " << title << endl;
        cout << "Widgets:" << endl;
        for (auto& widget : widgets) {
            cout << "  - " << widget << endl;
        }
    }

private:
    string title;
    vector<string> widgets;
};

int main() {
    // Create a dashboard
    Dashboard dashboard("My Minimalist Dashboard");

    // Add widgets
    dashboard.addWidget("Calendar");
    dashboard.addWidget("To-Do List");
    dashboard.addWidget("Weather");

    // Display the dashboard
    dashboard.display();

    return 0;
}