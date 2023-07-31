#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

//Structure defining

//For students
struct student
{

 string fname;//for student first name
 string lname;//for student last name
 string Registration;
 string classes;
 string Almanac;
 string Results;
 string Attendence;

}studentData;//Variable of student type

//For teachers
struct teacher
{
 string fst_name;//first name of teacher
 string lst_name;//last name of teacher
 string qualification;//Qualification of teacher
 string exp;//Experiance of the person
 string pay;//Pay of the Teacher
 string subj;//subject whos he/she teach
 string lec;//Lecture per Week
 string addrs;//Adders of teacher home
 string cel_no;//Phone number
 string blod_grp;//Bool Group
 string serves;//Number of serves in School
 string email_id;//email id of teacher

}tech[50];//Variable of teacher type


struct schoolevent
{

 string events;//for student first name


}sevent;//Variable of student type


struct schoolfeedback
{
    string cls;
    string ranking;
    string feedback;

}sfeedback;

struct displayadmin
{
    string studentdisplay;
    string teacherdisplay;
}displayad;

///////////////////////////////////////////////////
//Main function
main()
{
//students ss=new students();
int i=0,j;//for processing usage
char choice;//for getting choice
string find;//for sorting
//int find;
string srch;


while(1)//outer loop
{
 system("cls");//Clear screen

//Level 1-Display process
 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 //cout<<"\n\n\t\t\tSCHOOL MANAGEMENT PROGRAM\n\n";
  cout<<"\n\n\t\t\tSCHOOL BOT\n\n";
 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\t\t\tMAIN SCREEN\n\n";
 cout<<"Enter your choice: "<<endl;
 cout<<"1.Students Information"<<endl;
 cout<<"2.Teacher Information"<<endl;
 cout<<"3.School Events"<<endl;
 cout<<"4.FeedBack To School"<<endl;
 cout<<"5.To check all records"<<endl;
 cout<<"6.Exit program"<<endl;
 cin>>choice;

system("cls");//Clear screen


switch(choice)//First switch
{

case '1': //Student
 {
while(1)//inner loop-1
{
system("cls");//Clear screen
//Level-2 display
cout<<"\t\t\tSTUDENTS INFORMATION AND BIO DATA SECTION\n\n\n";
cout<<"Enter your choice: "<<endl;
cout<<"1.Admin Use\n";
cout<<"2.Student details\n";
cout<<"3.Jump to main\n";
cin>>choice;

switch (choice)//Second switch

{
case '1'://Insert data
{
    string userName;
    string userPassword="";

    int loginAttempt = 0;
    char c='0';
    while (loginAttempt<1)
    {
        cout<< "Please enter your user name: ";
        cin>>userName;
        cout<< "Please enter your user password: ";
        //cin>>userPassword;
        while(c!=13)
        {
        c=getch();
        if(c!=13){

            userPassword+=c;
            cout<<"+";

        }
        }

	if (userName == "admin" &&userPassword == "admin@key")
        {
        cout<< "\nWelcome Admin!\n";

fstream f1("student.txt",ios::out | ios::app);


for( i=0;choice!='n';i++)
{

if((choice=='y')||(choice=='Y')||(choice=='1'))
{
 cout<<"Enter First name: ";
 cin>>studentData.fname;
 cout<<"Enter Last name: ";
 cin>>studentData.lname;
 cout<<"Enter Registration number: ";
 cin>>studentData.Registration;
 cout<<"Enter class: ";
 cin>>studentData.classes;
 cout<<"Results:";
 cin>>studentData.Results;
 cout<<"Attendence:";
 cin>>studentData.Attendence;
 f1<<studentData.Registration<<endl<<studentData.fname<<endl<<studentData.lname<<endl<<studentData.classes<<endl<<studentData.Results<<endl<<studentData.Attendence<<endl<<studentData.Almanac<<endl;
 cout<<"Do you want to enter data: ";
 cout<<"Press Y for Continue and N to Finish:  ";
 cin>>choice;
}
}
f1.close();
break;
        }
else
{
cout<< "\nInvalid login attempt. Please try again.\n" << '\n';
loginAttempt++;
}
    }

}
continue;//control back to inner loop -1

case '2'://Display data
{
ifstream f1("student.txt");
cout<<"Enter the Student Registeration No.:";
cin>>find;
cout<<endl;
int notFound = 0;

for( j=0;(j<i)||(!f1.eof());j++)

{
getline(f1,studentData.Registration);
if(studentData.Registration==find)
{
notFound = 1;
 cout<<"Registration No number: "<<studentData.Registration<<endl;
 getline(f1,studentData.fname);
 cout<<"First Name: "<<studentData.fname<<endl;
 getline(f1,studentData.lname);
 cout<<"Last Name: "<<studentData.lname<<endl;
 getline(f1,studentData.classes);
 cout<<"Class: "<<studentData.classes<<endl;
 getline(f1,studentData.Results);
 cout<<"Results: "<<studentData.Results<<endl;
 getline(f1,studentData.Attendence);
 cout<<"Attendence: "<<studentData.Attendence<<endl;

ifstream a("almanac.txt",ios::out);


    for(int k;!a.eof();k++)
    {

        getline(a,studentData.Almanac);
        cout<<studentData.Almanac<<endl;

    }
a.close();
}
}

if(notFound == 0){

cout<<"No Record Found"<<endl;
}
f1.close();
cout<<"Press any key two times to proceed";
getch();//To hold data on screen
getch();//To hold data on screen

}
continue;//control back to inner loop -1

case '3'://Jump to main
{
break;//inner switch breaking
}
}

break;//inner loop-1 breaking
}
continue;//Control pass to 1st loop
}



case '2'://Teachers biodata
{
while(1)//inner loop-2
{
system("cls");//Clear screen
//Level-2 Display process
cout<<"\t\t\tTEACHERS INFORMATION AND BIODATA SECTION\n\n\n";
cout<<"Enter your choice: "<<endl;
cout<<"1.Admin Use\n";
cout<<"2.Teacher Details\n";
cout<<"3.Jump to main\n";
cin>>choice;

switch (choice)//Third switch
{
case '1'://Insert data
{
    string userName;
    string userPassword;
    char c='0';
    int loginAttempt = 0;
    while (loginAttempt< 1)
    {
    cout<< "Please enter your user name: ";
    cin>>userName;
    cout<< "Please enter your user password: ";
    //cin>>userPassword;
    while(c!=13)
        {
        c=getch();
        if(c!=13){

            userPassword+=c;
            cout<<"+";

        }
        }
	if (userName == "admin" &&userPassword == "admin@key")
        {
cout<< "Welcome Admin!\n";

fstream t1("teachers.txt",ios::out | ios::app);

for(i=0;choice!='n'&& choice!='N';i++)

{

 if((choice=='y')||(choice=='Y')||(choice=='1'))
 {
  cout<<"Enter First name: ";
  cin>>tech[i].fst_name;
  cout<<"Enter Last name:: ";
  cin>>tech[i].lst_name;
  cout<<"Enter qualification: ";
  cin>>tech[i].qualification;
  cout<<"Enter experiance(year): ";
  cin>>tech[i].exp;
  cout<<"Enter number of year in this School: ";
  cin>>tech[i].serves;
  cout<<"Enter Subject whos teach: ";
  cin>>tech[i].subj;
  cout<<"Enter Lecture(per Week): ";
  cin>>tech[i].lec;
  //cout<<"Enter pay: ";
 // cin>>tech[i].pay;
  cout<<"Enter Phone Number: ";
  cin>>tech[i].cel_no;
  //cout<<"Enter Blood Group: ";
 // cin>>tech[i].blod_grp;
  cout<<"Enter Email ID:";
  cin>>tech[i].email_id;


 /* t1<<tech[i].fst_name<<endl<<tech[i].lst_name<<endl
   <<tech[i].qualification<<endl<<tech[i].exp<<endl
   <<tech[i].serves<<endl<<tech[i].subj<<endl<<tech[i].lec
   <<endl<<tech[i].pay<<endl<<tech[i].cel_no<<endl<<tech[i].blod_grp<<endl<<tech[i].email_id<<endl;*/
  t1<<tech[i].fst_name<<endl<<tech[i].lst_name<<endl<<tech[i].qualification<<endl<<tech[i].exp<<endl<<tech[i].serves<<endl<<tech[i].subj<<endl<<tech[i].lec<<endl<<tech[i].cel_no<<endl<<tech[i].email_id<<endl;
  cout<<"Do you want to enter data: ";
  cout<<"Press Y for continue and N to Finish: ";
  cin>>choice;
 }//if
}//for loop
//for finding through name
system("cls");
t1.close();
break;
        }
else
{
cout<< "\nInvalid login attempt. Please try again.\n" << '\n';
loginAttempt++;
}
    }

}//case 1

continue;//Control pass to inner loop-2

case '2'://Display data
{
ifstream t2("teachers.txt");

cout<<"Enter name to be displayed: ";
cin>>find;
cout<<endl;
int notFound = 0;
for(j=0;(j<i)||(!t2.eof());j++)
{
 getline(t2,tech[j].fst_name);

 if(tech[j].fst_name==find)
 {
  notFound = 1;
  cout<<"First name: "<<tech[j].fst_name<<endl;
  getline(t2,tech[j].lst_name);
  cout<<"Last name: "<<tech[j].lst_name<<endl;
  getline(t2,tech[j].qualification);
  cout<<"Qualification: "<<tech[j].qualification<<endl;
  getline(t2,tech[j].exp);
  cout<<"Experience: "<<tech[j].exp<<endl;
  getline(t2,tech[j].serves);
  cout<<"Number of year in this School: "<<tech[j].serves<<endl;
  getline(t2,tech[j].subj);
  cout<<"Subject whos teach: "<<tech[j].subj<<endl;
  getline(t2,tech[j].lec);
  cout<<"Enter Lecture(per Week): "<<tech[j].lec<<endl;
  getline(t2,tech[j].cel_no);
  cout<<"Phone Number only available while working hours: "<<tech[j].cel_no<<endl;
  getline(t2,tech[j].email_id);
  cout<<"Email ID: "<<tech[j].email_id<<endl;
 }//if

}//for loop
if(notFound == 0){
  cout<<"No Record Found"<<endl;
}
t2.close();
cout<<"Press any key two times to proceed";
getch();//To hold data on screen
getch();//To hold data on screen
}//case 2

continue;//Control pass to inner loop-2

case '3'://Jump to main
{
break;//inner switch
}//case 3
}//inner switch

break;//inner while
}//inner loop

continue;//control pass to 1st loop
}//outer case 2

case '3'://School Events
{
while(1)//inner loop-3
{
system("cls");//Clear screen
//Level-3 Display process
//cout<<"\t\t\tSCHOOL EVENTS\n\n\n";

ifstream e("event.txt",ios::out);



    for(int k;!e.eof();k++)
    {

        getline(e,sevent.events);
        cout<<sevent.events<<endl;

    }
e.close();
cout<<"Press any key two times to proceed";
getch();//To hold data on screen
getch();//To hold data on screen
break;//inner while
}//inner loop

continue;//control pass to 1st loop
}//outer case 2



case '4'://School FeedBack
{
while(1)//inner loop-3
{
system("cls");//Clear screen
//Level-3 Display process
cout<<"\t\t\tSCHOOL FEEDBACK\n\n\n";
cout<<"Enter your choice: "<<endl;
cout<<"1.Want To Give FeedBack\n";
cout<<"2.Admin Use\n";
cout<<"3.Jump to main\n";

cin>>choice;

switch (choice)//Third switch
{
case '1'://Insert data
{

ofstream fb("feedback.txt",ios::out | ios::app);

for(i=0;choice!='n'&& choice!='N';i++)
{

 if((choice=='y')||(choice=='Y')||(choice=='1'))
  {
    cout<<"Enter the class of Child: ";
    cin>>sfeedback.cls;
    cout<<"Please give ranking to school:\nPress\n 1.Excellent\n 2.Very Good\n 3.Good\n 4.Satisfactory\n 5.Unsatisfactory: "<<endl;
    cin>>sfeedback.ranking;

    if(sfeedback.ranking=="4" || sfeedback.ranking=="5" || sfeedback.ranking=="3" || sfeedback.ranking=="2" || sfeedback.ranking=="1")
    {
        cout<<"Please Give the feedback to School:";
        cin>>sfeedback.feedback;
        cout<<"Thanks For The FeedBack"<<endl;
    }


fb<<sfeedback.cls<<endl<<sfeedback.ranking<<endl<<sfeedback.feedback<<endl;
 cout<<"Press Y for Continue and N to Finish:  ";
cin>>choice;
 }//if
}//for loop
//for finding through name
//system("cls");
fb.close();
}//case1

continue;//Control pass to inner loop-2

case '2'://Display data
{
    int notfound=0;
    string userName;
    string userPassword;

    int loginAttempt = 0;
    char c='0';
    while (loginAttempt< 1)
    {
    cout<< "Please enter your user name: ";
    cin>>userName;
    cout<< "Please enter your user password: ";
    //cin>>userPassword;
    while(c!=13)
        {
        c=getch();
        if(c!=13){

            userPassword+=c;
            cout<<"+";

        }
        }
	if (userName == "admin" &&userPassword == "admin@key")
        {
cout<< "\nWelcome Admin!\n";

ifstream fb("feedback.txt",ios::out);
    for(int t;!fb.eof();t++)
        if(fb.eof())
    {
        {
            cout<<"No FeedBack Recieved"<<endl;
        }
    }

else{    //for(j=0;(j<i)||(!fb.eof());j++)
for(int t;!fb.eof();t++)
    {
    /*if(fb.eof())
        {
            cout<<"No FeedBack Recieved"<<endl;
        }*/
    //else{
        notfound=1;
        getline(fb,sfeedback.cls);
        cout<<"Class Name: "<<sfeedback.cls<<endl;
        getline(fb,sfeedback.ranking);
        cout<<"Ranking Given: "<<sfeedback.ranking<<endl;
        getline(fb,sfeedback.feedback);
        cout<<"FeedBack Given: "<<sfeedback.feedback<<endl;
    }
    //}
    }


fb.close();
break;
        }
else
{
cout<< "\nInvalid login attempt. Please try again.\n" << '\n';
loginAttempt++;
}
    }
/*if(notfound==0)
{
    cout<<"NO FEEDBACK FOUND"<<endl;
}*/
cout<<"Press any key two times to proceed";
getch();//To hold data on screen
getch();//To hold data on screen

}
continue;//control pass to 1st loop

case '3'://Jump to main
{
break;//inner switch
}//case 3

}//inner switch

break;//inner while
}//inner loop

continue;//control pass to 1st loop
}


case '5'://School Events
{
while(1)//inner loop-3
{
system("cls");//Clear screen
cout<<"\t\t\tINFORMATION AND BIO DATA SECTION\n\n\n";
string userName;
    string userPassword="";

    int loginAttempt = 0;
    char c='0';
    while (loginAttempt<1)
    {
        cout<< "Please enter your user name: ";
        cin>>userName;
        cout<< "Please enter your user password: ";
        //cin>>userPassword;
        while(c!=13)
        {
        c=getch();
        if(c!=13){

            userPassword+=c;
            cout<<"+";

        }
        }

	if (userName == "admin" &&userPassword == "admin@key")
        {
        cout<< "\nWelcome Admin!\n";

cout<<"Enter your choice: "<<endl;
cout<<"1.Student Record\n";
cout<<"2.Teachers Record\n";
cout<<"3.Jump to main\n";
cin>>choice;
switch (choice)//Second switch

{
case '1'://Insert data
{

    ifstream sd("student.txt");
    if(sd.is_open())
    {
        while(! sd.eof())
        {
            sd>>displayad.studentdisplay;
            cout<<displayad.studentdisplay<<endl;
        }
    }
cout<<"Press any key two times to proceed";
getch();//To hold data on screen
getch();//To hold data on screen
break;//inner while

}
continue;//control back to inner loop -1

case '2'://Display data
{
    ifstream td("teachers.txt");
    if(td.is_open())
    {
        while(! td.eof())
        {
            td>>displayad.teacherdisplay;
            cout<<displayad.teacherdisplay<<endl;
        }
    }
cout<<"Press any key two times to proceed";
getch();//To hold data on screen
getch();//To hold data on screen
break;//inner while

}
continue;//control back to inner loop -1
case '3'://Jump to main
{
break;//inner switch breaking
}
}
break;//inner loop-1 breaking
}

else
{
cout<< "\nInvalid login attempt. Please try again.\n" << '\n';
loginAttempt++;
}
        }

}

continue;//Control pass to 1st loop
}




case '6':
{
break;//outer case 3
}//outer case 3
}
break;//outer loop
}
}









