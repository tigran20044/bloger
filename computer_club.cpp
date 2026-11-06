#include<iostream>
#include<string>

int main() {
    std::string clubName;
    std::string city;
    std::string manager;
    int computers, hours, price;
    int drinks, drinkPrice, snacks, snackPrice;
    int rent, electricity, salary, advertising, balance;

    std::cin >> clubName >> city >> manager;
    std::cin >> computers >> hours >> price;
    std::cin >> drinks >> drinkPrice >> snacks >> snackPrice;
    std::cin >> rent >> electricity >> salary >> advertising >> balance;

    int total1 = computers * hours * price;
    int total2 = drinks * drinkPrice;
    int total3 = snacks * snackPrice;
    int total4 = total1 + total2 + total3;
    int ras = rent + electricity + salary + advertising;
    int prib = total4 - ras;
    int Itogbalance = balance + prib;

    std::cout << "========================================" << std::endl;
    std::cout << "          COMPUTER CLUB REPORT          " << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "Название клуба: " << clubName << std::endl;
    std::cout << "Город: " << city << std::endl;
    std::cout << "Администратор: " << manager << std::endl;

    std::cout << "---------- ОБОРУДОВАНИЕ ----------" << std::endl;
    std::cout << "Количество компьютеров: " << computers << std::endl;
    std::cout << "Оплаченные часы на каждом ПК: " << hours << std::endl;
    std::cout << "Цена за час: " << price << std::endl;

    std::cout << "---------- ПРОДАЖИ ----------" << std::endl;
    std::cout << "Продано напитков: " << drinks << std::endl;
    std::cout << "Продано снеков: " << snacks << std::endl;

    std::cout << "---------- ВЫРУЧКА ----------" << std::endl;
    std::cout << "Компьютеры: " << total1 << std::endl;
    std::cout << "Напитки: " << total2 << std::endl;
    std::cout << "Снеки: " << total3 << std::endl;
    std::cout << "Общая выручка: " << total4 << std::endl;

    std::cout << "---------- РАСХОДЫ ----------" << std::endl;
    std::cout << "Аренда: " << rent << std::endl;
    std::cout << "Электричество: " << electricity << std::endl;
    std::cout << "Зарплата: " << salary << std::endl;
    std::cout << "Реклама: " << advertising << std::endl;
    std::cout << "Общие расходы: " << ras << std::endl;

    std::cout << "---------- ФИНАНСЫ ----------" << std::endl;
    std::cout << "Начальный баланс: " << balance << std::endl;
    std::cout << "Чистая прибыль: " << prib << std::endl;
    std::cout << "Итоговый баланс: " << Itogbalance << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "              ОТЧЕТ ЗАВЕРШЕН            " << std::endl;
    std::cout << "========================================" << std::endl;
}