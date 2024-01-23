#include<stdio.h>
#include<string.h>

struct myTime {
 int second, minute, hour;
};

struct record{
char fname[20], lname[20];

struct myTime startTime, finishTime, duration;
};

struct record ReadRecord(){
 struct record rec;
 // code
 gets(fname);
 gets(lname);

 return rec;
}
void PrintRecord(struct record rec){
 // code
 printf("%s",record.fname)
 printf("%s",record.lname)
}
struct myTime GetDuration(struct myTime start, struct myTime finish){
 struct time d;
 // compute
 return d;
}
main(){
 struct record rec = ReadRecord();
 PrintRecord(rec);
 return 0;
}
