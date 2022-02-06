/*
 * studentDetailsAndMarks.cxx
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

class Student{
	private:
		int rollno;
		char name[25];
		float marks;
		char grade;
	public:
		void readStudent(){ //mutator
			cout<<"\n Enter rollno: "; cin>>rollno;
			cout<<"\n Enter name: "; cin>>name;//fgets(name, 25, stdin); 
			cout<<"\n Enter marks: ";	cin>> marks;
		}
		
		void displayStudent(){	//accessor
			calcGrade();
			cout<<"Roll no.: "<<rollno<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Marks: "<<marks<<endl;
			cout<<"Grade: "<<grade<<endl;
		}

		int getRollno(){	//accessor
			return rollno;
		}

		float getMarks(){	//accessor
			return marks;
		}

		void calcGrade(){	//mutator
			if(marks >= 75)
				grade = '0';
			else if(marks >= 60)
				grade = 'A';
			else if(marks >= 50)
				grade = 'B';
			else if(marks >= 40)
				grade = 'C';
			else
				grade = 'F';
			// This method(calcGrade) can even be declared under private section
		}
};

int main(int argc, char **argv){
	Student xiia[5];
	for (int i=0;i<5;i++){
		cout<<"\nEnter details of Student "<<i+1<<":";
		xiia[i].readStudent();
	}
	int choice, rno, pos=-1,highmarks=0;

	do{
		//system("clear");
		cout<<"\nMain Menu\n";
		cout<<"1. Specific student\n";
		cout<<"2. Topper\n";
		cout<<"3. Exit\n";
		cout<<"\nEnter your choice(1-3)";
		cin>>choice;
		switch (choice){
		case 1: 
		cout<<"\n Enter roll no of student whose details you want to see: ";
		cin>>rno;
			for(int i=0;i<5;i++){	//accessor used here
				if(xiia[i].getRollno()==rno){
					xiia[i].displayStudent();
					break;
				}
			}
			if(rno>4)
				cout<<"\n Invalid Rollno !!!\n";
			break;
		case 2: 
			for(int i=0;i<5;i++){
				if(xiia[i].getMarks()>highmarks){//accessor used here
					pos = i;
					highmarks = xiia[i].getMarks();
				}
			}
			xiia[pos].displayStudent();	
			break;
		case 3: break;
			break;
		default:
			cout<<"\n Wrong Choice !! \n";
			break;
		}

	}while(choice >=1 && choice < 3);
	return 0;
}

