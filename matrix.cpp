#include "matrix.h"
#include <iostream>
#include <iomanip>
#include <valarray>
#include <cassert>

using namespace std;

void matrix::createMatrix (int row, int col, int num[], matrix& mat)     //function creat matrix
{
    mat.row = row;
    mat.col = col;
    mat.data.resize (row * col);
    for (int i = 0; i < row * col; i++)
        mat.data [i] = num [i];

}


/// add two matrix -----------------//
matrix matrix ::operator+= (matrix& mat1)
{
    if(col==mat1.col && row==mat1.row)
    {

        for (int i= 0; i < row*col; i++)
        {
            mat1.data[i] = mat1.data[i]+data[i];

        }
    }
    else
    {

        cout<< "mat1 ,mat2 not the same dimensions .\n";

    }
    return mat1;
}
//__________________________________________
///subtract two matrix---------------//
matrix matrix ::operator-= (matrix& mat1)
{

    if(col==mat1.col && row==mat1.row)
    {

        for (int i=0; i<mat1.data.size(); i++)
        {
            mat1.data[i]= data[i]-mat1.data[i];

        }
    }
    else
    {

        cout<< "mat1 ,mat2 not the same dimensions .\n";
    }

    return mat1;
}
//__________________________________________
/// add scalar to matrix -----------//
matrix matrix ::operator+= (int scalar)
{
    for(int i=0; i<data.size(); i++ )
    {

        data[i]= data[i]+scalar;

    }
    return *this;
}
//__________________________________________
///sbtract scalar from matrix ------//
matrix matrix ::operator-= (int scalar)
{
    for(int i=0; i<data.size(); i++ )
    {

        data[i]= data[i]-scalar;


    }
    return *this;

}
//__________________________________________
/// add 1 to matrix ------------------//
matrix   matrix ::operator++ ()
{
    for(int i=0; i<data.size(); i++ )
    {

        data[i]= data[i]+1;
    }
    return *this;
}
//______________________________________
/// subtract 1 from matrix ---------------//
matrix   matrix ::operator-- ()
{


    for(int i=0; i<data.size(); i++ )
    {
        data[i]=data[i]-1;
    }
    return *this;
}
//__________________________________________
/// enter matrix-----------------------//
istream& operator>> (istream& in, matrix& mat)
{

    cout<<"enter the row and the collom \n ";
    cout<<"row = ";
    cin>>mat.row;
    cout<<" \ncolumn = ";
    cin>> mat.col;
    mat.data.resize(mat.col*mat.row);
    cout<<" \nenter data of matrix \n";
    for (int i=0; i<mat.col*mat.row; i++)
    {

        cin>>mat.data[i];

    }
    return in;
}
//__________________________________________
/// out matrix-----------------------//
ostream& operator<< (ostream& out,const matrix& mat )
{


    for (int i=0; i<mat.col*mat.row; i++)
    {

        cout<<mat.data[i];

    }
    return out;
}
