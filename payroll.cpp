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
int main()
{ struct emp e1[10];
 strcpy(e1[0].name,"panda");
 e1[0].emp_id=101;
 e1[0].age=22;
 e1[0].gross_salary=1054000;
 e1[0].net_slary=9500000;
 strcpy(e1[1].name,"somu");
 e1[1].emp_id=102;
 e1[1].age=23;
 e1[1].gross_salary=7500000;
 e1[1].net_slary=6500000;
 cout<<"Enter employee id:";
 int eid;
 cin>>eid;
 if (eid!=101 && eid!=102)
   cout<<"Invalid id";
 else
 {
   eid-=101;
   cout<<"\nEmployee id:"<<e1[eid].emp_id;
   cout<<"\nEmployee name:"<<e1[eid].name;
   cout<<"\nEmployee age:"<<e1[eid].age;
   cout<<"\nEmployee gross salary:"<<e1[eid].gross_salary;
   cout<<"\nEmployee net salary:"<<e1[eid].net_salary;
 }
  return 0;
}
