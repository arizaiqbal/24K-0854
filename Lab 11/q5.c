#include <stdio.h>
#include<string.h>

struct Date{
    int day;
    int month;
	int year;
	
};

struct Event{
	char event_name[50];
	struct Date dates;
	char location[100];
};

 int main()
 {
    struct Event event_details;
    strcpy(event_details.event_name,"Birthday Party");
    event_details.dates.day= 10;
    event_details.dates.month= 03;
    event_details.dates.year= 2025;
    strcpy(event_details.location,"Port Grand");

    printf("Event Name : %s\n",event_details.event_name);
    printf("Event Date : %d - %d - %d\n",event_details.dates.day,event_details.dates.month,event_details.dates.year);
    printf("Event Location : %s\n",event_details.location);

   
 }