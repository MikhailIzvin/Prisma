#include "Prisma.h"
#include "cmake-build-debug/params.h"
#include "files/File_input.h"
using namespace std;


int main() {
    std::string button;
    std::string path = "files/params_of_prisma.txt";
    File_input file(path);
    Params prisma;
    Prisma params(prisma);
    while (true) {
        file.Read_from_file();
        cout << endl << "введите занчение: ";
        cin >> button;
        try {
            params.handler(stoi(button));
        } catch (std::invalid_argument&){
            cout << "введите число, а не буквы!" << endl;
            continue;
        }
        cout << endl;
    }
}
