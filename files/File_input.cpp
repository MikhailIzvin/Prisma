//
// Created by Sveto Copy on 02.06.2021.
//

#include "File_input.h"

File_input::File_input(std::string path) {
    this->path = path;
}

void File_input::Read_from_file() {
    //посимвольное считываение из файла и запись в data
    std::string input_data;
    file.open(path, std::ifstream::in);
    if (!file.is_open()){
        std::cout << "file don't opened or file doesn't exist: " << path << std::endl;
        exit(1);
    } else {
        char c;
        while (file.get(c)) {
            std::cout << c;
        }
        std::cout << "\n";
    }
    file.close();
}
