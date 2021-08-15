/*
 * 
 * Book: "Myśl jak programista", Helion, exercise 2.1 page. 74 
 * ENG: "Think Like a Programmer: An Introduction to Creative Problem Solving"
 *
 * Copyright 2021 Sławomir Chowański <chowanski@wp.pl>
 * Date: 2021-08-15     Version: 00001
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void print_char(const int a, const char b);

int main(void){
	
	system("clear");

	int max_char, start_qty, i;
	char ch = '#';
	char x 	= ' ';

	printf("Proszę podać parzystą liczbę: ");
	scanf("%d", &max_char);

	start_qty = max_char;
	for(i = max_char; i > 0; i -= 2){
		print_char( ((start_qty - max_char) / 2), x);
		print_char(max_char, ch);
		max_char -= 2;
		printf("\n");
	}

	return 0;
}

void print_char(const int a, const char b){
	
	int temp = a;
	
	while(temp > 0){
		printf("%c", b);
		temp--;
	}
}