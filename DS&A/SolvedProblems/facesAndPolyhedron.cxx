/*
 * facesAndPolyhedron.cxx
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
/*
 * 
    Tetrahedron. Tetrahedron has 4 triangular faces.
    Cube. Cube has 6 square faces.
    Octahedron. Octahedron has 8 triangular faces.
    Dodecahedron. Dodecahedron has 12 pentagonal faces.
    Icosahedron. Icosahedron has 20 triangular faces. 
    * */
int main(int argc, char **argv)
{
	int n, sum=0;
	string str;
	cin>>n;
	while(n--){
		cin>>str;
		if(str == "Tetrahedron")
			sum+=4;
		else if(str=="Cube")
			sum+=6;
		else if(str=="Octahedron")
			sum+=8;
		else if(str=="Dodecahedron")
			sum+=12;
		else 
			sum+=20;
	}
	
	cout<<sum;
	return 0;
}

