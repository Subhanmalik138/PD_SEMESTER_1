#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include<iomanip>
using namespace std;


const int number = 100;


// for princial
string principalUsername = "principal";
string principalPassword = "12345678";


// Staff details
string staffUsername[number], staffPassword[number];
string tname[number], tfathername[number], tcinic[number], tphone[number];
int staffCount = 0;
string studentattendence[number][number];
string teacherannouncement[number];
int announcemnetcount = 0;
string compalinaction;
int attendencecunt = 0;
// Student details
string studentUsername[number], studentPassword[number];
string sname[number], sfathername[number], scinic[number], sphone[number];
int studentCount = 0;
float marks[number][number];
int markscount = 0;
string subject[10];
int subjectcount=0;
string studentcompalin[number];
int complainount = 0;
// Announcement 
string announ;

// print function 
void staffmenu();
void menu();
void princpalmenu();
void studentMenu();
void announcement();
void profile();
void teachermenu();
void attendencemenu();
void marksheetmenu();
void compaintmenu();
// checking function

int findteacherIndex(string str);
bool checkloginidentity(string inputUsername, string inputPassword, string& role);
bool validateCNIC(string cnic);
bool checkexistsoftecher(string username);
bool checkexistsoftecher(string username);
bool validatePhoneNumber(string phone);
bool isAlpha(char c);
bool isDigit(char c);

void clearMarks(int studentIndex, int subjectIndex);
bool validateUsername(string username);
bool validatePassword(string password);
bool isspecial(char c);
//working funtion
void teacher();
void principal();
void student();

//color codes
const string rest = "\033[0m";  ///reset coolor sceheme
const string r = "\033[31m";//red color cor
const string g = "\033[32m";//green color code;
const string y = "\033[33m";//yello
const string m = "\033[35m";//mangent
const string c = "\033[36m";//cyan color code
const string b = "\033[34m";//blue
const string w = "\033[37m";//white color
int main()
{
    while (true)
    {
        system("cls");
        menu();
        cout << c;
        cout << "1. LOGIN" << endl;
        cout << "__________" << endl;
        cout << "2. EXIT" << endl;
        cout << "__________" << endl;
        cout << m;
        string option;
        cin >> option;

        if (option == "1") {
            system("cls");
            menu();
            cout << c;
            string inputUsername, inputPassword;
            cin.ignore();
            cout << "Enter Username: " << endl;
            cout << "__________________" << endl;
            cout << m;
            getline(cin, inputUsername);
            cout << c;
            cout << "Enter Password: " << endl;;
            cout << "__________________" << endl;
            cout << m;
            getline(cin, inputPassword);

            string role;
            if (checkloginidentity(inputUsername, inputPassword, role)) {
                if (role == "principal") {
                    principal();
                }
                else if (role == "staff")
                {
                    teacher();
                }
                else if (role == "student") {
                    student();
                }
            }
            else {
                cout << r;
                cout << "Invalid login!" << endl;
                Sleep(1000);

            }
        }
        else if (option == "2") {
            break;
        }
        else
        {
            cout << r;
            cout << "Invalid option, please try again." << endl;
            Sleep(1000);

        }
    }
    return 0;
}
void menu()
{
    cout << g;
    cout << "# +=========================================================================================================================================================+ #" << endl;
    cout << "# |.........................................................................................................................................................| #" << endl;
    cout << c;
    cout << "# |...............................................................SCHOOL MANAGMENT SYSTEM...................................................................| #" << endl;
    cout << rest;
    cout << g;
    cout << "# |.........................................................................................................................................................| #" << endl;
    cout << "# +=========================================================================================================================================================+ #" << endl;
    cout << rest;
}

void princpalmenu()
{
    cout << g;
    cout << "# +=========================================================================================================================================================+ #" << endl;
    cout << "# |.........................................................................................................................................................| #" << endl;
    cout << c;
    cout << "# |.................................................................PRINCIPAL ..............................................................................| #" << endl;
    cout << g;
    cout << "# |.........................................................................................................................................................| #" << endl;
    cout << "# +=========================================================================================================================================================+ #" << endl;
    cout << rest;
}
void teachermenu()
{
    cout << g;

    cout << "# +=========================================================================================================================================================+ #" << endl;
    cout << "# |.........................................................................................................................................................| #" << endl;
    cout << c;
    cout << "# |..................................................................TEACHER................................................................................| #" << endl;
    cout << g;
    cout << "# |.........................................................................................................................................................| #" << endl;
    cout << "# +=========================================================================================================================================================+ #" << endl;
    cout << rest;
}
void attendencemenu()
{
    cout << g;

    cout << "# +=========================================================================================================================================================+ #" << endl;
    cout << "# |.........................................................................................................................................................| #" << endl;
    cout << c;
    cout << "# |.................................................................ATTENDANCE..............................................................................| #" << endl;
    cout << g;
    cout << "# |.........................................................................................................................................................| #" << endl;
    cout << "# +=========================================================================================================================================================+ #" << endl;
    cout << rest;
}
void marksheetmenu()
{
    cout << g;
    cout << "# +=========================================================================================================================================================+ #" << endl;
    cout << "# |.........................................................................................................................................................| #" << endl;
    cout << c;
    cout << "# |..................................................................MARKS SHEET............................................................................| #" << endl;
    cout << g;
    cout << "# |.........................................................................................................................................................| #" << endl;
    cout << "# +=========================================================================================================================================================+ #" << endl;
    cout << rest;
}
void staffmenu()
{
    cout << g;

    cout << "# +=========================================================================================================================================================+ #" << endl;
    cout << "# |.........................................................................................................................................................| #" << endl;
    cout << c;
    cout << "# |...................................................................STAFF DETAIL..........................................................................| #" << endl;
    cout << g;
    cout << "# |.........................................................................................................................................................| #" << endl;
    cout << "# +=========================================================================================================================================================+ #" << endl;
    cout << rest;
}

void studentMenu()
{
    cout << g;

    cout << "# +=========================================================================================================================================================+ #" << endl;
    cout << "# |.........................................................................................................................................................| #" << endl;
    cout << c;
    cout << "# |...................................................................STUDENT DETAIL .......................................................................| #" << endl;
    cout << g;
    cout << "# |.........................................................................................................................................................| #" << endl;
    cout << "# +=========================================================================================================================================================+ #" << endl;
    cout << rest;
}
void announcement()
{

    cout << g;
    cout << "# +=========================================================================================================================================================+ #" << endl;
    cout << "# |.........................................................................................................................................................| #" << endl;
    cout << c;
    cout << "# |....................................................................ANNOUNCEMENT.........................................................................| #" << endl;
    cout << g;
    cout << "# |.........................................................................................................................................................| #" << endl;
    cout << "# +=========================================================================================================================================================+ #" << endl;
    cout << rest;
}
void profile()
{
    cout << g;
    cout << "# +=========================================================================================================================================================+ #" << endl;
    cout << "# |.........................................................................................................................................................| #" << endl;
    cout << c;
    cout << "# |.......................................................................PROFILE...........................................................................| #" << endl;
    cout << g;
    cout << "# |.........................................................................................................................................................| #" << endl;
    cout << "# +=========================================================================================================================================================+ #" << endl;
    cout << rest;
}
void compaintmenu()
{
    cout << g;
    cout << "# +=========================================================================================================================================================+ #" << endl;
    cout << "# |.........................................................................................................................................................| #" << endl;
    cout << r;
    cout << "# |......................................................................COMPLAIN...........................................................................| #" << endl;
    cout << g;
    cout << "# |.........................................................................................................................................................| #" << endl;
    cout << "# +=========================================================================================================================================================+ #" << endl;
    cout << rest;
}



bool checkloginidentity(string inputUsername, string inputPassword, string& role)
{
    if (inputUsername == principalUsername && inputPassword == principalPassword)
    {
        role = "principal";
        return true;
    }

    for (int i = 0; i < staffCount; i++)
    {
        if (staffUsername[i] == inputUsername && staffPassword[i] == inputPassword)
        {
            role = "staff";
            return true;
        }
    }

    for (int i = 0; i < studentCount; i++)
    {
        if (studentUsername[i] == inputUsername && studentPassword[i] == inputPassword)
        {
            role = "student";
            return true;
        }
    }

    return false;
}
bool validateCNIC(string cnic)
{

    if (cnic.length() != 13)
    {
        return false;
    }


    for (int i = 0; i < 13; i++)
    {
        if (!isdigit(cnic[i]))
        {

            return false;
        }
    }

    return true;
}
bool checkexistsoftecher(string username)
{
    for (int i = 0; i < staffCount; i++) {
        if (staffUsername[i] == username) {
            return true; // Username exists
        }
    }
    return false; // Username does not exist
}
bool checkexistsofstudent(string username)
{
    for (int index = 0; index < studentCount; index++)
    {
        if (studentUsername[index] == username)
        {
            return true;
        }
    }
    return false;
}

bool validatePhoneNumber(string phone)
{

    if (phone.length() != 11) {
        return false;
    }

    for (int i = 0; i < 11; i++)
    {
        if (!isdigit(phone[i]))
        {

            return false;
        }
    }


    return true;
}
bool isDigit(char c)
{
    return c >= '0' && c <= '9';
}

bool isAlpha(char c)
{
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}
bool isspecial(char c)
{
    return (c == ',' || c == '!' || c == '.' || c == '#' || c == '@' || c == '$' || c == '&' || c == '%' || c == '*' || c == '/' || c == '\\' || c == '?' || c == '<' || c == '>');
}


bool validateUsername(string username)
{

    if (username.empty() || !isalpha(username[0]) || username.length() < 4) {
        return false;
    }

    for (int i = 0; i < username.length(); i++)
    {
        if (!(isalpha(username[i]) || isdigit(username[i])))
        {
            return false;
        }
    }


    return true;
}

bool validatePassword(string password)
{

    if (password.length() < 7)
    {
        return false;
    }


    for (int i = 0; i < password.length(); i++)
    {
        if (isspace(password[i]))
        {
            return false;
        }
    }


    return true;
}

int findteacherIndex(string str)
{
    for (int i = 0; i <= staffCount; i++)
    {
        if (str == staffUsername[i])
        {
            return i;
        }
    }
}
int findstudentIndex(string str)
{
    for (int i = 0; i <= studentCount; i++)
    {
        if (str == studentUsername[i])
        {
            return i;
        }
    }
}


void principal()
{
    string principalname;
    string principalcnic;
    string principalphone;
    string principalfathername;
    while (true)
    {
        system("cls");
        princpalmenu();
        cout << c;
        cout << "1. STAFF DETAIL" << endl;
        cout << "__________________" << endl;
        cout << "2. STUDENT DETAIL" << endl;
        cout << "__________________" << endl;
        cout << "3. ANNOUNCEMENT" << endl;
        cout << "__________________" << endl;
        cout << "4. PROFILE DETAIL " << endl;
        cout << "__________________" << endl;
        cout << "5. BACK" << endl;
        cout << "__________________" << endl;
        cout << "6. EXIT" << endl;
        cout << "__________________" << endl;

        cout << m;
        string option;
        cin >> option;

        if (option == "1")
        {
            while (true) {
                system("cls");
                staffmenu();
                cout << c;
                cout << "1. ADD STAFF" << endl;
                cout << "__________________" << endl;
                cout << "2. VIEW STAFF" << endl;
                cout << "__________________" << endl;
                cout << "3. SEARCH STAFF" << endl;
                cout << "__________________" << endl;
                cout << "4. REMOVE STAFF BY NAME" << endl;
                cout << "________________________" << endl;

                cout << "5. BACK" << endl;
                cout << "__________________" << endl;

                cout << m;
                string staffOption;
                cin >> staffOption;

                if (staffOption == "1") {
                    while (true) {
                        if (staffCount >= number) {
                            cout << r;
                            cout << "Cannot add more staff. ";
                            Sleep(1000);
                            continue;
                        }

                        system("cls");
                        staffmenu();
                        string username, password, name, fatherName, cnic, phone;

                        // Input and validate username
                        while (true)
                        {
                            system("cls");
                            staffmenu();
                            cout << y;
                            cout << "Enter Staff Username: ";
                            cin.ignore();
                            cout << b;
                            getline(cin, username);

                            if (checkexistsoftecher(username))
                            {
                                cout << r;
                                cout << "THIS USERNAME EXISTS ALREADY. PLEASE ENTER ANOTHER." << endl;
                                Sleep(1500);
                                continue;
                            }

                            if (!validateUsername(username))
                            {
                                cout << r;
                                cout << "PLEASE ENTER A USERNAME  MORE THAN 4 CHARACTERS! (NO SPACE/NO Special Character)" << endl;
                                Sleep(1000);
                                continue;
                            }
                            break;
                        }

                        // Input and validate password
                        while (true)
                        {
                            system("cls");
                            staffmenu();
                            cout << y;
                            cout << "Enter Staff Password: ";
                            cout << b;
                            getline(cin, password);

                            if (!validatePassword(password))
                            {
                                cout << r;
                                cout << "PASSWORD MUST BE 8 CHARACTERS OR LONGER!(nospace)" << endl;
                                Sleep(1000);
                                continue;
                            }
                            break;
                        }

                        // Input other details
                        system("cls");
                        staffmenu();
                        cout << y;
                        cout << "Enter Staff Name: ";
                        cout << b;
                        getline(cin, name);
                        system("cls");
                        staffmenu();
                        cout << y;
                        cout << "Enter Father's Name: ";
                        cout << b;
                        getline(cin, fatherName);

                        // Input and validate CNIC
                        while (true)
                        {
                            system("cls");
                            staffmenu();
                            cout << y;
                            cout << "Enter CNIC (13 numbers): ";
                            cout << b;
                            getline(cin, cnic);

                            if (!validateCNIC(cnic))
                            {
                                cout << r;
                                cout << "CNIC MUST CONTAIN EXACTLY 13 DIGITS!" << endl;
                                Sleep(1000);
                                continue;
                            }
                            break;
                        }

                        // Input and validate phone number
                        while (true)
                        {
                            system("cls");
                            staffmenu();
                            cout << y;
                            cout << "Enter Phone Number (10-13 digits): ";
                            cout << b;
                            getline(cin, phone);

                            if (!validatePhoneNumber(phone)) {
                                cout << r;
                                cout << "Phone Number Must be Of 13 digits!" << endl;
                                Sleep(1000);
                                continue;
                            }
                            break;
                        }

                        // Save staff details
                        staffUsername[staffCount] = username;
                        staffPassword[staffCount] = password;
                        tname[staffCount] = name;
                        tfathername[staffCount] = fatherName;
                        tcinic[staffCount] = cnic;
                        tphone[staffCount] = phone;
                        staffCount++;
                        cout << r;
                        cout << "Staff added successfully!\n";
                        cout << b;
                        system("pause");

                        break;
                    }
                }
                else if (staffOption == "2") {
                    system("cls");
                    staffmenu();
                    cout << c;

                    cout << "============================================================================" << endl;
                    cout << "| Username          | Name               | CNIC             | Phone         |" << endl;
                    cout << "============================================================================" << endl;

                    cout << y;
                    for (int i = 0; i < staffCount; i++) {
                        cout << " " << setw(18) << left << staffUsername[i]
                            << "   " << setw(18) << left << tname[i]
                            << "    " << setw(15) << left << tcinic[i]
                            << "    " << setw(15) << left << tphone[i]
                            << "" << endl;
                    }
                    cout << "============================================================================" << endl;
                    cout << r;
                    system("pause");
                }

                else if (staffOption == "3")
                {
                    system("cls");
                    staffmenu();
                    string usernameToSearch;
                    cin.ignore();
                    cout << y;
                    cout << "Enter username to search: ";
                    cout << b;
                    getline(cin, usernameToSearch);
                    bool found = false;
                    cout << w;
                    for (int i = 0; i < staffCount; i++)
                    {
                        cout << y;
                        if (staffUsername[i] == usernameToSearch) {
                            cout << "Staff found: Username: " << staffUsername[i]
                                << " Name: " << tname[i]
                                << " CNIC: " << tcinic[i]
                                << " Phone: " << tphone[i] << endl;
                            found = true;
                            break;
                        }
                    }

                    if (!found)
                    {
                        cout << r;
                        cout << "Staff with username " << usernameToSearch << " not found." << endl;
                    }
                    cout << b;
                    system("pause");
                }
                else if (staffOption == "4")
                {
                    system("cls");
                    staffmenu();
                    string nameToRemove;
                    cin.ignore();
                    cout << y;
                    cout << "Enter the name of the staff to remove: ";
                    cout << b;
                    getline(cin, nameToRemove);

                    bool found = false;

                    for (int i = 0; i < staffCount; i++) {
                        if (tname[i] == nameToRemove) {
                            found = true;
                            for (int j = i; j < staffCount - 1; j++) {
                                staffUsername[j] = staffUsername[j + 1];
                                staffPassword[j] = staffPassword[j + 1];
                                tname[j] = tname[j + 1];
                                tfathername[j] = tfathername[j + 1];
                                tcinic[j] = tcinic[j + 1];
                                tphone[j] = tphone[j + 1];
                            }
                            staffCount--;
                            cout << r;
                            cout << "Staff member " << nameToRemove << " removed successfully!" << endl;

                            Sleep(1000);
                            cout << g;
                            system("pause");
                            break;
                        }
                    }

                    if (!found) {
                        cout << r;
                        cout << "No staff member found with the name " << nameToRemove << "." << endl;

                    }
                    Sleep(1500);
                }
                else if (staffOption == "5")
                {
                    break;
                }
                else {
                    cout << r;
                    cout << "Invalid option, please try again." << endl;

                    Sleep(1000);
                }
            }
        }
        else if (option == "2") {
            while (true) {
                system("cls");
                studentMenu();
                cout << c;
                cout << "1. ADD STUDENT" << endl;
                cout << "__________________" << endl;
                cout << "2. VIEW STUDENTS" << endl;
                cout << "__________________" << endl;
                cout << "3. SEARCH STUDENT" << endl;
                cout << "__________________" << endl;
                cout << "4. REMOVE STUDENT BY NAME" << endl;
                cout << "__________________" << endl;
                cout << "5. BACK" << endl;
                cout << "__________________" << endl;
                cout << m;

                string studentOption;
                cin >> studentOption;

                if (studentOption == "1") {
                    while (true) { // Keep asking until valid information is added
                        if (studentCount >= number) {
                            cout << r;
                            cout << "Cannot add more students!" << endl;
                            Sleep(1000);
                            break;
                        }

                        string username, password, name, fname, cnic, pnumber;

                        while (true) { // Loop until a valid username is entered
                            system("cls");
                            studentMenu();
                            cout << y;
                            cout << "Enter Student Username: ";
                            cout << b;
                            cin.ignore(); // Clear input buffer for getline
                            getline(cin, username);

                            if (checkexistsofstudent(username)) {
                                cout << r;
                                cout << "THIS USERNAME ALREADY EXISTS. ENTER ANOTHER USERNAME." << endl;
                                Sleep(1500);
                                continue;
                            }

                            if (!validateUsername(username)) {
                                cout << r;
                                cout << "ENTER A USERNAME CONTAINING AT LEAST 5 ALPHABETS (NO SPACES)!" << endl;
                                Sleep(2000);
                                continue;
                            }

                            break; // Exit loop if username is valid
                        }

                        while (true) { // Loop until a valid password is entered
                            system("cls");
                            studentMenu();
                            cout << y;
                            cout << "Enter Student Password: ";
                            cout << b;
                            getline(cin, password);

                            if (!validatePassword(password)) {
                                cout << r;
                                cout << "ENTER PASSWORD >= 8 CHARACTERS!(NO SPACE)" << endl;
                                Sleep(2000);
                                continue;
                            }

                            break; // Exit loop if password is valid
                        }

                        while (true) { // Loop until a valid name is entered
                            system("cls");
                            studentMenu();
                            cout << y;
                            cout << "Enter Student Name: ";
                            cout << b;
                            getline(cin, name);

                            if (name.empty()) {
                                cout << r;
                                cout << "NAME CANNOT BE EMPTY!" << endl;
                                Sleep(1500);
                                continue;
                            }

                            break; // Exit loop if name is valid
                        }

                        while (true) { // Loop until a valid father's name is entered
                            system("cls");
                            studentMenu();
                            cout << y;
                            cout << "Enter Father's Name: ";
                            cout << b;
                            getline(cin, fname);

                            if (fname.empty()) {
                                cout << r;
                                cout << "FATHER'S NAME CANNOT BE EMPTY!" << endl;
                                Sleep(1500);
                                continue;
                            }

                            break; // Exit loop if father's name is valid
                        }

                        while (true) { // Loop until a valid CNIC is entered
                            system("cls");
                            studentMenu();
                            cout << y;
                            cout << "Enter CNIC (13 digits): ";
                            cout << b;
                            getline(cin, cnic);

                            if (!validateCNIC(cnic)) {
                                cout << r;
                                cout << "ENTER CNIC MUST CONTAIN 13 DIGITS!" << endl;
                                Sleep(2000);
                                continue;
                            }

                            break; // Exit loop if CNIC is valid
                        }

                        while (true) { // Loop until a valid phone number is entered
                            system("cls");
                            studentMenu();
                            cout << y;
                            cout << "Enter Phone Number (11-13 digits): ";
                            cout << b;
                            getline(cin, pnumber);

                            if (!validatePhoneNumber(pnumber)) {
                                cout << r;
                                cout << "PLEASE ENTER A VALID PHONE NUMBER!" << endl;
                                Sleep(2000);
                                continue;
                            }

                            break; // Exit loop if phone number is valid
                        }

                        // Store valid data into arrays
                        studentUsername[studentCount] = username;
                        studentPassword[studentCount] = password;
                        sname[studentCount] = name;
                        sfathername[studentCount] = fname;
                        scinic[studentCount] = cnic;
                        sphone[studentCount] = pnumber;
                        studentCount++;

                        cout << r;
                        cout << "Student added successfully!" << endl;
                        cout << b;
                        system("pause");
                        break; // Exit the outer loop once student is added successfully
                    }
                }


                else if (studentOption == "2") {
                    system("cls");
                    studentMenu();

                    cout << y;
                    cout << "============================================================================" << endl;
                    cout << "| Username          | Name               | CNIC           | Phone           |" << endl;
                    cout << "============================================================================" << endl;

                    cout << r;
                    for (int i = 0; i < studentCount; i++) {
                        cout << "| " << setw(18) << left << studentUsername[i]
                            << "| " << setw(18) << left << sname[i]
                            << "| " << setw(15) << left << scinic[i]
                            << "| " << setw(15) << left << sphone[i]
                            << " |" << endl;
                    }
                    cout << "============================================================================" << endl;
                    cout << b;
                    system("pause");
                }

                else if (studentOption == "3")
                {
                    system("cls");
                    studentMenu();
                    string usernameToSearch;
                    cout << y;
                    cout << "Enter username to search: ";
                    cout << b;
                    cin.ignore();
                    getline(cin, usernameToSearch);
                    bool found = false;
                    cout << r;
                    for (int i = 0; i < studentCount; i++) {
                        if (studentUsername[i] == usernameToSearch) {
                            cout << "Student found: Username: " << studentUsername[i] << " Name: " << sname[i] << " CNIC: " << scinic[i] << " Phone: " << sphone[i] << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) cout << "Student with username " << usernameToSearch << " not found." << endl;
                    cout << b;
                    system("pause");
                }

                else if (studentOption == "4") {
                    system("cls");
                    studentMenu();
                    string nameToRemove;
                    cout << y;
                    cout << "Enter the name of the student to remove: ";
                    cout << b;
                    cin.ignore(); // Clear input buffer
                    getline(cin, nameToRemove);

                    bool found = false;
                    for (int i = 0; i < studentCount; i++) {
                        if (sname[i] == nameToRemove) {
                            found = true;
                            for (int j = i; j < studentCount - 1; j++) {
                                studentUsername[j] = studentUsername[j + 1];
                                studentPassword[j] = studentPassword[j + 1];
                                sname[j] = sname[j + 1];
                                sfathername[j] = sfathername[j + 1];
                                scinic[j] = scinic[j + 1];
                                sphone[j] = sphone[j + 1];
                            }
                            studentCount--;
                            cout << r;
                            cout << "Student " << nameToRemove << " removed successfully!" << endl;
                            cout << b;
                            Sleep(1500);
                            break;
                        }
                    }
                    cout << r;
                    if (!found) cout << "No student found with the name " << nameToRemove << "." << endl;
                    cout << b;
                    system("pause");
                }

                else if (studentOption == "5") {
                    break;
                }

                else {
                    cout << r;
                    cout << "Invalid option, please try again." << endl;
                    Sleep(1000);
                }
            }
        }

        else if (option == "3")
        {
            while (true)
            {

                system("cls");
                announcement();
                cout << c;
                cout << "1.ADD ANOUNCEMENT :" << endl;
                cout << "______________________" << endl;
                cout << "2,VIEW ANNOUNCMENT  :" << endl;
                cout << "______________________" << endl;
                cout << "3.CLEAR" << endl;
                cout << "______________________" << endl;
                cout << "4.BACK" << endl;
                cout << "______________________" << endl;
                cout << "5.EXIT" << endl;
                cout << "______________________" << endl;
                cout << m;
                string option;
                cin >> option;
                if (option == "1")

                {

                    system("cls");
                    announcement();
                    cout << b;
                    cout << "ENTER ANNOUNCEMENT :" << endl;
                    cout << y;
                    cin.ignore();
                    getline(cin, announ);
                    cout << r;
                    system("pause");
                }
                else if (option == "2")
                {
                    system("cls");
                    announcement();
                    cout << y;
                    cout << "ANNOUNCMENT :" << endl << announ << endl;
                    cout << r;
                    system("pause");
                }
                else if (option == "3")
                {
                    system("cls");
                    announcement();
                    cout << y;
                    cout << "ENTER C/c FOR CLEAR ANNOUNCEMENT :" << endl;
                    cout << "ENTER B/b FOR BACK :" << endl;
                    cout << m;
                    string option;
                    cin >> option;
                    if (option == "C" || option == "c")
                    {
                        system("cls");
                        announcement();
                        announ = "";
                        cout << r;
                        cout << "SUCCESSFULlY CLEARED !" << endl;
                        cout << b;
                        system("pause");
                    }
                    else if (option == "B" || option == "b")
                    {
                        break;
                    }
                    else
                    {
                        cout << r;
                        cout << "invalid option :" << endl;
                        system("pause");
                    }

                }
                else if (option == "4")
                {
                    break;
                }
                else if (option == "5")
                {
                    exit(0);
                }
                else
                {
                    cout << r;

                    cout << "INVALID NUMBER ! " << endl;

                    Sleep(1500);
                    continue;
                }

            }


        }
        else if (option == "4")
        {
            while (true)
            {
                system("cls");
                profile();

                cout << c;

                cout << "1. UPDATE PROFILE" << endl;
                cout << "______________________" << endl;
                cout << "2. VIEW PROFILE" << endl;
                cout << "______________________" << endl;
                cout << "3. UPDATE USERNAME/PASSWORD" << endl;
                cout << "___________________________" << endl;

                cout << "4. BACK" << endl;
                cout << "______________________" << endl;
                cout << "5. EXIT" << endl;
                cout << "______________________" << endl;
                cout << m;
                string subOption;
                cin >> subOption;

                if (subOption == "1")
                {
                    system("cls");
                    profile();
                    cin.ignore();
                    cout << y;
                    cout << "ENTER NAME: ";
                    cout << b;
                    getline(cin, principalname);
                    system("cls");
                    profile();
                    cout << y;
                    cout << "ENTER FATHER'S NAME: ";
                    cout << b;
                    getline(cin, principalfathername);

                    while (true)
                    {
                        system("cls");
                        profile();
                        cout << y;
                        cout << "ENTER CNIC NUMBER (13 digits): ";
                        cout << b;
                        cin >> principalcnic;

                        if (principalcnic.length() == 13 && validateCNIC(principalcnic))
                        {
                            break;
                        }
                        cout << r;
                        cout << "INVALID CNIC! Please enter exactly 13 digits." << endl;

                        Sleep(1000);
                    }

                    while (true)
                    {
                        system("cls");
                        profile();
                        cout << y;
                        cout << "ENTER PHONE NUMBER (11 digits): ";
                        cout << b;
                        cin >> principalphone;

                        if (principalphone.length() == 11 && validatePhoneNumber(principalphone))
                        {
                            break;
                        }
                        cout << r;
                        cout << "INVALID PHONE NUMBER! Please enter exactly 11 digits." << endl;

                        Sleep(1000);
                    }
                    cout << r;
                    cout << "PROFILE UPDATED SUCCESSFULLY!" << endl;
                    cout << b;
                    system("pause");
                }
                else if (subOption == "2") {
                    while (true) 
                    {
                        system("cls");
                        profile();


                        cout << b;
                        cout << "=============================================================" << endl;
                        cout << "| " << setw(15) << left << "Principal" << "| " << setw(30) << left << "DETAILS" << " |" << endl;
                        cout << "=============================================================" << endl;
                        cout << y;
                        cout << "| " << setw(15) << left << "NAME" << " " << setw(30) << left << principalname << " |" << endl;
                        cout << "| " << setw(15) << left << "FATHER'S NAME" << " " << setw(30) << left << principalfathername << " |" << endl;
                        cout << "| " << setw(15) << left << "CNIC" << " " << setw(30) << left << principalcnic << " |" << endl;
                        cout << "| " << setw(15) << left << "PHONE NUMBER" << " " << setw(30) << left << principalphone << " |" << endl;
                        cout << "=============================================================" << endl;

                        cout << m;
                        cout << "ENTER 'B' TO GO BACK: ";
                        string backOption;
                        cout << g;
                        cin >> backOption;

                        if (backOption == "b" || backOption == "B") {
                            break;
                        }
                        else {
                            cout << r;
                            cout << "INVALID OPTION! Returning to profile menu." << endl;
                            Sleep(1000);
                            break;
                        }
                    }
                }

                else if (subOption == "3")
                {
                    string newUsername, newPassword;


                    while (true)
                    {
                        system("cls");
                        profile();

                        cout << y;
                        cout << "ENTER YOUR NEW USERNAME: " << endl;;
                        cout << b;
                        getline(cin, newUsername);


                        if (!validateUsername(newUsername))
                        {
                            cout << r;
                            cout << " username! It must be at least 4 characters long and without spaces." << endl;
                            Sleep(1500);
                            continue;
                        }

                        break;
                    }


                    while (true)
                    {
                        system("cls");
                        profile();

                        cout << y;
                        cout << "ENTER YOUR NEW PASSWORD (minimum 8 characters): ";
                        cout << b;
                        getline(cin, newPassword);


                        if (!validatePassword(newPassword))
                        {
                            cout << r;
                            cout << "Password too short! It must be at least 8 characters long and cannot contain spaces." << endl;
                            Sleep(1500);
                            continue;
                        }

                        break;
                    }


                    principalUsername = newUsername;
                    principalPassword = newPassword;

                    cout << r;
                    cout << "USERNAME AND PASSWORD UPDATED SUCCESSFULLY!" << endl;
                    cout << b;
                    system("pause");
                }

                else if (subOption == "4")
                {
                    break;
                }
                else if (subOption == "5")
                {
                    exit(0);
                }
                else
                {
                    cout << r;

                    cout << "INVALID OPTION! Please try again." << endl;

                    Sleep(1000);
                }
            }
        }

        else if (option == "5") {
            break;
        }
        else if (option == "6") {
            exit(0);
        }
        else
        {

            cout << r;
            cout << "Invalid option, please try again." << endl;

            Sleep(1000);
        }
    }
}

void teacher()
{

    while (true)
    {

        system("cls");
        teachermenu();
        cout << c;
        cout << "1. Attendance" << endl;
        cout << "______________________" << endl;
        cout << "2. Marks" << endl;
        cout << "______________________" << endl;
        cout << "3. Announcements" << endl;
        cout << "______________________" << endl;
        cout << "4. View Complaints" << endl;
        cout << "______________________" << endl;
        cout << "5. Update Profile" << endl;
        cout << "______________________" << endl;
        cout << "6. Back" << endl;
        cout << "______________________" << endl;
        cout << "7. Exit " << endl;
        cout << "______________________" << endl;
        cout << "Select an option: " << endl;
        cout << "______________________" << endl;

        string option;
        cout << m;
        cin >> option;
        if (option == "1")
        {
            while (true)
            {
                system("cls");
                attendencemenu();
                string attendanceOption;
                cout << c;
                cout << "1. Take Attendance" << endl;
                cout << "______________________" << endl;
                cout << "2. View Attendance " << endl;
                cout << "______________________" << endl;
                cout << "3. Clear Attendance" << endl;
                cout << "______________________" << endl;
                cout << "4. Back to Main Menu" << endl;
                cout << "______________________" << endl;
                cout << "Select an option: " << endl;
                cout << "______________________" << endl;
                cout << m;
                cin >> attendanceOption;

                if (attendanceOption == "1") {
                    // Take attendance
                    system("cls");
                    attendencemenu();
                    cout << r;
                    cout << "ENTER P/p FOR PRESENT, A/a FOR ABSENT\n";

                    if (studentCount != 0) {
                        for (int index = 0; index < studentCount; index++) {
                            char input;
                            cout << y;
                            cout << "Enter attendance for " <<g<< sname[index] << ": ";
                            cout << b;
                            cin >> input;

                            // Validate input
                            if (input == 'P' || input == 'p' || input == 'A' || input == 'a') {
                                studentattendence[index][attendencecunt] = toupper(input); // Store as uppercase
                            }
                            else {
                                cout << r;
                                cout << "Invalid input. Please enter 'P/p' for Present or 'A/a' for Absent.\n";
                                index--; // Retry current student's attendance entry
                                continue;
                            }
                        }
                        attendencecunt++; // Increment attendance session count
                        cout << b;
                        cout << "ATTENDANCE UPDATED SUCCESSFULLY!\n";
                        cout << r;
                        system("pause");
                    }
                    else {
                        cout << r;
                        cout << "No students available to update attendance.\n";
                        system("pause");
                    }
                }
                else if (attendanceOption == "2") {
                    // View attendance
                    system("cls");
                    attendencemenu();
                    cout << r;
                    if (studentCount > 0 && attendencecunt > 0) {
                        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
                        cout << "+                     ATTENDANCE SHEET                       +\n";
                        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
                        cout << y;
                        cout << left << setw(5) << "S.No" << setw(30) << "Student Name";
                        cout << g;
                        // Display headers for each attendance session
                        for (int i = 0; i < attendencecunt; i++) {
                            cout << "Day " << (i + 1) << setw(4) << " ";
                        }
                        cout << "\n--------------------------------------------------------------\n";
                        cout << y;
                        // Display each student's attendance
                        for (int index = 0; index < studentCount; index++) {
                            cout << left << setw(5) << (index + 1) << setw(30) << sname[index];
                            for (int col = 0; col < attendencecunt; col++) {
                                cout << left << setw(10) << studentattendence[index][col];
                            }
                            cout << endl;
                        }
                        cout << r;
                        cout << "--------------------------------------------------------------\n";
                        cout << r;
                        system("pause");
                    }
                    else {
                        cout << r;
                        cout << "No attendance records available to view.\n";
                        cout << b;
                        system("pause");
                    }
                }
                else if (attendanceOption == "3") {
                    // Clear attendance
                    for (int index = 0; index < studentCount; index++) {
                        for (int col = 0; col < attendencecunt; col++) {
                            studentattendence[index][col] = '\0'; // Clear attendance for all students
                        }
                    }
                    attendencecunt = 0; // Reset attendance count
                    cout << "ATTENDANCE CLEARED!" << endl;
                    system("pause");
                }
                else if (attendanceOption == "4") {
                    break;
                }
                else {
                    cout << "Invalid option! Try again." << endl;
                    system("pause");
                }

            }

        }
        else if (option == "2")
        {
            while (true)
            {
                string marksOption;
                system("cls");
                marksheetmenu();
                cout << c;
                cout << "1. Add Marks :" << endl;
                cout << "______________________" << endl;
                cout << "2. View Marks Sheet" << endl;
                cout << "______________________" << endl;
                cout << "3. Topper of Marks (with Name)" << endl;
                cout << "______________________" << endl;
                cout << "4. Clear Marks Sheet" << endl;
                cout << "______________________" << endl;
                cout << "5. Clear Specific Subject Marks"<<endl;
                cout << "______________________" << endl;
                cout << "6. Back to Main Menu" << endl;
                cout << "______________________" << endl;
                cout << "Select an option: " << endl;
                cout << "______________________" << endl;
                cout << m;
                cin >> marksOption;


                if (marksOption == "1") {
                    system("cls");
                    marksheetmenu();
                    if (studentCount > 0) {
                        cout << y;
                        cout << "Enter Subject Name: ";
                        string subjectName;
                        cout << b;
                        cin >> subjectName;
                        subject[subjectcount] = subjectName; // Add subject
                        subjectcount++;
                        system("cls");
                        marksheetmenu();
                        // Add marks for each student in the new subject
                        for (int i = 0; i < studentCount; i++) {
                            int mark;
                            cout << y;
                            cout << "Enter marks for "<<r << sname[i]<<y << " in "<< m<< subjectName << ": ";
                            cout << b;
                            cin >> mark;
                            while (mark < 0 || mark > 100) {
                                cout << r;
                                cout << "Invalid marks. Please enter marks between 0 and 100: ";
                                cin >> mark;
                            }
                            marks[i][subjectcount - 1] = mark; // Add the mark for the student
                        }
                        cout << b;
                        cout << "Marks updated successfully.\n";
                        cout << r;
                        system("pause");
                    }
                    else {
                        cout << r;
                        cout << "No students available to add marks.\n";
                        cout << b;
                        system("pause");
                    }
                }
                else if (marksOption == "2") {
                    system("cls");
                    marksheetmenu();
                    if (studentCount > 0) {
                        cout << y;
                        // Display Marks Sheet with aligned columns
                        cout << "Marks Sheet:\n";
                        cout << "-------------------------------------------------\n";
                        cout << m;
                        // Display the header
                        cout << left << setw(20) << "Name";
                        for (int i = 0; i < subjectcount; i++) {
                            cout << setw(15) << subject[i];  // Adjust width for subject columns
                        }
                        cout << endl;
                        cout << r;
                        // Display marks for each student
                        for (int i = 0; i < studentCount; i++) {
                            cout << left << setw(20) << sname[i];  // Align student names
                            for (int j = 0; j < subjectcount; j++) {
                                cout << setw(15) << marks[i][j];  // Align marks for each subject
                            }
                            cout << endl;
                        }
                        cout << "-------------------------------------------------\n";
                        cout << r;
                        system("pause");
                    }
                    else {
                        cout << r;
                        cout << "No students available to view marks.\n";
                        cout << b;
                        system("pause");
                    }
                }
                else if (marksOption == "3") {
                    system("cls");
                    marksheetmenu();
                    if (studentCount > 0) {
                        int topperIndex = 0;
                        int highestMarks = -1;

                        // Loop through each student to find the topper
                        for (int i = 0; i < studentCount; i++) {
                            int totalMarks = 0;
                            for (int j = 0; j < subjectcount; j++) {
                                totalMarks += marks[i][j]; // Calculate total marks of the student
                            }

                            if (totalMarks > highestMarks) {
                                highestMarks = totalMarks;
                                topperIndex = i;
                            }
                        }
                        cout << y;
                        cout << "Topper: "<<r << sname[topperIndex]<<y << " with "<<m << highestMarks<<y << " marks.\n";
                        cout << b;
                        system("pause");
                    }
                    else {
                        cout << r;
                        cout << "No students available to determine the topper.\n";
                        cout << b;
                        system("pause");
                    }
                }
                else if (marksOption == "4") {
                    system("cls");
                    marksheetmenu();
                    if (studentCount > 0) {
                        for (int i = 0; i < studentCount; i++) {
                            for (int j = 0; j < subjectcount; j++) {
                                marks[i][j] = 0; // Clear all marks for every student
                            }
                        }
                        cout << r;
                        cout << "Marks sheet cleared successfully.\n";
                        cout << b;
                        system("pause");
                    }
                    else {
                        cout << r;
                        cout << "No students available to clear marks.\n";
                        cout << b;
                        system("pause");
                    }
                }
                else if (marksOption == "5") {
                    system("cls");
                    marksheetmenu();
                    if (studentCount > 0) {
                        cout << y;
                        cout << "Enter the student index (0-" << studentCount - 1 << "): ";
                        int studentIndex;
                        cout << m;
                        cin >> studentIndex;
                        if (studentIndex >= 0 && studentIndex < studentCount) {
                            cout << "Enter the subject index (0-" << subjectcount - 1 << "): ";
                            int subjectIndex;
                            cin >> subjectIndex;
                            if (subjectIndex >= 0 && subjectIndex < subjectcount) {
                                clearMarks(studentIndex, subjectIndex);
                                cout << m;
                                cout << "Marks cleared for " << sname[studentIndex] << " in " << subject[subjectIndex] << ".\n";
                            }
                            else {
                                cout << r;
                                cout << "Invalid subject index.\n";
                            }
                        }
                        else {
                            cout << r;
                            cout << "Invalid student index.\n";
                        }
                    }
                    else {
                        cout << r;
                        cout << "No students available to clear marks.\n";
                    }
                    system("pause");
                    }
                else if (marksOption == "6") 
                {
                    break; // Go back to the main menu
                }
                else
                {
                    cout << r;
                    cout << "Invalid option. Please try again.\n";

                }

            }

        }

        else if (option == "3")
        {
            while (true)
            {
                string announcementOption;
                system("cls");
                announcement();

                cout << c;
                cout << "1. Add Announcement for Students" << endl;
                cout << "___________________________________" << endl;
                cout << "2. View Announcement" << endl;
                cout << "_______________________" << endl;
                cout << "3. Announcement from Principal" << endl;
                cout << "_______________________" << endl;
                cout << "4. Back to Main Menu" << endl;
                cout << "_______________________" << endl;
                cout << "Select an option: " << endl;
                cout << "_______________________" << endl;
                cout << m;
                cin >> announcementOption;

                if (announcementOption == "1") {
                    // Add announcement
                    system("cls");
                    announcement();
                    cout << r;
                    cout << "============================================\n";
                    cout << "             ADD ANNOUNCEMENT               \n";
                    cout << "============================================\n";
                    cout << y;
                    cout << "ENTER YOUR USERNAME: ";
                    string username;
                    cout << b;
                    cin >> username;

                    int index = findteacherIndex(username);
                    if (index < 0) {
                        cout << r;
                        cout << "THIS USERNAME DOES NOT EXIST. PLEASE TRY AGAIN.\n";
                        system("pause");
                        continue;
                    }
                    system("cls");
                    announcement();
                    cout << r;
                    cout << "============================================\n";
                    cout << "             ADD ANNOUNCEMENT               \n";
                    cout << "============================================\n";
                   

                    // Add the announcement
                    cout << y;
                    cout << "Enter your announcement: "<<endl;
                    cin.ignore(); 
                    cout << b;
                    string announcement;
                    getline(cin, announcement);

                    teacherannouncement[index] = announcement; // Store the announcement
                    cout << "Announcement added successfully!\n";
                    system("pause");

                }
                else if (announcementOption == "2") {
                    // View user's announcement
                    system("cls");
                    announcement();
                    cout << r;
                    cout << "============================================\n";
                    cout << "             VIEW ANNOUNCEMENT              \n";
                    cout << "============================================\n";
                    cout << y;
                    cout << "ENTER YOUR USERNAME: ";
                    string username;
                    cout << b;
                    cin >> username;

                    int index = findteacherIndex(username);
                    if (index < 0) {
                        cout << r;
                        cout << "THIS USERNAME DOES NOT EXIST. PLEASE TRY AGAIN.\n";
                        system("pause");
                        continue;
                    }

                    // Check if the user has added an announcement
                    cout << y;
                    cout << "Your Announcement: " << endl;
                    cout << r;
                      cout<< teacherannouncement[index] << endl;
                    
                    if(teacherannouncement[index]==" ")
                    {
                        cout << r;
                        cout << "No announcement found for your username.\n";
                    }

                    system("pause");

                }
                else if (announcementOption == "3")
                {
                    system("cls");
                    announcement();
                    cout << r;
                    cout << "principal's announcement..." << endl;
                    cout << y;
                    cout << announ << endl;;
                    cout << b;
                    system("pause");

                }
                else if (announcementOption == "4")
                {
                    break;
                }
                else
                {
                    cout << r;
                    cout << "Invalid option.\n";

                }

            }

        }
        else if (option == "4")
        {
            while (true)
            {
                system("cls");
                teachermenu();
                cout << c;
                cout << "1.View Complain " << endl << "____________" << endl << "2.Action on announcement" << endl << "____________________" << endl << "3.Back" << endl << "______" << endl << "4.Exit" << endl << "_______" << endl << "Select any Option";

                string option;
                cout << m;
                cin >> option;
                if (option == "1")
                {
                    system("cls");
                    teachermenu();
                    cout << y;
                    cout << "STUDENT COMPLAIN IS GIVEN BELOW :" << endl << b << studentcompalin << endl;;
                    cout << r;
                    system("pause");

                }
                else if (option == "2")
                {
                    system("cls");
                    teachermenu();
                    cout << g;
                    cout << "Write any complain action points " << endl;
                    cout << b;
                    cin >> compalinaction;
                    cout << r;
                    system("pause");
                }
                else if (option == "3")
                {
                    break;
                }
                else if (option == "4")
                {
                    exit(0);
                }
                else
                {
                    cout << r;
                    cout << "invalid option !";

                }
            }
        }
        else if (option == "5") {
            while (true) {
                system("cls");
                profile();
                cout << c;
                cout << "1. UPDATE USERNAME/PASSWORD" << endl;
                cout << "_______________________________" << endl;
                cout << "2. UPDATE PROFILE INFORMATION" << endl;
                cout << "_______________________________" << endl;
                cout << "3. VIEW PROFILE INFORMATION" << endl;
                cout << "_______________________________" << endl;
                cout << "4. BACK" << endl;
                cout << "________" << endl;
                cout << "5. EXIT" << endl;
                cout << "________" << endl;
                cout << "SELECT ANY OPTION: ";
                string subOption;
                cout << m;
                cin >> subOption;

                if (subOption == "1") { // Update username/password
                    while (true) {
                        string newUsername;
                        system("cls");
                        profile();
                        string username;
                        cout << y;
                        cout << "ENTER YOUR OLD USERNAME: ";
                        cin.ignore(); // Clear buffer before getline
                        cout << b;
                        getline(cin, username);

                        int number = findteacherIndex(username);
                        if (number == -1) {
                            cout << "USERNAME NOT FOUND!" << endl;
                            Sleep(1500);
                            break;
                        }
                        while (true) {
                            system("cls");
                            profile();
                            cout << y;
                            cout << "ENTER YOUR NEW USERNAME: ";
                            cout << b;
                            getline(cin, newUsername);
                            if (checkexistsoftecher(newUsername)) {
                                cout << r;
                                cout << "PLEASE ADD ANOTHER USERNAME; THIS ONE ALREADY EXISTS." << endl;
                                Sleep(1500);
                                continue;
                            }
                            if (!validateUsername(newUsername)) {
                                cout << r;
                                cout << "USERNAME MUST CONTAIN MORE THAN 4 CHARACTERS!" << endl;
                                Sleep(1500);
                                continue;
                            }
                            break; 
                        }
                        system("cls");
                        profile();
                        cout << y;
                        cout << "ENTER YOUR NEW PASSWORD: ";
                        string password;
                        cout << b;
                        getline(cin, password);
                        if (!validatePassword(password)) {
                            cout << r;
                            cout << "PASSWORD MUST BE AT LEAST 8 CHARACTERS LONG!" << endl;
                            Sleep(1500);
                            continue;
                        }

                        staffUsername[number] = newUsername;
                        staffPassword[number] = password;
                        cout << r;
                        cout << "USERNAME AND PASSWORD UPDATED SUCCESSFULLY!" << endl;
                        cout << b;
                        system("pause");
                        break;
                    }
                }
                else if (subOption == "2") { 
                    system("cls");
                    profile();
                    string username;
                    cout << y;
                    cout << "ENTER YOUR USERNAME (to update your profile): ";
                    cin.ignore();
                    cout << b;
                    getline(cin, username);

                    int number = findteacherIndex(username);
                    if (number == -1) {
                        cout << r;
                        cout << "USERNAME NOT FOUND! PLEASE TRY AGAIN." << endl;
                        Sleep(1500);
                        break;
                    }

                    string name, fathername, identity, phnumber;
                    system("cls");
                    profile();
                    cout << y;
                    cout << "ENTER YOUR UPDATED NAME: ";
                    cout << b;
                    getline(cin, name);
                    system("cls");
                    profile();
                    cout << y;
                    cout << "ENTER YOUR FATHER'S NAME: ";
                    cout << b;
                    getline(cin, fathername);

                    while (true) {
                        system("cls");
                        profile();
                        cout << y;
                        cout << "ENTER YOUR CNIC (13 DIGITS): ";
                        cout << b;
                        getline(cin, identity);
                        if (!validateCNIC(identity)) {
                            cout << r;
                            cout << "INVALID CNIC! CNIC MUST BE 13 DIGITS LONG." << endl;
                            Sleep(1500);
                            continue;
                        }
                        break;
                    }

                    while (true) {
                        system("cls");
                        profile();
                        cout << y;
                        cout << "ENTER PHONE NUMBER (11-13 DIGITS): ";
                        cout << b;
                        getline(cin, phnumber);
                        if (validatePhoneNumber(phnumber)) {
                            break;
                        }
                        cout << r;
                        cout << "INVALID PHONE NUMBER! MUST BE 11-13 DIGITS LONG." << endl;
                        Sleep(1500);
                    }

                    tname[number] = name;
                    tfathername[number] = fathername;
                    tphone[number] = phnumber;
                    tcinic[number] = identity;
                    cout << r;
                    cout << "PROFILE UPDATED SUCCESSFULLY!" << endl;
                    cout << b;
                    system("pause");
                }
                else if (subOption == "3") {
                    while (true) {
                        system("cls");
                        profile();
                        cout << y;
                        cout << "ENTER YOUR USERNAME TO SEARCH PROFILE: ";
                        cin.ignore();
                        string name;
                        cout << b;
                        getline(cin, name);
                        int number = findteacherIndex(name);
                        if (number < 0) {
                            cout << r;
                            cout << "NO SUCH PROFILE EXISTS!" << endl;
                            system("pause");
                            break;
                        }

                        
                        cout << y;
                        cout << "=============================================================" << endl;
                        cout << "| " << setw(15) << left << "TEACHER " << "| " << setw(30) << left << "DETAILS" << " |" << endl;
                        cout << "=============================================================" << endl;

                        
                        cout << "| " << setw(15) << left << "NAME" << "| " << setw(30) << left << tname[number] << " |" << endl;
                        cout << "| " << setw(15) << left << "FATHER'S NAME" << "| " << setw(30) << left << tfathername[number] << " |" << endl;
                        cout << "| " << setw(15) << left << "CNIC" << "| " << setw(30) << left << tcinic[number] << " |" << endl;
                        cout << "| " << setw(15) << left << "PHONE NO" << "| " << setw(30) << left << tphone[number] << " |" << endl;
                        cout << "=============================================================" << endl;

                        cout << r;
                        system("pause");
                        break;
                    }
                    }

                else if (subOption == "4") 
                { 
                    break;
                }
                else if (subOption == "5")
                { 
                    exit(0);
                }
                else {
                    cout << r;
                    cout << "INVALID OPTION! PLEASE TRY AGAIN." << endl;
                    Sleep(1500);
                }
            }
            }






        else if (option == "6")
        {
            break;
        }
        else if (option == "7")
        {
            exit(0);
        }

        else
        {
            cout << r;
            cout << "Invalid option. Please try again.\n";

            Sleep(1000);
        }
    }
}

void student()
{


    while (true)
    {
        system("cls");
        studentMenu();
        cout << c;
        cout << "1.CHECK ATTENDENCE :" << endl;
        cout << "_____________________" << endl;
        cout << "2.CHECK RESULT :" << endl;
        cout << "_____________________" << endl;
        cout << "3.UPDATE PROFILE :" << endl;
        cout << "_____________________" << endl;
        cout << "4.ANNOUNCEMENT/COMPLAINT :" << endl;
        cout << "_____________________" << endl;
        cout << "5.BACK :" << endl;
        cout << "_____________________" << endl;
        cout << "6.EXIT :" << endl;
        cout << "_____________________" << endl;

        string option;
        cout << m;
        cin >> option;
        if (option == "1")
        {
            while (true) {
                system("cls");
                attendencemenu();
                cout << "ENTER YOUR USERNAME TO CHECK ATTENDANCE:\n";
                string user;
                cin >> user;

                int index = findstudentIndex(user);
                system("cls");
                attendencemenu();
                cout << r;
                if (index != -1) { // If the student is found
                    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
                    cout << "+                     ATTENDANCE SHEET                       +\n";
                    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
                    cout << y;
                    cout << left << setw(5) << "S.No" << setw(30) << "Student Name" << setw(15) << "Attendance\n";
                    cout << "--------------------------------------------------------------\n";
                    cout << b;
                    cout << left << setw(5) << "1" << setw(30) << sname[index];
                    cout << g;
                    for (int col = 0; col < attendencecunt; col++) {
                        cout << left << setw(4) << (studentattendence[index][col] = 1 ? "P" : "A");
                    }
                    cout << "\n--------------------------------------------------------------\n";
                    cout << r;
                    system("pause");
                    break;
                }
                else { // If the student is not found
                    cout << r;
                    cout << "Student not found. Please try again.\n";
                    system("pause");
                    break;
                }
            }



        }
        else if (option == "2")
        {
            while (true) {
                system("cls");
                marksheetmenu();
                cout << "ENTER YOUR USERNAME TO CHECK MARKS:\n";
                string user;
                cin >> user;

                int index = findstudentIndex(user);
                system("cls");
                marksheetmenu();
                cout << r;
                if (index != -1) { // If the student is found
                    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
                    cout << "+                        MARKS SHEET                        +\n";
                    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
                    cout << y;
                   
                    cout << left << setw(20) << "Name";
                    for (int i = 0; i < subjectcount; ++i) {
                        cout << setw(15) << subject[i];
                    }
                    cout << "\n--------------------------------------------------------------\n";
                    cout << b;
                    // Display the selected student's marks
                    cout << left << setw(20) << sname[index];
                    for (int j = 0; j < subjectcount; ++j) {
                        cout << setw(15) << marks[index][j];
                    }
                    cout << "\n--------------------------------------------------------------\n";
                    cout << r;
                    system("pause");
                    break;
                }
                else { // If the student is not found
                    cout << r;
                    cout << "Student not found. Please try again.\n";
                    system("pause");
                    break;
                }
            }


        }
        else if (option == "3") {
            while (true)
            {
                system("cls");
                profile();
                cout << c;
                cout << "1. UPDATE USERNAME/PASSWORD" << endl;
                cout << "_____________________________" << endl;
                cout << "2. UPDATE PROFILE INFORMATION" << endl;
                cout << "_____________________________" << endl;
                cout << "3. VIEW PROFILE INFORMATION" << endl;
                cout << "_____________________________" << endl;
                cout << "4. BACK" << endl;
                cout << "________" << endl;
                cout << "5. EXIT" << endl;
                cout << "_______" << endl;
                cout << "SELECT ANY OPTION: " << endl;
                cout << "___________________" << endl;
                string subOption;
                cout << m;
                cin >> subOption;

                if (subOption == "1") {
                    while (true) {
                        string newUsername;
                        system("cls");
                        profile();
                        string username;
                        cout << y;
                        cout << "ENTER YOUR OLD USERNAME: ";
                        cin.ignore();  
                        cout << b;
                        getline(cin, username);

                       
                        int number = findstudentIndex(username);
                        if (number == -1) {
                            cout << r;
                            cout << "USERNAME NOT FOUND!" << endl;
                            Sleep(1500);
                            break;  
                        }

                       
                        while (true) {
                            system("cls");
                            profile();
                            cout << y;
                            cout << "ENTER YOUR NEW USERNAME: ";
                            cout << b;
                            getline(cin, newUsername);

                           
                            if (checkexistsofstudent(newUsername)) {
                                cout << r;
                                cout << "THIS USERNAME ALREADY EXISTS! PLEASE ADD ANOTHER ONE." << endl;
                                Sleep(1500);
                                continue;  
                            }

                           
                            if (!validateUsername(newUsername)) {
                                cout << r;
                                cout << "USERNAME MUST CONTAIN MORE THAN 4 CHARACTERS(no space and special char)!" << endl;
                                Sleep(1500);
                                continue;  
                            }

                            break;  
                        }

                       
                        while (true) {
                            system("cls");
                            profile();
                            cout << y;
                            cout << "ENTER YOUR NEW PASSWORD: ";
                            string password;
                            cout << b;
                            getline(cin, password);

                          
                            if (!validatePassword(password)) {
                                cout << r;
                                cout << "PASSWORD MUST BE AT LEAST 8 CHARACTERS LONG!" << endl;
                                Sleep(1500);
                                continue;  
                            }

                           
                            studentUsername[number] = newUsername;
                            studentPassword[number] = password;
                            cout << r;
                            cout << "USERNAME AND PASSWORD UPDATED SUCCESSFULLY!" << endl;
                            cout << b;
                            system("pause");
                            break;  
                        }

                        break; 
                    }
                }

                else if (subOption == "2")
                {
                    system("cls");
                    profile();
                    string username;
                    cout << y;
                    cout << "ENTER YOUR OLD USERNAME: ";
                    cin.ignore();
                    cout << b;
                    getline(cin, username);

                    int number = findstudentIndex(username);
                    if (number == -1) {
                        cout << r;
                        cout << "USERNAME NOT FOUND!" << endl;
                        Sleep(1500);
                        break;
                    }
                    cout << y;
                    cout << "ENTER YOUR UPDATED NAME: ";
                    string name;
                    cout << b;
                    getline(cin, name);
                    system("cls");
                    profile();
                    cout << y;
                    cout << "ENTER YOUR FATHER'S NAME: ";
                    string fathername;
                    cout << b;
                    getline(cin, fathername);
                    system("cls");
                    profile();
                    cout << y;
                    cout << "ENTER YOUR CNIC (13 DIGITS): ";
                    string identity;
                    cout << b;
                    getline(cin, identity);
                    if (!validateCNIC(identity))
                    {
                        cout << r;
                        cout << "CNIC MUST BE 13 DIGITS LONG!" << endl;
                        Sleep(1500);
                        continue;
                    }
                    cout << y;
                    cout << "ENTER PHONE NUMBER (11-13 DIGITS): ";
                    string phnumber;
                    cout << b;
                    getline(cin, phnumber);
                    if (!validatePhoneNumber(phnumber))
                    {
                        cout << r;
                        cout << "PHONE NUMBER MUST BE 11-13 DIGITS LONG!" << endl;

                        Sleep(1500);
                        continue;
                    }


                    sname[number] = name;
                    sfathername[number] = fathername;
                    sphone[number] = phnumber;
                    scinic[number] = identity;
                    cout << r;
                    cout << "UPDATED SUCCESSFULLY!" << endl;
                    cout << b;
                    system("pause");
                }
                else if (subOption == "3") {
                    while (true) {
                        system("cls");
                        profile();

                        
                        cout << y;
                        cout << "ENTER YOUR USERNAME TO SEARCH PROFILE: ";
                        cin.ignore();
                        string name;
                        cout << b;
                        getline(cin, name);

                        int number = findstudentIndex(name); 
                        if (number < 0) {
                            cout << r;
                            cout << "NO SUCH PROFILE EXISTS!" << endl;
                            system("pause");
                            break;
                        }

                        system("cls");
                        profile();

                        
                        cout << y;
                        cout << "=============================================================" << endl;
                        cout << "| " << setw(15) << left << "STUDENT" << "| " << setw(30) << left << "DETAILS" << " |" << endl;
                        cout << "=============================================================" << endl;
                        cout << r;
                        cout << "| " << setw(15) << left << "NAME" << "| " << setw(30) << left << sname[number] << " |" << endl;
                        cout << "| " << setw(15) << left << "FATHER'S NAME" << "| " << setw(30) << left << sfathername[number] << " |" << endl;
                        cout << "| " << setw(15) << left << "CNIC" << "| " << setw(30) << left << scinic[number] << " |" << endl;
                        cout << "| " << setw(15) << left << "PHONE NO" << "| " << setw(30) << left << sphone[number] << " |" << endl;
                        cout << "=============================================================" << endl;
                        cout << b;
                        system("pause");
                        break;
                    }
                    }
                else if (subOption == "4")
                {
                    break;
                }
                else if (subOption == "5")
                {
                    exit(0);
                }
                else {
                    cout << r;
                    cout << "INVALID OPTION! PLEASE TRY AGAIN." << endl;
                    Sleep(1000);

                }
            }
        }
        else if (option == "4")
        {
            while (true)
            {
                system("cls");
                announcement();
                cout << c;
                cout << "1.VIEW ANNOUNCEMNET OF PRINCIPAL :" << endl;
                cout << "__________________________________" << endl;
                cout << "2.VIEW ANNOUNCEMENT OF TEACHER :" << endl;
                cout << "_______________________________" << endl;
                cout << "3.ADD COMPLAIN :" << endl;
                cout << "_______________" << endl;
                cout << "4.CLEAR COMPLAIN :" << endl;
                cout << "_______________" << endl;
                cout << "5.TEACHER REPLY :" << endl;
                cout << "_________________" << endl;
                cout << "6.BACK :" << endl;
                cout << "_______" << endl;
                string suboption;
                cout << m;
                cin >> suboption;
                if (suboption == "1")
                {

                    system("cls");
                    announcement();
                    cout << y;
                    cout << "ANNOUCEMENT OF PRINCIPAL IS :" << endl;
                    cout << "++++++++++++++++++++++++++++++" << endl;
                    cout << b;
                    cout << announ << endl;
                    cout << r;
                    system("pause");



                }
                else if (suboption == "2")
                {

                    system("cls");
                    cout << "============================================\n";
                    cout << "       ANNOUNCEMENTS BY TEACHERS            \n";
                    cout << "============================================\n";

                    // Check if there are any announcements
                    if (announcemnetcount == 0) {
                        cout << "No announcements have been added by teachers yet.\n";
                    }
                    else {
                        // Display each teacher's announcement
                        cout << "Teacher Name      Announcement\n";
                        cout << "--------------------------------------------\n";
                        for (int i = 0; i < announcemnetcount; i++) {
                            cout << tname[i] << "      " << teacherannouncement[i] << endl;
                        }
                    }
                    cout << "--------------------------------------------\n";
                    system("pause");

                }
                else if (suboption == "3") {
                    system("cls");
                    compaintmenu(); // Display the complaint menu
                    cout << y;
                    cout << "ENTER YOUR COMPLAINT" << endl;
                    cout << b;

                    // Ask for username
                    string username;
                    cout << y;
                    cout << "Enter your username: ";
                    cout << m;
                    cin >> username;

                    // Check if the username exists
                    bool userExists = false;
                    int userIndex = -1;  // To store the index of the user in the array
                    for (int i = 0; i < studentCount; i++) {
                        if (studentUsername[i] == username) {
                            userExists = true;
                            userIndex = i;  // Store the index of the user
                            break;
                        }
                    }

                    if (!userExists) {
                        cout << r;
                        cout << "Error: Username does not exist.\n";
                        cout << b;
                        system("pause");
                        return;  // Exit if the username is not found
                    }

                    // Ask if the user wants to view or add a complaint
                    string action;
                    cout << m;
                    cout << "Do you want to (1) Add a Complaint or (2) View your Complaint? ";
                    cout << m;
                    cin >> action;

                    if (action == "1") {
                        // Add complaint
                        if (complainount < 100) {
                            string complaint;
                            cout << y;
                            cout << "Enter your complaint: ";
                            cout << b;
                            cin.ignore(); // To clear any leftover input
                            getline(cin, complaint); // Take the complaint

                            // Store the complaint for the user
                            studentcompalin[complainount] = complaint;
                            complainount++; // Increment the complaint count
                            cout << r;
                            cout << "+++++++++++++++++++++++++++++++++++++" << endl;
                            cout << r;
                            cout << "COMPLAINT UPLOADED SUCCESSFULLY" << endl;
                            cout << g;
                        }
                        else {
                            cout << r;
                            cout << "Maximum complaints reached. Cannot add more complaints.\n";
                        }
                    }
                    else if (action == "2") {
                        // View complaint
                        bool hasComplaint = false;
                        // Check if the user has added a complaint
                        for (int i = 0; i < complainount; i++) {
                            if (studentUsername[i] == username) {
                                hasComplaint = true;
                                cout << y;
                                cout << "Your complaint: "<<m << studentcompalin[i] << endl;
                                break;
                            }
                        }

                        if (!hasComplaint) {
                            cout << r;
                            cout << "You have not submitted any complaints yet.\n";
                        }
                    }
                    else {
                        cout << r;
                        cout << "Invalid choice. Please try again.\n";
                    }
                    system("pause");
                }
                else if (suboption == "4") {  // Assuming "4" is the option for clearing a complaint
                    system("cls");
                    compaintmenu();  // Display the complaint menu
                    cout << y;
                    cout << "ENTER YOUR USERNAME TO CLEAR COMPLAINT" << endl;
                    cout << b;

                    // Ask for username
                    string username;
                    cout << "Enter your username: ";
                    cin >> username;

                    // Check if the username exists
                    bool userExists = false;
                    int userIndex = -1;  // To store the index of the user in the array
                    for (int i = 0; i < studentCount; i++) {
                        if (studentUsername[i] == username) {
                            userExists = true;
                            userIndex = i;  // Store the index of the user
                            break;
                        }
                    }

                    if (!userExists) {
                        cout << "Username does not exist.\n";
                        system("pause");
                        return;  // Exit if the username is not found
                    }

                    // Check if the user has submitted a complaint
                    if (studentcompalin[userIndex].empty()) {
                        cout << "You have not submitted any complaints yet.\n";
                        system("pause");
                        return;
                    }

                    // Confirm before clearing the complaint
                    string confirm;
                    cout << "Are you sure you want to clear your complaint? (Y/N): ";
                    cin >> confirm;

                    if (confirm == "Y" || confirm == "y") {
                        // Clear the complaint
                        studentcompalin[userIndex] = "";  // Set the complaint to an empty string

                        cout << "+++++++++++++++++++++++++++++++++++++\n";
                        cout << r;
                        cout << "COMPLAINT CLEARED SUCCESSFULLY" << endl;
                        cout << g;
                    }
                    else {
                        cout << "Complaint clearing operation cancelled.\n";
                    }

                    system("pause");
                    }


                else if (suboption == "5")
                {
                    system("cls");
                    compaintmenu();
                    cout << y;
                    cout << "TEACHER REPLY IS :" << endl;
                    cout << b;
                    cout << compalinaction;
                    cout << r;
                    system("pause");

                }
                else if (suboption == "6")
                {
                    break;
                }
                else
                {
                    cout << r;
                    cout << "INVALID OPTION :" << endl;

                }



            }

        }
        else if (option == "5")
        {
            break;
        }
        else if (option == "6")
        {
            exit(0);

        }

        else
        {
            cout << r;
            cout << "invalid option" << endl;

        }



    }
}

void clearMarks(int studentIndex, int subjectIndex) 
{
    marks[studentIndex][subjectIndex] = -1; // Clear the mark by setting it to -1
}


