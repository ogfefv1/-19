//
//  main.cpp
//  дз 19
//
//  Created by Егор Джемлиханов on 04.11.2024.
//

#include "MirGivotnih.hpp"
#include "Afrika.hpp"
#include "SevernaiaAmerika.hpp"
#include "Avstralia.hpp"
#include <iostream>

using namespace std;

void print_menu()
{
    cout << "   меню для управления   " << endl;
    cout << "1) добавить континент (африка)" << endl;
    cout << "2) добавить континент (северная америка)" << endl;
    cout << "3) добавить континент (австралия)" << endl;
    cout << "4) кормление травоядных" << endl;
    cout << "5) питание плотоядных" << endl;
    cout << "6) выход" << endl;
    cout << "выберите пункт: ";
}

int main()
{
    MirGivotnih world;
    bool is_running = true;
    int option;

    while (is_running)
    {
        system("cls");
        print_menu();
        cin >> option;

        switch (option)
        {
        case 1:
            {
            cout << "добавление континента африка" << endl;
            world.add_kontinent(new Afrika());
            break;
        }
        case 2:
            {
            cout << "добавление континента северная америка" << endl;
            world.add_kontinent(new SevernaiaAmerika());
            break;
        }
        case 3:
            {
            cout << "добавление континента австралия" << endl;
            world.add_kontinent(new Avstralia());
            break;
        }
        case 4:
            {
            cout << "все травоядные кормятся в мире" << endl;
            world.meals_travoiadnie();
            break;
        }
        case 5:
            {
            cout << "все плотоядные получают питание" << endl;
            world.nutrition_plotoiadnie();
            break;
        }
        case 6:
            {
            cout << "завершение работы программы" << endl;
            is_running = false;
            break;
        }
        default:
            cout << "ошибка, повторите ввод корректного номера" << endl;
            break;
        }
        cout << endl;
        system("pause");
    }

    return 0;
}
