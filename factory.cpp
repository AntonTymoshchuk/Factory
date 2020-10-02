#include <iostream>
#include <string.h>
using namespace std;
struct emp
{
	char name[25];
	char sirname[25];
	int birth_day;
	int birth_month;
	int birth_year;
	int age;
	int gender;
	int index;
};
int main()
{
	int n=0,var,year,month,len;
	char employee_name[25],employee_sirname[25];
	emp *per=(emp*)malloc(n*sizeof(emp));
	cout<<"\n  General settings\n"<<endl;
	cout<<"  Year : ";
	cin>>year;
	cout<<"  Month : ";
	cin>>month;
	for (;;)
	{
		system("cls");
		cout<<"\n  Personal\n"<<endl;
		cout<<"  Create an employee ..................................................... 1"<<endl;
		cout<<"  List of employees ...................................................... 2"<<endl;
		cout<<"  Edit information about employee ........................................ 3"<<endl;
		cout<<"  Search employee by his/her sirname ..................................... 4"<<endl;
		cout<<"  Search information about employees by their age ........................ 5"<<endl;
		cout<<"  Employees with birthday in this month .................................. 6"<<endl;
		cout<<"  Search pensioners ...................................................... 7"<<endl;
		cout<<"  Delete an employee ..................................................... 8"<<endl;
		cout<<"  Exit ................................................................... 0"<<endl;
		cout<<"\n  Variant : ";
		cin>>var;
		switch (var)
		{
		case 1:
			{
				n++;
				per=(emp*)realloc(per,n*sizeof(emp));
				system("cls");
				cout<<"\n  Create an employee\n"<<endl;
				cout<<"  Name : ";
				flushall();
				cin.getline(per[n-1].name,25);
				cout<<"  Sirname : ";
				flushall();
				cin.getline(per[n-1].sirname,25);
				cout<<"  Birth day : ";
				cin>>per[n-1].birth_day;
				cout<<"  Birth month : ";
				cin>>per[n-1].birth_month;
				cout<<"  Birth year : ";
				cin>>per[n-1].birth_year;
				cout<<"  Gender ("<<char(11)<<" - 1 "<<char(12)<<" - 0) : ";
				cin>>per[n-1].gender;
				per[n-1].gender=12-per[n-1].gender;
				per[n-1].age=year-per[n-1].birth_year;
				per[n-1].index=1;
				cout<<"\n  ";
				system("pause");
			}
			break;
		case 2:
			{
				system("cls");
				cout<<"\n  List of employees\n"<<endl;
				for (int i=0;i<n;i++)
				{
					if (per[i].index!=0)
				        cout<<"  Full name : "<<per[i].name<<" "<<per[i].sirname<<"   Birth date : "<<per[i].birth_day<<"."<<per[i].birth_month<<"."<<per[i].birth_year<<"   Age : "<<per[i].age<<"   Gender : "<<char(per[i].gender)<<endl;
				}
				cout<<"\n  ";
				system("pause");
			}
			break;
		case 3:
			{
				system("cls");
				cout<<"\n  Edit information about employee\n"<<endl;
				cout<<"  Name : ";
				flushall();
				cin.getline(employee_name,25);
				cout<<"  Sirname : ";
				flushall();
				cin.getline(employee_sirname,25);
				for (int i=0;i<n;i++)
				{
					if (stricmp(per[i].name,employee_name)==0&&stricmp(per[i].sirname,employee_sirname)==0&&per[i].index!=0)
					{
						system("cls");
						cout<<"\n  Change information about "<<per[i].name<<" "<<per[i].sirname<<"\n"<<endl;
						cout<<"  Change name ............................................................ 1"<<endl;
						cout<<"  Change sirname ......................................................... 2"<<endl;
						cout<<"  Change birth day ....................................................... 3"<<endl;
						cout<<"  Change birth month ..................................................... 4"<<endl;
						cout<<"  Change birth year ...................................................... 5"<<endl;
						cout<<"\n  Variant : ";
						cin>>var;
						switch(var)
						{
						case 1:
							{
								system("cls");
								cout<<"\n  Change name\n"<<endl;
								cout<<"  New name : ";
								flushall();
								cin.getline(per[i].name,25);
								cout<<"\n  ";
								system("pause");
							}
							break;
						case 2:
							{
								system("cls");
								cout<<"\n  Change sirname\n"<<endl;
								cout<<"  New sirname : ";
								flushall();
								cin.getline(per[i].sirname,25);
								cout<<"\n  ";
								system("pause");
							}
							break;
						case 3:
							{
								system("cls");
								cout<<"\n  Change birth day\n"<<endl;
								cout<<"  New birth day : ";
								cin>>per[i].birth_day;
								cout<<"\n  ";
								system("pause");
							}
							break;
						case 4:
							{
								system("cls");
								cout<<"\n  Change birth month\n"<<endl;
								cout<<"  New birth month : ";
								cin>>per[i].birth_month;
								cout<<"\n  ";
								system("pause");
							}
							break;
						case 5:
							{
								system("cls");
								cout<<"\n  Change birth year\n"<<endl;
								cout<<"  New birth year : ";
								cin>>per[i].birth_year;
								cout<<"\n  ";
								system("pause");
								per[i].age=year-per[i].birth_year;
							}
							break;
						}
					}
				}
			}
			break;
		case 4:
			{
				system("cls");
				cout<<"\n  Search employee by his/her sirname\n"<<endl;
				cout<<"  Sirname : ";
				flushall();
				cin.getline(employee_sirname,25);
				for (int i=0;i<n;i++)
				{
					if (stricmp(per[i].sirname,employee_sirname)==0&&per[i].index!=0)
					{
						cout<<"\n  Full name : "<<per[i].name<<" "<<per[i].sirname<<"   Birth date : "<<per[i].birth_day<<"."<<per[i].birth_month<<"."<<per[i].birth_year<<"   Age : "<<per[i].age<<"   Gender : "<<char(per[i].gender)<<endl;
					}
				}
				cout<<"\n  ";
				system("pause");
			}
			break;
		case 5:
			{
				system("cls");
				cout<<"\n  Search information about employees by their age\n"<<endl;
				cout<<"  Age : ";
				cin>>var;
				system("cls");
				cout<<"\n  Age : "<<var<<endl<<endl;
				for (int i=0;i<n;i++)
				{
					if (per[i].age==var&&per[i].index!=0)
					{
						cout<<"  Full name : "<<per[i].name<<" "<<per[i].sirname<<"   Birth date : "<<per[i].birth_day<<"."<<per[i].birth_month<<"."<<per[i].birth_year<<"   Gender : "<<char(per[i].gender)<<endl;
					}
				}
				cout<<"\n  ";
				system("pause");
			}
			break;
		case 6:
			{
				system("cls");
				cout<<"\n  Employees with birthday in this month\n"<<endl;
				for (int i=0;i<n;i++)
				{
					if (per[i].birth_month==month&&per[i].index!=0)
					{
						cout<<"  "<<per[i].name<<" "<<per[i].sirname<<endl;
					}
				}
				cout<<"\n  ";
				system("pause");
			}
			break;
		case 7:
			{
				system("cls");
				cout<<"\n  Pensioners\n"<<endl;
				for (int i=0;i<n;i++)
				{
					if (per[i].age>=60||per[i].age>=55&&per[i].index!=0)
					{
						cout<<"  Full name : "<<per[i].name<<" "<<per[i].sirname<<"   Gender : "<<char(per[i].gender)<<endl;
					}
				}
				cout<<"\n  ";
				system("pause");
			}
			break;
		case 8:
			{
				system("cls");
				cout<<"\n  Delete an employee\n"<<endl;
				cout<<"  Name : ";
				flushall();
				cin.getline(employee_name,25);
				cout<<"  Sirname : ";
				flushall();
				cin.getline(employee_sirname,25);
				for (int i=0;i<n;i++)
				{
					if (stricmp(per[i].name,employee_name)==0&&stricmp(per[i].sirname,employee_sirname)==0&&per[i].index!=0)
						per[i].index=0;
				}
				cout<<"\n  ";
				system("pause");
			}
			break;
		case 0:
			{
				free(per);
			}
			break;
		}
	}
	return 0;
}