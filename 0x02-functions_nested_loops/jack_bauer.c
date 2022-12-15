#include "main.h"
#include <stdlib.h>
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 3; i++){
		if (i == 0){
			_putchar('0');
		} else if ( i == 1){
			_putchar('1');
		} else {
			_putchar('2');
		}

		for (j = 0; j < 4; j++){
			if (j == 0){
				_putchar('0');
			} else if (j == 1){
				_putchar('1');
			} else if (j == 2){
				_putchar('2');
			} else {
				_putchar('3');
			}
		
		
			for (k = 0; k < 6; k++){
				if (k == 0){
					_putchar(':');
					_putchar('0');
				} else if (k == 1){
					_putchar(':');
					_putchar('1');
				} else if (k == 2){
					_putchar(':');
					_putchar('2');
				} else if (k == 3){
					_putchar(':');
					_putchar('3');
				} else if (k == 4){
					_putchar(':');
					_putchar('4');
				} else {
					_putchar(':');
					_putchar('5');
				}
		
			
		
		
				for (l = 0; l < 10; l++){
					if (l == 0){
						_putchar('0');
						_putchar('\n');
						continue;
					} else if (l == 1){
						_putchar('1');
						_putchar('\n');
						break;
					} else if (l == 2){
						_putchar('2');
						_putchar('\n');
						break;
					} else if (l == 3){
						_putchar('3');
						_putchar('\n');
						break;
					} else if (l == 4){
						_putchar('4');
						_putchar('\n');
						break;
					} else if (l == 5){
						_putchar('5');
						_putchar('\n');
						break;
					} else if (l == 6){
						_putchar('6');
						_putchar('\n');
						break;
					} else if (l == 7){
						_putchar('7');
						_putchar('\n');
						break;
					} else if (l == 8){
						_putchar('8');
						_putchar('\n');
						break;
					} else {
						_putchar('9');
						_putchar('\n');
						break;
					}
	}		i	}
		}	}
	
	exit(0);

}
