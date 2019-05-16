#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include "func.h"


int main() 
{
	setlocale(LC_ALL, "Rus");
	bool flag;
	int number = 0, t;
	deque* d;
	Create(d);
	menu();
	while (number != 12)
	{
		scanf("%d", &number);
		switch(number)
		{
			case 1:
				printf("\nВведите целочисленное значение: ");
				scanf("%d", &t);
				flag = Push_front(d, t);
				if (!flag) {
					printf("\nДек заполнен\n");
				}
				break;
			case 2:
				printf("\nВведите целочисленное значение: ");
				scanf("%d", &t);
				flag = Push_back(d, t);
				if (!flag) {
					printf("\nДек заполнен\n");
				}
				break;
			case 3:
				flag = Pop_front(d);
				if (!flag) {
					printf("\nДек пустой\n");
				}
				break;
			case 4:
				flag = Pop_back(d);
				if (!flag) {
					printf("\nДек пустой\n");
				}
				break;
			case 5:
				printf("\nПервый элемент: %d\n", Top(d));
				break;
			case 6:
				printf("\nПоследний элемент: %d\n", Last(d));
				break;
			case 7:
				flag = Empty(d);
				if (flag)
				{
					printf("\nПусто\n");
				} else {
					printf("\nНе пусто\n");
				}
				break;
			case 8:
				printf("\nРазмер дека: %d\n", size(d));
				break;
			case 9:
				Sort(d);
				printf("\nУдаляемый элемент - %d\n", Last(d));
				Pop_back(d);
				break;
			case 10:
				print(d);
				printf("\n");
				break;
			case 11:
				menu();
				break;
			default:
				break;
		}
		if (number == 12)
		{
			break;
		}
	}

	return 0;
}