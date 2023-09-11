#include <iostream>

int main()
{
  int area;
  int radio;
  
  printf("Radio: ");
  scanf_s("%i", &radio);
 
  area = radio*3.14;
  printf("El circulo tiene un area de %i",area);
}