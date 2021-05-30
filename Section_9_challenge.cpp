// Section_9_challenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <conio.h>
#include <algorithm>

using namespace std;

char print_menu();
void print_vector(const vector<int> v);
void add_number(vector<int> &vec);
double calc_avarage(const vector<int> v);
void print_smallest(const vector<int> v);
void print_max(const vector<int> v);

int main()
{
    std::cout << "++++++++++ section 9 ++++++++++++\n\n";

    cout << "++++++++++ functioilla ++++++++++++\n\n";
    cout << "++++++++++ Section 9 challenge ++++++++++++\n\n";

    bool jatkuu(true);

    vector <int> vec{};

    // loop so long that Q or q changes selection to be false
    do {

        char valinta =print_menu();

        if (toupper(valinta) != 'Q')  //muu kuin q/Q annettu
        {
            switch (toupper(valinta))
            {
            case 'P':
                print_vector(vec);
                break;

            case 'A':
                add_number(vec);
                break;

            case 'M':
           
               // double avg{};
               // avg = calc_avarage(vec);
                cout << "Mean value is: " << calc_avarage(vec) << endl;
                break;

            case 'S':
            //case 's':

                print_smallest(vec);
                break;

            case 'L':
            //case 'l':

                print_max(vec);
                break;

            default:
                cout << "Ei validi valinta!" << endl;
                break;

            }
        }
        
        else
        {
            cout << "\n\n\t\t\tTHE END" << endl;
            jatkuu = false;
        }
               
        
    } while (jatkuu);


    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

char print_menu()
{
    char valinta{ ' ' };
    cout << "\nP print numbers" << endl;
    cout << "A Add numebrs to vector" << endl;
    cout << "M Mean value of vector" << endl;
    cout << "S Smallest in vector" << endl;
    cout << "L Largest number in vector" << endl;
    cout << "Q Quit" << endl << endl;

    cin >> valinta;
    
    return valinta;
}

void print_vector(const vector<int> vec)
{
    if (vec.size() == 0)
        cout << "tyhjaa taynna" << endl;

    else
    {
        for (auto numerot : vec) {
            cout << numerot << " ";
        }
    }
}

void add_number(vector<int> &vec) {
    int input_luku;
    cout << "Anna numero vektoriin: " << endl;
    cin >> input_luku;
    vec.push_back(input_luku);
    cout << input_luku << " lisatty" << endl;
}

double calc_avarage(const vector<int> v) {

    if (v.size() > 0) {
        int summa{};
        
        for (auto num : v)
            summa += num;

        cout << "summa: " << summa << " maara: " << v.size() << endl;
        return (static_cast<double>(summa) / v.size());
    }
    else
    {
        return 0;
    }
    
}

void print_smallest(const vector<int> v)
{
    if (v.size() > 0)  {
        cout << "s small valitu" << endl;
        cout << "\nMin Element = " << *min_element(v.begin(), v.end());
    }

    else {
        cout << "vektori tyhja" << endl;
    }
}

void print_max(const vector<int> v)
{
    if (v.size() > 1)
    {
        int max = v.at(0);
        for (unsigned i = 0; i < v.size(); i++) {
            if (v[i] > max)
            {
                max = v[i];
            }
        }
        cout << "Maksimi: " << max << endl;
    }
    else
    {
        if (v.size() == 1)  {
            cout << "Maks arvo vektorissa: " << v[0];
        }
        else {
            cout << "vektori tyhja" << endl;
        }
    }
}
