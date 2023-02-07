//Q: Find minimum number of platforms required:

#include<bits/stdc++.h>
using namespace std;

int minplatfrm(float arriv[], float depart[], int ar, int dr)
{
    sort(arriv, arriv+ar); //sorting arrival time
    sort(depart,depart+dr); //sorting departure time

    int needplatform=0, platform=0, i=0,j=0;
    //i & j checking for arrival and departure array

    while(i<ar)
    {
        if(arriv[i] < depart[j])
        {
            needplatform = needplatform+1; //increase needplatform value

            if(platform < needplatform) //neededplatform if geater than platform
                platform=needplatform;
            i++;
        }
        else
        {
            needplatform--; //decrease neededplatform
            j++; //go to next departure time
        }
    }
    return platform;


}

int main()
{
    float arriv[]={2.00,2.10,3.00,3.20,3.50,5.10};
    int ar=sizeof(arriv)/sizeof(arriv[0]);
    float depart[]={2.30,3.40,3.20,4.30,4.00,5.30};
    int dr=sizeof(depart)/sizeof(depart[0]);

    printf(" minimum platform is %d",minplatfrm(arriv,depart,ar,dr));
}
