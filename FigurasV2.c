#include <iostream>

int main()
{
  int area;
  int alturaDelRectangulo;
  int baseDelRectangulo;
  printf("Altura: ");
  scanf_s("%i", &alturaDelRectangulo);
  printf("Base: ");
  scanf_s("%d", &baseDelRectangulo);
  area = baseDelRectangulo * alturaDelRectangulo;
  printf("El cuadro de %-10i x %-10i tiene area de %-10i",base,altura, area);
}