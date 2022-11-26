#include<iostream>
#include<fstream>
using namespace std;
 int main()
    {
        int login();
        cout<<"\n\t\t******************************************************************************************************************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t ---: WELCOME TO COVID MANAGEMENT SYSTEM :---";
        cout<<"\n\n\t\t******************************************************************************************************************************************************************************";

             login();
    }
  int login()
{
    int password, userid;
    int choice;
    float weight, height, bmi;
    char sno[20],name[20],dob[20],age[5],mobile[12],adhar[20],address[30],gender[10],wards[20],bloodgroup[10],cylinder[10];
    int slot;
    int vs=5000;
    cout<<"\n\t\t\t\t\t\t ENTER USERID :";
    cin>>userid;
    if (userid==1234)
    {
        cout<<"\n\t\t\t\t\t\t ENTER PASSWORD :";
        cin>>password;
        if(password==9000)
        {
            while(choice!=7)
            {
    cout<<("\n\n\n\n 1.BOOKING VACCINE SLOT");
    cout<<("\n 2.BOOKING BED");
    cout<<("\n 3.OXYGEN BANK");
    cout<<("\n 4.BLOOD BANK");
    cout<<("\n 5.EMERGECY WARD");
    cout<<("\n 6.HEALTH CALCULATOR");
    cout<<("\n 7.EXIT");
    cout<<("\n ENTER YOUR CHOICE =");
    cin>>choice;
    switch(choice)
    {
    case 1:
           cout<<"\n NUMBER OF VACCINE SLOT AVAILABLE :"<<vs;
           cout<<("\n WOULD YOU LIKE TO BOOK A SLOT :");
           cout<<("\n 1. YES");
           cout<<("\n 2. NO");
           cout<<("\n ENTER YOUR CHOICE : ");
           cin>>slot;
            if(slot==1)
            {
                vs=vs-slot;
                ofstream fout;
                fout.open("vaccine.txt",ios::app);
                cout<<("\n ENTER YOUR NAME :");
                cin>>name;
                fout<<name;
                cout<<("\n ENTER YOUR DOB :");
                cin>>dob;
                fout<<dob;
                cout<<("\n ENTER YOUR AGE :");
                cin>>age;
                fout<<age;
                cout<<("\n ENTER YOUR MOBILE NUMBER :");
                cin>>mobile;
                fout<<mobile;
                cout<<("\n ENTER YOUR ADHAR NUMBER :");
                cin>>adhar;
                fout<<adhar;
                cout<<("\n ENTER YOUR ADDRESS :");
                cin>>address;
                fout<<address;
                cout<<"\n YOUR VACCIATION SLOT IS BOOKED SUCCESSFULLY";
                cout<<"\n REMAINING SLOT ="<<vs;
                fout.close();

            }
            else
            {
               cout<<"Thank You ";
            }
        break;
    case 2:
            cout<<"\n WOULD YOU LIKE TO BOOK A SLOT :";
           cout<<"\n 1. YES";
           cout<<"\n 2. NO";
           cout<<"\n ENTER YOUR CHOICE : ";
           cin>>slot;
            if(slot==1)
            {
                ofstream fout;
                fout.open("admit.txt",ios::app);
                cin>>(sno);
                fout<<(sno);
                cout<<("\n ENTER YOUR NAME :");
                cin>>(name);
                fout<<(name);
                cout<<("\n ENTER YOUR DOB :");
                cin>>(dob);
                fout<<(dob);
                cout<<("\n ENTER YOUR GENDER(M/F) :");
                cin>>(gender);
                fout<<(gender);
                cout<<("\n ENTER YOUR MOBILE NUMBER :");
                cin>>(mobile);
                fout<<(mobile);
                cout<<("\n ENTER YOUR ADHAR NUMBER :");
                cin>>(adhar);
                fout<<(adhar);
                cout<<("\n ENTER YOUR ADDRESS :");
                cin>>(address);
                fout<<(address);
                cout<<("\n WARDS :");
                cout<<("\n NON AC :");
                cout<<("\n 1. GENERAL HALL (RS 200)");
                cout<<("\n 2. THREE SEATER BEDROOM (RS 300)");
                cout<<("\n 3. TWO SEATER BEDROOM (RS 500)");
                cout<<("\n 4. SINGLE BEDROOM (RS 700)");
                cout<<("\n AC :");
                cout<<("\n A. TWO SEATER BEDROOM (RS 1200)");
                cout<<("\n B.ONE SEATER BEDROOM (RS 1500)");
                cout<<("\n CHOOSE YOUR WARD :");
                cin>>(wards);
                fout<<(wards);
                cout<<("\n YOUR REGISTRATION FOR SLOT BOOKING IS SUCCESSFULLY");
                fout.close();
            }
            else
            {
               cout<<("Thank You");
            }
        break;
    case 3:
             cout<<("\n WOULD YOU LIKE TO BOOK A SLOT :");
           cout<<("\n 1. YES");
           cout<<("\n 2. NO");
           cout<<("\n ENTER YOUR CHOICE : ");
           cin>>slot;
            if(slot==1)
            {
                ofstream fout;
                fout.open("oxygen.txt",ios::app);
                cin>>(sno);
                fout<<(sno);
                cout<<("\n ENTER YOUR NAME :");
                cin>>(name);
                fout<<(name);
                cout<<("\n ENTER YOUR DOB :");
                cin>>(dob);
                fout<<(dob);
                cout<<("\n ENTER YOUR MOBILE NUMBER :");
                cin>>(mobile);
                fout<<(mobile);
                cout<<("\n ENTER YOUR ADHAR NUMBER :");
                cin>>(adhar);
                fout<<(adhar);
                cout<<("\n ENTER YOUR ADDRESS :");
                cin>>(address);
                fout<<(address);
                cout<<("\n SIZE OF CYLINDER :");
                cout<<("\n 1.SMALL (5L RS 250)");
                cout<<("\n 2.MEDIUM (10L RS 400)");
                cout<<("\n 3.LARGE (20L RS 700)");
                cout<<("\n CHOOSE YOUR CYLINDER :");
                cin>>(cylinder);
                fout<<(cylinder);
                cout<<("\n YOUR OXYGEN SLOT IS BOOKED SUCCESSFULLY");
                fout.close();

            }
            else
            {
               cout<<("Thank You");
            }
        break;
    case 4:
         cout<<("\n WOULD YOU LIKE TO BOOK A SLOT :");
           cout<<("\n 1. YES");
           cout<<("\n 2. NO");
           cout<<("\n ENTER YOUR CHOICE : ");
           cin>>slot;
            if(slot==1)
            {
                ofstream fout;
                fout.open("bloodbank.txt",ios::app);
                cin>>(sno);
                fout<<(sno);
                cout<<("\n ENTER YOUR NAME :");
                cin>>(name);
                fout<<(name);
                cout<<("\n ENTER YOUR DOB :");
                cin>>(dob);
                fout<<(dob);
                cout<<("\n ENTER YOUR BLOOD GROUP :");
                cin>>(bloodgroup);
                fout<<(bloodgroup);
                cout<<("\n ENTER YOUR MOBILE NUMBER :");
                cin>>(mobile);
                fout<<(mobile);
                cout<<("\n ENTER YOUR ADHAR NUMBER :");
                cin>>(adhar);
                fout<<(adhar);
                cout<<("\n ENTER YOUR ADDRESS :");
                cin>>(address);
                fout<<(address);
                cout<<("\n YOUR BLOOD BANK SLOT IS BOOKED SUCCESSFULLY");
                fout.close();
            }
            else
            {
               cout<<("Thank You");
            }
        break;
    case 5:
        {
            cout<<("\n-----------------------------------------------------------------------------------------------");
            cout<<("\n Emergency Hospital Line");
            cout<<("\n ----------------------------------------------------------------------------------------------");
            cout<<("\n Hospital Name\t\t\t Address \t \t \t Contact ");
            cout<<("\n Bansal Hospital\t\t Chuna Bhatti Rd \t\t 0755 408 6000 ");
            cout<<("\n Jai Prakash District Hospital\t Link Road \t\t \t 0755 255 6812 ");
            cout<<("\n Hamidia Hospital \t\t Sltania Rd \t\t\t 07554050450 ");
            cout<<("\n Citi Hospital \t\t\t Link Road Number 2 \t\t 0755 428 7773 ");
            cout<<("\n Bhopal Fracture Hospital \t Link Road Number 3 \t\t 0755 400 7000 ");
            cout<<("\n Bhopal Care Hospital \t\t Motia Talab Rd \t\t 09827204548 ");
            cout<<("\n Asian Globus Hospital \t\t Near Vittan Market \t\t 0755 470 1333 ");
            cout<<("\n Kasturba Hospital \t\t Bhel, Habib Ganj \t\t 0755 250 2929 ");
            cout<<("\n Lake City Hospital \t\t B27,Near, Chetak Bridge \t 0755 428 8956");
            cout<<("\n ------------------------------------------------------------------------------------------------");
            cout<<("\n \n Emergency Ambulance Line");
            cout<<("\n ------------------------------------------------------------------------------------------------");
            cout<<("\n Falcon Emergency Air Ambulance Service (092059 09876)");
            cout<<("\n Sain Ambulance Service (09425393187)");
            cout<<("\n Help Line Ambulance Service (09826361342)");
            cout<<("\n Life Care Cardiac Ambulance Service (098260 17240)");
            cout<<("\n ------------------------------------------------------------------------------------------------");
        }
        break;
    case 6:
        {
            cout<<("\n ENTER YOUR WEIGHT(kg) :");
            cin>>weight;
            cout<<("\n ENTER YOUR HEIGHT(m) :");
            cin>>height;
            bmi=weight/(height*height);
            if(bmi<18.5)
                {
                cout<<("\n YOU ARE UNDERWEIGHT");
                }
                    else if(bmi>=18.5 && bmi<25.0)
                    {
                     cout<<("YOU ARE NORMAL WEIGHT");
                    }

                    else if(bmi>=25.0 && bmi<30.0)
                    {
                     cout<<("\n YOU ARE OVER WEIGHT");
                    }
                    else if(bmi>=30.0 && bmi<35.0)
                    {
                     cout<<("\n YOU HAVE OBESITY 1");
                    }
                    else if(bmi>=35.0 && bmi<40.0)
                    {
                     cout<<("\n YOU HAVE OBESITY 2");
                    }
                    else
                    {
                    cout<<("\n YOU HAVE OBESITY 3");
                    }
        break;
        }
    default:
        cout<<("\n THANK YOU FOR COMMING");
        break;
    }
            }
        }
        else
        {
            cout<<("\n WRONG PASSWORD");
        }

    }
    else
    {
        cout<<("\n WORNG USER ID");
    }


}
