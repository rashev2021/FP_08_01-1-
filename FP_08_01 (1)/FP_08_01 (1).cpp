#include <Windows.h>
#include <iostream>
#include "time.h"

using namespace std;


// К ЗАДАНИЮ 1
char symbol;

int LinesOneV(int deley) {
   
    for (int i = 0; i < 10; i++) {
        Sleep(deley);
        cout << " ";
        cout << symbol << endl;
    }
    return deley;
}
int LinesTwoV(int deley) {

    for (int i = 0; i < 10; i++) {
        Sleep(deley);
        cout << " ";
        cout << symbol << endl;
    }
    return deley;

}
int LinesThreeV(int deley) {

    for (int i = 0; i < 10; i++) {
        Sleep(deley);
        cout << " ";
        cout << symbol << endl;
    }
    return deley;
}

int LinesOneH(int deley) {

    for (int i = 0; i < 20; i++) {
        Sleep(deley);
        cout << " ";
        cout << symbol;
    }
    return deley;
}
int LinesTwoH(int deley) {

    for (int i = 0; i < 20; i++) {
        Sleep(deley);
        cout << " ";
        cout << symbol;
    }
    return deley;

}
int LinesThreeH(int deley) {

    for (int i = 0; i < 20; i++) {
        Sleep(deley);
        cout << " ";
        cout << symbol;
    }
    return deley;
}

// К ЗАДАНИЮ 2
void GameUser() {

    int number;
    int num;
    int pointUser = 0, pointBot = 0;
    string strIf1 = " Игра окончена \n";

    cout << endl;
    for (int i = 0; i < 3; i++) {

        cout << " ";
        cout << i + 1 << " Раунд начался... \n\n";
       
        do {
            cout << " Введите цифру 1: ";
            cin >> number;

        } while (number != 1);
        {
            cout << " Игральные кости брошены... \n";

            Sleep(1000);
            num = 1 + rand() % 6;
            pointUser += num;

            cout << " Вы: " << num << endl << endl;
            cout << " Бот бросает кости... \n";

            Sleep(1000);
            num = 1 + rand() % 6;
            pointBot += num;

            cout << " Бот: " << num << endl << endl;
            cout << " Итог после " << i + 1 << " раунда: \n";
            cout << " Вы = " << pointUser << endl;
            cout << " Бот = " << pointBot << endl << endl;
            Sleep(1000);
        }
        
    }
    if (pointUser > pointBot) {
        cout << " Вы победили!!!" << " Поздравляем" << endl;
        cout << strIf1 << endl;
    }
    if (pointBot > pointUser) {
        cout << " К сожалению Вы проиграли..." << endl;
        cout << strIf1 << endl;
    }
    if (pointUser == pointBot) {
        cout << " У Вас ничья." << endl;
        cout << strIf1 << endl;
    }

}
void GameBot() {

    char number = '1';
    int num;
    int pointUser = 0, pointBot = 0;
    string strIf1 = " Игра окончена \n";
    
    cout << endl;
    for (int i = 0; i < 3; i++) {

        cout << " ";
        cout << i + 1 << " Раунд начался... \n\n";

        do {

            cout << " Бот бросает кости... \n";
            Sleep(1000);
            num = 1 + rand() % 6;
            pointBot += num;

            cout << " Бот: " << num << endl << endl;
            cout << " Теперь Ваша очередь бросать кости \n";
            cout << " Введите цифру 1: ";

            cin >> number;

            if (number != '1') {
                cout << " Введены неверные значения... \n";
                cout << " Перезапустите игру. \n";
                break;
            }

            cout << " Игральные кости брошены... \n";

            Sleep(1000);
            num = 1 + rand() % 6;
            pointUser += num;
            cout << " Вы: " << num << endl << endl;
        
            cout << " Итог после " << i + 1 << " раунда: \n";
            cout << " Бот = " << pointBot << endl;
            cout << " Вы = " << pointUser << endl << endl;
            Sleep(1000);

        } while (number != '1');
        
           
    }
    if (pointUser > pointBot) {
        cout << " Вы победили!!!" << " Поздравляем" << endl;
        cout << strIf1 << endl;
    }
    if (pointBot > pointUser) {
        cout << " К сожалению Вы проиграли..." << endl;
        cout << strIf1 << endl;
    }
    if (pointUser == pointBot) {
        cout << " У Вас ничья." << endl;
        cout << strIf1 << endl;
    }

}
void Game() {

    int num1, num2;

    cout << " Определяем, кто будет ходить первым...\n";
    cout << endl;

    for (int i = 0; i < 2; i++) {

        Sleep(500);
        num1 = 1 + rand() % 5;
        num2 = 1 + rand() % 5;

        if (num1 == num2) {
            continue;
        }
        if (num1 > num2) {
            cout << " Первым ходите Вы \n";
            cout << " Ваш результат составил " << num1 << endl;
            cout << " Результат Бота составил " << num2 << endl;
            GameUser();
            break;
        }
        if (num2 > num1) {
            cout << " Первым ходит Бот \n";
            cout << " Ваш результат составил " << num1 << endl;
            cout << " Результат Бота составил " << num2 << endl;
            GameBot();
            break;
        }
   }
  
}

// К ЗАДАНИЮ 3
void OneLevel() {

    int a = 1, b = 20;
    int live;
    int numberUser;
    int hint;
    int randomNumber;
    int point = 0;

    cout << " Первый уровень. \n";
    live = (b - a + 1) / 2;
    cout << " Колличество жизней = " << live << endl << endl;
    randomNumber = a + rand() % (b - a);


    do {

        if (live == 0) {
            cout << " У Вас не осталось жизней чтобы продолжить игру" << endl;
            cout << " Игра окончена\n";
            return;
        }

        cout << " Геннерируется случайоне число ..... \n";
        Sleep(2000);
        cout << " Готово. Число загадано \n\n" << " Введите предпологаемое число: ";
        cin >> numberUser;

        if (numberUser == randomNumber) {
            cout << " Поздравляем, Вы угадали число!!!\n";
            cout << " Загаданное число: " << randomNumber << endl << endl;
            cout << " Повторить первый уровень - введите 1.\n";
            cout << " Перейти на второй уровень - введите 2.\n";
            cout << " Выйти из игры - введите 3.\n";
            break;
        }

        if (numberUser != randomNumber) {
            cout << " Вы не угадали число и у Вас минус одна жизнь" << endl;
            live--;
        
            cout << " Жизней осталось: " << live << endl << endl;
            cout << " Повторить попытку или взять подсказку? \n";
            cout << " За подсказку Вы лишаетесь одной жизни. \n";
            cout << " Использовать подсказку - введите 1. \n";
            cout << " Не спользовать подсказку - введите 0 или любое другое число: \n";
 
            cin >> hint;

            switch (hint)
            {
            case 0:
                cout << " Для продолжения игры введите число: ";
                cin >> numberUser;
                cout << endl;
                break;
            case 1:
                cout << " Вы использовали подсказку.\n";
                live--;
                cout << " Жизней осталось: " << live << endl << endl;
                cout << " Подсказка:\n" << " Загаданное число меньше показанного в 3 раза: " << randomNumber * 3 << endl;
                break;

            default:
                break;
            }
        }

    } while (numberUser > 0);

}
void TwoLevel() {

    int a = 1, b = 40;
    int live;
    int hint;
    int randomNumber;
    int numberUser;


    cout << " Второй уровень. \n";
    live = (b - a + 1) / 2;
    cout << " Колличество жизней = " << live << endl << endl;

    randomNumber = a + rand() % (b - a);

    do {
        cout << " Геннерируется случайоне число ..... \n";
        Sleep(2000);
        cout << " Готово. Число загадано \n\n" << " Введите предпологаемое число: ";
        cin >> numberUser;

        if (numberUser == randomNumber) {
            cout << " Поздравляем, Вы угадали число!!!\n";
            cout << " Загаданное число: " << randomNumber << endl << endl;
            cout << " Повторить первый уровень - введите 1.\n";
            cout << " Перейти на второй уровень - введите 2.\n";
            cout << " Выйти из игры - введите 3.\n";
            break;
        }

        if (numberUser != randomNumber) {
            cout << " Вы не угадали число и у Вас минус одна жизнь" << endl;
            live--;

            cout << " Жизней осталось: " << live << endl << endl;
            cout << " Повторить попытку или взять подсказку? \n";
            cout << " За подсказку Вы лишаетесь одной жизни. \n";
            cout << " Использовать подсказку - введите 1. \n";
            cout << " Не спользовать подсказку - введите 0 или любое другое число: \n";

            cin >> hint;

            switch (hint)
            {
            case 0:
                cout << " Для продолжения игры введите число: ";
                cin >> numberUser;
                cout << endl;
                break;
            case 1:
                cout << " Вы использовали подсказку.\n";
                live--;
                cout << " Жизней осталось: " << live << endl << endl;
                cout << " Подсказка:\n" << " Загаданное число меньше показанного в 3 раза: " << randomNumber * 3 << endl;
                break;

            default:
                break;
            }
        }

    } while (numberUser > 0);

}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // ЗАДАНИЕ 1
     /*
    int linesType, speed;

    cout << " Введите символ: ";
    cin >> symbol;
    cout << " Выберите направление отображения символа. \n" << " Введите 1 - вертикально или 2 - горизонтально: ";

    do {
        cin >> linesType;

        switch (linesType)
        {
        case 1:
            cout << " Выбранно вертикальное отображение. \n\n";
            cout << " Выберите скорость отображения линии.\n" << " Введите 1 - медленно, 2 - средне или 3 - быстро: \n\n\n";
            cout << " Для завершения программы введите 0: \n";

            do {
                cin >> speed;

                switch (speed)
                {
                case 0:
                    cout << " Завершение программы \n";
                        return 0;
                case 1:
                    cout << " Выбрана медленная скорость. \n\n";
                    LinesOneV(1000);
                    break;

                case 2:
                    cout << " Выбрана средняя скорость. \n\n";
                    LinesTwoV(500);
                    break;

                case 3:
                    cout << " Выбрана быстрая скорость. \n\n";
                    LinesThreeV(100);
                    break;

                default:
                    cout << " Введено неверное значение.Повтроите попытку...\n";
                    break;
                }

            } while (true);
           
            break;

        case 2:
            cout << " Выбранно горизонтальное отображение. \n\n";
            cout << " Выберите скорость отображения линии.\n" << " Введите 1 - медленно, 2 - средне или 3 - быстро: \n\n\n";
            cout << " Для завершения программы введите 0: \n";

            do {
                cin >> speed;

                switch (speed)
                {
                case 0:
                    cout << " Завершение программы \n";
                    return 0;
                case 1:
                    cout << " Выбрана медленная скорость. \n\n";
                    LinesOneH(1000);
                    break;

                case 2:
                    cout << " Выбрана средняя скорость. \n\n";
                    LinesTwoH(500);
                    break;

                case 3:
                    cout << " Выбрана быстрая скорость. \n\n";
                    LinesThreeH(100);
                    break;

                default:
                    cout << " Введено неверное значение.Повтроите попытку...\n";
                    break;
                }

            } while (true);

            break;

        default:
            cout << " Введено неверное значение.Повтроите попытку...\n";
            break;
        }

    } while (true);
   
   
   */

    // ЗАДАНИЕ 2
     /*
    int menu;
    string str = " Введены неверные значения. Пожалуйста повторите попытку.\n\n";
    string strIf = " Игра началась...\n";
    string strIf1 = " Игра окончена \n";
    srand(time(NULL));

    cout << " Добро пожаловать в игру.\n\n";
    cout << " Сделайте Ваш выбор: " << endl;
    cout << " Начать игру - нажмите 1\n" << " Выйти из игры - нажмите 2\n";

    do {
      
        cin >> menu;

        if (menu == 1) {
            cout << strIf;
            Game();
            break;
        }
        if (menu == 2) {
            cout << strIf1;
            break;
        }
        else {
            cout << str;
            
        }

    } while (true);
    */

    // К ЗАДАНИЮ 3
     /*
      int menu;
    string str = " Введены неверные значения. Пожалуйста повторите попытку.\n\n";
    string strIf = " Игра началась...\n";
    string strIf1 = " Игра окончена \n";
    srand(time(NULL));

    cout << " Добро пожаловать в игру.\n\n";
    cout << " Сделайте Ваш выбор: " << endl;
    cout << " Первый уровень - нажмите 1\n" << " Второй уровень - нажмите 2\n" << " Выход из игры - нажмите 3\n";
  
    do {
        cin >> menu;

        switch (menu)
        {
        case 1:
            OneLevel();
            break;
        case 2:
            TwoLevel();
            break;
        case 3:
            cout << " Выход из игры \n";
            return 0;

        default:
            cout << str;
            break;
        }
    } while (true);
     */
   
}
    