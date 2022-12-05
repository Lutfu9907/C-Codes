#include <stdlib.h>
#include <stdio.h>

#define Visorsize 20

typedef enum VisorCell
{
    Blank = 0,
    Full = 1
} VisorCell;

typedef VisorCell Visor[Visorsize][Visorsize];

void makeArrayScreen(Visor a)
{
    for (int i = 0; i < Visorsize; i++)
    {
        for (int j = 0; j < Visorsize; j++)
        {
            a[i][j] = 0;
        }
    }
}

void drawHLine(Visor a, int Row, int Col, int Len)
{
    for (int j = Col; j < Col + Len; Col++)
    {
        if ((a[Row][j] = 0))
        {
            a[Row][j] = 1;
        }
        else if ((a[Row][j] = 1))
        {
            a[Row][j] = 1;
        }
    }
}

void drawVLine(Visor a, int Row, int Col, int Len)
{
    for (int i = Row; i < Row + Len; Row++)
    {
        if ((a[Col][i] = 0))
        {
            a[Col][i] = 1;
        }
        else if ((a[Col][i] = 1))
        {
            a[Col][i] = 1;
        }
    }
}