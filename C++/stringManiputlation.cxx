/*
 * stringManiputlation.cxx
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
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	cout<<"Show the manipulation of a string:\n";
	string txt = "welcome, to the Real World\n";
	cout<<"The string:\n"<<txt<<endl;
	cout<<"The length of the string:"<<txt.length()<<endl;
	cout<<"The character at index 1 of the string:"<<txt.at(1)<<endl;
	cout<<"The character at index 1 of the string[using array]:"<<txt[1]<<endl;
	cout<<"Is the string empty:"<<txt.empty()<<endl;
	cout<<"Retrieve Substring 3rd position for 4 characters:"<<txt.substr(3, 4)<<endl;
	cout<<"Replace the Substring from 23rd position :"<<txt.replace(21, 6, "Matrix")<<endl;
	
	
	
	
	return 0;
}

