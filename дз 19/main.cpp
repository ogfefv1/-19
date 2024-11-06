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
    cout << "====== Меню для управления ======" << endl;
    cout << "1. Добавить континент (Африка)" << endl;
    cout << "2. Добавить континент (Северная Америка)" << endl;
    cout << "3. Добавить континент (Австралия)" << endl;
    cout << "4. Кормление травоядных" << endl;
    cout << "5. Питание плотоядных" << endl;
    cout << "6. Выход" << endl;
    cout << "Выберите пункт: ";
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
            cout << "Добавление континента Африка..." << endl;
            world.add_kontinent(new Afrika());
            break;
        }
        case 2:
            {
            cout << "Добавление континента Северная Америка..." << endl;
            world.add_kontinent(new SevernaiaAmerika());
            break;
        }
        case 3:
            {
            cout << "Добавление континента Австралия..." << endl;
            world.add_kontinent(new Avstralia());
            break;
        }
        case 4:
            {
            cout << "Все травоядные кормятся в мире..." << endl;
            world.meals_travoiadnie();
            break;
        }
        case 5:
            {
            cout << "Все плотоядные получают питание..." << endl;
            world.nutrition_plotoiadnie(); 
            break;
        }
        case 6:
            {
            cout << "Завершение работы программы..." << endl;
            is_running = false;
            break;
        }
        default:
            cout << "Ошибка. Повторите ввод корректного номера." << endl;
            break;
        }
        cout << endl;
        system("pause");
    }

    return 0;
}
