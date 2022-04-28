/*
 * arrayReversal.c
 * 
 * Copyright 2022 Shawn <shawn@shawn-HP-Pavilion-g6-Notebook-PC>
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

void reverseArray(int arr[], int size){
	int temp, r = size/2;
	
	for(int i=0; i<r; i++){
		temp = arr[i];
		arr[i] = arr[size-i-1];
		arr[size-i-1]=temp;
		//printf("%d %d\n",i,arr[i]);
	}
}
int main(int argc, char **argv)
{	
	int arr[] = {0,1,2,3,4,5,6,7,8,9,10,11,12};
	
	reverseArray(arr, (sizeof(arr)/sizeof(int)));
	
	for(int i=0; i<(sizeof(arr)/sizeof(int));i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

