/*
 * invertdigitGT5.cxx
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
using namespace std;


int main(){
	long long num, num1, out = 0;
	int r, n=0;
	cin>>num;
	num1 = num;
	
	while(num1!=0){//counting digits
		num1/=10;
		n++;
	}
	if(n==1){
		if(num>4 && num!=9)
			cout<<(9-num);
		else
			cout<<num;
	}
	else{
		int arr[n];
	
		for(int i=0; i<n;i++){
			r = num%10;
			num /= 10;
			if(r>4)
				arr[i] = 9-r;
			else
				arr[i] = r;
		}
		if(arr[n-1]==0)
			arr[n-1] = 9;
		for(int i=n-1; i>=0;i--){
			out = out*10+arr[i];
		}
		cout<<out;
	}
	return 0;
}
/*int main(int argc, char **argv)
{
	int num, out=0, r;
	cin>>num;
	while(num!=0){
		r = num%10;
		if(r>4&&r!=9)
			r = 9-r;
		out = out*10 + r;
		num/=10;
	}
	while(out!=0){
		r = out%10;
		num = num*10+r;
		out/=10;
	}
	cout<<num;
	return 0;
}
*/
