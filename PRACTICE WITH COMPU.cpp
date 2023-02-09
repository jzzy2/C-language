#include<stdio.h>

int main(void){
	
char student_num[25], name[25], lst_name[25],gender[25], course[20];
float prelim, midterm,final, lb_prelim, lb_midterm,lb_final, assesment_task, machine_problem;
float prelim_grade, lb_grade, final_grade;

printf("\nUNIVESITY OF CODING\n");

printf("\nEnter student number:");
scanf("%s",student_num);

printf("\nEnter Name: ");
scanf("%s",name);

printf("\nEnter Last Name: ");
scanf("%s",lst_name);

printf("\nEnter Gender: ");
scanf("%s",gender);

printf("\nEnter Course: ");
scanf("%s",course);

printf("\nLECTURE GRADE\n");

printf("\nEnter prelim grade: ");
scanf("%f",&prelim);

printf("\nEnter midterm grade: ");
scanf("%f",&midterm);

printf("\nEnter Final grade: ");
scanf("%f",&final);

printf("\nEnter Assenment grade: ");
scanf("%f",&assesment_task);


printf("\nLABRATORY GRADE\n");


printf("\nEnter Lab prelim grade: ");
scanf("%f",&lb_prelim);


printf("\nEnter Lab midterm grade: ");
scanf("%f",&lb_midterm);

printf("\nEnter Lab final grade: ");
scanf("%f",&lb_final);

	
printf("\nEnter Machine grade: ");
scanf("%f",&machine_problem);


prelim_grade = (prelim * .20) + (midterm * .20) + (final * .20) + (assesment_task * .40);
lb_grade = (lb_prelim * .20) + (lb_midterm * .20) + (lb_final * .20) + (machine_problem * .40);


final_grade = prelim_grade + final_grade;

printf("\nYour Final grade in Lecture: %.2f",prelim_grade);
printf("\nYour Final grade in Lab final: %.2f",lb_grade);
printf("\nYour Final grade in Final: %.2f",final_grade);



return 0;

}
