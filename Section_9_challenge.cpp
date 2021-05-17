// Section_9_challenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <conio.h>
#include <algorithm>

using namespace std;

int main()
{
    std::cout << "++++++++++ section 9 ++++++++++++\n\n";

    bool jatkuu(true);

    vector <int> vec{};


    // loop so lon that Q or q changes selection to be false
    do {

        char valinta;

        cout << "\nP print numbers" << endl;
        cout << "A Add numebrs to vector" << endl;
        cout << "M Mean value of vector" << endl;
        cout << "S Smallest in vector" << endl;
        cout << "L Largest number in vector" << endl;
        cout << "Q Quit" << endl << endl;

        cin >> valinta;

        if (valinta != 'Q' and valinta != 'q')  //muu kuin q/Q annettu
        {

            switch (valinta)
            {
            case 'P':
            case'p':
                if (vec.size() > 0)
                {
                    for (auto numerot : vec)
                    {
                        cout << numerot << " ";
                    }
                }
                else
                {
                    cout << "\n\nTyhjaa taynna" << endl;
                }
                break;

            case 'A':
            case 'a':

                int input_luku;
                cout << "Anna numero vektoriin: " << endl;
                cin >> input_luku;
                vec.push_back(input_luku);
                cout << input_luku << " lisatty" << endl;
                break;

            case 'M':
            case 'm':
                if (vec.size() > 1)
                {

                    float summa = 0.0;
                    float avg = 0.0;

                    for (unsigned i = 0; i < vec.size(); i++) //lasketaan keskiarvo 
                    {
                        summa = summa + vec[i];
                        avg = summa / vec.size();
                    }
                    cout << "\nKeskiarvo: " << avg << endl;
                }
                else
                {
                    cout << "Pitaa olla vahintaan kaksi numeroa vektorissa keskiarvoa varten" << endl;
                }
                break;

            case 'S':
            case 's':

                if (vec.size() > 0)
                {
                    cout << "s small valitu" << endl;
                    cout << "\nMin Element = " << *min_element(vec.begin(), vec.end());
                }

                else
                {
                    cout << "vektori tyhja" << endl;
                }
                break;

            case 'L':
            case 'l':

                if (vec.size() > 1)
                {
                    int max = vec[0];
                    for (unsigned i=0 ; i < vec.size(); i++)
                    {
                        if (vec[i] > max)
                        {
                            max = vec[i];
                        }
                        else
                        {
                            max = max;
                        }
                    }
                    cout << "Maksimi: " << max<<endl;
                }
                else
                {
                    if (vec.size() == 1)
                    {
                        cout << "Maks arvo vektorissa: " << vec[0];
                    }
                    else
                    {
                        cout << "vektori tyhja" << endl;
                    }

                }
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
