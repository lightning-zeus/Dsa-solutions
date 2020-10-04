//Zeus was here
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <fstream>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
#include <assert.h> //works like magic, but at cost.
using namespace std;
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout<<x<<endl;
#define fo(i, n) for(int i=0; i<n; i++)
#define fk(i, k, n) for(int i=k; i<=n; i++)
#define fn(i, n) for(int i=n-1;i>=0;i--)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define lli long long int
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<lli, lli>	pl;
typedef vector<int>		vi;
typedef vector<lli>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
typedef struct {
    string firstname;
    string lastname;
    
}Name;
typedef struct{
    int day;
    int month;
    int year;
}DOB;
typedef struct {
    int mathematics;
    int computer;
    int english;
}Marks;
typedef struct {
    int r_no;
    Name name;
    DOB dob;
    string sex;
    Marks marks;

}Student;

int main() {
   Student stud1;
   cout<<"\nEnter the name of the student:"<<"\n";
   cin>>stud1.name.firstname>>stud1.name.lastname;
   cout<<"\nEnter the roll number of the student"<<"\n";
   cin>>stud1.r_no;
   cout<<"\nEnter the date of the birth of the student"<<"\n";
   cin>>stud1.dob.day>>stud1.dob.month>>stud1.dob.year;
   cout<<"\nEnter the gender"<<"\n";
   cin>>stud1.sex;
   cout<<"\nEnter the marks of the student"<<"\n";
   cin>>stud1.marks.mathematics>>stud1.marks.computer>>stud1.marks.english;
   cout<<"\nThe details of the student are as follows: "<<"\n";
   cout<<stud1.name.firstname<<" "<<stud1.name.lastname<<"\n";
   cout<<stud1.r_no<<"\n";
   cout<<stud1.dob.day<<"/"<<stud1.dob.month<<"/"<<stud1.dob.year<<"\n";
   cout<<stud1.sex<<"\n";
   cout<<"Mathematics: "<<stud1.marks.mathematics<<"\n";
   cout<<"Computer: "<<stud1.marks.computer<<"\n";
   cout<<"English: "<<stud1.marks.english<<"\n";

    
    return 0;
}