// !Author: Rohan Doshi
// ?Problem statement Group A - 1

/*
Develop a program in C++ to create a database of student’s
information system containing the following information:
Name, Roll number, Class, Division, Date of Birth, Blood group,
Contact address, Telephone number, Driving license no. and other.
Construct the database with suitable member functions.
Make use of constructor, default constructor, copy constructor, destructor,
static member functions, friend class, this pointer, inline code and dynamic memory
allocation operators-new and delete as well as exception handling.
*/

#include <iostream>
#include <vector>
#include <cstring>
#include <ctime>
#include <sstream>
using namespace std;

class StudentDatabase
{
    unsigned int *RollNo, *Division;
    string *TelephoneNo;
    string *DLNo;
    string *Name, *Class, *BloodGroup, *ContactAddress, *Birthday;
    static int noOfObjects;

public:
    StudentDatabase() // default constructor
    {
        RollNo = new unsigned int;
        Division = new unsigned int;
        TelephoneNo = new string;
        DLNo = new string;
        Name = new string;
        Class = new string;
        BloodGroup = new string;
        ContactAddress = new string;
        Birthday = new string;
        noOfObjects++;
        create();
    }

    void create() // Create operation database
    {
        string temp;
        cout << "Enter your Name: ";
        cin.ignore();
        getline(cin, temp);
        *Name = temp;

        // exception handling for roll number
        while (true)
        {
            cout << "Enter Roll no: ";
            if (cin >> *RollNo)
            {
                break;
            }
            else
            {
                cout << "Invalid RollNo Number\n";
                cin.clear();
                cin.ignore(1000, '\n');
            }
        }

        cout << "Enter your Class: ";
        cin >> temp;
        *Class = temp;

        cout << "Enter your division: ";
        cin >> *Division;

        // exception handling for telephone number
        while (true)
        {
            cout << "Enter your Telephone number: ";
            try
            {
                string temp;
                cin >> temp;
                if (temp.length() != 10)
                {
                    throw "Telephone number must be 10 characters long\n";
                }
                for (char i : temp)
                {
                    if (!isdigit(i))
                    {
                        throw "Telephone no must be a digit\n";
                        break;
                    }
                }
                *TelephoneNo = temp;
                break;
            }
            catch (const char *msg)
            {
                cout << msg;
            }
        }

        cout << "Enter your Driving license number: ";
        cin >> *DLNo;

        // exception handling for blood group
        while (true)
        {
            cout << "Enter your blood group: ";
            try
            {
                cin >> *this->BloodGroup;
                if (*this->BloodGroup == "A+" || *this->BloodGroup == "A-" || *this->BloodGroup == "B+" || *this->BloodGroup == "B-" || *this->BloodGroup == "AB+" || *this->BloodGroup == "AB+" || *this->BloodGroup == "O+" || *this->BloodGroup == "O-")
                {
                    break;
                }
                else
                {
                    throw "Blood grp is not valid\n";
                }
            }
            catch (const char *msg)
            {
                cout << msg;
            }
        }

        cout << "Enter your Contact address: ";
        string temp2;
        cin.ignore();
        getline(cin, temp2);
        *ContactAddress = temp2;

        // Code to find today's date
        time_t ttime = time(nullptr);
        tm *local_time = localtime(&ttime);
        int year = 1900 + local_time->tm_year;
        int month = 1 + local_time->tm_mon;
        int day = local_time->tm_mday;
        string todayDate = to_string(day) + '/' + to_string(month) + '/' + to_string(year);

        // exception handling for birthday
        while (true)
        {
            try
            {
                cout << "Enter your birthday (dd/mm/yyyy): ";
                cin >> temp;
                int dayInt;
                int monthInt;
                int yearInt;
                stringstream dayStream, monthStream, yearStream; // used to convert string into an int
                dayStream << temp.substr(0, 2);
                dayStream >> dayInt;
                monthStream << temp.substr(3, 2);
                monthStream >> monthInt;
                yearStream << temp.substr(6, 4);
                yearStream >> yearInt;
                if (temp[2] != '/' || temp[5] != '/')
                {
                    throw "Invalid birthdate format";
                }
                else if (yearInt > year)
                {
                    throw "You canont be born in the future!";
                }
                else if (yearInt == year && monthInt > month)
                {
                    throw "You canont be born in the future!";
                }
                else if (monthInt == month && dayInt > day && yearInt == year)
                {
                    throw "You canont be born in the future!";
                }
                *Birthday = temp;
                break;
            }
            catch (const char *msg)
            {
                cout << msg << endl;
            }
        }
    }

    void read(); // read operation database

    friend void update(const StudentDatabase &obj); // friend function - update operation database 
    void deleteDB(); // delete operation database

    StudentDatabase(StudentDatabase &obj) //Copy Constructor
    {
        this->RollNo = new unsigned int;
        *RollNo = *obj.RollNo;
        this->Division = new unsigned int;
        *Division = *obj.Division;
        this->TelephoneNo = new string;
        *TelephoneNo = *obj.TelephoneNo;
        this->DLNo = new string;
        *DLNo = *obj.DLNo;
        this->Name = new string;
        *Name = *obj.Name;
        this->Class = new string;
        *Class = *obj.Class;
        this->BloodGroup = new string;
        *BloodGroup = *obj.BloodGroup;
        this->ContactAddress = new string;
        *ContactAddress = *obj.ContactAddress;
        this->Birthday = new string;
        *Birthday = *obj.Birthday;
        noOfObjects++;
    }

    StudentDatabase(const StudentDatabase &obj) // Vectors.pushBack uses a copy constructor that needs to have a const parameter
    {
        this->RollNo = new unsigned int;
        *RollNo = *obj.RollNo;
        this->Division = new unsigned int;
        *Division = *obj.Division;
        this->TelephoneNo = new string;
        *TelephoneNo = *obj.TelephoneNo;
        this->DLNo = new string;
        *DLNo = *obj.DLNo;
        this->Name = new string;
        *Name = *obj.Name;
        this->Class = new string;
        *Class = *obj.Class;
        this->BloodGroup = new string;
        *BloodGroup = *obj.BloodGroup;
        this->ContactAddress = new string;
        *ContactAddress = *obj.ContactAddress;
        this->Birthday = new string;
        *Birthday = *obj.Birthday;
    }

    ~StudentDatabase() //destructor
    {
        delete RollNo,
            delete Division,
            delete TelephoneNo,
            delete DLNo,
            delete Name,
            delete Class,
            delete BloodGroup,
            delete ContactAddress,
            delete Birthday;
    }

    static int ObjectCount()
    {
        return noOfObjects;
    }
};

void StudentDatabase::read() // function declaration for read method
{
    cout << "********************" << endl;
    cout << "Name is " << *Name << endl;
    cout << "Roll no is " << *RollNo << endl;
    cout << "Class is " << *Class << endl;
    cout << "Division is " << *Division << endl;
    cout << "Telephone no is " << *TelephoneNo << endl;
    cout << "DLNo is " << *DLNo << endl;
    cout << "Blood group is " << *BloodGroup << endl;
    cout << "Contact address is " << *ContactAddress << endl;
    cout << "Birthday is " << *Birthday << endl;
    cout << "********************" << endl;
}

int StudentDatabase::noOfObjects = 0;

void update(const StudentDatabase &obj) // friend function definition for update method
{
    cout << "********************" << endl;
    string temp;
    int tempint;
    cout << "Update Name (previous name:" << *obj.Name << ") for previous press enter" << endl;
    cin.ignore();
    getline(cin, temp);
    if (!temp.empty())
    {
        *obj.Name = temp;
    }

    cout << "Update Roll no (previous roll no:" << *obj.RollNo << ") for previous press -1" << endl;
    cin >> tempint;
    if (tempint != -1)
    {
        *obj.RollNo = tempint;
    }

    cout << "Update class (previous class:" << *obj.Class << ") for previous press -1" << endl;
    cin.ignore();
    cin >> temp;
    if (temp != "-1")
    {
        *obj.Class = temp;
    }

    cout << "Update Division (previous division:" << *obj.Division << ") for previous press -1" << endl;
    cin >> tempint;
    if (tempint != -1)
    {
        *obj.Division = tempint;
    }

    cout << "Update TelephoneNo (previous telephoneNo:" << *obj.TelephoneNo << ") for previous press -1" << endl;
    cin >> temp;
    if (temp != "-1")
    {
        *obj.TelephoneNo = temp;
    }

    cout << "Update DLNo (previous dlNo:" << *obj.DLNo << ") for previous press -1" << endl;
    cin.ignore();
    cin >> temp;
    if (temp != "-1")
    {
        *obj.DLNo = temp;
    }

    cout << "Update BloodGroup (previous bloodGroup:" << *obj.BloodGroup << ") for previous press -1" << endl;
    cin.ignore();
    cin >> temp;
    if (temp != "-1")
    {
        *obj.BloodGroup = temp;
    }

    cout << "Update ContactAddress (previous contactAddress:" << *obj.ContactAddress << ") for previous press -1" << endl;
    cin.ignore();
    getline(cin, temp);
    if (temp != "-1")
    {
        *obj.ContactAddress = temp;
    }

    cout << "Update Birthday (previous birthday:" << *obj.Birthday << ") for previous press -1" << endl;
    cin >> temp;
    if (temp != "-1")
    {
        *obj.Birthday = temp;
    }
    cout << "********************" << endl;
}

void StudentDatabase::deleteDB() // function declaration for deleteDB method
{
    delete RollNo,
        delete Division,
        delete TelephoneNo,
        delete DLNo,
        delete Name,
        delete Class,
        delete BloodGroup,
        delete ContactAddress,
        delete Birthday;
    noOfObjects--;
    cout << "Data for this user is now empty" << endl;
}

int main()
{

    vector<StudentDatabase> students;
    int usersChoice = {0};
    while (usersChoice != -1)
    {
        cout << "********MENU*********" << endl;
        cout << "1. Create new object" << endl;
        cout << "2. Read Data of the object" << endl;
        cout << "3. Update object" << endl;
        cout << "4. Delete the object" << endl;
        cout << "5. Create a new object from a existing object" << endl;
        cout << "-1. Exit" << endl;
        cout << "No of objects present at this time " << StudentDatabase::ObjectCount() << endl;
        cout << "Chose a operation to perform ";
        cin >> usersChoice;

        switch (usersChoice)
        {
        case 1:
        {
            cout << "Creating new user at position " << StudentDatabase::ObjectCount() + 1 << endl;
            StudentDatabase newStudent;
            students.push_back(newStudent);
            break;
        }
        case 2:
        {
            cout << "Enter position to read data for the object ";
            int position;
            cin >> position;
            if (StudentDatabase::ObjectCount() < position || position <= 0)
            {
                cout << "No object found at this position " << endl;
                break;
            }
            else
            {
                students[position - 1].read();
            }
            break;
        }
        case 3:
        {
            cout << "Enter the position to update the object ";
            int position;
            cin >> position;
            if (StudentDatabase::ObjectCount() < position || position <= 0)
            {
                cout << "No object found at this position " << endl;
                break;
            }
            else
            {
                update(students[position - 1]);
            }
            break;
        }
        case 4:
        {
            cout << "Enter the position to delete the object ";
            int position;
            cin >> position;
            if (StudentDatabase::ObjectCount() < position || position <= 0)
            {
                cout << "No object found at this position " << endl;
                break;
            }
            else
            {
                students[position - 1].deleteDB();
                cout << "Entering Vector Erase\n";
                students.erase(students.begin() + position - 1);
            }
            break;
        }
        case 5:
        {
            cout << "Creating new user at position " << StudentDatabase::ObjectCount() + 1 << endl;
            cout << "Enter the position to copy from the object ";
            int position;
            cin >> position;
            if (StudentDatabase::ObjectCount() < position || position <= 0)
            {
                cout << "No object found at this position " << endl;
                break;
            }
            else
            {
                StudentDatabase newStudent = students[position - 1];
                students.push_back(newStudent);
            }
            break;
        }
        case -1:
        {
            cout << "Exit" << endl;
            usersChoice = -1;
            break;
        }
        default:
        {
            cout << "Enter valid Choice";
            break;
        }
        }
    }
    return 0;
}
