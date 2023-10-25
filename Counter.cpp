#include <iostream>
#include<string>
#include<Windows.h>

class Counter {
private:

    std::string YesorNot;
    char command;
    int num;

public:

    Counter() {
        num = 1;
    }
    Counter(int num) {
        this->num = num;
    }

   
    void StartProgram() {
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
           
        }
        
    }
    
    void Calculation() {
        while (command != 'x' && command != 'х') {
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> command;

            switch (static_cast<char>(command)) {
            case '+': num++; break;
            case '-': num--; break;
            case '=': std::cout << num <<"\n"; break;
            case 'x': std::cout << "До свидания!"; break;
            case 'х': std::cout << "До свидания!"; break;
            default: std::cout <<"Ошибка!Такого знака нет или не предусмотрен программой\n"; break;
            }
        }
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    Counter counter;
    counter.StartProgram();
    counter.Calculation();
 
    return 0;
}

