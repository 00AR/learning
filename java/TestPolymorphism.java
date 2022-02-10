/*
 * TestPolymorphism.java
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


class Bank{
	float getRateOfInterest(){return 0;}
}

class SBI extends Bank{
	float getRateOfInterest(){return 8.4f;}
}

class ICICI extends Bank{
	float getRateOfInterest(){return 7.3f;}
}

class AXIS extends Bank{
	float getRateOfInterest(){return 9.7f;}
}

class TestPolymorphism{
	public static void main(String args[]){
		Bank b;
		b = new SBI();  // example of upcasting
		System.out.println("SBI Rate of Interest: " + b.getRateOfInterest());
		b = new ICICI();  // using the parent class object
		System.out.println("ICICI Rate of Interest: " + b.getRateOfInterest());
		b = new AXIS();  // to call subclass constructor
		System.out.println("AXIS Rate of Interest: " + b.getRateOfInterest());
	}
}
