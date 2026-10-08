#include <iostream>

using std::endl;
using std::cout;
using std::cin;
using std::string;

class Time
{
    int hours;
    int minutes;
    int seconds;

public:

    void time()
    {
        cout << "Enter hours: ";
        cin >> hours;
        if(hours >24 || hours<0 ){
            cout<<"Error: InValid hours"<< endl;
            exit(0);
        }

        cout << "Enter minutes: ";
        cin >> minutes;
        if(minutes >59 || minutes<0 ){
            cout<<"Error: InValid minutes"<< endl;
            exit(0);
        }
        cout << "Enter seconds: ";
        cin >> seconds;
        if(seconds >59 || seconds<0 ){
            cout<<"Error: InValid seconds"<< endl;
            exit(0);
        }}


    void display()
    {
        cout << "24-Hour Format: ";

        if (hours < 10)
            cout << "0";

        cout << hours << ":";

        if (minutes < 10)
            cout << "0";

        cout << minutes << ":";

        if (seconds < 10)
            cout << "0";

        cout << seconds << endl;

        int h = hours;
        string period;

        if (h >= 12)
            period = "PM";
        else
            period = "AM";

        if (h == 0)
            h = 12;
        else if (h > 12)
            h = h - 12;

        cout << "12-Hour Format: ";

        if (h < 10)
            cout << "0";

        cout << h << ":";

        if (minutes < 10)
            cout << "0";

        cout << minutes << ":";

        if (seconds < 10)
            cout << "0";

        cout << seconds << " " << period << endl;
    }
};

int main()
{
    Time t1;

    t1.time();
    t1.display();

    return 0;
}
