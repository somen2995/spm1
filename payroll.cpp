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
{
 
  return 0;
}
