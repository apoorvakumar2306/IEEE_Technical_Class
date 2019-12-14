#include <stdio.h>
void main(){
int noOfRows;
printf("number of rows to be printed\n");
    scanf("%", &noOfRows);
int row, colSpaces, colCHar;
for (row = 0; row < noOfRows; row++)
{
  for (colSpaces = noOfRows - row; colSpaces >= 1; colSpaces--)
  {
    printf(" ");
  }
  int printChar = 1;
  int num = row;
  int den = 1;
  for (colCHar = 0; colChar<= row; colChar++)
  {
    printf("%d", printChar);
    printChar = printChar * num;
    printChar = printChar / den;
    num--;
    den++;
  }
  printf("\n");
}
