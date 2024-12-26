/*WAP having struct name covid that have data member as patient name , patient id, fever reading of past 6 days .
 input values of patient name , patient id , fever readind of  past 6 days in degree fahrenheit and
 display average fever value at output with proper precuation mesage*/
#include <stdio.h>
int main()
{
    int i;
    char *str[50];
    float avg, sum = 0;
    struct covid
    {
        char patient_name[20];
        int patient_id;
        float fever_reading[6];
    } patient;
    
    printf("enter patient name ");
    scanf("%s", patient.patient_name);
    printf("enter patient id");
    scanf("%d", &patient.patient_id);
    printf("enter fever readings of six days in fahrenite degree");
    for (i = 0; i < 6; i++)
    {
        scanf("%f", &patient.fever_reading[i]);
        sum = sum + patient.fever_reading[i];
    }
    avg = sum / 6;
    printf("\n enter precuation message");
    scanf("%S", &str);
    printf(" \n patient name \t patient id \t average fever in fahrenheit degree");
    printf("\n %s \t %d \t %f", patient.patient_name, patient.patient_id, avg);
    printf("\n precaution message : ");
    printf("%S", str);
    return 0;
}