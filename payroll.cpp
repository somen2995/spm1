#include<bits/stdc++.h>
using namespace std;
struct emp
{
  char name[100];
  int emp_id;
  int age;
  float gross_salary;
  float net_salary;
};
struct emp e1[10];
int idx=0;

void query()
{ cout<<"Enter employee id:";
 int eid;
 cin>>eid;
 for(int i=0;i<10;i++)
 {if( e1[i].emp_id==eid)
  {
   cout<<"Employee id:"<<e1[i].emp_id;
   cout<<"\nEmployee name:"<<e1[i].name;
   cout<<"\nEmployee age:"<<e1[eid].age;
   cout<<"\nEmployee gross salary:"<<e1[i].gross_salary;
   cout<<"\nEmployee net salary:"<<e1[i].net_salary;
  }
 }
 if(i==10)
    cout<<"Invalid id";
}
void insert()
{
    cout<<"\nEnter Employee id:";
    cin>>e1[idx].emp_id;
   cout<<"\nEnter Employee name:";
  cin>>e1[idx].name;
   cout<<"\nEnter Employee age:";
  cin>>e1[idx].age;
   cout<<"\nEnter Employee gross salary:";
  cin>>e1[idx].gros_salary;
   cout<<"\nEnter Employee net salary:";
  cin>>e1[idx].net_salary;
  idx++;
}
int main()
{int ch;

 while(1)
 { cout<<"Enter choice 1:Input Data 2.Query\n";
 cin>>ch;
  if(ch==1)
    insert();
  else if(ch==2)
    query();
  else
  {cout<<"Invalid choice";
   continue;
  }
  cout<<"Want to continue y/n: ";
  char ch1;
  cin>>ch1;
  if(ch1=='y')
    continue;
 }
  return 0;
}
