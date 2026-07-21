#include <stdio.h>

struct student 
{
    char name[40];
    int roll;
    float marks;
};

int main() {
    int n, i;
    printf ("enter number of students:");
    scanf ("%d", &n);

    struct student s[n];
    for (int i = 0; i < n; i++) {
        printf ("enter name;");
        scanf ("%s", &s[i].name);

        printf ("enter roll;");
        scanf ("%d", &s[i].roll); 

        printf ("enter marks;");
        scanf ("%f", &s[i].marks);

        printf ("name=%s\n", s[i].name);
        printf ("roll=%d\n", s[i].roll);
        printf ("marks=%f\n", s[i].marks);
    }
    return 0;
}