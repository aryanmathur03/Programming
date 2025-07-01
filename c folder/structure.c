// #include <stdio.h>

// struct employee {
//     char name[10];
//     int id;
//     float salary;
// };

// int main() {
//     struct employee e[3];
//     int i;
//     for (i = 0; i < 3; i++) {
//         printf("Enter details for employee %d:\n", i + 1);
//         printf("Enter your Name: ");
//         scanf("%s", e[i].name);
//         printf("Enter ID: ");
//         scanf("%d", &e[i].id);
//         printf("Enter your Salary: ");
//         scanf("%f", &e[i].salary);
//     }

//     printf("\nEmployee Details:\n");
//     for (i = 0; i < 3; i++) {
//         printf("Employee %d: Name: %s, ID: %d, Salary: %.2f\n", i + 1, e[i].name, e[i].id, e[i].salary);
//     }
//     return 0;
// }

// #include <stdio.h>
// struct school{
//     char name[20];
//     int age;
//     int roll;
// };
// int main(){
//     int n;
//     printf("Enter how many data ");
//     scanf("%d", &n);
//     struct school sc[n];
//     int i;

//     for (i=0;i<n;i++){
//         printf("Enter detail of student %d :\n",i+1);
//         printf("Enter name :\n");
//         scanf("%s",sc[i].name);
//         printf("Enter your age :\n");
//         scanf("%d",&sc[i].age);
//         printf("Enter roll no.\n");
//         scanf("%d", &sc[i].roll);

//     }
//     printf("The detail of student is : \n");
//     for (i=0;i<n;i++){
//         printf("School %d : name:%s : age:%d : roll :%d \n",i+1,sc[i].name,sc[i].age,sc[i].roll);
//     }return 0;
// }