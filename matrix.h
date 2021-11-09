#ifndef MATRIX_H
#define MATRIX_H
#include<valarray>
#include <iostream>
using namespace std;
class matrix
{
   public:
          valarray<int> data;
          int row , col;
public:
    void createMatrix (int row, int col, int num[], matrix & mat);      //function create matrix


    /////////
    matrix operator+= (matrix& mat1);        /// add two matrix -----------------//
    matrix operator-= (matrix& mat1);        ///sbtract two matrix---------------//
    matrix operator+= (int scalar);          /// add scalar to matrix -----------//
    matrix operator-= (int scalar);          ///sbtract scalar from matrix ------//
    matrix operator =(matrix mat2  );           ///fill empty matrix by entered matrix-----------//

    matrix   operator++ ();                                           /// add 1 to matrix ------------------//
    matrix   operator-- ();                                           /// subtract 1 from matrix ---------------//
    friend istream& operator>> (istream& in, matrix& mat);         /// enter matrix-----------------------//
    ///////////
   friend ostream& operator<< (ostream& out,const matrix& mat );         ///the function of print









};

#endif // MATRIX_H
