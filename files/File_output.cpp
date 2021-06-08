//
// Created by Sveto Copy on 02.06.2021.
//

#include "File_output.h"

File_output::File_output(std::string path) {
    this->path = path;
}

void File_output::Writing_to_file(std::string data) {
    file.open(path, std::ofstream::app);
    if (!file.is_open()) {
        std::cout << "file don't opened: " << path << std::endl;
        exit(1);
    } else {
        file << data;
    }
    file.close();
}
