#include "Roation.h"

int main()
{
    int usrRows = 0;
    int usrCols = 0;

    cin>>usrRows>>usrCols;
    Matrix matrix1(usrRows,usrCols);

    matrix1.fill();
    matrix1.printMatrix();
    cout<<matrix1.determinant()<<endl;
    matrix1.scalarMult(2);
    matrix1.printMatrix();
    return 0;
}