#include<iostream>
#include<Windows.h>
#include<conio.h>
#include <iomanip>
using namespace std;


void login();
void signup();
void menu();
float percentage(float mark, float marks);
void principal();
void teacher();
void student();


string username = "";
string userpassward = "";
string prefrence = "";
string addtecher1 = "",addteacher2="",addtecher3="";
string addstudent1 = "", addstudent2 = "", addstudent3 = "";
string announcement = "";
string attendence1 = "", attendence2 = "", attendence3 = "", attendence4 = "", attendence5 = "";
string attendence1s = "", attendence2s = "", attendence3s = "", attendence4s = "", attendence5s = "";
string student1 = "", student2 = "", student3 = "", student4 = "", student5 = "";
float mark1 = 0, mark2 = 0, mark3 = 0, mark4 = 0, mark5 = 0, mark6 = 0, mark7 = 0, mark8 = 0, mark9 = 0, mark10 = 0, mark11 = 0, mark12 = 0, mark13 = 0, mark14 = 0, mark15 = 0;
float total1 = 0, total2 = 0, total3 = 0, total4 = 0, total5 = 0, total6 = 0, total7 = 0, total8 = 0, total9 = 0, total10 = 0, total11 = 0, total12 = 0, total13 = 0, total14 = 0, total15 = 0;
string subject1="", subject2="", subject3="", subject4="", subject5="", subject6="", subject7="", subject8="", subject9="", subject10="", subject11="", subject12="", subject13="", subject14="", subject15="", subject16="", subject17="", subject18="";
float totalmarks1 = 0, totalmarks2 = 0, totalmarks3 = 0, totalmarks4 = 0, totalmarks5 = 0, totalmarks6 = 0, totalmarks7 = 0, totalmarks8 = 0, totalmarks9 = 0, totalmarks10 = 0, totalmarks11 = 0;
float percent1 = 0, percent = 0, percent2 = 0, percent3 = 0, percent4 = 0, percent5 = 0;
int main()
{
	while (true)
	{
		system("cls");
		 menu();
		string option;
		
		cout << "1.LOGIN"<<endl;
		
		
		cout << "_____________" << endl;
		
		
		cout << "2.SIGN up"<<endl;
		
		
		cout << "_____________" << endl;
		
		cout << "SELECT ANY OPTON"<<endl;
		cout << "_______________"<<endl;
		cin >> option;
		if (option == "1")
		{
			system("cls");
			menu();
			login();
		}
		else if (option == "2")
		{
			system("cls");
			menu();
			signup();
		}
		else cout << "try again";
		

	}
}


void login()
{
	string user, passward,prefe;
	cout << "ENTER USER NAME :"<<endl;
	cout << "___________________"<<endl;
	cin >> user;
	cout << "ENTER PASSWARD : "<<endl;
	cout << "___________________"<<endl;
	cin >> passward;
	
	if (user == username && passward == userpassward)
	{
		if (prefe=="teacher"|| prefe == "t"|| prefe == "T"|| prefe == "TEACHER")
		{
			

			system("cls");
			menu();
			teacher();
			
		}
		else if (prefe == "principal"|| prefe == "p"|| prefe == "P"|| prefe == "PRINCIPAL")
		{
			system("cls");
			principal();
			menu();

		}
		else if (prefe == "STUDENT" || prefe == "student" || prefe == "S" || prefe == "s")
		{
			system("cls");
			menu();
			student();
		}
		else cout << "INCORRECT IDENTITY ! TRY AGAIN"<<endl;
	}
	else cout << "INCORRECT IDENTITY ! TRY AGAIN"<<endl;
	Sleep(1000);
}
void signup()
{
	cout << "ENTER YOUR NEW USER NAME :"<<endl;
	cout << "__________________________"<<endl;
	cin >> username;
	cout << "ENTER YOUR NEW PASSWARD : "<<endl;
	cout << "____________________________"<<endl;
	cin >> userpassward;
	cout << "ENTER YOUR PREFRENCE (student(s), teacher(t) or principal(p)) :"<<endl;
	cout << "__________________________________________________"<<endl;
	cin >> prefrence;

	if (prefrence == "student" ||prefrence=="s"||prefrence=="S" || prefrence == "STUDENT" || prefrence == "TEACHER" ||prefrence=="T" || prefrence == "teacher" || prefrence == "t" || prefrence == "pricnipal" || prefrence == "P"|| prefrence == "PRINCIPAL" || prefrence == "p")
	{
		cout << "SIGN UP SUCCESSFULY ,NOW YU CAN LOGIN "<<endl;
		cout << "_____________________________________"<<endl;
	}
	else {
		cout << "INCORRECT PREFERENCE ! TRY AGAIN";
		username = "";
		userpassward = "";
		prefrence = "";
	}
}










void menu()
{
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "-------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "###                                                                                                                   ###" << endl;
	cout << "###                                              SCHOOL MANAGMENT SYSETEM                                             ###" << endl;
	cout << "###                                                                                                                   ###" << endl;
	cout << "-------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "#########################################################################################################################" << endl;

}
//preincipal function;

void principal()
{

	system("cls");
	menu();
	string option;
	cout << "1.ADD TEACHERS :"<<endl;
	cout << "_______________"<<endl;
	cout << "2.ADD STUDENTS :" << endl;
	cout << "_______________" << endl;
	cout << "3.VIEW ADDED TECHERS :" << endl;
	cout << "______________________" << endl;
	cout << "4.VIEW ADDED STUDENTS :" << endl;
	cout << "______________________" << endl;
	cout << "5.REMOVE _ ADDED TECHERS/STUDENTS :" << endl;
	cout << "____________________________________" << endl;
	cout << "6.ADD ANOUNCEMENT :" << endl;
	cout << "____________________" << endl;
	cout << "7.VIEW ANOUNCEMENT :" << endl;
	cout << "____________________" << endl;
	cout << "8.BACK TO MAIN LOGIN PAGE :"<<endl;
	cout << "_______________" << endl;
	cout << "SELECT ANY OPTION TO MOVE FORWARD" << endl;
	cout << "___________________________________" << endl;

	cin >> option;
	if (option == "1")//add teachers
	{

		system("cls");
		menu();
		cout << "ADD TEACHER 1 :" << endl;
		cout << "_______________" << endl;
		cin >> addtecher1;
		cout << "ADD TEACHER 2 :" << endl;
		cout << "_______________" << endl;
		cin >> addteacher2;
		cout << "ADD TEACHER 3 :" << endl;
			cout << "_______________" << endl;
			cin >> addtecher3;
			principal();
	}
	else if (option == "2")//add students
	{

		system("cls");
		menu();
		cout << "ADD STUDENT 1 : " << endl;
		cout << "_______________" << endl;
		cin >> addstudent1;
		cout << "ADD STUDENT 2 : " << endl;
		cout << "_______________" << endl;
		cin >> addstudent2;
		cout << "ADD STUDENT 3 : " << endl;
		cout << "_______________" << endl;
		cin >> addstudent3;
		
		principal();
	}
	else if (option == " 3") //view teachers ist
	{

		system("cls");
		menu();
		cout << "TEACHER 1 :" << addtecher1 << endl << "TEACAHER 2 :" << addteacher2 << endl << "TEACHER 3: " << addtecher3<<endl;
		cout << "ENTER (B) FOR BACK "<< endl;
		string back;
		cin >> back;
		if (back == "b" || back == "B")
		{
			principal();
		}
		else  if (back != "b")
		{
			principal();
		}
	}
	else if (option == "4")//view students list
	{

		system("cls");
		menu();
		cout << "STUDENT 1 :" << addstudent1 << endl << "STUDENT 2 :" << addstudent2 << endl << "TEACHER 3 :" << addstudent3<<endl;
		cout << "ENTER (B) FOR BACK " << endl;
		string back;
		cin >> back;
		if (back == "b" || back == "B")
		{
			principal();
		}
		else  if (back != "b")
		{
			principal();
		}
	}
	else if (option == "5")//remove teachers;
	{

		system("cls");
		menu();
		string remove;
		cout << "PRESS (T) TO REMOVE ALL TEACHERS"<<endl;
		cout << "__________________________________" << endl;
		cout << "PRESS (S) TO REMOVE ALL STUDENTS" << endl;
		cout << "__________________________________" << endl;
		cout << "PRESS (B) TO BACK" << endl;
		cout << "_________________" << endl;

		cin >> remove;
		if (remove == "T"||remove=="t")
		{
			addtecher1 = "";
			addteacher2 = "";
			addtecher3 = "";
			cout << "ENTER (B) FOR BACK " << endl;
			char back;
			cin >> back;
			if (back == 'b' || back == 'B')
			{
				principal();
			}
			else  if (back != 'b')
			{
				principal();
			}
		}
		else if (remove == "S" || remove == "s")
		{
			addstudent1 = "";
			addstudent2 = "";
			addstudent3 = "";
			cout << "ENTER (B) FOR BACK " << endl;
			string back;
			cin >> back;
			if (back == "b" || back == "B")
			{
				principal();
			}
			else  if (back != "b")
			{
				principal();
			}

		}
		else if (remove == "B" || remove == "b")
		{
			principal();
		}
		else
		{
			cout << "INVALID CHARCTER : ";
		}

		


	}
	
	else	if (option == "6")//add announcment
	{

		system("cls");
		menu();
		cout << "ADD ANNOUNCEMENT :"<<endl;
		cout << "__________________"<<endl;
		cin >> announcement;
		cout << "ENTER (B) FOR BACK " << endl;
		string back;
		cin >> back;
		if (back == "b" || back == "B")
		{
			principal();
		}
		else  if (back != "b")
		{
			principal();
		}

	}
	else if (option == "7")//view announcement
	     {

			 system("cls");
			 menu();
			 cout << "ENTER A FOR VIEW ANNOUNCMENT : " << endl;
			 cout << "________________________________ " << endl;
			 cout << "ENTER B FOR BACK :" << endl;
			 cout << "__________________" << endl;
			 string option;
			 cin >> option;
			 if(option=="A"||option=="a")
			 {
				 system("cls");
				 menu();
				 cout << "ANNOUNCEMENT IS :" << endl;
				 cout << "_________________" << endl;
				 cout << announcement;
				 cout << "################" << endl;
				 cout << "ENTER B FOR BACK : " << endl;
				 string back;
				 if (back == "B"||back=="b")
				 {
					 principal();
				 }
				 else
				 {
					 principal();
				 }
			 }
			 else if (option == "B" || option == "b")
			 {
				 principal();
			 }
			 else
			 {
				 principal();
			 }
		
	     }
	else if (option == " 8")
	{
		main();
    }
		
	     
	else
	{
		principal();


	}
}//teacher function
//teacher function;
void teacher()
{
	system("cls");
	menu();
	string option;
	cout << "1,ATTENDENCE OF STUDENT :" << endl;
	cout << "_______________________" << endl;
	cout << "2.VIEW ATTENDENCE : " << endl;
	cout << "____________________" << endl;
	cout << "3.STUDENT MARKS " << endl;
	cout << "_________________" << endl;
	cout << "4.CLASS RESULT :" << endl;
	cout << "5.ANNOUNCEMENT OF PRINCIPAL : " << endl;
	cout << "____________________________" << endl;
	cout << "6.BACK TO LOGIN MENU :" << endl;
	cout << "____________________________" << endl;
	cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
	cout << "  ENTER  ANY OPTION : " << endl;
	cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
	cin >> option;
	if (option == "1")//attendence mark;
	{
		system("cls");
		menu();
		cout << "ENTER STUDENT 1 NAME :" << endl;
		cout << "____________________" << endl;
		cin >> attendence1s;
		cout << "ENTER ATTENDENCE (PRESNENT(p/P),ABSENT(A/a):";
		cin >> attendence1;
		if (attendence1 == "present" || attendence1 == "PRESENT" || attendence1 == "P" || attendence1 == "p")
		{
			attendence1 = "P";
		}
		else if (attendence1 == "absent" || attendence1 == "ABSENT" || attendence1 == "A" || attendence1 == "a")
		{
			attendence1 = "A";
		}
		else
		{
			cout << "ENTER VALID PATTERN FOR A/P  :";
			attendence1 = "";
			teacher();
		}

		cout << "ENTER STUDENT 2 NAME :" << endl;
		cout << "______________________" << endl;
		cin >> attendence2s;
		cout << "ENTER ATTENDENCE (PRESNENT(p/P),ABSENT(A/a):";
		cin >> attendence2;
		if (attendence2 == "present" || attendence2 == "PRESENT" || attendence2 == "P" || attendence2 == "p")
		{
			attendence2 = "P";
		}
		else if (attendence2 == "absent" || attendence2 == "ABSENT" || attendence2 == "A" || attendence2 == "a")
		{
			attendence2 = "A";
		}
		else
		{
			cout << "ENTER VALID PATTERN FOR A/P  :";
			attendence2 = "";
			teacher();
		}
		cout << "ENTER STUDENT 3 NAME :" << endl;
		cout << "______________________" << endl;
		cin >> attendence3s;
		cout << "ENTER ATTENDENCE (PRESNENT(p/P),ABSENT(A/a):";
		cin >> attendence3;
		if (attendence3 == "present" || attendence3 == "PRESENT" || attendence3 == "P" || attendence3 == "p")
		{
			attendence3 = "P";
		}
		else if (attendence3 == "absent" || attendence3 == "ABSENT" || attendence3 == "A" || attendence3 == "a")
		{
			attendence3 = "A";
		}
		else
		{
			cout << "ENTER VALID PATTERN FOR A/P  :";
			attendence3 = "";
			teacher();
		}
		cout << "ENTER STUDENT 4 NAME :" << endl;
		cout << "______________________" << endl;
		cin >> attendence4s;
		cout << "ENTER ATTENDENCE (PRESNENT(p/P),ABSENT(A/a):";
		cin >> attendence4;
		if (attendence4 == "present" || attendence4 == "PRESENT" || attendence4 == "P" || attendence4 == "p")
		{
			attendence4 = "P";
		}
		else if (attendence4 == "absent" || attendence4 == "ABSENT" || attendence4 == "A" || attendence4 == "a")
		{
			attendence4 = "A";
		}
		else
		{
			cout << "ENTER VALID PATTERN FOR A/P  :";
			attendence4 = "";
			teacher();
		}
		cout << "ENTER STUDENT 5 NAME :" << endl;
		cout << "______________________" << endl;
		cin >> attendence5s;
		cout << "ENTER ATTENDENCE (PRESNENT(p/P),ABSENT(A/a):";
		cin >> attendence5;
		if (attendence5 == "present" || attendence5 == "PRESENT" || attendence5 == "P" || attendence5 == "p")
		{
			attendence5 = "P";
		}
		else if (attendence5 == "absent" || attendence5 == "ABSENT" || attendence5 == "A" || attendence5 == "a")
		{
			attendence5 = "A";
		}
		else
		{
			cout << "ENTER VALID PATTERN FOR A/P  :";
			attendence5 = "";
			teacher();
		}
		Sleep(700);
		teacher();


	}
	else if (option == "2")//view attendence;
	{
		system("cls");
		menu();
		cout << "ENTER A TO SEE ATTENDECE :" << endl;
		cout << "____________________________" << endl;
		cout << "ENTER B FOR BACK :" << endl;
		cout << "____________________________" << endl;
		string input;
		cin >> input;
		if (input == "A" || input == "a")
		{
			system("cls");
			menu();
			cout << left << setw(20) << "NAME" << "ATTENDANCE" << endl;
			cout << "#########################################" << endl;


			cout << left << setw(20) << attendence1s << attendence1 << endl;
			cout << left << setw(20) << attendence2s << attendence2 << endl;
			cout << left << setw(20) << attendence3s << attendence3 << endl;
			cout << left << setw(20) << attendence4s << attendence4 << endl;
			cout << left << setw(20) << attendence5s << attendence5 << endl;

			cout << "#########################################" << endl;
			cout << "ENTER B TO BACK" << endl;
			string back;
			cin >> back;
			if (back == "B" && back == "b")
			{
				teacher();
			}
			else
			{
				teacher();
			}


		}
		else if (input == "B" || input == "b")
		{
			teacher();
		}
	}
	else if (option == "3")
	{
		system("cls");
		menu();
		string selec;
		cout << "1.ENTER STUDENT 1 MARKS :" << endl;
		cout << "____________________________" << endl;
		cout << "2.ENTER STUDENT 2 MARKS :" << endl;
		cout << "____________________________" << endl;
		cout << "3.ENTER STUDENT 3 MARKS :" << endl;
		cout << "____________________________" << endl;
		cout << "4.ENTER STUDENT 4 MARKS :" << endl;
		cout << "____________________________" << endl;
		cout << "5.ENTER STUDENT 5 MARKS :" << endl;
		cout << "____________________________" << endl;
		cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
		cout << ": ENTER ANY OPTION :" << endl;
		cout << "____________________________" << endl;
		cin >> selec;
		if (selec == "1")
		{
			system("cls");
			menu();
			string select;
			cout << "ENTER (A) TO ADD MARKS :" << endl;
			cout << "____________________________" << endl;
			cout << "ENTER (B) FOR BACK" << endl;
			cout << "____________________________" << endl;

			cin >> select;
			if (select == "A" || select == "a")
			{
				system("cls");
				menu();
				cout << "ENTER STUDENT 1 NAME :" << endl;
				cout << "____________________________" << endl;
				cin >> student1;
				cout << "ENTER SUBJECT 1 NAME :" << endl;
				cout << "_____________________" << endl;
				cin >> subject1;
				cout << "ENTER MARKS OBTAINED :" << endl;
				cout << "_____________________" << endl;
				cin >> mark1;
				cout << "ENTER TOTAL MARKS :" << endl;
				cout << "_____________________" << endl;
				cin >> total1;
				cout << "ENTER SUBJECT 2 NAME :" << endl;
				cout << "_____________________" << endl;
				cin >> subject2;
				cout << "ENTER MARKS OBTAINED :" << endl;
				cout << "_____________________" << endl;
				cin >> mark2;
				cout << "ENTER TOTAL MARKS :" << endl;
				cout << "_____________________" << endl;
				cin >> total2;
				cout << "ENTER SUBJECT 3 NAME :" << endl;
				cout << "_____________________" << endl;
				cin >> subject3;
				cout << "ENTER MARKS OBTAINED :" << endl;
				cout << "_____________________" << endl;
				cin >> mark3;
				cout << "ENTER TOTAL MARKS :" << endl;
				cout << "_____________________" << endl;
				cin >> total3;



			}
			else if (select == "B" || select == "b")
			{
				teacher();
			}
			else {
				cout << "TRY AGAIN" << endl;

				teacher();
			}
		}
		/////////////////////
		else if (selec == "2")
		{
			system("cls");
			menu();
			string select;
			cout << "ENTER (A) TO ADD MARKS :" << endl;
			cout << "____________________________" << endl;
			cout << "ENTER (B) FOR BACK" << endl;
			cout << "____________________________" << endl;

			cin >> select;
			if (select == "A" || select == "a")
			{
				system("cls");
				menu();
				cout << "ENTER STUDENT 2 NAME :" << endl;
				cout << "____________________________" << endl;
				cin >> student2;
				cout << "ENTER SUBJECT 1 NAME :" << endl;
				cout << "_____________________" << endl;
				cin >> subject4;
				cout << "ENTER MARKS OBTAINED :" << endl;
				cout << "_____________________" << endl;
				cin >> mark4;
				cout << "ENTER TOTAL MARKS :" << endl;
				cout << "_____________________" << endl;
				cin >> total4;
				cout << "ENTER SUBJECT 2 NAME :" << endl;
				cout << "_____________________" << endl;
				cin >> subject5;
				cout << "ENTER MARKS OBTAINED :" << endl;
				cout << "_____________________" << endl;
				cin >> mark5;
				cout << "ENTER TOTAL MARKS :" << endl;
				cout << "_____________________" << endl;
				cin >> total5;
				cout << "ENTER SUBJECT 3 NAME :" << endl;
				cout << "_____________________" << endl;
				cin >> subject6;
				cout << "ENTER MARKS OBTAINED :" << endl;
				cout << "_____________________" << endl;
				cin >> mark6;
				cout << "ENTER TOTAL MARKS :" << endl;
				cout << "_____________________" << endl;
				cin >> total6;
				teacher();



			}
			else if (select == "B" || select == "b")
			{
				teacher();
			}
			else {
				cout << "TRY AGAIN" << endl;

				teacher();
			}
		}
		else if (selec == "3")
		{
			system("cls");
			menu();
			string select;
			cout << "ENTER (A) TO ADD MARKS :" << endl;
			cout << "____________________________" << endl;
			cout << "ENTER (B) FOR BACK" << endl;
			cout << "____________________________" << endl;

			cin >> select;
			if (select == "A" || select == "a")
			{
				system("cls");
				menu();
				cout << "ENTER STUDENT 3 NAME :" << endl;
				cout << "____________________________" << endl;
				cin >> student3;
				cout << "ENTER SUBJECT 1 NAME :" << endl;
				cout << "_____________________" << endl;
				cin >> subject7;
				cout << "ENTER MARKS OBTAINED :" << endl;
				cout << "_____________________" << endl;
				cin >> mark7;
				cout << "ENTER TOTAL MARKS :" << endl;
				cout << "_____________________" << endl;
				cin >> total7;
				cout << "ENTER SUBJECT 2 NAME :" << endl;
				cout << "_____________________" << endl;
				cin >> subject8;
				cout << "ENTER MARKS OBTAINED :" << endl;
				cout << "_____________________" << endl;
				cin >> mark8;
				cout << "ENTER TOTAL MARKS :" << endl;
				cout << "_____________________" << endl;
				cin >> total8;
				cout << "ENTER SUBJECT 3 NAME :" << endl;
				cout << "_____________________" << endl;
				cin >> subject9;
				cout << "ENTER MARKS OBTAINED :" << endl;
				cout << "_____________________" << endl;
				cin >> mark9;
				cout << "ENTER TOTAL MARKS :" << endl;
				cout << "_____________________" << endl;
				cin >> total9;

				teacher();

			}
			else if (select == "B" || select == "b")
			{
				teacher();
			}
			else {
				cout << "TRY AGAIN" << endl;

				teacher();
			}
		}

		//////////////////
		else if (selec == "4")
		{
			system("cls");
			menu();
			string select;
			cout << "ENTER (A) TO ADD MARKS :" << endl;
			cout << "____________________________" << endl;
			cout << "ENTER (B) FOR BACK" << endl;
			cout << "____________________________" << endl;

			cin >> select;
			if (select == "A" || select == "a")
			{
				system("cls");
				menu();
				cout << "ENTER STUDENT 4 NAME :" << endl;
				cout << "____________________________" << endl;
				cin >> student4;
				cout << "ENTER SUBJECT 1 NAME :" << endl;
				cout << "_____________________" << endl;
				cin >> subject10;
				cout << "ENTER MARKS OBTAINED :" << endl;
				cout << "_____________________" << endl;
				cin >> mark10;
				cout << "ENTER TOTAL MARKS :" << endl;
				cout << "_____________________" << endl;
				cin >> total10;
				cout << "ENTER SUBJECT 2 NAME :" << endl;
				cout << "_____________________" << endl;
				cin >> subject11;
				cout << "ENTER MARKS OBTAINED :" << endl;
				cout << "_____________________" << endl;
				cin >> mark11;
				cout << "ENTER TOTAL MARKS :" << endl;
				cout << "_____________________" << endl;
				cin >> total11;
				cout << "ENTER SUBJECT 3 NAME :" << endl;
				cout << "_____________________" << endl;
				cin >> subject12;
				cout << "ENTER MARKS OBTAINED :" << endl;
				cout << "_____________________" << endl;
				cin >> mark12;
				cout << "ENTER TOTAL MARKS :" << endl;
				cout << "_____________________" << endl;
				cin >> total12;
				teacher();



			}
			else if (select == "B" || select == "b")
			{
				teacher();
			}
			else {
				cout << "TRY AGAIN" << endl;

				teacher();
			}
		}

		///////////////////
		else if (selec == "5")
		{
			system("cls");
			menu();
			string select;
			cout << "ENTER (A) TO ADD MARKS :" << endl;
			cout << "____________________________" << endl;
			cout << "ENTER (B) FOR BACK" << endl;
			cout << "____________________________" << endl;

			cin >> select;
			if (select == "A" || select == "a")
			{
				system("cls");
				menu();
				cout << "ENTER STUDENT 5 NAME :" << endl;
				cout << "____________________________" << endl;
				cin >> student5;
				cout << "ENTER SUBJECT 1 NAME :" << endl;
				cout << "_____________________" << endl;
				cin >> subject13;
				cout << "ENTER MARKS OBTAINED :" << endl;
				cout << "_____________________" << endl;
				cin >> mark13;
				cout << "ENTER TOTAL MARKS :" << endl;
				cout << "_____________________" << endl;
				cin >> total13;
				cout << "ENTER SUBJECT 2 NAME :" << endl;
				cout << "_____________________" << endl;
				cin >> subject14;
				cout << "ENTER MARKS OBTAINED :" << endl;
				cout << "_____________________" << endl;
				cin >> mark14;
				cout << "ENTER TOTAL MARKS :" << endl;
				cout << "_____________________" << endl;
				cin >> total14;
				cout << "ENTER SUBJECT 3 NAME :" << endl;
				cout << "_____________________" << endl;
				cin >> subject15;
				cout << "ENTER MARKS OBTAINED :" << endl;
				cout << "_____________________" << endl;
				cin >> mark15;
				cout << "ENTER TOTAL MARKS :" << endl;
				cout << "_____________________" << endl;
				cin >> total15;
				teacher();


			}
			else if (select == "B" || select == "b")
			{
				teacher();
			}
			else {
				cout << "TRY AGAIN" << endl;

				teacher();
			}
		}
		else
		{
			cout << "WRONG OPTION" << endl;
			Sleep(200);
			teacher();
		}








	}
	else if (option == "4")
	{
		system("cls");
		cout << "###############################################################################" << endl;
		cout << "####                       CLASS RESULT SHEET                               ###" << endl;
		cout << "###############################################################################" << endl;
		cout << "||||" << endl;
		//for 1st student
		totalmarks1 = mark1 + mark2 + mark3;
		totalmarks2 = total1 + total2 + total3;
		percent1 = percentage(totalmarks1, totalmarks2);
		//for student 2
		totalmarks3 = mark4 + mark5 + mark6;
		totalmarks4 = total4 + total5 + total6;
		percent = percentage(totalmarks3, totalmarks4);

		//for student 3
		totalmarks5 = mark7 + mark8 + mark9;
		totalmarks6 = total7 + total8 + total9;
		percent3 = percentage(totalmarks5, totalmarks6);
		//for student 4
		totalmarks7 = mark10 + mark11 + mark12;
		totalmarks8 = total10 + total11 + total12;
		percent4 = percentage(totalmarks7, totalmarks8);
		//for student 5
		totalmarks9 = mark13 + mark14 + mark15;
		totalmarks10 = total13 + total14 + total15;
		percent5 = percentage(totalmarks7, totalmarks8);

		cout << left << setw(15) << "NAME"
			<< setw(20) << "OBTAINED MARKS"
			<< setw(15) << "TOTAL MARKS"
			<< setw(15) << "PERCENTAGE" << endl;

		cout << "#########################################################" << endl;

		// Rows of data
		cout << left << setw(15) << student1
			<< setw(20) << totalmarks1
			<< setw(15) << totalmarks2
			<< setw(15) << percent1<<"%" << endl;

		cout << left << setw(15) << student2
			<< setw(20) << totalmarks3
			<< setw(15) << totalmarks4
			<< setw(15) << percent2<<"%" << endl;

		cout << left << setw(15) << student3
			<< setw(20) << totalmarks5
			<< setw(15) << totalmarks6
			<< setw(15) << percent3<<"%" << endl;

		cout << left << setw(15) << student4
			<< setw(20) << totalmarks7
			<< setw(15) << totalmarks8
			<< setw(15) << percent4<<"%" << endl;

		cout << left << setw(15) << student5
			<< setw(20) << totalmarks9
			<< setw(15) << totalmarks10
			<< setw(15) << percent5<<"%" << endl;

		cout << "#########################################################" << endl;
		cout << "ENTER B TO BACK" << endl;
		string back;
		cin >> back;
		if (back == "B" && back == "b")
		{
			teacher();
		}
		else
		{
			teacher();
		}


	}





	 else if (option == "5")
	 {
		 system("cls");
		 menu();
		 string announcemt = announcement;
		 cout << "ANNOUNCEMENT is : " << endl;
		 cout << announcemt;
	 }
	 if (option == "6")
	 {
		 system("cls");
		 main();
	 }
	 else
	{
		cout << "WRONG OPTION : ";
		teacher();

	}


}
/// <summary>
/// student
/// </summary>
void student()
{
	system("cls");
	menu();
	cout << "1.VIEW ATTENDENCE :" << endl;
	cout << "_____________________" << endl;
	cout << "2.VIEW MARKS SHEET :" << endl;
	cout << "_____________________" << endl;
	
	cout << "3.BACK TO LOGIN  PAGE : " << endl;
	cout << "________________________" << endl;

	cout << "##########################" << endl;
	cout << "ENTER ANY OPTION :" << endl;
	string option;
	cin >> option;
	if (option == "1")//attendence
	{

		system("cls");
		menu();
		cout << "ENTER A TO SEE ATTENDECE :" << endl;
		cout << "____________________________" << endl;
		cout << "ENTER B FOR BACK :" << endl;
		cout << "____________________________" << endl;
		string input;
		cin >> input;
		if (input == "A" || input == "a")
		{
			system("cls");
			menu();
			cout << left << setw(20) << "NAME" << "ATTENDANCE" << endl;
			cout << "#########################################" << endl;


			cout << left << setw(20) << attendence1s << attendence1 << endl;
			cout << left << setw(20) << attendence2s << attendence2 << endl;
			cout << left << setw(20) << attendence3s << attendence3 << endl;
			cout << left << setw(20) << attendence4s << attendence4 << endl;
			cout << left << setw(20) << attendence5s << attendence5 << endl;

			cout << "#########################################" << endl;
			cout << "ENTER B TO BACK" << endl;
			string back;
			cin >> back;
			if (back == "B" && back == "b")
			{
				student();
			}
			else
			{
				student();
			}


		}
		else if (input == "B" || input == "b")
		{
			student();
		}
	}
	else if (option == "2")//marksheet
	{
		system("cls");
		cout << "###############################################################################" << endl;
		cout << "####                       CLASS RESULT SHEET                               ###" << endl;
		cout << "###############################################################################" << endl;
		cout << "||||" << endl;
		//for 1st student
		totalmarks1 = mark1 + mark2 + mark3;
		totalmarks2 = total1 + total2 + total3;
		percent1 = percentage(totalmarks1, totalmarks2);
		//for student 2
		totalmarks3 = mark4 + mark5 + mark6;
		totalmarks4 = total4 + total5 + total6;
		percent = percentage(totalmarks3, totalmarks4);

		//for student 3
		totalmarks5 = mark7 + mark8 + mark9;
		totalmarks6 = total7 + total8 + total9;
		percent3 = percentage(totalmarks5, totalmarks6);
		//for student 4
		totalmarks7 = mark10 + mark11 + mark12;
		totalmarks8 = total10 + total11 + total12;
		percent4 = percentage(totalmarks7, totalmarks8);
		//for student 5
		totalmarks9 = mark13 + mark14 + mark15;
		totalmarks10 = total13 + total14 + total15;
		percent5 = percentage(totalmarks7, totalmarks8);

		cout << left << setw(15) << "NAME"
			<< setw(20) << "OBTAINED MARKS"
			<< setw(15) << "TOTAL MARKS"
			<< setw(15) << "PERCENTAGE" << endl;

		cout << "#########################################################" << endl;

		// Rows of data
		cout << left << setw(15) << student1
			<< setw(20) << totalmarks1
			<< setw(15) << totalmarks2
			<< setw(15) << percent1 << "%" << endl;

		cout << left << setw(15) << student2
			<< setw(20) << totalmarks3
			<< setw(15) << totalmarks4
			<< setw(15) << percent2 << "%" << endl;

		cout << left << setw(15) << student3
			<< setw(20) << totalmarks5
			<< setw(15) << totalmarks6
			<< setw(15) << percent3 << "%" << endl;

		cout << left << setw(15) << student4
			<< setw(20) << totalmarks7
			<< setw(15) << totalmarks8
			<< setw(15) << percent4 << "%" << endl;

		cout << left << setw(15) << student5
			<< setw(20) << totalmarks9
			<< setw(15) << totalmarks10
			<< setw(15) << percent5 << "%" << endl;

		cout << "#########################################################" << endl;
		cout << "ENTER B TO BACK" << endl;
		string back;
		cin >> back;
		if (back == "B" && back == "b")
		{
			teacher();
		}
		else
		{
			teacher();
		}

	}






	else if (option == "3")
	{
		system("cls");
		main();

	}
	else
	{
		student();
		}

}


float percentage(float mark, float marks)
{
	float percent = (mark / marks) * 100;
	return percent;
}