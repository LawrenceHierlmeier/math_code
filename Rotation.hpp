Matrix::Matrix(int usrRows,int usrCols)
{
    rows = usrRows;
    cols = usrCols;
    matrix = new int *[rows];

    for(int i = 0; i < rows; i++)
    {
        matrix[i] = new int [cols];
    }

}

Matrix::~Matrix()
{
    for(int i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
    matrix = nullptr;
}

void Matrix::printMatrix()
{
    for(int i = 0; i < rows; i++)
    {
        cout<<"[";
        for(int j = 0; j < cols; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }
}

int Matrix::getRows() const
{
    return rows;
}

int Matrix::getCols() const
{
    return cols;
}

void Matrix::fill()
{
    for(int i = 0; i < rows; i++)
    {
        cout<<"New Row"<<endl;
        for(int j = 0; j < cols; j++)
        {
            cin>>matrix[i][j];
        }
    }
    return;
}

int Matrix::determinant()
{
    int det = 0;
    if((rows == 2) && (cols == 2))
    {
        det += (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
        return det;
    }
    else
    {
        for(int n = 0; n < cols; n++)
        {
            int a = 0;
            int b = 0;
            Matrix small(rows-1,cols-1);
            for(int i = 1; i < rows; i++)
            {
                for(int j = 0; j < cols; j++)
                {
                    if(j != n)
                    {
                        small.matrix[a][b] = matrix[i][j];
                        b++;
                    }
                }
                b = 0;
                a++;
            }

            det += ((pow(-1,n)) * matrix[0][n] * small.determinant());
        }

        return det;
    }

}

void Matrix::scalarMult(int n)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            matrix[i][j] *= n;
        }
    }
    return;
}

void Matrix::vectorMult(Matrix vect)
{
    if(cols == vext.rows)
    {
        
    }
    else
    {
        cout << "Cannot Multiply Matrices"<<endl;
    }
    

    return;
}