#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        string timeStr;
        cin >> timeStr;

        stringstream ss(timeStr);
        int hours, minutes;
        char colon;
        ss >> hours >> colon >> minutes;

        string period = (hours < 12) ? "AM" : "PM";

        hours = hours % 12;
        if (hours == 0) {
            hours = 12;
        }

        stringstream result;
        result << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << " " << period;

        cout << result.str() << endl;
    }

    return 0;
}
