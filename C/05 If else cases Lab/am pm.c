#include<stdio.h>
int main(){
    int twentyfourhour,twentyfourminute;
    printf("Enter hour in 24 hour format: ");
    scanf("%d",&twentyfourhour);
    printf("Enter minutes: ");
    scanf("%d",&twentyfourminute);
    if(twentyfourhour>12){
        printf("%d:%02dpm",twentyfourhour-12,twentyfourminute);
    }
    else if(twentyfourhour==0){
        printf("12:%02dam",twentyfourminute);
    }
    else if(twentyfourhour<12){
        printf("%d:%02dam",twentyfourhour,twentyfourminute);
    }
    else{
        printf("%d:%02dpm",twentyfourhour,twentyfourminute);
    }
    puts("");
    if (twentyfourhour >= 5 && twentyfourhour < 12) {
        printf("Morning");
    }
    else if (twentyfourhour >= 12 && twentyfourhour < 17) {
        printf("Afternoon");
    }
    else if (twentyfourhour >= 17 && twentyfourhour < 20) {
        printf("Evening");
    }
    else {
        printf("Night");
    }
}