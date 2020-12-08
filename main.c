#include<stdio.h>
#include<stdlib.h>
#include "LinkedList.h"


int main()
{

    struct records
    {
        float gpa;
        string name;
        double id;
    };

    const int SIZE = 15;
    records rostr[SIZE];
    rostr[0].id = 201046005;
    rostr[0].name = "Abhish Ijari";
    rostr[0].gpa = 9.8;

    rostr[1].id = 201046006;
    rostr[1].name = "karthik G";
    rostr[1].gpa = 8.5;

    rostr[2].id = 201046007;
    rostr[2].name = "Raghav Kumar";
    rostr[2].gpa = 7.5;

}
