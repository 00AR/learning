#include<iostream>
using namespace std;
class Examination{
	//data members
	string name;
	string courses[5]={"Computer Architecture", "Data Structure and Program Design", 
						"Object Oriented Programming", "Data base Management System",
						"Object Oriented Analysis and Design"};
	
	public:
	string rollno;
	int marks[5];
	

	int sum=0;
	//member functions
	float percentage;
	void getStudentRecord(){
		cout<<"\nName of the Student: ";
		cin>>name;
		cout<<"Roll Number: ";
		cin>>rollno;
	}
	
	void getMarks(){
		cout<<"Enter Marks of the student \n";
		for(int i=0; i<5; i++){
			cout<<"CS20"<<i+1<<" - "<<courses[i]<<" : " ;
			cin>>marks[i];
		}
	}	
	void getResult(){
		for(int i=0; i<5; i++){
			sum+=marks[i];
		}
		percentage=(((float)sum/500)*100);
		if(percentage<30.0){
			cout<<"Percentage: "<<percentage<<"\n";
			cout<<"Failed\n";
		}
		else{
			cout<<"Percentage: "<<percentage<<"\n";
			cout<<"Passed\n";
		} 
	}
	void display(){
		cout<<"\nStudent Name: "<<name<<"\n";
		cout<<"RollNo: "<<rollno<<"\n";
		cout<<"Marks: \n";
		cout<<"Course Code\t Course Name\t\t Marks\n";
		for(int i=0; i<5;i++)
			cout<<"CS20"<<i+1<<" \t "<<courses[i]<<" \t"<<marks[i]<<"\n" ;
	}
};

class Report_Card:public Examination{
	Examination stud[2];
	
	public:
	void getDet(){
		for(int i=0;i<2;i++){
			stud[i].getStudentRecord();
			stud[i].getMarks();
		}
	}
	void setResult(){
		string name;
		string rno;
		//int sum=0;
		//float percentage;
		cout<<"Enter the name of the student: ";
		cin>>name;
		cout<<"Enter Rollno of the student: ";
		cin>>rno;
		
		//searching the records
		for(int i=0; i<2; i++){
			if(stud[i].rollno==rno){
				stud[i].getResult();
				//percentage
				
				break;
			}
		}
	}
	
};
int main(int argc, char **argv)
{
	Report_Card record;
	record.getDet();
	record.setResult();
	return 0;
}


