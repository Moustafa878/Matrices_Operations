#include <iostream>
#include <iomanip>
#include <valarray>
#include <cassert>
#include "matrix.h"
using namespace std;

int main()
{

    matrix g;
    cout<<"choose (1) if you will enter matrix....\nchoose(2) if you want to exit ...\n";
    int x,y,z;
    cin>>x;

    matrix mat1, mat2,mat3,mat4;


    if(x==1)
    {
        cout<<"what are you want : \n1- matrix operator+= & matrix operator-= \n2- matrix operator+=scalar & matrix operator-=scalar \n3- mat++ & mat--  " <<endl;
        int y;
        cin>>y;
        if (y==1)
        {
            cout<<"enter mat1 : \n";
            cin>>mat1;
            cout<<"\nenter mat2 : \n";
            cin>>mat2;
            int c ;
            cout << " 1-plus or 2-minus " <<endl;    //add to matrix entered
            cin >> c ;
            if (c ==1)
            {
                cout<<"\nmatrix operator+= :\n";
                cout<< (mat1+=mat2);
            }
            else if (c == 2)
            {
                cout<<"\nmatrix operator-= :\n";
                cout<<(mat1-=mat2);
            }
        }
        if(y==2)
        {
            int scalar,c;

            cout<<"enter mat : \n";
            cin>>mat3;
            cout<<"\nenter the scalar :  ";    /// subtract scalar from matrix
            cin>>scalar;
            cout << " 1-plus  or 2-mainus " <<endl;
            cin >> c;
            if (c ==1)
            {
                cout<<"\nmatrix operator+=scalar :\n";
                cout<<(mat3+=scalar);
            }
            else if (c == 2)
            {
                cout<<"\nmatrix operator-=scalar :\n";
                cout<<(mat3-=scalar);
            }

        }
        if(y==3)
        {
            int c ;
            cout<<"enter mat : \n";
            cin>>mat3;
            cout << " 1-plus  or 2-minus " <<endl; /// add 1 and subtract 1 from matrix
            cin >> c ;
            if (c == 1 )
            {
                cout<<"\nmat++ :\n";
                cout<< ++mat3;
            }
            else if (c == 2)
            {
                cout<<"\nmat-- :\n";
                cout<<(--mat3);
            }

        }


    }

    return 0;

}
