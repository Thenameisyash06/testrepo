#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<process.h>
#include<fstream>
#include<string.h>
#include<dos.h>
#include<limits.h>
#include<windows.h>
using namespace std;



int count=0,q=0,w=0;


using namespace std;
class office
{
		public:
		static int a,b,c,d;// a = no. of employees , b = no. of agents
};int office::a=0;
int office::b=0;
int office::c=0;
int office::d=0;
class employee:virtual public office
{
	protected:
		
		int id_e;
		int acc_e;
	public:
		        char name_e[20];
		        char name_a[20];
		        string fname_a;
		        string fname_e;
		        int y_a,m_a,d_a;
		        int d_e,m_e,y_e;
		 		static int y;
				static int i;
			int getide()
			{
				return id_e;
			}
			int getacce()
			{
				return acc_e;
			}
};
int employee::i=101;
int employee::y=1001;
class task_meetings:virtual public office
{
	protected:
		
		string area;
		int id_a,id_aa;
		int acc_a;
		public:	
	
		static int k;
		static int j;
		int getida()
		{
			return id_a;
		}
		int getacca()
		{
			return acc_a;
		}
		
		protected:
	
		string task_des_e[5],task_des_a[5];
		string due_date_e[5],due_date_a[5];
			string status_e[5],status_a[5];
		public:
				int task_no_e[5],task_no_a[5];
			void gettask_e()
			{
					c++;
					task_no_e[q]=c;
					cout << "////////////////////////////////Add Task - "<<task_no_e[q]<<"///////////////////////////////////" << endl;
			        cout << "Enter Task Description: ";
			        cin.ignore();
			        getline(cin, task_des_e[q]);
			        cout << "Enter Due Date: ";
			        cin.ignore();
			        getline(cin, due_date_e[q]);
			        stat:
			        cout<<"Enter Status: ";
			        getline(cin,status_e[q]);
			       /* if(status_e[q]!="Pending"||status_e[q]!="pending")
			        {
			        	goto stat;
					}*/
			        system("cls");
			        cout<<"Status: "<<status_e[q]<<endl;
			        cout << "Task Added Successfully!!" << endl;
			        cout << ".......Press Enter To Continue" << endl;
			        cin.ignore();
			        cin.get();
			        system("cls");
			        q++;
			}
			void gettask_a()
			{		d++;
					task_no_a[w]=d;
					cout << "////////////////////////////////Add Task - "<<task_no_a[w]<<"///////////////////////////////////" << endl;
			        cout << "Enter Task Description: ";
			        cin.ignore();
			        getline(cin, task_des_a[w]);
			        cout << "Enter Due Date: ";
			        cin.ignore();
			        getline(cin, due_date_a[w]);
			        cout<<"Enter Status: ";
			        getline(cin,status_a[w]);
			        system("cls");
			        cout<<"Status: "<<status_a[w]<<endl;
			        cout << "Task Added Successfully!!" << endl;
			        cout << ".......Press Enter To Continue" << endl;
			        cin.ignore();
			        cin.get();
			        system("cls");
			        w++;
			        
			}
			void viewt_e()
			{	fstream file;
				for(q=0;q<c;q++)
				{
				cout << "////////////////////////////////Tasks///////////////////////////////////" << endl;
		        cout << "Task Number: " << task_no_e[q] << endl;
		        cout << "Task Description: " << task_des_e[q] << endl;
		        cout << "Due Date: " << due_date_e[q] <<"\t\t\t\t"<<"status: "<<status_e[q]<<endl;
		        cout << ".......Press Enter To Continue" << endl;
		        file.open("e_task.txt");
		    	file << "////////////////////////////////Tasks///////////////////////////////////" << endl;
		        file << "Task Number: " << task_no_e[q] << endl;
		        file << "Task Description: " << task_des_e[q] << endl;
		        file << "Due Date: " << due_date_e[q] <<"\t\t\t\t"<<"status: "<<status_e[q]<<endl;
		        file << ".......Press Enter To Continue" << endl;
		        file.close();
		        //cin.ignore();
		       // cin.get();
		        //system("cls");
		      }
				
			}
				void viewt_a()
			{
				for(w=0;w<d;w++)
				{
				cout << "////////////////////////////////Tasks///////////////////////////////////" << endl;
		        cout << "Task Number: " << task_no_a[w] << endl;
		        cout << "Task Description: " << task_des_a[w] << endl;
		        cout << "Due Date: " << due_date_a[w] <<"\t\t\t\t"<<"status: "<<status_a[w]<<endl;
		        cout << ".......Press Enter To Continue" << endl;
		        //cin.ignore();
		       // cin.get();
		        //system("cls");
		      }
				
			}
			void update_t_e()
			{
				cout<<"Enter Status of Task: ";
				cin>>status_e[q];
				system("cls");
				cout<<"Status Of Task Is Sucessfully Update To "<<status_e[q]<<"!!!"<<endl;
				getch();
			}
				void update_t_a()
			{
				cout<<"Enter Status of Task: ";
				getline(cin,status_a[w]);
				system("cls");
				cout<<"Status Of Task Is Sucessfully Update To "<<status_a[w]<<"!!!"<<endl;
				getch();
			}
			void delete_t()
			{
				
			}
		/*	int getstate()
			{
				return task_no_e[q];
			}
			int getstata()
			{
				return task_no_a[w];
			}*/
			string topic_e,topic_a;
    string date_e,date_a;
    string time_e,time_a;
    string agenda_e,agenda_a;

public:
    void add_meeting_e() {
        cout << "////////////////////////////////Add Meeting///////////////////////////////////" << endl;
        cout << "Enter Topic: ";
        cin.ignore();
        getline(cin, topic_e);
        cout << "Enter Date: ";
        cin.ignore();
        getline(cin, date_e);
        cout << "Enter Time: ";
        cin.ignore();
        getline(cin, time_e);
        cout << "Enter Agenda: ";
        cin.ignore();
        getline(cin, agenda_e);

        system("cls");
        cout << "Meeting Added Successfully!!" << endl;
        cout << ".......Press Enter To Continue" << endl;
        cin.ignore();
        cin.get();
        system("cls");
    }
	void add_meeting_a() 
	{
        cout << "////////////////////////////////Add Meeting///////////////////////////////////" << endl;
        cout << "Enter Topic: ";
        cin.ignore();
        getline(cin, topic_a);
        cout << "Enter Date: ";
        cin.ignore();
        getline(cin, date_a);
        cout << "Enter Time: ";
        cin.ignore();
        getline(cin, time_a);
        cout << "Enter Agenda: ";
        cin.ignore();
        getline(cin, agenda_a);

        system("cls");
        cout << "Meeting Added Successfully!!" << endl;
        cout << ".......Press Enter To Continue" << endl;
        cin.ignore();
        cin.get();
        system("cls");
    }
    void show_meeting_e() {
        cout << "////////////////////////////////Meetings///////////////////////////////////" << endl;
        cout << "Topic: " << topic_e << endl;
        cout << "Date: " << date_e << endl;
        cout << "Time: " << time_e << endl;
        cout << "Agenda: " << agenda_e << endl;
        cout << ".......Press Enter To Continue" << endl;
        cin.ignore();
        cin.get();
        system("cls");
    }
	 void show_meeting_a() {
        cout << "////////////////////////////////Meetings///////////////////////////////////" << endl;
        cout << "Topic: " << topic_a << endl;
        cout << "Date: " << date_a << endl;
        cout << "Time: " << time_a << endl;
        cout << "Agenda: " << agenda_a << endl;
        cout << ".......Press Enter To Continue" << endl;
        cin.ignore();
        cin.get();
        system("cls");
    }
	
};
int task_meetings::j=201;
int task_meetings::k=2001;
class salary:public employee, public task_meetings
{
	protected:
	double bs_e,da_e,hra_e,pf_e,gs_e,ns_e,bs_a,da_a,hra_a,pf_a,gs_a,ns_a;
	public:
		salary()
		{
			bs_e=0;
			da_e=0;
			hra_e=0;
			pf_e=0;
			gs_e=0;
			ns_e=0;
			bs_a=0;
			da_a=0;
			hra_a=0;
			pf_a=0;
			gs_a=0;
			ns_a=0;
		}
		void getsal_e()
		{
			cout<<"Enter Basic Salary ";
			cin>>bs_e;
			da_e=0.7*bs_e;
			hra_e=0.3*bs_e;
			pf_e=0.1*bs_e;
			gs_e=bs_e+da_e+hra_e;
			ns_e=bs_e-pf_e-100;
			cout<<"Rs."<<bs_e<<" Successfully Credited To Employee's Account !!!"<<endl;
			cout<<"...........Press Enter To Continue"<<endl;
			getch();
		}
		void showsal_e()
		{
			cout<<"\t->Basic Salary= Rs."<<bs_e<<endl;
			cout<<"\t->Gross Salary= Rs."<<gs_e<<endl;
			cout<<"\t->Net Salary= Rs."<<ns_e<<endl;
			getch();
		}
			void getsal_a()
		{
			cout<<"Enter Basic Salary ";
			cin>>bs_a;
			da_a=0.7*bs_a;
			hra_a=0.3*bs_a;
			pf_a=0.1*bs_a;
			gs_a=bs_a+da_a+hra_a;
			ns_a=bs_a-pf_a-100;
			cout<<"Rs."<<bs_a<<" Successfully Credited To Employee's Account !!!"<<endl;
			cout<<"...........Press Enter To Continue"<<endl;
			getch();
		}
		void showsal_a()
		{
			cout<<"\t->Basic Salary= Rs."<<bs_a<<endl;
			cout<<"\t->Gross Salary= Rs."<<gs_a<<endl;
			cout<<"\t->Net Salary= Rs."<<ns_a<<endl;
			getch();
		}
};
class address:public salary
{
	protected:
		string state_e,state_a;
		string city_e,city_a;
		string colony_e,colony_a;
		int house_no_e,house_no_a;
		string phone_no_e,phone_no_a;
		
        public:
        	void getdata_e()
        	{  
        		cout<<"////////////////////////////////Enter Employees Details///////////////////////////////////"<<endl;
				cout<<"Enter Name of Employee ";
				cin>>name_e;
				cout<<"Enter Father's Name of Employee ";
				cin>>fname_e;
				dob:
				cout<<"Enter Date Of Birth: "<<endl;
				cout<<"Enter Date: ";
        		cin>>d_e;
        		if(d_e>31)
        		{
        			cout<<"invalid"<<endl;
        			goto dob;
				}
        		cout<<"Enter Month: ";
        		cin>>m_e;
        		if(m_e>12)
        		{
        			cout<<"invalid"<<endl;
        			goto dob;
				}
        		cout<<"Enter Year: ";
        		cin>>y_e;
        		if(y_e>2005)
        		{ cout<<"age is not valid employee must be older than 18";
        			goto dob;
				}
				id_e=i;
				acc_e=y;
				system("cls");
        		cout<<"////////////////////////////////Enter Employees Address///////////////////////////////////"<<endl;
        		cout<<"Enter State: ";
        		cin>>state_e;
				cout<<"Enter City :";
        		cin>>city_e;
				cout<<"Enter Colony :";
				cin>>colony_e;        		
				cout<<"Enter House No.: ";
        		cin>>house_no_e;
         phoneinput:
			 	
			 	cout<<"Enter Phone No.: ";
        	     cin>>phone_no_e;
        	     if ( phone_no_e.length()!= 10 )
        	     { // cout<<"\b\b\b\b\b\b\b\b\b\b\b";
				 goto phoneinput;
				 }
				 
				
        	//	system("cls");
        		i++;
        		y++;
        		
        		cout<<"Employee Details Are Successfully Saved !!"<<endl;
        		cout<<"THE ID OF AGENT::"<<id_e<<endl;
        		cout<<"THE ACCOUNT NO.OF THE AGENT::"<<acc_e<<endl;
        		cout<<".......Press Enter To Continue"<<endl;
        		getch();
        		count++;
        			system("cls");
			}
			void getdata_a()
        	{
        		cout<<"////////////////////////////////Enter Agents Details///////////////////////////////////"<<endl;
				cout<<"Enter Name of Agent ";
	         	cin>>name_a;
		    	fflush(stdin);
		    	cout<<"Enter Father's Name of Employee ";
				cin>>fname_a;
				doa:
				cout<<"Enter Date Of Birth--"<<endl;
				cout<<"Enter Date: ";
        		cin>>d_a;
        		if(d_a>31)
        		{
        			cout<<"invalid"<<endl;
        			goto doa;
				}
        		cout<<"Enter Month: ";
        		cin>>m_a;
        		if(m_a>12)
        		{
        			cout<<"invalid"<<endl;
        			goto doa;
				}
        		cout<<"Enter Year: ";
        		cin>>y_a;
        		if(y_a>2005)
        		{ cout<<"age is not valid employee must be older than 18";
        			goto doa;
				}
				cout<<"Enter working area ";
				cin>>area;
				id_a=j;
				acc_a=k;
				system("cls");
        		cout<<"////////////////////////////////Enter Agents Address///////////////////////////////////"<<endl;
        		cout<<"Enter State ";
        		cin>>state_a;
				cout<<"Enter City ";
        		cin>>city_a;
				cout<<"Enter Colony ";
				cin>>colony_a;        		
				cout<<"Enter House No. ";
        		cin>>house_no_a;
        		 phoneinput1:
			 	//system("cls");
			 	cout<<"Enter Phone No. ";
        	     cin>>phone_no_a;
        	     if ( phone_no_a.length()!= 10 )
        	     { goto phoneinput1;
				 }
        		//system("cls");
        		j++;
        		k++;
        		cout<<"Employee Details Are Successfully Saved !!"<<endl;
        		cout<<"  THE ID OF AGENT::"<<id_a<<endl;
        		cout<<"THE ACCOUNT NO.OF THE AGENT::"<<acc_a<<endl;
        		cout<<".......Press Enter To Continue"<<endl;
        		getch();
        		count++;
        			system("cls");
			}
			void view_e()
			{
				cout<<"////////////////////////////////Employee Details///////////////////////////////////"<<endl;
				cout<<"Name:"<<name_e<<endl;
				cout<<"ID:"<<id_e<<endl;
				cout<<"Account No.:"<<acc_e<<endl;
				cout<<"Date Of Birth:"<<d_e<<"/"<<m_e<<"/"<<y_e<<endl;
        		cout<<"State:"<<state_e<<endl;
				cout<<"City:"<<city_e<<endl;
				cout<<"Colony:"<<colony_e<<endl;		
				cout<<"House No:"<<house_no_e<<endl;
        		cout<<"Phone No:"<<phone_no_e<<endl;
        		getch();
		 	}
		 	void view_a()
			{
				cout<<"////////////////////////////////Agents Details///////////////////////////////////"<<endl;
				cout<<"Name:"<<name_a<<endl;
				cout<<"ID:"<<id_a<<endl;
				cout<<"Account no.:"<<acc_a<<endl;
				cout<<"Date Of Birth:"<<d_a<<"/"<<m_a<<"/"<<y_a<<endl;
				cout<<"Working Area:"<<area<<endl;
        		cout<<"State:"<<state_a<<endl;
				cout<<"City:"<<city_a<<endl;
				cout<<"Colony:"<<colony_a<<endl;		
				cout<<"House No:"<<house_no_a<<endl;
        		cout<<"Phone No:"<<phone_no_a<<endl;
        		getch();
		 	}
			void update_e()
			{  int choice;
			update_employee:
		system("cls");
			do
		{
			 cout<<"////////////////////////////////UPDATE DETAILS///////////////////////////////////"<<endl;
			cout<<"1] update all details\t2]update name\t3]update state\t4]update colony\t5]update house no.\t6]update phone.no"<<endl;
			cin>>choice;
		
				switch(choice)	
			{
			 case 1: 				    cout<<"Enter Name of Employee ";
										cin>>name_e;
						        		cout<<"Enter State ";
						        		cin>>state_e;
										cout<<"Enter City ";
						        		cin>>city_e;
										cout<<"Enter Colony ";
										cin>>colony_e;        		
										cout<<"Enter House No. ";
						        		cin>>house_no_e;
						        		cout<<"Enter Phone No. ";
						        		cin>>phone_no_e;
						        		cout<<"DETAILS UPDATED SUCCESFULLY......";
						        		system("cls");	
						        		break;
						        		
			case 2:			            cout<<"Enter Name of Employee ";
										cin>>name_e;
										break;
										
			case 3:			            cout<<"Enter State ";
						        		cin>>state_e;
										break;
										
			case 4:			            cout<<"Enter City ";
						        		cin>>city_e;
										break;
										
			case 5:			            cout<<"Enter House No. ";
						        		cin>>house_no_e;
										break;
										
			case 6:			            cout<<"Enter Phone No. ";
						        		cin>>phone_no_e;
										break;
										
			case 7:			            cout<<"EXITED ";
										
										break;
			default:			        cout<<"INVALID OPTION...... ";
										goto update_employee;
										getch();
										break;
		} cout<<"DETAILS UPDATED SUCCESSFULLY";
	}while(choice!=7);
												
			}
			void update_a()
			{
			 int choice;
			  update_agent:
		system("cls");
				do
		{
		
			 cout<<"////////////////////////////////UPDATE DETAILS///////////////////////////////////"<<endl;
			cout<<"1] update all details\t2]update name\t3]update state\t4]update colony\t5]update house no.\t6]update phone.no"<<endl;
			fflush(stdin);
			cin>>choice;
			switch(choice)	
			{
			 case 1: 				    cout<<"Enter Name of Agent ";
										cin>>name_a;
						        		cout<<"Enter State ";
						        		cin>>state_a;
						        		cout<<"Enter working area";
						        		cin>>area;
										cout<<"Enter City ";
						        		cin>>city_a;
										cout<<"Enter Colony ";
										cin>>colony_a;        		
										cout<<"Enter House No. ";
						        		cin>>house_no_a;
						        		cout<<"Enter Phone No. ";
						        		cin>>phone_no_a;
						        		cout<<"DETAILS UPDATED SUCCESFULLY......";
						        		system("cls");	
						        		break;
						        		
			case 2:			            cout<<"Enter Name of Agent ";
										cin>>name_a;
										break;
										
			case 3:			            cout<<"Enter State ";
						        		cin>>state_a;
										break;
										
			case 4:			            cout<<"Enter City ";
						        		cin>>city_a;
										break;
										
			case 5:			            cout<<"Enter House No. ";
						        		cin>>house_no_a;
										break;
										
			case 6:			            cout<<"Enter Phone No. ";
						        		cin>>phone_no_a;
										break;
										
			case 7:			            cout<<"EXITED ";
										break;
										
			default:			        cout<<"INVALID OPTION...... ";
									goto update_agent;
									getch();
										break;
		}
	}while(choice!=7);	
			}
			void delete_details_agent()
			{cout<<"////////////////////////////////Agents Details///////////////////////////////////"<<endl;
		
				id_a =0;
				cout<<"Name:"<<endl;
				cout<<"ID:"<<endl;
				cout<<"Date Of Birth:"<<endl;
				cout<<"Working Area:"<<endl;
        		cout<<"State:"<<endl;
				cout<<"City:"<<endl;
				cout<<"Colony:"<<endl;		
				cout<<"House No:"<<endl;
        		cout<<"Phone No:"<<endl;
        		getch();
		}
			void delete_details_employee()
			{cout<<"////////////////////////////////Agents Details///////////////////////////////////"<<endl;
		
				id_e =0;
				cout<<"Name:"<<endl;
				cout<<"ID:"<<endl;
				cout<<"Date Of Birth:"<<endl;
				cout<<"Working Area:"<<endl;
        		cout<<"State:"<<endl;
				cout<<"City:"<<endl;
				cout<<"Colony:"<<endl;		
				cout<<"House No:"<<endl;
        		cout<<"Phone No:"<<endl;
        		getch();
		}
		
   

						
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{ system("color 4f");
// Display design
    

int i,j,id,choice,choice1,choice2,acc,coundown=0,coundawn=0,pass;
office o;
char a = 177, b = 219;
address ad[10];
//salary s[10];
	cout << "\t                                             =============================================" << endl;
    cout << "\t                                                     P&Y EMPLOYEE MANAGEMENT SYSTEM       " << endl;
    cout << "\t                                             =============================================" << endl;
    cout << "\n\t                                              Welcome to the P&Y Employee Management System!\n" << endl;
    cout << "\t                                     This system allows you to manage records of employee and agents.\n"<<endl;
    cout << "\t                          This Project is programmed under the survillance of ASSOCISTE PROFFESOR NIKHLESH PATHIK.\n"<<endl;
    cout << "\t                                             PROGRAMMED BY :: PRADEEP SINGH GURJAR & YASH DUBEY \n"<<endl;
  

    // Display loading animation
    cout << "\t\t\t\t\t\t\t\tLoading ";
    for (int i = 0; i < 15; i++)
        printf("%c", a);
  
    // Set the cursor again starting
    // point of loading bar
    printf("\r");
    printf("\t\t\t\t\t\t\t\tLOADING");
  
    // Print loading bar progress
    for (int i = 0; i < 15; i++) {
        printf("%c", b);
  
        // Sleep for 1 second
        Sleep(500);

    // Clear the screen
}   getch();
   
    system("cls");

   
    
admin: system("cls");
	
do
{
	 // Display front page
    cout << "\t                                             =============================================" << endl;
    cout << "\t                                                     P&Y EMPLOYEE MANAGEMENT SYSTEM       " << endl;
    cout << "\t                                             =============================================" << endl;
    cout << endl;
cout<<"                                             ***********************|"<<__DATE__<<"|************************"<<endl;
cout<<"                                             **                    Enter 1: Admin Login                **                     "<<endl;
cout<<"                                             **                    Enter 2: User Login                 **                   "<<endl;
cout<<"                                             **                    Enter 3: To Exit                    **                 "<<endl;
cout<<"                                             ************************|"<<__TIME__<<"|**************************"<<endl;
cout<<"\n";
cout<<"                                                             Enter choice(1-3)::";




fflush(stdin);
cin>>choice;
if(cin.fail())
{
	cin.clear();
	cin.ignore();   
	system("cls"); 
	goto admin;
}
else
{

	if(choice==1)
	{
	cout<<"       \t\t\t\t\t\t\t   Enter Securtiy Pass::";
			cin>>pass; 
	if(pass==1007)
   {
  
  
  menu1:
  	system("cls");
  
   do
   		{
			 system("cls");
			cout << "\t                                             =============================================" << endl;
		    cout << "\t                                                     P&Y EMPLOYEE MANAGEMENT SYSTEM       " << endl;
		    cout << "\t                                             =============================================" << endl;
		    cout << endl;
			cout<<"\t\t                            ************************************************************"<<endl;	
			cout<<"\t\t                                    Enter 1: To Add Employees/Agents"<<endl;
			cout<<"\t\t                                    Enter 2: To Update Employees/Agents Details"<<endl;
			cout<<"\t\t                                    Enter 3: To View Employees/Agents Details"<<endl;
			cout<<"\t\t                                    Enter 4: To Pay Salary to Employees/Agents"<<endl;
			cout<<"\t\t                                    Enter 5: Task for Employee/Agents"<<endl;
			cout<<"\t\t                                    Enter 6: Meeting for Employee/Agents"<<endl;
			cout<<"\t\t                                    Enter 7: Search Employee/agents"<<endl;
			cout<<"\t\t                                    Enter 8: DELETE Employee/agents"<<endl;
			cout<<"\t\t                                    Enter 9: Back To Login Page"<<endl;
			cout<<"\t\t                                    Enter 10: To Exit"<<endl;
			cout<<"\t\t                                    Enter choice(1-10)::";
		    fflush(stdin);
			cin>>choice1;
			if(cin.fail())
			{
			cin.clear();
			cin.ignore();   
			system("cls"); 
			goto menu1;
			}
			else{
			system("cls");
			switch(choice1)
			{ 
				case 3:  if(count>0)
				{
						view_emp:	
								int c;
							cout<<"\n\t\t\t\t\tEnter 1: To view employee details"<<endl;
							cout<<"\t\t\t\t\tEnter 2: To view agent details"<<endl;
							cout<<"\t\t\t\t\tEnter 3: To go back"<<endl;
								cout<<"\t\t\t\t\tEnter choice(1-3)::";
							cin>>c;
							if(cin.fail())
							{
								cin.clear();
								cin.ignore();   
								system("cls");
								goto view_emp; 
							}
							else{
							if(c==1)
							{
								system("cls");
								int t;
							cout<<"\n\t\t\t\t\tEnter 1: To view List of employees with details "<<endl;
							cout<<"\t\t\t\t\tEnter 2: To view Individual employee detail "<<endl;
							cout<<"\t\t\t\t\tEnter choice(1-2)::";
							cin>>t;
							if(t==1)
							{
								for(i=1;i<=o.a;i++)
								{
									cout<<"////////////////////////////////////////////////////////////////////////////////"<<endl;
									ad[i].view_e();	
								}
							}
							else if(t==2)
							{
							cout<<"\n\t\t\t\tEnter id of employee that you want view details of ";
							cin>>id;
							for(i=1;i<=o.a;i++)
									if(id==ad[i].getide())
									ad[i].view_e();	
								/*	else
									{ cout<<"employee not found in system";
									}*/
							}
								else{
						goto menu1;
					}
						}
							 else if(c==2)
							{	int t;
							system("cls");
							cout<<"\n\t\t\t\t\tEnter 1: To view List of agents with details "<<endl;
							cout<<"\t\t\t\t\tEnter 2: To view Individual agents detail "<<endl;
							cout<<"\t\t\t\t\tEnter choice(1-2)::";
							cin>>t;
							if(t==1)
							{
								for(j=1;j<=o.b;j++)
								{
									cout<<"////////////////////////////////////////////////////////////////////////////////"<<endl;
									ad[j].view_a();	
								}
							}
							else if(t==2)
								cout<<"\n\t\t\t\tEnter id of agent that you want view details of ";
								cin>>id;
								for(j=1;j<=o.b;j++)
									{
										if(id==ad[j].getida())
										ad[j].view_a();	
									}
								}
								else if(c==3)
										{ goto menu1;
										getch();
										}
								else 
								{  cout<<"INVALID OPTION .......\n";
									 getch();
								 goto view_emp;
									}
								}
								}
									else
					 { cout<<"NO EMPLOYEE / AGENTS HAS BEEN ADDED YET .......\nPLEASE FIRST ADD EMPLOYEE/AGENTS";
					  goto add_employee;
					  getch();
					 }
					 	
										break;
										
				case 2: 	             
						if(count>0)
					{
										
										update_employee: 
										int d; 
										system("cls");
										cout<<"\n\t\t\t\t\tEnter 1: To update employee details"<<endl;
										cout<<"\t\t\t\t\tEnter 2: To update agent details"<<endl;
										cout<<"\t\t\t\t\tEnter 3: To go back"<<endl;
										cout<<"\t\t\t\t\tEnter choice(1-3)::";
										cin>>d;
										if(cin.fail())
										{
										cin.clear();
										cin.ignore();   
										system("cls"); 
										goto update_employee;
										}
										else{
										if(d==1)
										{
										cout<<"\n\t\t\t\tEnter id of employee that you want update details of ";
										cin>>id;
										for(i=1;i<=o.a;i++)
											{
												if(id==ad[i].getide())
												ad[i].update_e();	
											}
										}
									 else 	if(d==2)
										{
										cout<<"\n\t\t\t\tEnter id of agent that you want update details of ";
										cin>>id;
										for(j=1;j<=o.b;j++)
											{
													if(id==ad[j].getida())
													ad[j].update_a();	
												}
											}
											else if(d==3)
										{ goto menu1;
										getch();
										}	
									 else
									 {  cout<<"INVALID OPTION .......\n";
									 getch();
									 goto update_employee;
									 }
					}	
				}
					 else
					 { cout<<"NO EMPLOYEE / AGENTS HAS BEEN ADDED YET .......\nPLEASE FIRST ADD EMPLOYEE/AGENTS";
					  goto add_employee;
					  getch();
					 }
					 	break;
											
				case 1:            add_employee: 
				                               
					                
						               int f; 
										cout<<"\n\t\t\t\t\tEnter 1: To Add employees"<<endl;
										cout<<"\t\t\t\t\tEnter 2: To Add agents"<<endl;
										cout<<"\t\t\t\t\tEnter 3: To go back"<<endl;
										cout<<"\t\t\t\t\tEnter choice(1-3)::";
										cin>>f;
										if(cin.fail())
										{
										cin.clear();
										cin.ignore();  
										system("cls"); 
										goto add_employee;
										}
										else{
										system("cls");
										if(f==1)
										{
											o.a++;
											i=o.a;
										ad[i].getdata_e();
									}
									    else if(f==2)
										{ 
										o.b++;
										j=o.b;
										ad[j].getdata_a();
										}	
										else if(f==3)
										{ goto menu1;
										getch();
										}
										else{
											//system("cls");
											cout<<"INVALID OPTION .......\n";
											getch();
											goto add_employee;
											
										}
									}
										break;
				
				
	  case 4:           if(count>0)
					{
							  pay_salary:
								int g;
								cout<<"\n\t\t\t\t\tEnter 1: To Pay employees"<<endl;
							cout<<"\t\t\t\t\tEnter 2: To Pay agents"<<endl;
							cout<<"\t\t\t\t\tEnter 3: To go back"<<endl;
							cout<<"\t\t\t\t\tEnter choice(1-3)::";
							cin>>g;
							if(cin.fail())
							{
							cin.clear();
							cin.ignore();   
							system("cls"); 
							goto pay_salary;
							}
							else{
							system("cls");
							if(g==1)
							{	cout<<"\n\t\t\t\t\tEnter account no. of employee ";
									cin>>acc;
									system("cls");
								for(i=1;i<=o.a;i++)
									if(acc==ad[i].getacce())
									ad[i].getsal_e();
							}
						  else	if(g==2)
								{	cout<<"\n\t\t\t\t\tEnter account no. of agent ";
									cin>>acc;
									system("cls");
									for(j=1;j<=o.b;j++)
									if(acc==ad[j].getacca())
									ad[j].getsal_a();
								}
								else if(g==3)
										{ goto menu1;
										getch();
										}
								else
								{ cout<<"INVALID OPTION .......\n";
									 getch();
								 goto pay_salary;
								}
							}
						}
							else
					 { cout<<"NO EMPLOYEE / AGENTS HAS BEEN ADDED YET .......\nPLEASE FIRST ADD EMPLOYEE/AGENTS";
					  goto add_employee;
					  getch();
					 }
					 break;
					 
		  case 5:      if(count>0)
		{
		  task:
								int h;
								cout<<"\n\t\t\t\t\tEnter 1: Task for employees"<<endl;
								cout<<"\t\t\t\t\tEnter 2: Task for agents"<<endl;
								cout<<"\t\t\t\t\tEnter 3: To go back"<<endl;
								cout<<"\t\t\t\t\tEnter choice(1-3)::";
								cin>>h;
								if(cin.fail())
								{
								cin.clear();
								cin.ignore();   
								system("cls"); 
								goto task;
								}
								else{
								system("cls");
							if(h==1)
							{
								for(i=1;i<=o.a;i++)
								{
									cout<<"\n\t\t\t\t\tEnter Id no. of employee ";
									cin>>id;
									system("cls");
									if(id==ad[i].getide())
									ad[i].gettask_e();
									goto menu1;
									
								}
							}
						  else	if(h==2)
								{
									cout<<"\n\t\t\t\tEnter Id no. of agent ";
									cin>>id;
									system("cls");
									for(j=1;j<=o.b;j++)
								{
									if(id==ad[j].getida())
									ad[j].gettask_a();
									goto menu1;
									
								}
								}
								else if(h==3)
										{ goto menu1;
										getch();
										}
								else
								{ cout<<"INVALID OPTION .......\n";
									 goto task;
									 
									 getch();
								 
								}
							}
						}
							else
					 { cout<<"NO EMPLOYEE / AGENTS HAS BEEN ADDED YET .......\nPLEASE FIRST ADD EMPLOYEE/AGENTS";
					  goto add_employee;
					  getch();
					 }
					 break;
			case 6: if(count>0)
		{
		  meeting:
								int h;
								cout<<"\n\t\t\t\t\tEnter 1: Meeting for employees"<<endl;
								cout<<"\t\t\t\t\tEnter 2: Meeting for agents"<<endl;
								cout<<"\t\t\t\t\tEnter 3: To go back"<<endl;
								cout<<"\t\t\t\t\tEnter choice(1-3)::";
								cin>>h;
								if(cin.fail())
								{
								cin.clear();
								cin.ignore();   
								system("cls"); 
								goto meeting;
								}else{
									
								system("cls");
							if(h==1)
							{
								for(i=1;i<=o.a;i++)
								{
									cout<<"\n\t\t\t\t\tEnter Id no. of employee ";
									cin>>id;
									system("cls");
									if(id==ad[i].getide())
									ad[i].add_meeting_e();
									goto menu1;
									
								}
							}
						  else	if(h==2)
								{
									cout<<"\n\t\t\t\tEnter Id no. of agent ";
									cin>>id;
									system("cls");
									for(j=1;j<=o.b;j++)
								{
									if(id==ad[j].getida())
									ad[j].add_meeting_a();
									goto menu1;
									
								}
								}
								else if(h==3)
										{ goto menu1;
										getch();
										}
								else
								{ cout<<"INVALID OPTION .......\n";
									 goto meeting;
									 
									 getch();
								 
								}
							}
						}
							else
					 { cout<<"NO EMPLOYEE / AGENTS HAS BEEN ADDED YET .......\nPLEASE FIRST ADD EMPLOYEE/AGENTS";
					  goto add_employee;
					  getch();
					 }
					 break;
			case 9: goto admin;	
					break;
			case 10: exit(0);
						break;
			
			case 7: 
				int n;
				 int ch,temp_id[100];
				      char temp_name[20];
					   search:
				      	system("cls");
				      	
   do
   		{if(count>0)
			{
			 system("cls");
			cout<<"          \t\t   ************************************************************"<<endl;	
			cout<<"                                    Enter 1: Search Employee by name"<<endl;
			cout<<"                                    Enter 2: Search Agent by name"<<endl;
			cout<<"                                    Enter 3: Back To Main Menu Page"<<endl;

			cout<<"                                    Enter choice(1-3)::";
			
		    fflush(stdin);
			cin>>ch;
			if(cin.fail())
			{
			cin.clear();
			cin.ignore();   
			system("cls"); 
			goto search;
			}
			else{
			system("cls");
			switch(ch)
			{  case 1: 			cout<<"                                    SEARCHING EMPLOYEE USING NAME:"<<endl;
								cout<<"                                    ~~~~~~~~~~~~~~~~~~~~~"<<endl;
								cout<<"                                    Enter NAME:";
								cin>>temp_name;
								system("cls");
								
								cout<<"          \t\t   ************************************************************"<<endl;
								cout<<"S.NO\t\tNAME\t\tS/O\t\tID"<<endl;
							//	int ch_id;
								for(i=1;i<=o.a;i++)
								{ if(strcmp(temp_name,ad[i].name_e)==0 )
								  { coundown++;
								   cout<<coundown<<"]\t\t"<<ad[i].name_e<<"\t\t"<<ad[i].fname_e<<"\t\t"<<ad[i].getide()<<endl;
								   temp_id[coundown]=ad[i].getide();
								  }
								 /* else{ cout<<" INVALID DATA INPUT..... NO EMPLOYEE/AGENTS HAVE FOUND!!!\n PRESS ANY KEY SEARCH AGAIN....";
								  getch();
								 // goto search;
								  }*/
							}
							cout<<"                                    Enter choice(1-"<<coundown<<")::";
						
								cin>>n;
								for(i=1;i<=o.a;i++)
								if(temp_id[n]==ad[i].getide())
								{
									ad[i].view_e();
								}
								coundown=0;
											break;
							
				case 2: 		cout<<"                                    SEARCHING AGENT USING NAME:"<<endl;
								cout<<"                                    ~~~~~~~~~~~~~~~~~~~~~"<<endl;
								cout<<"                                    Enter NAME:";
								cin>>temp_name;
								//int coundawn=0;
								system("cls");
								
								cout<<"          \t\t   ************************************************************"<<endl;
								cout<<"S.NO\t\tNAME\t\tS/O\t\tID"<<endl;
								for(j=1;j<=o.b;j++)	
								{
								if(strcmp(temp_name,ad[j].name_a)==0)
								  {coundawn++;
								  cout<<coundawn<<"]\t\t"<<ad[j].name_a<<"\t\t"<<ad[j].fname_a<<"\t\t"<<ad[j].getida();
								  temp_id[coundawn]=ad[j].getida();
								  }	
							/*	 else{ cout<<" INVALID DATA INPUT..... NO EMPLOYEE/AGENTS HAVE FOUND!!!\n PRESS ANY KEY SEARCH AGAIN....";
								  getch();
								 // goto search;
								  }*/
							}
							cout<<"                                    Enter choice(1-"<<coundawn<<")::";
								cin>>n;
								for(j=1;j<=o.b;j++)
								if(temp_id[n]==ad[j].getida())
								{
									ad[j].view_a();
								}
								coundawn=0;
								break;
				case 3 : goto menu1;
							break;
				default : goto search;
							break;				

		   }
		} 
		}	else
							{ cout<<"NO EMPLOYEE / AGENTS HAS BEEN ADDED YET .......\nPLEASE FIRST ADD EMPLOYEE/AGENTS";
					 			 goto add_employee;
					 			 getch();
					 }
								break;
		}while(ch<4);
		break;
		
		case 8:        if(count>0)
					{
						         delt: 
								 cout<<"\n\t\t\t\t\tEnter 1: To Delete employees"<<endl;
								cout<<"\t\t\t\t\tEnter 2: To Delete agents"<<endl;
								cout<<"\t\t\t\t\tEnter 3: To go back"<<endl;
								cout<<"\t\t\t\t\tEnter choice(1-3)::";
								int del;
								cin>>del; 
								if(cin.fail())
			{
			cin.clear();
			cin.ignore();   
			system("cls");
			goto delt; 
			}
			else{

								system("cls");
								if(del==1)
								{
								for(i=1;i<=o.a;i++)
								{
									cout<<"\n\t\t\t\t\tEnter Id no. of agent ";
									cin>>id;
									system("cls");
									if(id==ad[i].getide())
									ad[i].delete_details_employee();
								//	goto menu1;
									
								}
							}
							else if(del==2)
							{
								for(j=1;j<=o.b;j++)
								{
									cout<<"\n\t\t\t\t\tEnter Id no. of agent ";
									cin>>id;
									system("cls");
									if(id==ad[j].getida())
									ad[j].delete_details_agent();
								//	goto menu1;
									
								}	
							}
							else if(del==3)
							{
								goto menu1;
							}
						else{
							cout<<"INVALID OPTION .......\n";
									 goto delt;
									 
									 getch();
						}
						break;	
					}
				}	else
							{ cout<<"NO EMPLOYEE / AGENTS HAS BEEN ADDED YET .......\nPLEASE FIRST ADD EMPLOYEE/AGENTS";
					 			 goto add_employee;
					 			 getch();
					 }
				default : goto menu1;
							break;

				}
			}
						}		while(choice1<10);
							
							}
							else{
								 cout<<"INVALID PASSWORD .......\n";
									 getch();
								goto admin;
						     }
						 }
	else if(choice==2)  
	{
	 int* ptr1 = (int*)malloc(sizeof(int));  
    int* ptr2 = (int*)malloc(sizeof(int));  
    std::cout << "Enter the Captcha: " << *ptr1 << std::endl;

    cin>>*ptr2;

    if (*ptr1 == *ptr2) {
    //	free(ptr1);
    //free(ptr2);
       	menu2:
		system("cls");
	 do
			{
			cout << "\t                                             =============================================" << endl;
		    cout << "\t                                                     P&Y EMPLOYEE MANAGEMENT SYSTEM       " << endl;
		    cout << "\t                                             =============================================" << endl;
		    cout << endl;
			cout<<"\t\t                                    Enter 1: To View Employees/Agents Details"<<endl;
			cout<<"\t\t                                    Enter 2: To Check Salary Details Of Employees/Agents"<<endl;
			cout<<"\t\t                                    Enter 3: To View MEETINGS Of Employees/Agents"<<endl;
			cout<<"\t\t                                    Enter 4: To View TASKS Of Employees/Agents"<<endl;
			cout<<"\t\t                                    Enter 5: To Update Task's Status"<<endl;
			cout<<"\t\t                                    Enter 6: To Go Back To Login Page"<<endl;
			cout<<"\t\t                                    Enter 7: To Exit"<<endl;
			cout<<"\t\t                                    Enter choice(1-7)::";
			cin>>choice2;
				if(cin.fail())
			{
			cin.clear();
			cin.ignore();   
			system("cls"); 
			goto menu2;
			}
			else{
			system("cls");
	switch(choice2)
	{	
		case 1:			menu2_1:	if(count>0)
							{ system("cls");
									int z;
								cout<<"\n\t\t\t\t\tEnter 1: To view employee details"<<endl;
								cout<<"\t\t\t\t\tEnter 2: To view agent details"<<endl;
								cout<<"\t\t\t\t\tEnter 3: To go back"<<endl;
								cin>>z;
									if(cin.fail())
			{
			cin.clear();
			cin.ignore();   
			system("cls"); 
			goto menu2_1;
			}
			else{
				
								system("cls");
								if(z==1)
								{
								cout<<"Enter id of employee that you want view details of ";
								cin>>id;
								cout<<"Enter Account no. of Employee(~As Password): ";
								cin>>acc;
								system("cls");
								for(i=1;i<=o.a;i++)
									{
										if(id==ad[i].getide()&&acc==ad[i].getacce())
										ad[i].view_e();	
									}
								}
							   else	if(z==2)
								{
								cout<<"Enter id of agent that you want view details of ";
								cin>>id;
								cout<<"Enter Account no.of Agent(~As Password): ";
								cin>>acc;
								system("cls");
									for(j=1;j<=o.b;j++)
								{
									if(id==ad[j].getida()&&acc==ad[j].getacca())
									ad[j].view_a();
								}
									}
									
								else if(z==3)
								{ goto menu2;
								getch();
								}
								else
								{ cout<<"INVALID OPTION.....\n";
						    goto menu2_1;
						    getch();
						}
					}
								
								
							}
							else
							{ cout<<"NO EMPLOYEE / AGENTS HAS BEEN ADDED YET .......\nPLEASE FIRST ADD EMPLOYEE/AGENTS";
					 			 goto add_employee;
					 			 getch();
					 }
								break;
								
		case 2: 			menu2_2:	if(count>0)
							{ system("cls");
		
		
		     			int x;
						cout<<"Enter 1: To Check Salary Of employees"<<endl;
						cout<<"Enter 2: To Check Salary Of agents"<<endl;
						cout<<"Enter 3: To go back"<<endl;
						cout<<"Enter choice(1-3)::";
						cin>>x;
							if(cin.fail())
			{
			cin.clear();
			cin.ignore();   
			system("cls"); 
			goto menu2_2;
			}
			else{
						system("cls");
						if(x==1)
						{
							for(i=1;i<=o.a;i++)
							{
								cout<<"Enter account no. of employee ";
								cin>>acc;
								system("cls");
								if(acc==ad[i].getacce())
								ad[i].showsal_e();
							}
						}
						else if(x==2)
							{
								for(j=1;j<=o.b;j++)
								{
								cout<<"Enter account no. of agent ";
								cin>>acc;
								system("cls");
								if(acc==ad[j].getacca())
								ad[j].showsal_a();
								}
							}
						else if(x==3)
									{ goto menu2;
									getch();
									}
						else
						{ cout<<"INVALID OPTION.....\n";
						    goto menu2_2;
						    getch();
						}
				}
			}
				else
				{cout<<"NO EMPLOYEE / AGENTS HAS BEEN ADDED YET .......\nPLEASE FIRST ADD EMPLOYEE/AGENTS";
					 			 goto add_employee;
					 			 getch();
					
				}
						    	 break;
				
   case 3 :	                	menu2_5:	if(count>0)
							{ system("cls");
							int y;
						cout<<"Enter 1: To View Meeting Of employee"<<endl;
						cout<<"Enter 2: To View Meeting Of agent"<<endl;
						cout<<"Enter 3: To go back"<<endl;
						cout<<"Enter choice(1-3)::";
						cin>>y;
							if(cin.fail())
			{
			cin.clear();
			cin.ignore();   
			system("cls"); 
			goto menu2_5;
			}
			else{
						system("cls");
						if(y==1)
						{
							for(i=1;i<=o.a;i++)
							{
								cout<<"Enter Id of employee ";
								cin>>id;
								system("cls");
								if(id==ad[i].getide())
								ad[i].show_meeting_e();
								goto menu2_1;
							}
						}
						else if(y==2)
							{
								for(j=1;j<=o.b;j++)
								{
								cout<<"Enter Id of agent ";
								cin>>id;
								system("cls");
								if(id==ad[j].getida())
								ad[j].show_meeting_a();
								goto menu2_1;
								}
							}
						else if(y==3)
									{ goto menu2;
									getch();
									}
						else
						{ cout<<"INVALID OPTION.....\n";
						    goto menu2_5;
						    getch();}
						}
					}
							else
							{ cout<<"NO EMPLOYEE / AGENTS HAS BEEN ADDED YET .......\nPLEASE FIRST ADD EMPLOYEE/AGENTS";
					 			 goto menu2_5;
					 			 getch();
					 }	 
					 break;
								 
	case 4:							menu2_4:	if(count>0)
							{ system("cls");
							int y;
						cout<<"Enter 1: To View Tasks Of employee"<<endl;
						cout<<"Enter 2: To View Tasks Of agent"<<endl;
						cout<<"Enter 3: To go back"<<endl;
						cout<<"Enter choice(1-3)::";
						cin>>y;
							if(cin.fail())
			{
			cin.clear();
			cin.ignore();   
			system("cls");
			goto menu2_4; 
			}
			else{
						system("cls");
						if(y==1)
						{
							for(i=1;i<=o.a;i++)
							{
								cout<<"Enter Id of employee ";
								cin>>id;
								system("cls");
								if(id==ad[i].getide())
								ad[i].viewt_e();
								getch();
								goto menu2_4;
							}
						}
						else if(y==2)
							{
								for(j=1;j<=o.b;j++)
								{
								cout<<"Enter Id of agent ";
								cin>>id;
								system("cls");
								if(id==ad[j].getida())
								ad[j].viewt_a();
								getch();
								goto menu2_4;
								}
							}
						else if(y==3)
									{ goto menu2;
									getch();
									}
						else
						{ cout<<"INVALID OPTION.....\n";
						   getch();
						    goto menu2_4;
						    }
						}
					}
							else
							{ cout<<"NO EMPLOYEE / AGENTS HAS BEEN ADDED YET .......\nPLEASE FIRST ADD EMPLOYEE/AGENTS";
					 			 goto add_employee;
					 			 getch();
					 }
					 break;
							
	case 5: 	menu2_3:	if(count>0)
							{ system("cls");
							int y;
							int t;
						cout<<"Enter 1: To Update Status Of Employee's Task"<<endl;
						cout<<"Enter 2: To Update Status Of Employee's Task"<<endl;
						cout<<"Enter 3: To go back"<<endl;
						cout<<"Enter choice(1-3)::";
						cin>>y;
							if(cin.fail())
			{
			cin.clear();
			cin.ignore();   
			system("cls"); 
			goto menu2_3;
			}
			else{
			
						system("cls");
						if(y==1)
						{
							for(i=1;i<=o.a;i++)
							{
								cout<<"Enter Id of employee ";
								cin>>id;
								if(id==ad[i].getide())
									cout<<"Enter Task no.: ";
									cin>>t;
								for(q=0;q<o.c;q++)
								{
								if(t==ad[i].task_no_e[q])
								ad[i].update_t_e();
							}
							}
						}
						else if(y==2)
							{
								for(j=1;j<=o.b;j++)
								{
							cout<<"Enter Id of agent ";
								cin>>id;
								if(id==ad[j].getida())
								for(w=0;w<o.d;w++)
								{
									cout<<"Enter Task no.: ";
									cin>>t;
								if(t==ad[j].task_no_a[w])
								ad[j].update_t_a();
							}
								}
							}
						else if(y==3)
									{ goto menu2;
									getch();
									}
						else
						{ cout<<"INVALID OPTION.....\n";
						   getch();
						    goto menu2_3;
						    }
						}
					}
							else
							{ cout<<"NO EMPLOYEE / AGENTS HAS BEEN ADDED YET .......\nPLEASE FIRST ADD EMPLOYEE/AGENTS";
					 			 goto add_employee;
					 			 getch();
					 }break;
	
	
			case 6:		 goto admin;
					break;						 
								 
								 
			case 7: 	exit(0);
					 break;						 
								 
  			 default:    goto menu2;
				         getch();
			             break;	
				
			}
		}
	}while(choice2<8);
    } else {
        goto admin;
    }
    
	}

else if(choice==3) 
 { 
    exit(0);
	break;	
		}
else
{
	  goto admin;
			break;
		}
          				
}
}
while(choice<4);

return 0;	
}
