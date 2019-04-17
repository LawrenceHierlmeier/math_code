#ifndef ROTATION_H
#define ROTATION_H

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

class Matrix
{
    private:
        int cols;
        int rows;
        int **matrix = nullptr;
   
    public:
    
        Matrix(int usrRows, int usrCols);
    
        ~Matrix();

        void printMatrix();

        int getRows() const;

        int getCols() const;

        void fill();

        int determinant();

        void scalarMult(int n);

        //void vextorMult(Matrix vect);
};

void vectorMult(Matrix A, Matrix B)


#include "Rotation.hpp"
#endif