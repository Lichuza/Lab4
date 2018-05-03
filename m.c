#include"HeadP.h"
#include <stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_CTYPE, "rus");

	int c=0;

	while (1)
	{
		printf("\nВведите номер задания от 1-4\nДля выхода введите 0: ");
		c=input_i();	
	
			switch (c)
			{
			case 0:
				system("pause");
				return 0;
			case 1:
				tackVariable();
				break;

			case 2:
				HeapVariable();
				break;

			case 3:
				StackArray();
				break;

			case 4:
				HeapArray();
				break;
			default:
				printf("Не верный ввод\n");
				break;
		    }

	} 
}


