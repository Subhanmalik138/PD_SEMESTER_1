#include<cmath>
#include<conio.h>
#include<iostream>
using namespace std;

void option();
void menu();
int main()
{
	string name1 = "", name2 = "", name3 = "", name4 = "", name5 = "", name6 = "", name7 = "", name8 = "", name9 = "", name10 = "",name11="",name12="",name13="",name14="",name15="",name16="",name17="",name18="",name19="",name20="",name21="",name22="";
	float n1 = 0.0, n2 = 0.0, n3 = 0.0, n4 = 0.0, n5 = 0.0, n6 = 0.0, n7 = 0.0, n8 = 0.0, n9 = 0.0, n10 = 0.0, n11 = 0.0, n12 = 0.0, n13 = 0.0, n14 = 0.0, n15 = 0.0;
	float total1 = 0.0, total2 = 0.0, total3 = 0.0, total4 = 0.0, total5 = 0.0;
	while (true)
	{


		menu();
		option();
		cout << "++++++++++++++++++++++++++++++++" << endl;
		cout << "ENTER ANY OPTION TO CONTINOU!" << endl;
		cout << "_______________________" << endl;
		int option;
		cin >> option;
		//FOR PRICPAL CODE
		if (option == 1)
		{
			int sel;




			cout << "1. ADD TEACHER " << endl;
			cout << "_______________________" << endl;
			cout << "2.ADD STUDENT " << endl;
			cout << "_______________________" << endl;
			cout << "3.BACK TO MENU" << endl;
			cout << "_______________________" << endl;
			cout << "4.SELECT ANY OPTION" << endl;
			cin >> sel;


			if (sel == 1)
			{
				cout << "ADD TEACHER :" << endl;
				cin >> name2;
				cout << "_______________________" << endl;
				
				cout << "==>TEACHER NAME IS :: " << name2 << endl;



			}if (sel == 2)
			{
				cout << "ADD STUDENT NAME :" << endl;
				cin >> name3;
				cout << "_________________________" << endl;
				cout << "==>STUDENT NAME IS :: " << name3 << endl;

			}
			if (sel == 3)
			{
				return 0;

			}


		}
		//FOR VICE PRICNCIPAL CODE
		if (option == 2)
		{
			int sel;




			cout << "1. ADD TEACHER " << endl;
			cout << "_______________________" << endl;
			cout << "2.ADD STUDENT " << endl;
			cout << "_______________________" << endl;
			cout << "3.BACK TO MENU" << endl;
			cout << "_______________________" << endl;
			cout << "4.SELECT ANY OPTION" << endl;
			cin >> sel;


			if (sel == 1)
			{
				cout << "ADD TEACHER NAME :" << endl;
				cin >> name2;
				cout << "_______________________" << endl;
				cout << "==>TEACHER NAME IS : " << name2 << endl;



			}
			if (sel == 2)
			{
				cout << "ADD STUDENT NAME : " << endl;
				cin >> name3;
				cout << "_______________________" << endl;
				cout << "==>STUDENt NAME IS : " << name3 << endl;

			}
			if (sel == 3)
			{
				return 0;

			}
		}
		//FOR teacher code
		if (option == 3)
		{
			int opt;
			cout << "1.ADD STUDENT 1 " << endl;
			cout << "_______________________" << endl;
			cout << "2.ADD STUDENT 1 " << endl;
			cout << "_______________________" << endl;

			cout << "3.ADD STUDENT 1 SUBJECTs" << endl;
			cout << "_______________________" << endl;
			cout << "4.ADD STUDENT 1 SUBJECTs" << endl;
			cout << "_______________________" << endl;
			cout << "5.STUDENT 1 MARKS " << endl;
			cout << "_______________________" << endl;
			cout << "6.STUDENT 1 MARKS " << endl;
			cout << "_______________________" << endl;
			cout << "7.CAlCULAT MARKS" << endl;
			cout << "_______________________" << endl;
			cout << "8.Exit to MAIN MENU" << endl;
			cout << "_______________________" << endl;
			cout << "++SELECT ANY NUMBER TO CONTINUE ++ "<<endl;
			cin >> opt;
			if (opt == 1)
			{
				cout << "ADD NAME OF STUDENT 1" << endl;
				cout << "_______________________" << endl;
				cin >> name4;


			}
			if (opt == 2)
			{
				cout << "ADD NAME OF STUDENT 2" << endl;
				cout << "_______________________" << endl;
				cin >> name5;



			}
			if (opt == 3)
			{
				cout << "ADD ONLY THREE SUBJECTS :" << endl;
				cout << "_______________________" << endl;
				cout << "ADD FIRST"<<endl;
				cout << "_______________________" << endl;
				cin >> name6;
				cout << "ADD SECOND"<<endl;
				cout << "_______________________" << endl;
				cin >> name7;
				cout << "ADD THIRD"<<endl;
				cout << "_______________________" << endl;
				cin >> name8;
				cout << "==>ENTERED SUBJECTS ARE " << name6 << "::" << name7 << " ::" << name8<<endl;
				cout << "________________________________________" << endl;

			}if (opt == 4)
			{
				cout << "ADD ONLY THREE SUBJECTS :" << endl;
				cout << "_______________________" << endl;
				cout << "ADD FIRST"<<endl;
				cout << "_______________________" << endl;
				cin >> name9;
				cout << "ADD SECOND"<<endl;
				cout << "_______________________" << endl;
				cin >> name10;
				cout << "ADD THIRD"<<endl;
				cout << "_______________________" << endl;
				cin >> name11;
				cout << "==>ENTERED SUBJECTS ARE " << name9 << "::" << name10 << "::" << name11<<endl;
				cout << "_________________________________________" << endl;

			}
			if (opt == 5)
			{
				cout << "ENTER NAME OF STUDENT 1 : "<<endl;
				cout << "_______________________" << endl;
				cin >> name18;
				cout << "ADD ONLY THREE SUBJECTS marks :" << endl;
				cout << "_______________________" << endl;
				cout << "ADD FIRST SUBJECT   :  "<<endl;
				cout << "_______________________" << endl;
				cin >> name12;
				cout << "ENTER MARKS  :  "<<endl;
				cout << "_______________________" << endl;
				cin >> n1;
				cout << "ENTER TOTAL MARKS  :  "<<endl;
				cout << "_______________________" << endl;
				cin >> n2;
				cout << "ADD SECOND SUBJECT : ";
				cin >> name13;
				cout << "ENTER MARKS : "<<endl;
				cout << "_______________________" << endl;
				cin >> n3;
				cout << "ENTER TOTAL MARKS  : "<<endl;
				cout << "_______________________" << endl;
				cin >> n4;
				cout << "ADD THIRD SUBJECT  :  "<<endl;
				cout << "_______________________" << endl;
				cin >> name14;
				cout << "ENTER MARKS :  "<<endl;
				cout << "_______________________" << endl;
				cin >> n5;
				cout << "ENTER TOTAL MARKS :  "<<endl;
				cout << "_______________________" << endl;
				cin >> n6;
				cout << "_______________________" << endl;


			}
			if (opt == 6)
			{
				cout << "ENTER NAME OF STUDENT 2 : "<<endl;
				cout << "_______________________" << endl;
				cin >> name19;
				cout << "ADD ONLY THREE SUBJECTS marks :" << endl;
				cout << "_______________________" << endl;
				cout << "ADD FIRST SUBJECT :"<<endl;
				cout << "_______________________" << endl;
				cin >> name15;
				cout << "ENTER MARKS :  "<<endl;
				cout << "_______________________" << endl; 
				cin >> n7;
				cout << "ENTER TOTAL MARKS  : "<<endl;
				cout << "_______________________" << endl;
				cin >> n8;
				cout << "ADD SECOND SUBJECT  :  "<<endl;
				cout << "_______________________" << endl;
				cin >> name16;
				cout << "ENTER MARKS :  "<<endl;
				cout << "_______________________" << endl;
				cin >> n9;
				cout << "ENTER TOTAL MARKS  : "<<endl;
				cout << "_______________________" << endl;
				cin >> n10;
				cout << "ADD THIRD SUBJECT  : "<<endl;
				cout << "_______________________" << endl;
				cin >> name17;
				cout << "ENTER MARKS :  "<<endl;
				cout << "_______________________" << endl;
				cin >> n11;
				cout << "ENTER TOTAL MARKS :  "<<endl;
				cout << "_______________________" << endl;
				cin >> n12;
				cout << "_______________________" << endl;

			}
			if (opt == 7)
			{
				cout << "1.TOTAL MARKS OS STUDENT 1" << endl;
				cout << "___________________________" << endl;
				cout << "2.TOTAL MARKS OF STUDENT 2" << endl;
				cout << "___________________________" << endl;
				cout << "3.MARK SHEET " << endl;
				cout << "_______________________" << endl;
				cout << "SELECT ANY NUMBER  :  ";
				int selc;
				cin >> selc;
				if (selc == 1)
				{
					total1 = n1 + n3 + n5;
					total2 = n2 + n4 + n6;
					cout << "TOTAL MARKS IS : " << total1 << "  OUT OF : " << total2<<endl;

				}
				if (selc == 2)
				{
					total3 = n7 + n9 + n11;
					total4 = n8 + n10 + n12;
					cout << "TOTAL MARKS IS : " << total3 << "  OUT OF : " << total4<<endl;

				}
				if (selc == 3)
				{
					total1 = n1 + n3 + n5;
					total2 = n2 + n4 + n6;
					total3 = n7 + n9 + n11;
					total4 = n8 + n10 + n12;
					cout << "NAME" << "     " << "SUBJECT 1" << "     " << "SUBJECT 2" << "    " << "SUBJECT 3" << "    " << "OBtAINED MARKS" << "   " << "TOTaL MARKS"<<endl;
					cout << name18 <<"      " << name12 << "        " << name13 << "     "  << name14 << "                " << total1 << "                   " << total2  << endl;
					cout << name19 << "        " << name15 << "         " << name16 << "     " << name17 << "                " << total3 << "               " << total4 <<endl;
				}

			}
			if (opt == 8)
			{
				return 0;
			}




		}
		//for student;
		if (option == 4)
		{ 
			int select;
			cout << "1.CHECK RESLUT OF STUDENT 1" << endl;
			cout << "______________________________" << endl;
			cout << "2.CHECK RESULt OF STUDENt 2" << endl;
			cout << "______________________________" << endl;
			cout << "3.CHECK MARKS SHEET" << endl;
			cout << "______________________________" << endl;
			cout << "+++SELECT ANY ONE OPTION+++" << endl;
			cin >> select;
			if (select == 1)
			{

				total1 = n1 + n3 + n5;
				total2 = n2 + n4 + n6;
				cout << name18 << "  ::    " << name12 << "   ::     " << name13 << "  ::   " << name14 << "    OBAINED MARKS            " << total1 << "       TOTAL MARKS            " << total2 << endl;
			}
			if (select == 2)
			{
				total3 = n7 + n9 + n11; 
				total4 = n8 + n10 + n12; 
					cout << name19 << "  ::      " << name15 << "    ::       " << name16 << "  ::   " << name17 << "   OBTAINED MARKS             " << total3 << "    TOTAL MARKS           " << total4 << endl;
				

			}
			if (select == 3)
			{
				{
					total1 = n1 + n3 + n5;
					total2 = n2 + n4 + n6;
					total3 = n7 + n9 + n11;
					total4 = n8 + n10 + n12;
					cout << "NAME" << " ::    " << "SUBJECT 1" << "  ::    " << "SUBJECT 2" << "   ::   " << "SUBJECT 3" << "  ::   " << "OBtAINED MARKS" << "   ::  " << "TOTaL MARKS" << endl;
					cout << name18 << " ::     " << name12 << "  ::      " << name13 << " ::    " << name14 << "     ::           " << total1 << "       ::         " << total2 << endl;
					cout << name19 << "  ::      " << name15 << "   ::      " << name16 << " ::    " << name17 << "     ::           " << total3 << "    ::           " << total4 << endl;
				}
			}

		}
		if (option == 5) {
			return 0;
		}
		
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
void option()
{
	cout << "1.PRINCIPAL "<<endl;
	cout << "_______________________" << endl;
	cout << "2.V.PRINCIPAL " << endl;
	cout << "_______________________" << endl;
	cout << "3.TEACHER" << endl;
	cout << "_______________________" << endl;
	cout << "4.STUDENT" << endl;
	cout << "_______________________" << endl;
	
	cout << "5.EXIT" << endl;
	cout << "_______________________" << endl;
	

}
