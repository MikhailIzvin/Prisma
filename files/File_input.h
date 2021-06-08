//
// Created by Sveto Copy on 02.06.2021.
//

#ifndef FRUITS_FILE_INPUT_H
#define FRUITS_FILE_INPUT_H
#include <fstream>
#include <string>
#include <vector>
#include <iostream>

class File_input {
private:
    std::ifstream file;
    std::string path;
public:
    //чтение данных из файла запись
    //в path заносится имя файла из которого считываются данные
    //например files/myFile.txt
    File_input(std::string path);

    //запись данных в строку в вектор строк data
    //из файла указанного в path
    void Read_from_file();
};


#endif //FRUITS_FILE_INPUT_H
