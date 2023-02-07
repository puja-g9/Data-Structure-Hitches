//Q: Find maximum calorie burn in the gym after dietitian gave time limit:
#include<bits/stdc++.h>
using namespace std;

typedef struct workout
{
    char workoutname;
    int minute, calorie;
};

typedef struct prescribe
{
    char workoutname;
    int  wtime;
};

bool compare(workout a, workout b)
{
    float w1= a.calorie/a.minute;
    float w2= b.calorie/b.minute;
    return w1>w2;
}

void maxcalorie(workout arr1[], prescribe arr2[], int n1, int n2)
{
    sort(arr1, arr1+n1, compare);

    int caloriecount=0;
    int time=0;
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            if(arr1[i].workoutname == arr2[j].workoutname)//same workoutname
                if(time <= arr2[j].wtime - arr1[i].minute)//checking for time
            {
                time=time+arr1[i].minute;
                caloriecount=caloriecount+arr1[i].calorie;
            }
        }
    }
    cout<<"max calorie burn: "<<caloriecount;
}

int main()
{
	workout arr1[] = {{'a', 3, 50},{'b',2,35},{'c',1,15},{'d',2,30}};//my workout
	int n1 = sizeof(arr1)/sizeof(arr1[0]);

	prescribe arr2[] = {{'b',25},{'d',15},{'c',10},{'a',20}}; //deititan
	int n2 = sizeof(arr2)/sizeof(arr2[0]);
	maxcalorie(arr1,arr2,n1,n2);
}

