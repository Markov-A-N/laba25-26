#include <stdio.h>
#include "func.h"
#include <locale.h>

void menu()
{
	printf("1. Добавить элемент в начало\n2. Добавить элемент в конец\n"
		   "3. Удалить первый элемент\n4. Удалить последний элемент\n"
		   "5. Вывести первый элемент\n6. Вывести последний элемент\n"
		   "7. Проверка на пустоту\n"
		   "8. Узнать размер дека\n9. Поиск и удаление максимального элемента\n"
		   "10. Печать дека\n11. Вывести меню.\n12.Выход\n");
}