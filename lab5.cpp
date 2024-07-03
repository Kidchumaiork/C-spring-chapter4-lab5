#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    char package;
    double gigabytes;

    cout << "Please enter your package selection (A, B, or C):" << "\n";
    cin >> package;
    if (package == 'A' || package == 'B' || package == 'C')
    {
        cout << "Please enter gigabytes of data used:" << "\n";
        cin >> gigabytes;
        if (gigabytes > 0 && gigabytes < 5000)
        {
            switch (package)
            {
            case 'A':
                if (gigabytes <= 4)
                {
                    cout << "Total charges are: $39.99";
                }
                else
                {
                    double AdGigabytes = (gigabytes - 4) * 10 + 39.99;
                    cout << "Total charges are: $" << AdGigabytes;
                }
                
                break;
            case 'B':
                if (gigabytes <= 8)
                {
                    cout << "Total charges are: $59.99";
                }
                else
                {
                    double AdGigabytes = (gigabytes - 8) * 5 + 59.99;
                    cout << "Total charges are: $" << AdGigabytes;
                }
                break;
            case 'C':
                cout << "Total charges are: $69.99";
                break;
            
            default:
                break;
            }
        }
        else
        {
            cout << "Invalid number of gigabytes." << "\n";
        }
        
        
    }
    else
    {
        cout << "Invalid package selection." << "\n";
    }
    
    return 0;
}
