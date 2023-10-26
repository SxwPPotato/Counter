#include <iostream>
#include<string>
#include<Windows.h>

class Counter {
private:

    int num;

public:

    Counter() {
        num = 1;
    }
    Counter(int num) {
        this->num = num;
    }

    void add() {
        num++;
    }
    void subtraction() {
        num--;
    }
    void equals() {
        std::cout << num <<"\n";
    }

  
};


void Command(Counter & counter) {
    char command;
    do {
        
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        switch (static_cast<char>(command)) {
        case '+': counter.add(); break;
        case '-': counter.subtraction(); break;
        case '=': counter.equals(); break;
        case 'x': std::cout << "До свидания!"; break;
        case 'х': std::cout << "До свидания!"; break;
        default: std::cout << "Ошибка!Такого знака нет или не предусмотрен программой\n"; break;
        }
    } while (command != 'x' && command != 'х');
}



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string YesorNot;
    int num;
    Counter counter;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> YesorNot;
    while (YesorNot != "да" && YesorNot != "нет") {
        std::cout << "Вы ввели неправильное значение \n";
        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        std::cin >> YesorNot;
    }
    if (YesorNot == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> num;
        Counter counter(num);

        Command(counter);
    }
   
    else {
        Command(counter);

    }
   
    return 0;
}

