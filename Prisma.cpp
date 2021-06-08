//
//
//

#include "Prisma.h"
using namespace std;

Prisma::Prisma(Params prisma) {
    this->prisma = prisma;
}

void Prisma::handler(int value) {
    switch (value) {
        case 0:
            cout << "спасибо за внимание!";
            exit(0);
        case 1:
            cout << prisma.height;
            break;
        case 2:
            cout << prisma.numbers_of_faces;
            break;
        case 3:
            cout << prisma.base_area;
            break;
        case 4:
            cout << prisma.side_length;
            break;
        case 5:
            cout << prisma.bulk;
            break;
        case 6:
            double height;
            cout << ":";
            cin >> height;
            prisma.height = height;
            break;
        case 7:
            double side;
            cout << ":";
            cin >> side;
            prisma.side_length = side;
        case 8:
            int numbers;
            cout << ":";
            cin >> numbers;
            prisma.numbers_of_faces = numbers;
        case 9:
            double area;
            cout << ":";
            cin >> area;
            prisma.base_area = area;
        default:
            cout << "введите корректное число!";
    }
}
