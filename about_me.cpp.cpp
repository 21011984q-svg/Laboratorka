#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif 

/*
* Программа: О себе
* Автор: Константин
* Дата: 02.10.2026
* Группа: ИСПкр - 252
*/
int main(){
#ifdef _WIN32
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
#endif // 

    // Заголовок
    std::cout << "================================" << std::endl;
    std::cout << "       Информация о студенте    " << std::endl;
    std::cout << "================================" << std::endl;

    // Личные данные
    std::cout << std::endl;
    std::cout <<"Имя: Константин" << std::endl;
    std::cout <<"Гпуппа: ИСПкр - 252" << std::endl;
    std::cout <<"Возраст: 17" << std::endl;

    // Увлечения 
    std::cout << std::endl;
    std::cout << "Мои увлечения:" << std::endl;
    std::cout << " 1. Играть в игры" << std::endl;
    std::cout << " 2. Общаться с друзьями" << std::endl;
    std::cout << " 3. Читать комиксы" << std::endl;

    //Мотивация 
    std::cout << std::endl;
    std::cout << "Почему я изучаю програмирование:" << std::endl;
    std::cout << "Чтобы получить профессию и с помощью неё жить" << std::endl;

    std::cout << std::endl;
    std::cout << "================================" << std::endl;

    return 0;
}
