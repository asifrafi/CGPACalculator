#include<stdio.h>
#include<string.h>
#include<conio.h>
struct student
{
    int id;
    char username[20];
    char password[20];
    float cg;
    char grading[30];
    int s;
    int crs;
};

struct student s[20];
int user;
int ind;
int course,semi;
int current_id=-1;
char mp[]="123";
char master[]="rafi";
FILE *r,*w,*a,*db,*d;

char name[20], pass[20];
float four_gpa(int marks)
{
    float point;

    if(marks<=59)
    {
        point=0.00;
    }
    if(marks>=60 && marks<=66)
    {
        point=1.00;

    }
    if(marks>=67 && marks<=69)
    {
        point=1.30;

    }
    if(marks>=70 && marks<=72)
    {
        point=1.70;

    }
    if(marks>=73 && marks<=76)
    {
        point=2.0;

    }
    if(marks>=77 && marks<=79)
    {
        point=2.3;

    }
    if(marks>=80 && marks<=82)
    {
        point=2.7;
    }
    if(marks>=83 && marks<=86)
    {
        point=3.0;
    }
    if(marks>=87 && marks<=89)
    {
        point=3.3;
    }
    if(marks>=90 && marks<=92)
    {
        point=3.7;
    }
    if(marks>=93 && marks<=100)
    {
        point=4.0;
    }

    return point;

}
float american_gpa(int marks)
{
    float point;

    if(marks<=59)
    {
        point=0.00;
    }
    if(marks>=60 && 62)
    {
        point=0.70;
    }
    if(marks>=63 && marks<=66)
    {
        point=1.00;

    }
    if(marks>=67 && marks<=69)
    {
        point=1.30;

    }
    if(marks>=70 && marks<=72)
    {
        point=1.70;

    }
    if(marks>=73 && marks<=76)
    {
        point=2.0;

    }
    if(marks>=77 && marks<=79)
    {
        point=2.3;

    }
    if(marks>=80 && marks<=82)
    {
        point=2.7;
    }
    if(marks>=83 && marks<=86)
    {
        point=3.0;
    }
    if(marks>=87 && marks<=89)
    {
        point=3.3;
    }
    if(marks>=90 && marks<=92)
    {
        point=3.7;
    }
    if(marks>=93 && marks<=100)
    {
        point=4.0;
    }

    return point;

}
float five_gpa(int marks)
{
    float point;

    if(marks<=32)
    {
        point=0.00;
    }
    if(marks>=33 && marks<=39)
    {
        point=1.00;

    }
    if(marks>=40 && marks<=49)
    {
        point=2.00;

    }
    if(marks>=50 && marks<=59)
    {
        point=3.00;

    }
    if(marks>=60 && marks<=69)
    {
        point=3.50;

    }
    if(marks>=70 && marks<=79)
    {
        point=4.00;

    }
    if(marks>=80 && marks<=100)
    {
        point=5.00;
    }

    return point;

}
float german_gpa(int marks)
{
    float point;

    if(marks<=34)
    {
        point=0.00;
    }
    if(marks>=35 && marks<=39)
    {
        point=5.00;

    }
    if(marks>=40 && marks<=45)
    {
        point=4.70;

    }
    if(marks>=46 && marks<=50)
    {
        point=4.30;

    }
    if(marks>=51 && marks<=54)
    {
        point=4.00;

    }
    if(marks>=55 && marks<=59)
    {
        point=3.7;

    }
    if(marks>=60 && marks<=64)
    {
        point=3.30;
    }

    if(marks>=65 && marks<=69)
    {
        point=3.00;

    }
    if(marks>=70 && marks<=74)
    {
        point=2.70;

    }
    if(marks>=75 && marks<=79)
    {
        point=2.30;
    }

    if(marks>=80 && marks<=84)
    {
        point=2.00;
    }

    if(marks>=85 && marks<=89)
    {
        point=1.70;

    }
    if(marks>=90 && marks<=94)
    {
        point=1.30;

    }
    if(marks>=95 && marks<=100)
    {
        point=1.00;
    }

    return point;

}
float spanish_gpa(int marks)
{
    float point;

    if(marks<10)
    {
        point=0.00;
    }
    if(marks>=10 && marks<20)
    {
        point=1.00;

    }
    if(marks>=20 && marks<30)
    {
        point=2.00;

    }
    if(marks>=30 && marks<40)
    {
        point=3.00;

    }
    if(marks>=40 && marks<50)
    {
        point=4.00;

    }
    if(marks>=50 && marks<60)
    {
        point=5.00;

    }
    if(marks>=60 && marks<70)
    {
        point=6.00;
    }
    if(marks>=70 && marks<80)
    {
        point=7.00;
    }
    if(marks>=80 && marks<90)
    {
        point=8.00;
    }
    if(marks>=90 && marks<100)
    {
        point=9.00;
    }

    if(marks==100)
    {
        point=10.00;
    }

    return point;

}

float BUET_gpa(int marks)
{
    float point;


    if(marks<40)
    {
        point=0.00;
    }
    if(marks>=40 && marks<=44)
    {
        point=2.00;
    }
    if(marks>=45 && marks<=49)
    {
        point=2.25;
    }
    if(marks>=50 && marks<=54)
    {
        point=2.50;
    }
    if(marks>=55 && marks<=59)
    {
        point=2.75;
    }
    if(marks>=60 && marks<=64)
    {
        point=3.00;
    }
    if(marks>=65 && marks<=69)
    {
        point=3.25;
    }
    if(marks>=70 && marks<=74)
    {
        point=3.50;
    }
    if(marks>=75 && marks<=79)
    {
        point=3.75;
    }
    if( marks>=80)
    {
        point=4.00;
    }

    return point;
}
float DU_gpa(int marks) // also works with cu ju ru
{
    float point;


    if(marks<40)
    {
        point=0.00;
    }
    if(marks>=40 && marks<=44)
    {
        point=2.00;
    }
    if(marks>=45 && marks<=49)
    {
        point=2.25;
    }
    if(marks>=50 && marks<=54)
    {
        point=2.50;
    }
    if(marks>=55 && marks<=59)
    {
        point=2.75;
    }
    if(marks>=60 && marks<=64)
    {
        point=3.00;
    }
    if(marks>=65 && marks<=69)
    {
        point=3.25;
    }
    if(marks>=70 && marks<=74)
    {
        point=3.50;
    }
    if(marks>=75 && marks<=79)
    {
        point=3.75;
    }
    if( marks>=80)
    {
        point=4.00;
    }

    return point;
}

float BRACU_gpa(int marks)
{
    float point;

    if(marks<60)
    {
        point=0.00;
    }
    if(marks>=60 && marks<=66)
    {
        point=1.00;

    }
    if(marks>=67 && marks<=69)
    {
        point=1.30;

    }
    if(marks>=70 && marks<=72)
    {
        point=1.70;

    }
    if(marks>=73 && marks<=76)
    {
        point=2.0;

    }
    if(marks>=77 && marks<=79)
    {
        point=2.3;

    }
    if(marks>=80 && marks<=82)
    {
        point=2.7;
    }
    if(marks>=83 && marks<=86)
    {
        point=3.0;
    }
    if(marks>=87 && marks<=89)
    {
        point=3.3;
    }
    if(marks>=90 && marks<=92)
    {
        point=3.7;
    }
    if(marks>=93 && marks<=100)
    {
        point=4.0;
    }

    return point;

}

float IUB_gpa(int marks)
{
    float point;

    if(marks<50)
    {
        point=0.00;
    }
    if(marks>=50 && marks<=59)
    {
        point=2.25;

    }
    if(marks>=60 && marks<65)
    {
        point=2.50;

    }
    if(marks>=65 && marks<70)
    {
        point=2.75;

    }
    if(marks>=70 && marks<75)
    {
        point=3.00;

    }
    if(marks>=75 && marks<=79)
    {
        point=3.25;

    }
    if(marks>=80 && marks<=84)
    {
        point=3.50;
    }
    if(marks>=85 && marks<=89)
    {
        point=3.75;

    }
    if(marks>=90 && marks<=100)
    {
        point=4.00;
    }


    return point;

}
float IUT_gpa(int marks)
{
    float point;

    if(marks<40)
    {
        point=0.00;
    }
    if(marks>=40 && marks<45)
    {
        point=2.00;

    }
    if(marks>=45 && marks<50)
    {
        point=2.25;

    }
    if(marks>=50 && marks<55)
    {
        point=2.50;

    }
    if(marks>=55 && marks<60)
    {
        point=2.75;

    }
    if(marks>=60 && marks<65)
    {
        point=3.00;

    }
    if(marks>=65 && marks<70)
    {
        point=3.25;
    }
    if(marks>=70 && marks<75)
    {
        point=3.50;

    }
    if(marks>=75 && marks<80)
    {
        point=3.75;
    }
    if(marks>=80 && marks<101)
    {
        point=4.00;
    }

    return point;

}
float BUPMIST_gpa(int marks)
{
    float point;

    if(marks<40)
    {
        point=0.00;
    }
    if(marks>=40 && marks<45)
    {
        point=2.00;

    }
    if(marks>=45 && marks<50)
    {
        point=2.25;

    }
    if(marks>=50 && marks<55)
    {
        point=2.50;

    }
    if(marks>=55 && marks<60)
    {
        point=2.75;

    }
    if(marks>=60 && marks<65)
    {
        point=3.00;

    }
    if(marks>=65 && marks<70)
    {
        point=3.25;
    }
    if(marks>=70 && marks<75)
    {
        point=3.50;

    }
    if(marks>=75 && marks<80)
    {
        point=3.75;
    }
    if(marks>=80 && marks<101)
    {
        point=4.00;
    }

    return point;

}

float UAP_gpa(int marks)
{
    float point;

    if(marks<40)
    {
        point=0.00;
    }
    if(marks>=40 && marks<45)
    {
        point=2.00;

    }
    if(marks>=45 && marks<50)
    {
        point=2.25;

    }
    if(marks>=50 && marks<55)
    {
        point=2.50;

    }
    if(marks>=55 && marks<60)
    {
        point=2.75;

    }
    if(marks>=60 && marks<65)
    {
        point=3.00;

    }
    if(marks>=65 && marks<70)
    {
        point=3.25;
    }
    if(marks>=70 && marks<75)
    {
        point=3.50;

    }
    if(marks>=75 && marks<80)
    {
        point=3.75;
    }
    if(marks>=80 && marks<101)
    {
        point=4.00;
    }

    return point;

}
float EWU_gpa(int marks)
{
    float point;

    if(marks<60)
    {
        point=0.00;
    }
    if(marks>=60 && marks<67)
    {
        point=1.00;

    }
    if(marks>=67 && marks<70)
    {
        point=1.3;

    }
    if(marks>=70 && marks<73)
    {
        point=1.7;

    }
    if(marks>=73 && marks<77)
    {
        point=2.00;

    }
    if(marks>=77 && marks<80)
    {
        point=2.3;

    }
    if(marks>=80 && marks<83)
    {
        point=2.7;
    }
    if(marks>=83 && marks<87)
    {
        point=3.00;

    }
    if(marks>=87 && marks<90)
    {
        point=3.30;
    }
    if(marks>=90 && marks<93)
    {
        point=3.70;
    }
    if(marks>=93 && marks<101)
    {
        point=4.00;
    }

    return point;

}
float AIUB_gpa(int marks)
{
    float point;

    if(marks<50)
    {
        point=0.0;
    }
    if(marks>=50 && marks<60)
    {
        point=2.25;

    }
    if(marks>=60 && marks<65)
    {
        point=2.50;

    }
    if(marks>=65 && marks<70)
    {
        point=2.75;

    }
    if(marks>=70 && marks<=74)
    {
        point=3.00;

    }
    if(marks>=75 && marks<=79)
    {
        point=3.25;

    }
    if(marks>=80 && marks<=84)
    {
        point=3.50;
    }
    if(marks>=85 && marks<=89)
    {
        point=3.75;

    }
    if(marks>=90 && marks<=100)
    {
        point=4.00;

    }


    return point;

}

void percentage(float marks, int course,char *stn)
{
    float n;
    n=marks/course,
    printf(" \n \t %s your Marks Percentage is %.2f %%  \n",stn,n);
}

struct stu
{
    char name[20];
    float cgpa;
    int course;
};
void Load()
{
    int i;
    int lines = countStudent();
    r = fopen("Filecgpa.txt","r");

    for(i=1; i<=lines; i++)
    {
        fscanf(r,"%d %s %s",&s[i].id,&s[i].username,&s[i].password);

    }
    fclose(r);
}
void masterLoad()
{
    int i, lines = countStudent();
    r = fopen("Filecgpa.txt","r");

    for(i=1; i<=lines; i++)
    {
        fscanf(r,"%d %s %s",&s[i].id,&s[i].username,&s[i].password);
        printf("\n%d %s %s",s[i].id,s[i].username,s[i].password);
    }
    fclose(r);
}

void Reload()
{
    int i=1;
    int total = countStudent();
    w = fopen("temp.txt","w");

    for(i=1; i<=total; i++)
    {
        fprintf(w,"%d %s %s\n",s[i].id,s[i].username,s[i].password);
    }

    fclose(w);

    remove("Filecgpa.txt");
    rename("temp.txt","Filecgpa.txt");
}
void rmvu()
{
    int i=1;
    int total = countStudent();
    w = fopen("temp.txt","w");
    int rem;
    printf("\t\tEnter The User ID That You Want To remove:\t");
    scanf("%d",&rem);


    for(i=1; i<=total; i++)
    {   if(i!=rem)
    {


        fprintf(w,"%d %s %s\n",s[i].id,s[i].username,s[i].password);
    }
    }
    printf("\n\t\tUser Removed Successfully!!!");

    fclose(w);

    remove("Filecgpa.txt");
    rename("temp.txt","Filecgpa.txt");
}

void Registration()
{
    w = fopen("Filecgpa.txt","a");

    user = countStudent()+1;

    printf("\tEnter Username: ");
    scanf("%s",s[user].username);

    printf("\tEnter Password: ");
    scanf("%s",s[user].password);


    s[user].id = user;
    ind=user;

    fprintf(w,"%d %s %s\n",user,s[user].username,s[user].password);
    printf("\n\t%s, Registration Successful! Your ID: %d\n",s[user].username,user);

    fclose(w);

    db=fopen(s[ind].username,"w");

    fprintf(db,"\t\t\tID\t\tName\t\tSem\t\tCourse\t\tGPA\t\tMethod\n");
    fclose(db);
    Load();
}

void Login()
{
    int i, total = countStudent();

    printf("\tEnter Username: ");
    scanf("%s",name);

    printf("\tEnter Password: ");
    scanf("%s",pass);

    Load();

    for(i=1; i<=total; i++)
    {
        if(strcmp(s[i].username, name)==0)
        {
            current_id = s[i].id;

            break;
        }
    }

    if(strcmp(s[current_id].username,name)==0)
    {
        if(strcmp(s[current_id].password,pass)==0)
        {
            system("cls");
            printf("\n\t\tWelcome %s, To our CGPA Calculator\n\n",name);
            ind=s[i].id;
        }
        else
        {
            system("cls");
            printf("\n\tWrong Password! Try Again!\n\n");
            Login();
        }
    }
    else
    {
        system("cls");
        printf("\tYour user name does not exist in our database\n Register Student!\n");
        Registration();
    }

}

void masterLogin()
{

    printf("\tEnter Admin Username: ");
    scanf("%s",name);

    printf("\tEnter Admin Password: ");
    scanf("%s",pass);

    Load();


    if(strcmp(s[1].username,name)==0)
    {
        if(strcmp(s[1].password,pass)==0)
        {
            system("cls");
            printf("\n\tWelcome Admin To your CGPA Calculator\n");



        }
        else
        {

            printf("\n\tWrong Administrative Password\n\n");
            masterLogin();
        }
    }
//rafi bug fix   show();

}

void Update()
{
    Login();

    printf("\tEnter New Password: ");
    scanf("%s",pass);

    strcpy(s[current_id].password,pass);

    Reload();

    printf("\n\tPassword Updated!");
}
int countStudent()
{
    char ch;
    int lines = 0;
    r = fopen("Filecgpa.txt","r");
    while(!feof(r))
    {
        ch = fgetc(r);
        if(ch == '\n')
        {
            ++lines;
        }
    }
    fclose(r);
    return lines;
}

void show()
{
    Load();

    int i;
    int total = countStudent();
    printf("\n\n\tID\tName\tPassword\n");
    for(i=1; i<=total; i++)
    {
        printf("\n\t%d\t%s\t%s\n",s[i].id,s[i].username,s[i].password);
    }
}
void data()
{



    db=fopen(s[ind].username,"a");


    fprintf(db,"\t\t\t%d\t\t%s\t\t%d\t\t%d\t\t%.2f\t\t%s\n",ind,s[ind].username,semi,course,s[ind].cg,s[ind].grading);
    fclose(db);

}
void fshow()
{
    char c;
    db=fopen(s[ind].username,"r");
    c = fgetc(db);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(db);
    }
    fclose(db);

}

void reenter(struct stu st);
void versity(struct stu st,int marks[],int check,int credit[]);
int main()
{
    struct stu st;
    system("color fc");

    printf("\n\tHey There!, As you know our users need privacy .You must log in first to use this CGPA Calculator.\n");
    printf("\n\tIf you are new to our Software , please go through our registration wizard.\n");

    int c;
    int rcheck=-1;
    while(1)
    {
        printf("\n\t>> Press 1 to Access Registration Wizard \n\t>> Press 2 to Login\n\t>> Press 0 to Access Admin Panel Wizard\n\t");
        scanf("%d",&c);

        switch(c)
        {
        case 0:
            system("cls");
            printf("\n\t>>Admin Panel Wizard\n");
            masterLogin();
            show();
            printf("\t\tEnter 1 If You Want To Remove Someone.\tElse Press 0.  Ans:\t");
            scanf("%d",&rcheck);
            if(rcheck==1)
            {
                rmvu();
            }
            printf("\n\tThank You Admin .For Security reason even you can't View our user's academic data\n");
            break;

        case 1:
            system("cls");
            printf("\n\t>>Registration Wizard\n");
            Registration();
            break;
        case 2:
            system("cls");
            printf("\n\t>>Login Wizard\n\n");
            Login();
            goto dash;
            break;

        }
    }
dash:
    strcpy(st.name,s[ind].username);
    printf("\t\tWhich Semester are you in now ? Ans: \t");
    scanf("%d",&semi);

    printf("\t\tHow many courses do you have in this Semester? Ans: \t");
    scanf("%d",&course);
    st.course=course;
    int marks[course];
    int credit[course];
    int check =-100;
    printf("\t\tEnter 1 If you are in open Credit System.\n\t\tElse Enter 0.\n\t\tAns: \t");
    scanf("%d",&check);
    int i;
    for(i=0; i<course; i++)
    {
        printf("\t\tEnter your marks for course %d. Marks:\t",i+1);
        scanf("%d",&marks[i]);
        if(check==1)
        {
            printf("\t\tEnter Credit for course %d. Credit:\t",i+1);
            scanf("%d",&credit[i]);
        }

    }
    system("cls");
    printf("\t Time for your results ");
    puts(s[ind].username);
    for(i=0; i<course; i++)
    {
        printf("\t  Your marks for course %d is %d\n",i+1,marks[i]);
    }
    float total=0.0,pts=0.0,tmarks=0.0;
    float totalcredit=0.0;
    int t,choice;
    while(1)
    {

        printf("\n\t\t >> Press 0 For NSU CGPA System (North American 4 Scale)\n\t\t >> Press 1 For 5 Scale CGPA\n\t\t >> Press 2 For German CGPA System\n\t\t >> Press 3 For American CGPA System\n\t\t >> Press 4 For Spanish And ECTS CGPA System\n\t\t >> Press 5 To  Re-enter your marks\n\t\t >> Press 6 To  Check previous records\n\t\t >> Press 7 To  Update your current password\n\t\t >> Press 8 For Bangladeshi Universities\n\t\t >> Press 9 To  exit\n\t N:B: CGPA Converter is built in,to convert CGPA Method just press desired menu \n\t");
       printf("\t\tYour Choice:\t");
        scanf("%d",&choice);

        switch(choice)
        {

        case 0 :
            system("color fc");
            system("cls");
            total=0;
            tmarks=0;
            totalcredit=0;
            system("color fc");


            printf("\t\t\t\t>>>NSU CGPA System<<<\t\t\n\n");
            if(check==1)
            {


                for(i=0; i<course; i++)
                {
                    t= marks[i];
                    tmarks=tmarks+t;
                    pts= four_gpa(t)*credit[i];
                    printf("\tYour point for course %d is %.2f With Credit %d\n",i+1,four_gpa(t),credit[i]);
                    totalcredit=totalcredit+credit[i];
                    total=total+pts;

                }

//rafibugfix   printf("\n tmarks %d",tmarks);
                st.cgpa=total/totalcredit;
                s[ind].cg=st.cgpa;
                strcpy(s[ind].grading, "NSU Standard");
                if(st.cgpa<2.00)
                {
                    system("color cf");
                    printf("\a\n\t %s As you can see The console turned red :( It means You are in Probation Period Please study hard\n",st.name);
                }

                if(st.cgpa>=3.00)
                {
                    system("color af");
                    printf("\n\t %s As you can see The console turned green :) It means Your marks are good. Please carry this legacy\n",st.name);
                }
                printf(" \n \t %s your CGPA is %.2f  \n",st.name,st.cgpa);
                percentage(tmarks,course,st.name);
            }
            else
            {
                for(i=0; i<course; i++)
                {
                    t= marks[i];
                    tmarks=tmarks+t;
                    pts= four_gpa(t);
                    printf("\tYour point for course %d is %.2f\n",i+1,pts);
                    total=total+pts;

                }

//rafibugfix   printf("\n tmarks %d",tmarks);
                st.cgpa=total/course;
                s[ind].cg=st.cgpa;
                strcpy(s[ind].grading, "NSU Standard");
                if(st.cgpa<2.00)
                {
                    system("color cf");
                    printf("\a\n\t %s As you can see The console turned red :( It means You are in Probation Period Please study hard\n",st.name);
                }

                if(st.cgpa>=3.00)
                {
                    system("color af");
                    printf("\n\t %s As you can see The console turned green :) It means Your marks are good. Please carry this legacy\n",st.name);
                }
                printf(" \n \t %s your CGPA is %.2f  \n",st.name,st.cgpa);
                percentage(tmarks,course,st.name);
            }

            data();

            break;
        case 1 :
            system("color fc");
            system("cls");
            total=0;
            tmarks=0;
            system("color fc");



            printf("\t\t\t\t>>>Bangladesh National CGPA System<<<\t\t\n");
            for(i=0; i<course; i++)
            {
                t= marks[i];
                tmarks=tmarks+t;
                pts= five_gpa(t);
                printf("\tYour point for course %d is %.2f\n",i+1,pts);
                total=total+pts;

            }


            st.cgpa=total/course;

            s[ind].cg=st.cgpa;


            strcpy(s[ind].grading, "Bangladeshi Standard");
            if(st.cgpa<2.00)
            {
                system("color cf");
                printf("\n\t %s As you can see The console turned red :( It means Your marks are really poor Period Please study hard\n",st.name);
            }

            if(st.cgpa>=4.00)
            {
                system("color af");
                printf("\n\t %s As you can see The console turned green :) It means Your marks are good. Please carry this legacy\n",st.name);
            }
            printf(" \n \t %s your CGPA is %.2f  \n",st.name,st.cgpa);
            percentage(tmarks,course,st.name);
            data();
            break;
        case 2 :
            system("color fc");
            system("cls");
            total=0;
            tmarks=0;



            printf("\t\t\t\t>>>German CGPA System<<<\t\t\n");
            for(i=0; i<course; i++)
            {
                t= marks[i];
                tmarks=tmarks+t;
                pts= german_gpa(t);
                if(check==1)
                {
                printf("\tYour point for course %d is %.2f with Credit %d\n",i+1,pts,credit[i]);

                }
                else
                {
                printf("\tYour point for course %d is %.2f\n",i+1,pts);
                }
                total=total+pts;

            }


            st.cgpa=total/course;
            s[ind].cg=st.cgpa;

            strcpy(s[ind].grading, "German Standard");


            if(st.cgpa>4.00)
            {
                system("color cf");
                printf("\n\t %s As you can see The console turned red :( It means Your marks are really poor Period Please study hard\n",st.name);
            }

            if(st.cgpa<=2.00)
            {
                system("color af");
                printf("\n\t %s As you can see The console turned green :) It means Your marks are good. Please carry this legacy\n",st.name);
            }
            printf(" \n \t %s your CGPA is %.2f  \n",st.name,st.cgpa);
            percentage(tmarks,course,st.name);
            printf(" \n \t %s Please don't worry In this system Lower Is Better   \n",st.name );
            data();

            break;

        case 3 :
            system("color fc");
            system("cls");
            total=0;
            tmarks=0;
            system("color fc");


            printf("\t\t\t\t>>>American CGPA System<<<\t\t\n");
            for(i=0; i<course; i++)
            {
                t= marks[i];
                tmarks=tmarks+t;
                pts= american_gpa(t);

                if(check==1)
                {
                printf("\tYour point for course %d is %.2f with Credit %d\n",i+1,pts,credit[i]);

                }
                else
                {
                printf("\tYour point for course %d is %.2f\n",i+1,pts);
                }
                total=total+pts;

            }

//rafibugfix   printf("\n tmarks %d",tmarks);
            st.cgpa=total/course;
            s[ind].cg=st.cgpa;

            strcpy(s[ind].grading, "American Standard");
            if(st.cgpa<2.00)
            {
                system("color cf");
                printf("\n\t %s As you can see The console turned red :( It means Your marks are poor. Please study hard\n",st.name);
            }
            if(st.cgpa>3.00)
            {
                system("color af");
                printf("\n\t %s As you can see The console turned green :( It means Your marks are good. Please carry this legacy\n",st.name);
            }
            printf(" \n \t %s your CGPA is %.2f  \n",st.name,st.cgpa);
            percentage(tmarks,course,st.name);
            data();

            break;
        case 4 :
            system("color fc");
            system("cls");
            total=0;
            tmarks=0;
            system("color fc");


            printf("\t\t\t\t>>>Spanish And ECTS CGPA System<<<\t\t\n");
            for(i=0; i<course; i++)
            {
                t= marks[i];
                tmarks=tmarks+t;
                pts= spanish_gpa(t);

                if(check==1)
                {
                printf("\tYour point for course %d is %.2f with Credit %d\n",i+1,pts,credit[i]);

                }
                else
                {
                printf("\tYour point for course %d is %.2f\n",i+1,pts);
                }
                total=total+pts;

            }

//rafibugfix   printf("\n tmarks %d",tmarks);
            st.cgpa=total/course;
            s[ind].cg=st.cgpa;

            strcpy(s[ind].grading, "Spanish And ECTS");
            if(st.cgpa<5.00)
            {
                system("color cf");
                printf("\n\t %s As you can see The console turned red :( It means Your marks are poor. Please study hard\n",st.name);
            }
            if(st.cgpa>8.00)
            {
                system("color af");
                printf("\n\t %s As you can see The console turned green :( It means Your marks are good. Please carry this legacy\n",st.name);
            }
            printf(" \n \t %s your CGPA is %.2f This is a 10 Point CGPA System \n",st.name,st.cgpa);
            percentage(tmarks,course,st.name);
            data();

            break;
        case 5 :
            reenter(st);
            return 0;
            break;
        case 6 :

    system("color fc");
            system("cls");

            printf("\n\t\t\t%s here are your previous record>>>>>>\n \n\n",s[ind].username);

            fshow();
            break;
        case 7 :

            system("color fc");
            system("cls");
            Update();
            Load();
            break;
        case 8 :
            versity(st,marks,check,credit);
            break;
        case 9 :
            system("cls");
            printf("\n\t>>>Thank you for using our system<<<\n");

            return 0;

        }

    }
    return 0;
}
void reenter(struct stu st)
{
    system("color fc");
    system("cls");
    int marks[course];
    int credit[course];
    int check =-100;

    printf("\t\tWhich Semester are you in now ? Ans: \t");
    scanf("%d",&semi);


    printf("\t\tHow many courses do you have in this Semester? Ans: \t");
    scanf("%d",&course);
    printf("\t\tEnter 1 If you are in open Credit System.\n\t\tElse Enter 0.\n\t\tAns: \t");
    scanf("%d",&check);
    int i;
    for(i=0; i<course; i++)
    {
        printf("\tEnter your marks for course %d. Marks:\t",i+1);
        scanf("%d",&marks[i]);
        if(check==1)
        {
            printf("\tEnter Credit for course %d. Credit:\t",i+1);
            scanf("%d",&credit[i]);
        }

    }
    system("cls");
    printf("\t Time for your results ");
    puts(s[ind].username);
    for(i=0; i<course; i++)
    {
        printf("\t  Your marks for course %d is %d\n",i+1,marks[i]);
    }
    float total=0.0,pts=0.0,tmarks=0.0;
    float totalcredit=0.0;
    int t,choice;
    while(1)
    {

        printf("\n\t\t >> Press 0 For NSU CGPA System (North American 4 Scale)\n\t\t >> Press 1 For 5 Scale CGPA\n\t\t >> Press 2 For German CGPA System\n\t\t >> Press 3 For American CGPA System\n\t\t >> Press 4 For Spanish And ECTS CGPA System\n\t\t >> Press 5 To  Re-enter your marks\n\t\t >> Press 6 To  Check previous records\n\t\t >> Press 7 To  Update your current password\n\t\t >> Press 8 For Other Universities\n\t\t >> Press 9 To  exit\n\t N:B: CGPA Converter is built in,to convert CGPA Method just press desired menu \n\t");
        scanf("%d",&choice);

        switch(choice)
        {

        case 0 :
            system("color fc");
            system("cls");
            total=0;
            tmarks=0;
            system("color fc");


            printf("\t\t\t\t>>>NSU CGPA System<<<\t\t\n");
            if(check==1)
            {


                for(i=0; i<course; i++)
                {
                    t= marks[i];
                    tmarks=tmarks+t;
                    pts= four_gpa(t)*credit[i];
                    printf("\tYour point for course %d is %.2f With Credit %d\n",i+1,four_gpa(t),credit[i]);
                    totalcredit=totalcredit+credit[i];
                    total=total+pts;

                }

//rafibugfix   printf("\n tmarks %d",tmarks);
                st.cgpa=total/totalcredit;
                s[ind].cg=st.cgpa;
                strcpy(s[ind].grading, "NSU Standard");
                if(st.cgpa<2.00)
                {
                    system("color cf");
                    printf("\a\n\t %s As you can see The console turned red :( It means You are in Probation Period Please study hard\n",st.name);
                }

                if(st.cgpa>=3.00)
                {
                    system("color af");
                    printf("\n\t %s As you can see The console turned green :) It means Your marks are good. Please carry this legacy\n",st.name);
                }
                printf(" \n \t %s your CGPA is %.2f  \n",st.name,st.cgpa);
                percentage(tmarks,course,st.name);
            }
            else
            {
                for(i=0; i<course; i++)
                {
                    t= marks[i];
                    tmarks=tmarks+t;
                    pts= four_gpa(t);
                    printf("\tYour point for course %d is %.2f\n",i+1,pts);
                    total=total+pts;

                }

//rafibugfix   printf("\n tmarks %d",tmarks);
                st.cgpa=total/course;
                s[ind].cg=st.cgpa;
                strcpy(s[ind].grading, "NSU Standard");
                if(st.cgpa<2.00)
                {
                    system("color cf");
                    printf("\a\n\t %s As you can see The console turned red :( It means You are in Probation Period Please study hard\n",st.name);
                }

                if(st.cgpa>=3.00)
                {
                    system("color af");
                    printf("\n\t %s As you can see The console turned green :) It means Your marks are good. Please carry this legacy\n",st.name);
                }
                printf(" \n \t %s your CGPA is %.2f  \n",st.name,st.cgpa);
                percentage(tmarks,course,st.name);
            }

            data();

            break;
        case 1 :
            system("color fc");
            system("cls");
            total=0;
            tmarks=0;
            system("color fc");



            printf("\t\t\t\t>>>Bangladesh National CGPA System<<<\t\t\n");
            for(i=0; i<course; i++)
            {
                t= marks[i];
                tmarks=tmarks+t;
                pts= five_gpa(t);
                printf("\tYour point for course %d is %.2f\n",i+1,pts);
                total=total+pts;

            }


            st.cgpa=total/course;

            s[ind].cg=st.cgpa;


            strcpy(s[ind].grading, "Bangladeshi Standard");
            if(st.cgpa<2.00)
            {
                system("color cf");
                printf("\n\t %s As you can see The console turned red :( It means Your marks are really poor Period Please study hard\n",st.name);
            }

            if(st.cgpa>=4.00)
            {
                system("color af");
                printf("\n\t %s As you can see The console turned green :) It means Your marks are good. Please carry this legacy\n",st.name);
            }
            printf(" \n \t %s your CGPA is %.2f  \n",st.name,st.cgpa);
            percentage(tmarks,course,st.name);
            data();
            break;
        case 2 :
            system("color fc");
            system("cls");
            total=0;
            tmarks=0;



            printf("\t\t\t\t>>>German CGPA System<<<\t\t\n");
            for(i=0; i<course; i++)
            {
                t= marks[i];
                tmarks=tmarks+t;
                pts= german_gpa(t);
                printf("\tYour point for course %d is %.2f\n",i+1,pts);
                total=total+pts;

            }


            st.cgpa=total/course;
            s[ind].cg=st.cgpa;

            strcpy(s[ind].grading, "German Standard");


            if(st.cgpa>4.00)
            {
                system("color cf");
                printf("\n\t %s As you can see The console turned red :( It means Your marks are really poor Period Please study hard\n",st.name);
            }

            if(st.cgpa<=2.00)
            {
                system("color af");
                printf("\n\t %s As you can see The console turned green :) It means Your marks are good. Please carry this legacy\n",st.name);
            }
            printf(" \n \t %s your CGPA is %.2f  \n",st.name,st.cgpa);
            percentage(tmarks,course,st.name);
            printf(" \n \t %s Please don't worry In this system Lower Is Better   \n",st.name );
            data();

            break;

        case 3 :
            system("color fc");
            system("cls");
            total=0;
            tmarks=0;
            system("color fc");


            printf("\t\t\t\t>>>American CGPA System<<<\t\t\n");
            for(i=0; i<course; i++)
            {
                t= marks[i];
                tmarks=tmarks+t;
                pts= american_gpa(t);
                printf("\tYour point for course %d is %.2f\n",i+1,pts);
                total=total+pts;

            }

//rafibugfix   printf("\n tmarks %d",tmarks);
            st.cgpa=total/course;
            s[ind].cg=st.cgpa;

            strcpy(s[ind].grading, "American Standard");
            if(st.cgpa<2.00)
            {
                system("color cf");
                printf("\n\t %s As you can see The console turned red :( It means Your marks are poor. Please study hard\n",st.name);
            }
            if(st.cgpa>3.00)
            {
                system("color af");
                printf("\n\t %s As you can see The console turned green :( It means Your marks are good. Please carry this legacy\n",st.name);
            }
            printf(" \n \t %s your CGPA is %.2f  \n",st.name,st.cgpa);
            percentage(tmarks,course,st.name);
            data();

            break;
        case 4 :
            system("color fc");
            system("cls");
            total=0;
            tmarks=0;
            system("color fc");


            printf("\t\t\t\t>>>Spanish And ECTS CGPA System<<<\t\t\n");
            for(i=0; i<course; i++)
            {
                t= marks[i];
                tmarks=tmarks+t;
                pts= spanish_gpa(t);
                printf("\tYour point for course %d is %.2f\n",i+1,pts);
                total=total+pts;

            }

//rafibugfix   printf("\n tmarks %d",tmarks);
            st.cgpa=total/course;
            s[ind].cg=st.cgpa;

            strcpy(s[ind].grading, "Spanish And ECTS");
            if(st.cgpa<5.00)
            {
                system("color cf");
                printf("\n\t %s As you can see The console turned red :( It means Your marks are poor. Please study hard\n",st.name);
            }
            if(st.cgpa>8.00)
            {
                system("color af");
                printf("\n\t %s As you can see The console turned green :( It means Your marks are good. Please carry this legacy\n",st.name);
            }
            printf(" \n \t %s your CGPA is %.2f This is a 10 Point CGPA System \n",st.name,st.cgpa);
            percentage(tmarks,course,st.name);
            data();

            break;
        case 5 :
            reenter(st);
            return 0;
            break;
        case 6 :

            system("cls");

            printf("\n\t\t\t%s here are your previous record>>>>>>\n \n\n",s[ind].username);

            fshow();
            break;
        case 7 :
            Update();
            Load();
            break;
        case 8 :
            versity(st,marks,check,credit);
            break;
        case 9 :
            system("cls");
            printf("\n\t>>>Thank you for using our system<<<\n");

            return 0;

        }

    }
}
void versity(struct stu st,int marks[],int check,int credit[])
{
    int choice,i;
    float total=0.0,pts=0.0,tmarks=0.0;
    system("cls");
    system("color fc");
    printf("\t\t>>>Other Universities Of Bangladesh<<<\t\t\n");
    int t;
    while(1)
    {
        printf("\n\t\t >> Press 0 For BUET//KUET//RUET//CUET\n\t\t >> Press 1 For DU//CU//JU//RU//KU \n\t\t >> Press 2 For BRAC University\n\t\t >> Press 3 For AIUB \n\t\t >> Press 4 For IUT\n\t\t >> Press 5 For IUB\n\t\t >> Press 6 For SUST \n\t\t >> Press 7 For AUST\n\t\t >> Press 8 For BUP//MIST\n\t\t >> Press 9 For UAP\n\t\t >> Press 10 For East West University\n\t\t >> Press 11 to exit\n\t N:B: CGPA Converter is built in,to convert CGPA Method just press desired menu \n\t\t");
        printf("\n\t\t\t Credit System Works Only With OPEN CREDIT Universities\n\t");
        printf("\tYour Choice:\t\t ");
        scanf("%d",&choice);
        switch(choice)
        {

        case 0 :
            system("color fc");
            system("cls");
            total=0;
            tmarks=0;

            printf("\t\t\t\t>>>BUET/KUET/RUET/CUET CGPA System<<<\t\t\n");
            for(i=0; i<course; i++)
            {
                t= marks[i];
                tmarks=tmarks+t;
                pts= BUET_gpa(t);
                printf("\tYour point for course %d is %.2f\n",i+1,pts);
                total=total+pts;

            }

//rafibugfix   printf("\n tmarks %d",tmarks);
            st.cgpa=total/course;
            s[ind].cg=st.cgpa;
            strcpy(s[ind].grading, "BUET/KUET/RUET/CUET");
            if(st.cgpa<2.00)
            {
                system("color cf");
                printf("\a\n\t %s As you can see The console turned red :( It means You are in Backlog Please study hard\n",st.name);
            }

            if(st.cgpa>=3.00)
            {
                system("color af");
                printf("\n\t %s As you can see The console turned green :) It means Your marks are good. Please carry this legacy\n",st.name);
            }
            printf(" \n \t %s your CGPA is %.2f  \n",st.name,st.cgpa);
            percentage(tmarks,course,st.name);
            data();

            break;
        case 1 :
            system("color fc");
            system("cls");
            total=0;
            tmarks=0;

            printf("\t\t>>>DU//CU//RU//KU CGPA System<<<\t\t\n");
            for(i=0; i<course; i++)
            {
                t= marks[i];
                tmarks=tmarks+t;
                pts= DU_gpa(t);
                printf("\tYour point for course %d is %.2f\n",i+1,pts);
                total=total+pts;

            }

//rafibugfix   printf("\n tmarks %d",tmarks);
            st.cgpa=total/course;
            s[ind].cg=st.cgpa;
            strcpy(s[ind].grading, "DU/CU/KU/RU");
            if(st.cgpa<2.00)
            {
                system("color cf");
                printf("\a\n\t %s As you can see The console turned red :( It means You are Not studying hard enough and you are in clearance\backlog Period Please study hard\n",st.name);
            }

            if(st.cgpa>=3.00)
            {
                system("color af");
                printf("\n\t %s As you can see The console turned green :) It means Your marks are good. Please carry this legacy\n",st.name);
            }
            printf(" \n \t %s your CGPA is %.2f  \n",st.name,st.cgpa);
            percentage(tmarks,course,st.name);
            data();
            break;
        case 2 :
            system("color fc");
            system("cls");
            total=0;
            tmarks=0;

            printf("\t\t>>>BRAC University CGPA System<<<\t\t\n");
            for(i=0; i<course; i++)
            {
                t= marks[i];
                tmarks=tmarks+t;
                pts= BRACU_gpa(t);

                if(check==1)
                {
                printf("\tYour point for course %d is %.2f with Credit %d\n",i+1,pts,credit[i]);

                }
                else
                {
                printf("\tYour point for course %d is %.2f\n",i+1,pts);
                }
                total=total+pts;

            }

//rafibugfix   printf("\n tmarks %d",tmarks);
            st.cgpa=total/course;
            s[ind].cg=st.cgpa;
            strcpy(s[ind].grading, "BRAC Standard");
            if(st.cgpa<2.00)
            {
                system("color cf");
                printf("\a\n\t %s As you can see The console turned red :( It means You are Not studying hard enough and you are in probation Period Please study hard\n",st.name);
            }

            if(st.cgpa>=3.00)
            {
                system("color af");
                printf("\n\t %s As you can see The console turned green :) It means Your marks are good. Please carry this legacy\n",st.name);
            }
            printf(" \n \t %s your CGPA is %.2f  \n",st.name,st.cgpa);
            percentage(tmarks,course,st.name);
            data();

            break;

        case 3 :
            system("color fc");
            system("cls");
            total=0;
            tmarks=0;


            printf("\t\t>>>AIUB System<<<\t\t\n");
            for(i=0; i<course; i++)
            {
                t= marks[i];
                tmarks=tmarks+t;
                pts= AIUB_gpa(t);// aiub uses same gpa system as america

                if(check==1)
                {
                printf("\tYour point for course %d is %.2f with Credit %d\n",i+1,pts,credit[i]);

                }
                else
                {
                printf("\tYour point for course %d is %.2f\n",i+1,pts);
                }
                total=total+pts;

            }

//rafibugfix   printf("\n tmarks %d",tmarks);
            st.cgpa=total/course;
            s[ind].cg=st.cgpa;

            strcpy(s[ind].grading, " AIUB Standard");
            if(st.cgpa<2.50)
            {
                system("color cf");
                printf("\n\t %s As you can see The console turned red :( It means Your marks are poor You Are In Probation Period. Please study hard\n",st.name);
            }
            if(st.cgpa>3.00)
            {
                system("color af");
                printf("\n\t %s As you can see The console turned green :( It means Your marks are good. Please carry this legacy\n",st.name);
            }
            printf(" \n \t %s your CGPA is %.2f  \n",st.name,st.cgpa);
            percentage(tmarks,course,st.name);
            data();

            break;
        case 4 :
            system("color fc");
            system("cls");
            total=0;
            tmarks=0;

            printf("\t\t\t>>>Islamic University Of Technology CGPA System<<<\t\t\n");
            for(i=0; i<course; i++)
            {
                t= marks[i];
                tmarks=tmarks+t;
                pts= IUT_gpa(t);
                printf("\t\tYour point for course %d is %.2f\n",i+1,pts);
                total=total+pts;

            }

//rafibugfix   printf("\n tmarks %d",tmarks);
            st.cgpa=total/course;
            s[ind].cg=st.cgpa;
            strcpy(s[ind].grading, "IUT Standard");
            if(st.cgpa<2.00)
            {
                system("color cf");
                printf("\a\n\t %s As you can see The console turned red :( It means You are Not studying hard enough Period Please study hard\n",st.name);
            }

            if(st.cgpa>=3.00)
            {
                system("color af");
                printf("\n\t %s As you can see The console turned green :) It means Your marks are good. Please carry this legacy\n",st.name);
            }
            printf(" \n \t %s your CGPA is %.2f  \n",st.name,st.cgpa);
            percentage(tmarks,course,st.name);
            data();

            break;
        case 5 :
            system("color fc");
            system("cls");
            total=0;
            tmarks=0;

            printf("\t\t\t>>>IUB CGPA System<<<\t\t\n");
            for(i=0; i<course; i++)
            {
                t= marks[i];
                tmarks=tmarks+t;
                pts= IUB_gpa(t);

                if(check==1)
                {
                printf("\tYour point for course %d is %.2f with Credit %d\n",i+1,pts,credit[i]);

                }
                else
                {
                printf("\tYour point for course %d is %.2f\n",i+1,pts);
                }
                total=total+pts;

            }

//rafibugfix   printf("\n tmarks %d",tmarks);

            st.cgpa=total/course;
            s[ind].cg=st.cgpa;
            strcpy(s[ind].grading, "IUB Standard");
            if(st.cgpa<2.00)
            {
                system("color cf");
                printf("\a\n\t %s As you can see The console turned red :( It means You are in Probation Period Please study hard\n",st.name);
            }

            if(st.cgpa>=3.00)
            {
                system("color af");
                printf("\n\t %s As you can see The console turned green :) It means Your marks are good. Please carry this legacy\n",st.name);
            }
            printf(" \n \t %s your CGPA is %.2f  \n",st.name,st.cgpa);
            percentage(tmarks,course,st.name);
            data();



            break;
        case 6 :

            system("color fc");
            system("cls");
            total=0;
            tmarks=0;

            printf("\t\t\t>>>SUST CGPA System<<<\t\t\n");
            for(i=0; i<course; i++)
            {
                t= marks[i];
                tmarks=tmarks+t;
                pts= BUET_gpa(t); // sust is simillar to buet
                printf("\tYour point for course %d is %.2f\n",i+1,pts);
                total=total+pts;

            }

//rafibugfix   printf("\n tmarks %d",tmarks);

            st.cgpa=total/course;
            s[ind].cg=st.cgpa;
            strcpy(s[ind].grading, "SUST Standard");
            if(st.cgpa<2.00)
            {
                system("color cf");
                printf("\a\n\t %s As you can see The console turned red :( It means You are in Probation Period Please study hard\n",st.name);
            }

            if(st.cgpa>=3.00)
            {
                system("color af");
                printf("\n\t %s As you can see The console turned green :) It means Your marks are good. Please carry this legacy\n",st.name);
            }
            printf(" \n \t %s your CGPA is %.2f  \n",st.name,st.cgpa);
            percentage(tmarks,course,st.name);
            data();



            break;
        case 7 :
            system("color fc");
            system("cls");
            total=0;
            tmarks=0;
            printf("\t\t\t>>>AUST CGPA System<<<\t\t\n");
            for(i=0; i<course; i++)
            {
                t= marks[i];
                tmarks=tmarks+t;
                pts= BUET_gpa(t);
                printf("\tYour point for course %d is %.2f\n",i+1,pts);
                total=total+pts;

            }

//rafibugfix   printf("\n tmarks %d",tmarks);

            st.cgpa=total/course;
            s[ind].cg=st.cgpa;
            strcpy(s[ind].grading, "AUST Standard");
            if(st.cgpa<2.00)
            {
                system("color cf");
                printf("\a\n\t %s As you can see The console turned red :( It means You are in Clearance Period Please study hard\n",st.name);
            }

            if(st.cgpa>=3.00)
            {
                system("color af");
                printf("\n\t %s As you can see The console turned green :) It means Your marks are good. Please carry this legacy\n",st.name);
            }
            printf(" \n \t %s your CGPA is %.2f  \n",st.name,st.cgpa);
            percentage(tmarks,course,st.name);
            data();


            break;
        case 8 :
            system("color fc");
            system("cls");
            total=0;
            tmarks=0;
            printf("\t\t\t>>>BUP And MIST CGPA System<<<\t\t\n");
            for(i=0; i<course; i++)
            {
                t= marks[i];
                tmarks=tmarks+t;
                pts= BUPMIST_gpa(t);
                printf("\tYour point for course %d is %.2f\n",i+1,pts);
                total=total+pts;

            }

//rafibugfix   printf("\n tmarks %d",tmarks);

            st.cgpa=total/course;
            s[ind].cg=st.cgpa;
            strcpy(s[ind].grading, "BUP/MIST Standard");
            if(st.cgpa<2.00)
            {
                system("color cf");
                printf("\a\n\t %s As you can see The console turned red :( It means You are in Clearance Period Please study hard\n",st.name);
            }

            if(st.cgpa>=3.00)
            {
                system("color af");
                printf("\n\t %s As you can see The console turned green :) It means Your marks are good. Please carry this legacy\n",st.name);
            }
            printf(" \n \t %s your CGPA is %.2f  \n",st.name,st.cgpa);
            percentage(tmarks,course,st.name);
            data();



            break;
        case 9 :
            system("color fc");
            system("cls");
            total=0;
            tmarks=0;
            printf("\t\t\t>>> University Of Asia Pacific CGPA System <<<\t\t\n");
            for(i=0; i<course; i++)
            {
                t= marks[i];
                tmarks=tmarks+t;
                pts= UAP_gpa(t);
                printf("\tYour point for course %d is %.2f\n",i+1,pts);
                total=total+pts;

            }

//rafibugfix   printf("\n tmarks %d",tmarks);

            st.cgpa=total/course;
            s[ind].cg=st.cgpa;
            strcpy(s[ind].grading, "UAP Standard");
            if(st.cgpa<2.50)
            {
                system("color cf");
                printf("\a\n\t %s As you can see The console turned red :( It means You are in Probationary Period Please study hard\n",st.name);
            }

            if(st.cgpa>=3.00)
            {
                system("color af");
                printf("\n\t %s As you can see The console turned green :) It means Your marks are good. Please carry this legacy\n",st.name);
            }
            printf(" \n \t %s your CGPA is %.2f  \n",st.name,st.cgpa);
            percentage(tmarks,course,st.name);
            data();



            break;
        case 10 :
            system("color fc");
            system("cls");
            total=0;
            tmarks=0;
            printf("\t\t\t>>> East West University CGPA System <<<\t\t\n");
            for(i=0; i<course; i++)
            {
                t= marks[i];
                tmarks=tmarks+t;
                pts= EWU_gpa(t);
                  if(check==1)
                {
                printf("\tYour point for course %d is %.2f with Credit %d\n",i+1,pts,credit[i]);

                }
                else
                {
                printf("\tYour point for course %d is %.2f\n",i+1,pts);
                }
                total=total+pts;

            }

//rafibugfix   printf("\n tmarks %d",tmarks);

            st.cgpa=total/course;
            s[ind].cg=st.cgpa;
            strcpy(s[ind].grading, "EWU Standard");
            if(st.cgpa<2.00)
            {
                system("color cf");
                printf("\a\n\t %s As you can see The console turned red :( It means You are in Probationary Period Please study hard\n",st.name);
            }

            if(st.cgpa>=3.00)
            {
                system("color af");
                printf("\n\t %s As you can see The console turned green :) It means Your marks are good. Please carry this legacy\n",st.name);
            }
            printf(" \n \t %s your CGPA is %.2f  \n",st.name,st.cgpa);
            percentage(tmarks,course,st.name);
            data();



            break;

        case 11 :
            system("cls");
            system("color fc");
            printf("\n\t\t\t>>>Main Menu<<<\n");

            return 0;

        }
    }
}
