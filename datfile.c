/* wap to write name ,id , weight of employ in binary file data named "myfile.dat"
saved inside a folder named "personal" within the D drive */
#include<stdio.h>
int main ()
{
    FILE *k;
    char name[20];
    int id;
    float weight;
    k=fopen("myfile.dat","wb");
    printf("enter name, id and weight of employee: ");
    scanf("%s",name);
    scanf("%d",&id);
    scanf("%f",&weight);
    fprintf(k,"name = %s \t id = %d \t weight = %f ",name,id,weight);
    fclose(k);
    return 0;
}