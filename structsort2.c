#include <stdio.h> //////no knowledge---INCOMPLETE;;;;;;----IGNORE;;;

typedef struct {
    char name[30];
    int roll;
    float marks;
} memb;

int sort(int n,memb *record);

int main(){
    int n, i, j;
    printf("Enter number of students\n");
    scanf("%d", &n);
        memb students[n];
        memb *record;

        printf("Enter Rollno, Name & marks\n");
        for (int i = 0; i < n; i++)
        {
        scanf("%d", &students[i].roll);
        scanf("%s", &students[i].name);
        scanf("%f", &students[i].marks);
        }   
        sort(n,&students[n]);
        return 0;
}


int sort (int n,memb *record){
    int temp;
    for (int i = 0; i < (n - 1); i++){
        for (int j = 0; j < (n - 1 - 1); j++){
            if (*record(j)->marks < *record(j+1)->marks){
                temp = *record(j).marks;
                *record(j)->marks = *record(j+1)->marks;
                
            }
        }
    }
printf("\nSorted data in descending order is : \n\n");
for(int i=0;i<n;i++){
    printf("%d ...............\n", i);
    printf("Name of %d is %s\n",i,*record(i).name);
    printf("Roll  = %d\n", *record(i).roll);
    printf("Marks = %.2f\n", *record(i).marks);
}
}