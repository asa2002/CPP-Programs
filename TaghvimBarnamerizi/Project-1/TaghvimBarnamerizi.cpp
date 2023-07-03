#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    int x;
    cout << "please enter number between 1 to 7 for days of week : ";
    cin >> x;
    switch (x) {
    case 1:
        cout << '\n' << "saturday" << '\n' << '\n';
        char y;
        cout << "Choose between EditPlane(E) Plane(P) Or Nothing(N) : ";
        cin >> y;
        if (y == 'e' || y == 'E')
        {
            string e;
            cin >> e;
            cout << "Your plane are Saved!";
        }
        else if (y == 'p' || y == 'P')
        {
            cout << "1. Go to University" << '\n' << "2. Go to GYM" << '\n' << "3. Eat Food";
        }
        else if (y == 'n' || y == 'N')
        {
            break;
        }
        else 
        {
            cout << "Error";
        }
        break;
    case 2:
        cout << '\n' << "sunday" << '\n' << '\n';
        cout << "Choose between EditPlane(E) Plane(P) Or Nothing(N) : ";
        cin >> y;
        if (y == 'e' || y == 'E')
        {
            string e;
            cin >> e;
            cout << "Your plane are Saved!";
        }
        else if (y == 'p' || y == 'P')
        {
            cout << "1. Go to University" << '\n' << "2. Go to GYM" << '\n' << "3. Eat Food";
        }
        else if (y == 'n' || y == 'N')
        {
            break;
        }
        else
        {
            cout << "Error";
        }
        break;
    case 3:
        cout << '\n' << "monday" << '\n' << '\n';
        cout << "Choose between EditPlane(E) Plane(P) Or Nothing(N) : ";
        cin >> y;
        if (y == 'e' || y == 'E')
        {
            string e;
            cin >> e;
            cout << "Your plane are Saved!";
        }
        else if (y == 'p' || y == 'P')
        {
            cout << "1. Go to University" << '\n' << "2. Go to GYM" << '\n' << "3. Eat Food";
        }
        else if (y == 'n' || y == 'N')
        {
            break;
        }
        else
        {
            cout << "Error";
        }
        break;
    case 4:
        cout << '\n' << "tusday" << '\n' << '\n';
        cout << "Choose between EditPlane(E) Plane(P) Or Nothing(N) : ";
        cin >> y;
        if (y == 'e' || y == 'E')
        {
            string e;
            cin >> e;
            cout << "Your plane are Saved!";
        }
        else if (y == 'p' || y == 'P')
        {
            cout << "1. Go to University" << '\n' << "2. Go to GYM" << '\n' << "3. Eat Food";
        }
        else if (y == 'n' || y == 'N')
        {
            break;
        }
        else
        {
            cout << "Error";
        }
        break;
    case 5:
        cout << '\n' << "thirsday" << '\n' << '\n';
        cout << "Choose between EditPlane(E) Plane(P) Or Nothing(N) : ";
        cin >> y;
        if (y == 'e' || y == 'E')
        {
            string e;
            cin >> e;
            cout << "Your plane are Saved!";
        }
        else if (y == 'p' || y == 'P')
        {
            cout << "1. Go to University" << '\n' << "2. Go to GYM" << '\n' << "3. Eat Food";
        }
        else if (y == 'n' || y == 'N')
        {
            break;
        }
        else
        {
            cout << "Error";
        }
        break;
    case 6:
        cout << '\n' << "wendsday" << '\n' << '\n';
        cout << "Choose between EditPlane(E) Plane(P) Or Nothing(N) : ";
        cin >> y;
        if (y == 'e' || y == 'E')
        {
            string e;
            cin >> e;
            cout << "Your plane are Saved!";
        }
        else if (y == 'p' || y == 'P')
        {
            cout << "1. Go to University" << '\n' << "2. Go to GYM" << '\n' << "3. Eat Food";
        }
        else if (y == 'n' || y == 'N')
        {
            break;
        }
        else
        {
            cout << "Error";
        }
        break;
    case 7:
        cout << '\n' << "friday" << '\n' << '\n';
        cout << "Choose between EditPlane(E) Plane(P) Or Nothing(N) : ";
        cin >> y;
        if (y == 'e' || y == 'E')
        {
            string e;
            cin >> e;
            cout << "Your plane are Saved!";
        }
        else if (y == 'p' || y == 'P')
        {
            cout << "1. Go to University" << '\n' << "2. Go to GYM" << '\n' << "3. Eat Food";
        }
        else if (y == 'n' || y == 'N')
        {
            break;
        }
        else
        {
            cout << "Error";
        }
        break;
    default:
        cout << " this number is not true becuase it's not beetween 1 to 7 ";
        break;
        getchar();
    }
    
}