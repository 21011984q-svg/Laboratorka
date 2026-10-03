
#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;
/*
* Программа: О себе
* Автор: Константин
* Дата: 02.10.2026
* Группа: ИСПкр - 252
*/
int main() {
#ifdef _WIN32
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
#endif

    // Заголовок
    cout << "================================" << endl;
    cout << "       Информация о студенте    " << endl;
    cout << "================================" << endl;

    // Личные данные
    cout << endl;
    cout << "Имя: Константин" << endl;
    cout << "Гпуппа: ИСПкр - 252" << endl;
    cout << "Возраст: 17" << endl;

    // Увлечения 
    cout << endl;
    cout << "Мои увлечения:" << endl;
    cout << " 1. Играть в игры" << endl;
    cout << " 2. Общаться с друзьями" << endl;
    cout << " 3. Читать комиксы" << endl;

    //Мотивация 
    cout << endl;
    cout << "Почему я изучаю програмирование:" << endl;
    cout << "Чтобы получить профессию и с помощью неё жить" << endl;

    cout << endl;
    cout << "================================" << endl;

    return 0;
}