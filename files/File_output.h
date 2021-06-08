//
// Created by Sveto Copy on 02.06.2021.
//

#ifndef FRUITS_FILE_OUTPUT_H
#define FRUITS_FILE_OUTPUT_H
#include <fstream>
#include <string>
#include <iostream>

class File_output {
private:
    std::ofstream file;
    std::string path;
public:
    //создание файла и запись в него информации
    //в path заносится имя файла, расширение и путь до туда где файл должен быть создан
    //например files/myFile.txt
    File_output(std::string path);

    //запись данных в файл
    //в функцию передается данные, которые мы хотим записать
    //в файл указанный в path
    void Writing_to_file(std::string data);
};


#endif //FRUITS_FILE_OUTPUT_H
