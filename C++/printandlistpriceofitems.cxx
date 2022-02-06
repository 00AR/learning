/*
 * printandlistpriceofitems.cxx
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


#include <iostream>
#include <curses.h>

using namespace std;

/*  This program lists the itemcode and price of the item.
	User can ask for displaying all the items, item with the largest
	price, sum of the price of all the items.
*/

// class for defining the characteristics and behaviour of the items.
class ITEM{
	int itemcode[50];
	float it_price[50];
	public:
		void initialize(void);
		float largest(void);
		float sum(void);
		void display_items(void);
};
//..........Member Function(Methods of class ITEM) Definitions Follow........

void ITEM :: initialize(void){
	//populate the arrays
	cout<<"Enter the details of the Items\n";
	for(int i = 0; i<5; i++){
		cout<<"\n"<<"Item No :"<<(i+1);
		cout<<"\n"<<"Enter item code: ";
		cin>>itemcode[i];
		cout<<"\n"<<"Enter item price:";
		cin>>it_price[i];
		cout<<"\n";
	}
}

float ITEM :: largest(void){
	float large = it_price[0];
	for(int i=1;i<5;i++){
		if(large<it_price[i])
			large = it_price[i];
	}
	return large;
}

float ITEM::sum(void){
	float sum = 0;
	for(int i=0;i<5; i++){
		sum += it_price[i];
	}
	return sum;
}

void ITEM::display_items(void){
	cout<<"\nCode Price\n";
	for (int i = 0; i<5; i++){
		cout<<"\n"<<itemcode[i];
		cout<<" "<<it_price[i];
	}
	cout<<"\n";
}

//Main Function
int main(int argc, char **argv){
	
	ITEM order;
	order.initialize();	//initialize arrays with user input
	
	float total, biggest;
	int ch=0;
	system("clear");
	
	do{
		cout<<"\nMain Menu.\n";
		cout<<"\n1.Display largest price.";
		cout<<"\n2.Display sum of prices.";
		cout<<"\n3.Display item list.";
		cout<<"\nEnter your choice(1-3):";
		cin>>ch;

		switch(ch){
			case 1: biggest = order.largest();
					cout<<"\nThe largest price is "<<biggest<<"\n";
					break;
			case 2: total = order.sum();
					cout<<"\nThe sum of prices is "<<total<<"\n";
					break;
			case 3: order.display_items();
					break;
			default: cout<<"\n Wrong Choice!\n";
						break;
		}
		
	}while(ch>=1&&ch<=3);
	
	return 0;
}

