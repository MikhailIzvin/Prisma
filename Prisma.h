//
// Created by Sveto Copy on 07.06.2021.
//

#ifndef TEST_PRISMA_H
#define TEST_PRISMA_H
#include "cmake-build-debug/params.h"
#include <functional>
#include <iostream>
#include "cmake-build-debug/params.h"

class Prisma {
private:
    Params prisma;
public:
    Prisma(Params prisma);
    //selection of prism value
    void handler(int value);
};


#endif //TEST_PRISMA_H
