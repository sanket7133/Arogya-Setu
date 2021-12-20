#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>
void district();
int main();
void slot();
void date1();
void time1();
void tmro();
void alocation();
void registrationPerCen();
void giveVaccine();
struct st
{

    char tem1[50];
    int pin, cen_no, no;

} s, t;

int no_of_centre, i = -1;
//char x[12], y[13];
int valuem;
int valuef;
int valueM;
int valueF;
int valueO;
int valueo;
int dist;
FILE *fptr;
char choice[20];
char name[30], name1[3][30];
char gender[10], gender1[10];
long long mobile, mobile1;
float pincode, pincode1;
int age, age1;
char doname[50] = "User Info.txt";
char pin[50];
char xpin[50];
char str1[50];
char str2[50];
int dist;
char filename[26];
char txt[] = ".txt";
int ret;
int i;
int c;
int z;

VOID SetColor(UINT uFore, UINT uBack)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, uFore + uBack * 0x10);
}
void mobille()
{
    int mobile1;
next:
    SetColor(14, 0);
    printf("\t\t\t========================================\n");
    SetColor(15, 0);
    printf("\t\t\tENTER YOUR MOBILE NO : ");

    while (scanf("%lld", &mobile) != 1)
    {
        SetColor(12, 0);
        printf("\t\t\tPlease enter Valid format \n");
        SetColor(15, 0);
        printf("\t\t\tENTER YOUR MOBILE NO : ");

        while (getchar() != '\n')
            ;
    }
    if (mobile <= 7000000000)
    {
        SetColor(12, 0);
        printf("\n\t\t\tIt Is invalid\n");
        SetColor(15, 0);
        goto next;
    }
    if (mobile > 9999999999)
    {
        SetColor(12, 0);
        printf("\n\t\t\tIt Is invalid\n");
        SetColor(15, 0);
        goto next;
    }
}
void Heart()
{
    int row, col;
    printf("\n\n");
    for (row = 0; row <= 2; row++)

    {

        printf("\n\t\t\t\t");

        for (col = 1; col <= 17; col++)

        {

            if ((col >= 3 - row && col <= 6 + row) || (col >= 12 - row && col <= 15 + row))

                printf("*");

            else
                printf(" ");
        }
        //   printf("\n\t\t\t\t");
    }
    for (row = 0; row < 9; row++)

    {
        printf("\n\t\t\t\t");
        for (col = 1; col <= 17; col++)
        {
            if (col >= row + 1 && col <= 17 - row)
                printf("*");
            else
                printf(" ");
        }
        // printf("\n\t\t\t\t");
    }
    printf("\n\t\t\t\t");
}

/* ** Login Screen ** */
void loginScreen(void)
{

    int e = 0, xx;
    char Username[15];
    char Password[15];
    char ch;
    char original_Username[25] = "admin";

    char original_Password[15] = "1234";
    char originalone_Username[25] = "master";

    char originalone_Password[15] = "1111";

    printf("\n\n\n\n\t\t\t\tEnter your Username and Password :)");
    printf("\n\n\n\t\t\t\t\tUSERNAME:");
    scanf("%s", &Username);
reply:
    printf("\n\n\t\t\t\t\tPASSWORD:");
    for (e = 0; e < 10; e++)
    {
        ch = getch();
        Password[e] = ch;
        if (ch != 13)
            printf("*");
        if (ch == 13)
            break;
    }
    Password[e] = '\0';

    if (strcmp(Username, originalone_Username) == 0 && strcmp(Password, originalone_Password) == 0)

    {

        printf("\n\n\n\t\t\t\t\t...Login Successfull...");
    mast:
        printf("\n\t\t\tCHOOSE from Following......");
        printf("\n\t\t\t1. Allocations of Vaccines\n\t\t\t2.Number of registrations per centre\n\t\t\t3.Main Menu\n");
        while (scanf("%d", &xx) != 1)
        {
            SetColor(12, 0);
            printf("\t\t\tPlease enter Valid format \n");
            SetColor(15, 0);
            printf("\t\t\tENTER Valid Choice: ");

            while (getchar() != '\n')
                ;
        }
        switch (xx)
        {
        case 1:
            alocation();
            break;
        case 2:
            registrationPerCen();
            break;
        case 3:
		system("cls");
            main();
            break;
        default:
            SetColor(12, 0);
            printf("enter valid choise");
            SetColor(15, 0);
            goto mast;
        }
    }

    else if (strcmp(Username, original_Username) == 0 && strcmp(Password, original_Password) == 0)

    {
        printf("\n\n\n\t\t\t\t\t... Admin Login Successfull...");
    adm:
        printf("\n\t\t\tCHOOSE from Following......");
        printf("\n\t\t\t1. Check registration and Give vaccine\n\t\t\t2.Main Menu\n");
        while (scanf("%d", &xx) != 1)
        {
            SetColor(12, 0);
            printf("\t\t\tPlease enter Valid format \n");
            SetColor(15, 0);
            printf("\t\t\tENTER Valid Choice: ");

            while (getchar() != '\n')
                ;
        }
        switch (xx)
        {
        case 1:
            giveVaccine();
            break;
        case 2:
		system("cls");
            main();
            break;
        default:
            SetColor(12, 0);
            printf("enter valid choise");
            SetColor(15, 0);
            goto adm;
        }
    }
    else
    {
        printf("\n\t\t\tPassword in incorrect:( Try Again :)");
        goto reply;
        // e++;
        //  getch();
    }
}
void giveVaccine()

{
    int count3 = 0, count4 = 0, nxt;
    char k;

    char string[50], f1[15];
    strcpy(f1, "xy.txt");
    FILE *ptr7, *ptr8;
    ptr7 = fopen(doname, "a+");
    printf("\n\t\t\tEnter patients Mobile Number...\n\t\t\t");
    while (scanf("%lld", &mobile) != 1)
    {
        SetColor(12, 0);
        printf("\t\t\tPlease enter Valid format \n");
        SetColor(15, 0);
        while (getchar() != '\n')
            ;
    }
    while (!feof(ptr7))
    {
        fscanf(ptr7, " %s  %d %s %lld %f", name1[0], &age1, &gender1, &mobile1, &pincode1);
         count3++;
        if (mobile1 == mobile)
        {
            printf("\n\t\t\t%lld   has registered \n", mobile);
            SetColor(14, 0);
            printf("\n\t\t\tPress any key when vaccination completes.....\n\t\t\t");

            SetColor(15, 0);
            getch();

            ptr8 = fopen("xy.txt", "w");
            fseek(ptr7, 0, SEEK_SET);
            while (!feof(ptr7))
            {
                count4++;
                if (count3 != count4)
                {
                    fgets(string, 50, ptr7);
                    fputs(string, ptr8);
                    //fscanf(ptr3, "%d %d %d", &s.pin, &s.cen_no, &s.no);
                    //fprintf(ptr4, "%d \t%d \t%d\n", s.pin, s.cen_no, s.no);
                }
            }
            fclose(ptr7);
            fclose(ptr8);
            remove(doname);
           rename(f1, doname);
        next:
            printf("\n\t\t\t Enter 1 For givin Vaccine For next \n\t\t\t 2. for exit");
            while (scanf("%d", &nxt) != 1)
            {
                SetColor(12, 0);
                printf("\t\t\tPlease enter Valid format \n");
                SetColor(15, 0);
                printf("\t\t\tEnter Your Choice : ");

                while (getchar() != '\n') ;
            }
            if (nxt == 1)
            {
                giveVaccine();
            }
            else if (nxt == 2)
            {
                exit(0);
            }
            else
            {
                printf("Invalid Option");
                goto next;
            }
            break;
        }
        
    }
    if (count4 == 0)
    {
        SetColor(14, 0);
        printf("\n\tThis Mobile is not Registered In system, Ask for Registration");
        SetColor(15, 0);
        printf("\n\t\tPress Any key for Next patient..... ");
        getch();
        goto next;
    }
}

void Question()
{
    SetColor(14, 0);
    printf("\t\t\t========================================\n");
    SetColor(15, 0);
    printf("\t\t\tHave You Taken The Vaccination? \n\t\t\t1. Yes \n\t\t\t2. No \n\n");

    printf("\t\t\t");
    //scanf("\t\t\t%d", &choice[0]);
    while (scanf("%d", &choice[0]) != 1)
    {
        SetColor(12, 0);
        printf("\t\t\tPlease enter Valid format \n");
        SetColor(15, 0);
        printf("\t\t\tEnter Your Choice : ");

        while (getchar() != '\n')
            ;
    }
    int dose;
    switch (choice[0])
    {
    case 1:
    come:
        SetColor(14, 0);
        printf("\t\t\t========================================\n");
        SetColor(15, 0);
        printf("\t\t\tHow many Doses have you taken ?\n\t\t\t1.1\n\t\t\t2.2\n");
        printf("\t\t\t");
        //scanf("%d",&choice[19]);
        while (scanf("%d", &choice[19]) != 1)
        {
            SetColor(12, 0);
            printf("\t\t\tPlease enter Valid format \n");
            SetColor(15, 0);
            printf("\t\t\tEnter Your  choice : ");

            while (getchar() != '\n')
                ;
        }
        if (choice[19] == 1)
        {
        back:
            SetColor(14, 0);
            printf("\t\t\t========================================\n");
            SetColor(15, 0);
            printf("\n\t\t\tDo You want register for Final Dose\n\t\t\t1.Yes\n\t\t\t2.Exit\n ");
            // scanf("\t\t\t%d",&dose);
            while (scanf("%d", &dose) != 1)
            {
                SetColor(12, 0);
                printf("\t\t\tPlease enter Valid format \n");
                SetColor(15, 0);
                printf("\t\t\tEnter your choice : ");

                while (getchar() != '\n')
                    ;
            }
            if (dose == 1)
            {
                goto two;
            }
            else if (dose == 2)
                exit(0);
            else
                printf("\t\t\tEnter valid statement\n");
            goto back;
        }
        else if (choice[19] == 2)
        {
            SetColor(14, 0);
            printf("\t\t\t========================================\n");
            SetColor(15, 0);
            printf("\t\t\tGood Sir,Stay Safe,Stay Healthy........ \n");
        }
        else
        {
            printf("\n\t\t\tEnter valid choice\n");

            goto come;
        }

    // break;
    two:
    case 2:
        SetColor(14, 0);
        printf("\t\t\t========================================\n");
        SetColor(15, 0);
        printf("\t\t\tAre You Currently  Experiencing Any Of The Following Symptoms..\n\t\t\t1.COUGH \n\t\t\t2.FEVER \n\t\t\t3.None Of The Above\n  ");
        printf("\t\t\t");
        //  scanf("%d", &choice[1]);
        while (scanf("%d", &choice[1]) != 1)
        {
            SetColor(12, 0);
            printf("\t\t\tPlease enter Valid format \n");
            SetColor(15, 0);
            printf("\t\t\tEnter Your Choice : ");

            while (getchar() != '\n')
                ;
        }

        switch (choice[1])
        {

        case 1:
            SetColor(14, 0);
            printf("\t\t\t========================================\n");
            SetColor(15, 0);
            printf("\t\t\tYou Have To Visit  Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n\n");
            SetColor(14, 0);
            printf("\t\t\t========================================\n");
            SetColor(15, 0);
            printf("\t\t\tDo You Have Any Of The Following Pre-existing Condition?...\n\t\t\t1.DIBETES \n\t\t\t2.HYPERTENSION.\n\t\t\t3.LUNG DISEASE \n\t\t\t4.None Of The Above\n");
            printf("\t\t\t");
            //   scanf("%d", &choice[2]);
            while (scanf("%d", &choice[2]) != 1)
            {
                SetColor(12, 0);
                printf("\t\t\tPlease enter Valid format \n");
                SetColor(15, 0);
                printf("\t\t\tEnter Your Choice : ");

                while (getchar() != '\n')
                    ;
            }
            switch (choice[2])
            {
            case 1:
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\t\t\tYou Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n\n ");
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\t\t\tHave you travelled in the past 14 days to any of the states \n\t\t\t1.YES \n\t\t\t2.NO\n\n");
                printf("\t\t\t");
                //  scanf("%d", &choice[5]);
                while (scanf("%d", &choice[5]) != 1)
                {
                    SetColor(12, 0);
                    printf("\t\t\tPlease enter Valid format \n");
                    SetColor(15, 0);
                    printf("\t\t\tEnter Your Choice : ");

                    while (getchar() != '\n')
                        ;
                }
                {
                    if (choice[5] == 1)
                        printf("\t\t\t You Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n\n\n\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance \t\t\tof exposure to the Novel Coronavirus.\t\t\t\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information \n\n ");
                    else if (choice[5] == 2)
                        printf("\t\t\tYour infection risk is high . We kindly recommend that you stay at home to avoid any chance of exposure to the Novel Coronavirus.\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information \n\n ");
                    else
                        printf("\t\t\twrong input");
                }

                break;
            case 2:
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\t\t\tYou Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n\n");
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\t\t\tHave you travelled in the past 14 days to any of the states \n\t\t\t1.YES \n\t\t\t2.NO\n\n");
                printf("\t\t\t");
                // scanf("%d", &choice[5]);
                while (scanf("%d", &choice[5]) != 1)
                {
                    SetColor(12, 0);
                    printf("\t\t\tPlease enter Valid format \n");
                    SetColor(15, 0);
                    printf("\t\t\tEnter Your Choice : ");

                    while (getchar() != '\n')
                        ;
                }
                {
                    if (choice[5] == 1)
                        printf("\t\t\t You Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n\n\n\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance \t\t\tof exposure to the Novel Coronavirus.\t\t\t\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information \n\n ");
                    else if (choice[5] == 2)
                        printf("\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance of exposure to the Novel Coronavirus.\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\nhttps://www.mohfw.gov.in/\n\n\t\t\tfor more information\n\n  ");
                    else
                        printf("\t\t\twrong input");
                }

                break;
            case 3:
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\t\t\tYou Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n\n");
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\t\t\tHave you travelled in the past 14 days to any of the states \n\t\t\t1.YES \n\t\t\t2.NO\n\n");
                printf("\t\t\t");
                //  scanf("%d", &choice[5]);
                while (scanf("%d", &choice[5]) != 1)
                {
                    SetColor(12, 0);
                    printf("\t\t\tPlease enter Valid format \n");
                    SetColor(15, 0);
                    printf("\t\t\tEnter Your Choice : ");

                    while (getchar() != '\n')
                        ;
                }
                {
                    if (choice[5] == 1)
                        printf("\t\t\t You Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n\n\n\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance \t\t\tof exposure to the Novel Coronavirus.\t\t\t\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information \n\n ");
                    else if (choice[5] == 2)
                        printf("\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance of exposure to the Novel Coronavirus.\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information \n\n ");
                    else
                        printf("\t\t\twrong input");
                }

                break;
            case 4:
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\t\t\tHave you travelled in the past 14 days to any of the states \n\t\t\t1.YES \n\t\t\t2.NO\n\n");
                printf("\t\t\t");
                // scanf("%d", &choice[3]);
                while (scanf("%d", &choice[3]) != 1)
                {
                    SetColor(12, 0);
                    printf("\t\t\tPlease enter Valid format \n");
                    SetColor(15, 0);
                    printf("\t\t\tEnter Your Choice : ");

                    while (getchar() != '\n')
                        ;
                }
                {
                    if (choice[3] == 1)
                        printf("\t\t\t You Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n \n\n\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance \t\t\tof exposure to the Novel Coronavirus.\t\t\t\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information \n\n ");
                    else if (choice[3] == 2)
                        printf("\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance of exposure to the Novel Coronavirus.\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information \n\n ");
                    else
                        printf("\t\t\twrong input");
                }

                break;

            default:
                SetColor(12, 0);
                printf("\t\t\tinvalid");
                SetColor(15, 0);
                break;

                //break;
            }

            break;
        case 2:
            SetColor(14, 0);
            printf("\t\t\t========================================\n");
            SetColor(15, 0);
            printf("\t\t\tYou Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n \n");
            SetColor(14, 0);
            printf("\t\t\t========================================\n");
            SetColor(15, 0);
            printf("\t\t\tDo You Have Any Of The Following Pre-existing Condition?...\n\t\t\t1.DIBETES \n\t\t\t2.HYPERTENSION.\n\t\t\t3.LUNG DISEASE \n\t\t\t4.None Of The Above\n");
            printf("\t\t\t");
            // scanf("%d", &choice[4]);
            while (scanf("%d", &choice[4]) != 1)
            {
                SetColor(12, 0);
                printf("\t\t\tPlease enter Valid format \n");
                SetColor(15, 0);
                printf("\t\t\tEnter Your Choice : ");

                while (getchar() != '\n')
                    ;
            }
            switch (choice[4])
            {
            case 1:
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\t\t\tYou Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n\n ");
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\t\t\tHave you travelled in the past 14 days to any of the states \n\t\t\t1.YES \n\t\t\t2.NO\n\n");
                printf("\t\t\t");
                //scanf("%d", &choice[5]);
                while (scanf("%d", &choice[5]) != 1)
                {
                    SetColor(12, 0);
                    printf("\t\t\tPlease enter Valid format \n");
                    SetColor(15, 0);
                    printf("\t\t\tEnter Your Choice : ");

                    while (getchar() != '\n')
                        ;
                }
                {
                    if (choice[5] == 1)
                        printf("\t\t\t You Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n\n\n\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance \t\t\tof exposure to the Novel Coronavirus.\t\t\t\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information \n\n ");
                    else if (choice[5] == 2)
                        printf("\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance of exposure to the Novel Coronavirus.\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information \n\n ");
                    else
                        printf("\t\t\twrong input");
                }

                break;
            case 2:
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\t\t\tYou Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n \n");
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\t\t\tHave you travelled in the past 14 days to any of the states \n\t\t\t1.YES \n\t\t\t2.NO\n\n");
                printf("\t\t\t");
                //    scanf("%d", &choice[5]);
                while (scanf("%d", &choice[5]) != 1)
                {
                    SetColor(12, 0);
                    printf("\t\t\tPlease enter Valid format \n");
                    SetColor(15, 0);
                    printf("\t\t\tEnter Your Choice : ");

                    while (getchar() != '\n')
                        ;
                }
                {
                    if (choice[5] == 1)
                        printf("\t\t\t You Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n \n \n\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance \t\t\tof exposure to the Novel Coronavirus.\t\t\t\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information \n\n ");
                    else if (choice[5] == 2)
                        printf("\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance of exposure to the Novel Coronavirus.\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information \n\n ");
                    else
                        printf("\t\t\twrong input");
                }

                break;
            case 3:
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\t\t\tYou Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n \n");
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\t\t\tHave you travelled in the past 14 days to any of the states \n\t\t\t1.YES \n\t\t\t2.NO\n\n");
                printf("\t\t\t");
                // scanf("%d", &choice[5]);
                while (scanf("%d", &choice[5]) != 1)
                {
                    SetColor(12, 0);
                    printf("\t\t\tPlease enter Valid format \n");
                    SetColor(15, 0);
                    printf("\t\t\tEnter Your Choice : ");

                    while (getchar() != '\n')
                        ;
                }
                {
                    if (choice[5] == 1)
                        printf("\t\t\t You Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n \n\n\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance\t\t\t of exposure to the Novel Coronavirus.\t\t\t\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information \n\n ");
                    else if (choice[5] == 2)
                        printf("\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance of exposure to the Novel Coronavirus.\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\nhttps://www.mohfw.gov.in/\n\n\t\t\tfor more information \n\n ");
                    else
                        printf("\t\t\twrong input");
                }

                break;
            case 4:
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\t\t\tHave you travelled in the past 14 days to any of the states \n\t\t\t1.YES \n\t\t\t2.NO\n\n");
                printf("\t\t\t");
                // scanf("%d", &choice[5]);
                while (scanf("%d", &choice[5]) != 1)
                {
                    SetColor(12, 0);
                    printf("\t\t\tPlease enter Valid format \n");
                    SetColor(15, 0);
                    printf("\t\t\tEnter Your Choice : ");

                    while (getchar() != '\n')
                        ;
                }
                {
                    if (choice[5] == 1)
                        printf("\t\t\t You Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n\n\n\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance\t\t\t of exposure to the Novel Coronavirus.\t\t\t\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information \n\n ");
                    else if (choice[5] == 2)
                        printf("\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance of exposure to the Novel Coronavirus.\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information\n\n  ");
                    else
                        printf("\t\t\twrong input");
                }

                break;
            }
            break;
        case 3:
            SetColor(14, 0);
            printf("\t\t\t========================================\n");
            SetColor(15, 0);
            printf("\t\t\tDo You Have Any Of The Following Pre-existing Condition?...\n\t\t\t1.DIBETES \n\t\t\t2.HYPERTENSION.\n\t\t\t3.LUNG DISEASE \n\t\t\t4.None Of The Above\n");
            printf("\t\t\t");
            // scanf("%d", &choice[6]);
            while (scanf("%d", &choice[6]) != 1)
            {
                SetColor(12, 0);
                printf("\t\t\tPlease enter Valid format \n");
                SetColor(15, 0);
                printf("\t\t\tEnter Your Choice : ");

                while (getchar() != '\n')
                    ;
            }
            switch (choice[6])
            {
            case 1:
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\t\t\tYou Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n\n ");
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\t\t\tHave you travelled in the past 14 days to any of the states \n\t\t\t1.YES \n\t\t\t2.NO\n\n");
                printf("\t\t\t");
                //  scanf("%d", &choice[7]);
                while (scanf("%d", &choice[7]) != 1)
                {
                    SetColor(12, 0);
                    printf("\t\t\tPlease enter Valid format \n");
                    SetColor(15, 0);
                    printf("\t\t\tEnter Your Choice : ");

                    while (getchar() != '\n')
                        ;
                }
                {
                    if (choice[7] == 1)
                        printf("\t\t\t You Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n \n\n\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance \t\t\tof exposure to the Novel Coronavirus.\t\t\t\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information \n\n ");
                    else if (choice[7] == 2)
                        printf("\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance of exposure to the Novel Coronavirus.\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information\n\n");
                    else
                        printf("\t\t\twrong input");
                }
                break;
            case 2:
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\n\t\t\tYou Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n\n");
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\n\t\t\tHave you travelled in the past 14 days to any of the states \n\t\t\t1.YES \n\t\t\t2.NO\n\n");
                printf("\t\t\t");
                //  scanf("%d", &choice[8]);
                while (scanf("%d", &choice[8]) != 1)
                {
                    SetColor(12, 0);
                    printf("\t\t\tPlease enter Valid format \n");
                    SetColor(15, 0);
                    printf("\t\t\tEnter Your Choice : ");

                    while (getchar() != '\n')
                        ;
                }
                {
                    if (choice[8] == 1)
                        printf("\n\t\t\t You Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n \n\n\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance \t\t\tof exposure to the Novel Coronavirus.\t\t\t\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information \n\n ");
                    else if (choice[8] == 2)
                        printf("\n\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance of exposure to the Novel Coronavirus.\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information \n\n ");
                    else
                        printf("\n\t\t\twrong input");
                }
                break;
            case 3:
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\n\t\t\tYou Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n \n");
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\n\t\t\tHave you travelled in the past 14 days to any of the states \n\t\t\t1.YES \n\t\t\t2.NO\n\n");
                printf("\t\t\t");
                //  scanf("%d", &choice[9]);
                while (scanf("%d", &choice[9]) != 1)
                {
                    SetColor(12, 0);
                    printf("\t\t\tPlease enter Valid format \n");
                    SetColor(15, 0);
                    printf("\t\t\tEnter Your Choice : ");

                    while (getchar() != '\n')
                        ;
                }
                {
                    if (choice[9] == 1)
                        printf("\n\t\t\t You Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n\n\n\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance \t\t\tof exposure to the Novel Coronavirus.\t\t\t\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information \n\n ");
                    else if (choice[9] == 2)
                        printf("\n\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance of exposure to the Novel Coronavirus.\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\nDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information\n\n  ");
                    else
                        printf("\n\t\t\twrong input");
                }
                break;
            case 4:
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\n\t\t\tHave you travelled in the past 14 days to any of the states \n\t\t\t1.YES \n\t\t\t2.NO\n\n");
                printf("\t\t\t");
                //scanf("%d", &choice[10]);
                while (scanf("%d", &choice[10]) != 1)
                {
                    SetColor(12, 0);
                    printf("\t\t\tPlease enter Valid format \n");
                    SetColor(15, 0);
                    printf("\t\t\tEnter Your Choice : ");

                    while (getchar() != '\n')
                        ;
                }
                {
                    if (choice[10] == 1)
                        printf("\n\t\t\t You Have To Visit To Your Nearby Primary Health Care Center ,Do Rapid Reagent Test\n\n\n\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance\t\t\t of exposure to the Novel Coronavirus.\t\t\t\n\t\t\tRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information \n\n ");
                    // \n\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance of exposure to the Novel Coronavirus.\t\t\t\nRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information \n\n
                    else if (choice[10] == 2)
                        printf("\n\t\t\tYour infection risk is low. We recommend that you stay at home to avoid any chance of exposure to the Novel Coronavirus.\t\t\t\nRetake the Self-Assessment Test if you develop symptoms or come in contact with a COVID-19 confirmed patient.\n\n\t\t\tDo visit\n\n\t\t\thttps://www.mohfw.gov.in/\n\n\t\t\tfor more information \n\n ");
                    else
                        printf("\n\t\t\twrong input\n");
                }

                break;

            default:
                SetColor(12, 0);
                printf("\n\t\t\tinvalid\n");
                SetColor(15, 0);
                break;

                break;
            }
        }
    }
confirm:
    SetColor(14, 0);
    printf("\t\t\t========================================\n");
    SetColor(15, 0);
    printf("\n \t\t\tDo you want Return:\n");
    SetColor(14, 0);
    printf("\t\t\t========================================\n");
    SetColor(15, 0);
    printf("\t\t\t 1.Continue\n \t\t\t 2.Return to Home screen\n");
    printf("\t\t\t");
    // scanf("%d", &c);
    while (scanf("%d", &c) != 1)
    {
        SetColor(12, 0);
        printf("\t\t\tPlease enter Valid format \n");
        SetColor(15, 0);
        printf("\t\t\tEnter Your Choice : ");

        while (getchar() != '\n')
            ;
    }
    if (c == 1)
    {
        district();
        slot();
    }
    else
    {
        system("cls");
        main();
    }
}
void registeer() //Declare regiser function
{
    SetColor(14, 0);
    printf("\t\t\t========================================\n");
    SetColor(15, 0);
    printf("PLEASE REGISTER YOURSELF......\n\n");

    // opening file to store user data.
    //getting user data and adding in the database.
    fptr = fopen(doname, "a+");
    if (fptr == NULL)
    {
        printf("Error");
        exit(1);
    }
    do
    {
        mobille();

    } while (mobile <= 7000000000);
    int w = 0;
    fseek(fptr, 0, SEEK_SET);
    ;
    while (!feof(fptr))
    {

        fscanf(fptr, " %s  %d %s %lld %f", name1[0], &age1, &gender1, &mobile1, &pincode1);
        if (w == 0)
        {
            strcpy(name1[1], name1[0]);
        }
        if (mobile1 == mobile)
        {
            printf("\t\t\tWELCOME BACK  %s\n", name1[1]);

            w = w + 1;
            break;
        }
    }

    if (w != 0)
    {
        pincode = pincode1;
        Question();
    }
    else
    {
        int i, g = 0;
    namee:
        SetColor(14, 0);
        printf("\t\t\t========================================\n");
        SetColor(15, 0);
        printf("\t\t\tENTER YOUR FULL NAME : ");
        gets(name);
        if (g == 0)
        {
            gets(name);
            g++;
        }

        for (i = 0; name[i] != '\0'; i++)
        {
            if (isalpha(name[i]) != 0)
            {
            }
            else if (name[i] == ' ')
            {
            }
            else
            {

                printf("\t\t\tName cannot have symbols or numbers. Please enter in proper format..\n");
                goto namee;
            }
        }
        // printf("%s",name);
        // goto agee;

        do
        {
        agee:
            SetColor(14, 0);
            printf("\t\t\t========================================\n");
            SetColor(15, 0);
            printf("\t\t\tENTER YOUR AGE: ");
            while (scanf("%d", &age) != 1)

            {
                printf("\t\t\tPlease enter Valid format ");
                break;
            }
            while (getchar() != '\n')
                ;

            if (age <= 10)
            {
                SetColor(12, 0);
                printf("\n\t\t\tIt Is Invalid\n");
                SetColor(15, 0);
            }
            if (age >= 120)
            {
                SetColor(12, 0);
                printf("\n\t\t\tIt Is Invalid\n");
                SetColor(15, 0);
                goto agee;
            }
        } while (age <= 10);
        SetColor(14, 0);
        printf("\t\t\t========================================\n");
        SetColor(15, 0);
        printf("\t\t\tPlease note that your inputs will supplement the efforts being taken to contain \n \t\t\tthe Corona pandemic and assess the Vaccination status and symptoms.\n\t\t\tPlease help AarogyaSetu in helping India\n\n");
        printf("\t\t\tAs per your registration details your age. Pls confirm / change your age.");

        //checking age for eligibilty to take vaccine.
        if (age > 18)

            printf("\n\n\t\t\t Go Ahead\n\n");

        else
        {
            SetColor(4, 0);
            printf("\n\n\t\t *** You Are Not Eligible To The Vaccination,Because Your Age is Below 18.....*** \n\n");
            SetColor(15, 0);
			system("cls");
            main();
        }

        //  if (age >= 18)
        //   {
        //      district();
        // }

        // if(age>=120){
        //     printf("\t\t\tit is invalid");
        //   }

        //else{
        {
        gend:
            SetColor(14, 0);
            printf("\t\t\t========================================\n");
            SetColor(15, 0);
            printf("\t\t\tGENDER (M/F/O) : ");
            // scanf("%s", &gender);
            while (scanf("%s", gender) != 1)
            {
                SetColor(12, 0);
                printf("\t\t\tPlease enter Valid format \n");
                SetColor(15, 0);
                printf("\t\t\tEnter Your Choice : ");

                while (getchar() != '\n')
                    ;
            }
            char str1[] = "m";
            char str2[] = "f";
            char str3[] = "M";
            char str4[] = "F";
            char str5[] = "O";
            char str6[] = "o";

            valuem = strcmp(gender, str1);
            valuef = strcmp(gender, str2);
            valueM = strcmp(gender, str3);
            valueF = strcmp(gender, str4);
            valueO = strcmp(gender, str5);
            valueo = strcmp(gender, str6);
        }

        if (valuem == 0 || valuef == 0 || valueM == 0 || valueF == 0 || valueO == 0 || valueo == 0)
        {
            printf(" ");
        }
        else
        {
            SetColor(12, 0);
            printf("\n\t\t\t Invalid input \n");
            SetColor(15, 0);
            goto gend;
        }

        do
        {
        pinco:
            SetColor(14, 0);
            printf("\t\t\t========================================\n");
            SetColor(15, 0);
            printf("\t\t\tENTER YOUR PINCODE : ");
            //scanf("%f", &pincode);
            while (scanf("%f", &pincode) != 1)
            {
                printf("\t\t\tPlease enter Valid format ");
                break;
            }
            while (getchar() != '\n')
                ;

            if (pincode <= 410000)
            {
                SetColor(12, 0);
                printf("\n\t\t\tIt Is Invalid \n");
                SetColor(15, 0);
            }
            if (pincode >= 440000)
            {
                SetColor(12, 0);
                printf("\n\t\t\tIt Is Invalid\n");
                SetColor(15, 0);
                goto pinco;
            }
        } while (pincode <= 410000);
        printf("%d", pincode);

        fseek(fptr, 0, SEEK_END);
        fprintf(fptr, "%s\t", name);
        fprintf(fptr, "%d\t", age);
        fprintf(fptr, "%s\t", gender);
        fprintf(fptr, "%lld\t", mobile);
        fprintf(fptr, "%0.f\t\n", pincode);

        //   fclose(fptr);

        // regestration complite
        SetColor(6, 0);
        printf("\n\n \t\t\tYOUR REGISRETION IS SUCCESSFULLY COMPLITED.........\n\n");
        SetColor(15, 0);
        Question();
    }
}

void district()
{
    int l;
    SetColor(14, 0);
    printf("\t\t\t========================================\n");
    SetColor(15, 0);
    printf("\n\t\t\tEnter the District Name \n \t\t\t 1. Kolhapur \n \t\t\t 2. Sangli \n \t\t\t 3. Satara \n \t\t\t 4. Solapur\n\n");
    printf("\t\t\t");
    //  gets(dist);
    //gets(dist);
    //scanf("%[^\n]%*c", &dist);
    // strcat(dist, txt);
    //	printf("%s",dist);

    FILE *ptr, *ptr2;

    //ptr2=fopen("Kolhapur.txt","r");

    char x[150];

    //  ptr = fopen(dist, "r");
    int d;
begin:
    while (scanf("%d", &dist) != 1)

    {
        d = 1;
        while (getchar() != '\n')
            ;
        SetColor(12, 0);
        printf("Please Enter Valid Format");
        SetColor(15, 0);
        printf("\n\t\t\tEnter the District Name \n \t\t\t 1. Kolhapur \n \t\t\t 2. Sangli \n \t\t\t 3. Satara \n \t\t\t 4. Solapur\n\n");
        printf("\t\t\t");
    }
    switch (dist)
    {
    case 1:
        ptr = fopen("Kolhapur.txt", "r");
        break;
    case 2:
        ptr = fopen("Sangli.txt", "r");
        break;
    case 3:
        ptr = fopen("Satara.txt", "r");
        break;
    case 4:
        ptr = fopen("Solapur.txt", "r");
        break;

    default:
        printf("\t\t\tIT IS INVALID\n");
        printf("\t\t\tPlease Enter Valid No.");
        goto begin;
        break;
    }

pins:
	fflush(stdin);
    if (ptr == NULL)
    {
        printf("\n\t\t\t File cant be created\n");
    }
    else
    {
        printf("\n \t\t\tEnter Pin :");

        // scanf("%s", &pin);
        while (scanf("%s", pin) != 1)
        {
            SetColor(12, 0);
            printf("\t\t\tPlease enter Valid format \n");
            SetColor(15, 0);
            printf("\t\t\tEnter Your Choice : ");

            while (getchar() != '\n')
                ;
        }
        fflush(stdin);
        printf("\n\n");

        i = strlen(pin);
        fflush(stdin);
        strcpy(xpin, pin);
        if (xpin[i - 1] == 57)
        {
            xpin[i - 2] = xpin[i - 2] + 1;
            xpin[i - 1] = 48;
            //  printf("%c %c,o",xpin[i-2],xpin[i-1]);
            // printf("%s", xpin);
        }
        else
        {
            xpin[i - 1] = xpin[i - 1] + 1;
            // printf("%s\n",xpin);
        }
        while (!feof(ptr))
        {
            fscanf(ptr, "%s", &s.tem1);
            strcpy(str1, pin);
            strcpy(str2, s.tem1);
            ret = strcmp(str1, str2);
            if (ret == 0)
            {
                break;
            }
        }
	int countL=0,newPin;
        if (feof(ptr))
        {
            rewind(ptr);
            SetColor(12, 0);
            printf("\n\t\t\tpin not found , please check pincode or it might\n\t\t\t don't have any vaccinaction centre\n");
            SetColor(15, 0);
            goto pins;
        }
        else
        {
            ptr2 = ptr;
            while (!feof(ptr))
            {
                fscanf(ptr, "%s", &s.tem1);
                fgets(x, sizeof(x), ptr2);
                strcpy(str1, xpin);
                strcpy(str2, s.tem1);
                ret = strcmp(str1, str2);
                if (ret == 0)
                {
                    break;
                }
				countL++;
                printf("\t%s", s.tem1);
                printf("%s", x);
                printf("\n");
            }
			if(countL==0){
				SetColor(12, 0);
				printf("\n\t\t\tNo Vaccination Centre is Available for pincode %s",pin);
				SetColor(15, 0);
	here:			
				printf("\n\t\t\t Choose From following\n\t\t\t1.Try New pincode\n\t\t\t2. Main menu\n\t\t\t3.exit");
				 while (scanf("%d", &newPin) != 1)
        {
            SetColor(12, 0);
            printf("\t\t\tPlease enter Valid format \n");
            SetColor(15, 0);
            printf("\t\t\tEnter Your Choice : ");

            while (getchar() != '\n');
        }
		
			if(newPin==1){
				 rewind(ptr);
				goto pins;
			}
			else if(newPin==2){
				system("cls");
				main();
			} 
			else if(newPin==3){
				exit(0);
			}
			else{
				printf("Please Enter Valid choice");
				goto here;
			}
			}
            if (z == 3)
            {
            again:
                SetColor(14, 0);
                printf("\t\t\t========================================\n");
                SetColor(15, 0);
                printf("\n\t\t\t select from following\n\t\t\t 1.main menu\n\t\t\t 2. exit\n\t\t\t ");
                //scanf("%d", &l);
                while (scanf("%d", &l) != 1)
                {
                    SetColor(12, 0);
                    printf("\t\t\tPlease enter Valid format \n");
                    SetColor(15, 0);
                    printf("\t\t\tEnter Your Choice : ");

                    while (getchar() != '\n')
                        ;
                }
                if (l == 1 || l == 2)
                {
                    if (l == 1)
                    {
                        system("cls");
                        main();
                    }
                    else
                    {
                        exit(1);
                    }
                }
                else
                {
                    printf("\n\t\t\t enter valid input");
                    goto again;
                }
            }

            if (z == 2)
            {
                slot();
            }
        }
    }
    // printf("%d",z);
    fclose(fptr);
    fclose(ptr);
}
void slot()
{
    char f2[20];
    int alloc_no;
    //printf("%d",pincode);
    FILE *ptr3, *ptr5;
    // printf("%d",dist);
    switch (dist)
    {
    case 1:
        ptr3 = fopen("Kolhapur1.txt", "a+");
        ptr5 = fopen("Kolhapur_a.txt", "a+");
        strcpy(f2, "Kolhapur1.txt");
        break;
    case 2:
        ptr3 = fopen("Sangli1.txt", "a+");
        ptr5 = fopen("Sangli_a.txt", "a+");
        strcpy(f2, "Sangli1.txt");
        break;
    case 3:
        ptr3 = fopen("Satara1.txt", "a+");
        ptr5 = fopen("Satara_a.txt", "a+");
        strcpy(f2, "Satara1.txt");
        break;
    case 4:
        ptr3 = fopen("Solapur1.txt", "a+");
        ptr5 = fopen("Solapur_a.txt", "a+");
        strcpy(f2, "Solapur1.txt");

        break;

    default:
        printf("\t\t\tIT IS INVALID\n");
        printf("\t\t\tPlease Enter Valid No.");
        break;
    }
    // ptr3=fopen("register.txt","a+");
    // printf("d");
    fseek(ptr3, 0, SEEK_SET);
    //fseek(ptr5,0,SEEK_END);
    while (!feof(ptr5))
    {
        fscanf(ptr5, "%d", &alloc_no);
    }
    //printf("%d",alloc_no);
    SetColor(14, 0);
    printf("\t\t\t========================================\n");
    SetColor(15, 0);
    printf("\t\t\tplease enter sutaible Vaccine center number \n\t\t\taccording to your location\n");
    // scanf("%d", &no_of_centre);
    while (scanf("%d", &no_of_centre) != 1)
    {
        SetColor(12, 0);
        printf("\t\t\tPlease enter Valid format \n");
        SetColor(15, 0);
        printf("\t\t\tEnter Your Choice : ");

        while (getchar() != '\n')
            ;
    }

    /*  while (!feof(ptr3))
    {
        fscanf(ptr3, "%d %d %d", &s.pin, &s.cen_no, &s.no);
        if (s.pin == pincode && s.cen_no == no_of_centre)
        {

            i++;
        }
    } */
    int count = 0, count2 = 0, remain;
    char f1[20];
    strcpy(f1, "xyz.txt");

    // printf("pin,no");
    //  scanf("%d %d",&pincode,&no_of_centre);
    //FILE *ptr3;
    FILE *ptr4;

    //printf("hi");
    while (!feof(ptr3))
    {
        fscanf(ptr3, "%d %d %d", &s.pin, &s.cen_no, &s.no);
        count++;
        //printf("%d %d %d",pincode1,cenno1,ttl);
        if (s.pin == pincode && s.cen_no == no_of_centre && s.no == alloc_no)
        {
            SetColor(12, 0);
            printf("\n\t\t\tSORRY NO SLOTS ARE AVIALABLE FOR YOUR SELECTION........\n");
            SetColor(15, 0);
            break;
        }
        else if (s.pin == pincode && s.cen_no == no_of_centre)
        {
            ptr4 = fopen("xyz.txt", "w");
            fseek(ptr3, 0, SEEK_SET);
            while (!feof(ptr3))
            {
                count2++;
                if (count != count2)
                {
                    fscanf(ptr3, "%d %d %d", &s.pin, &s.cen_no, &s.no);
                    fprintf(ptr4, "%d \t%d \t%d\n", s.pin, s.cen_no, s.no);
                }
                else
                {
                    fscanf(ptr3, "%d %d %d", &s.pin, &s.cen_no, &s.no);
                    s.no = s.no + 1;
                    remain = s.no;
                    fprintf(ptr4, "%d \t%d \t%d\n", s.pin, s.cen_no, s.no);
                    // printf("%d %d \t%d",pincode1,cenno1,ttl);
                }
            }
            fclose(ptr3);
            fclose(ptr4);
            remove(f2);
            rename(f1, f2);
            SetColor(14, 0);
            printf("\nYOU HAVE SUCCESSFULLY REGISTERED A SLOT FOR VACCINE ON THE ");
            tmro();
            SetColor(12, 0);
            printf("\n%d Vaccine slots are now available on Center No %d", alloc_no - remain, no_of_centre);
            SetColor(15, 0);
            break;
        }
    }
    if (count2 == 0)
    {
        // fseek(ptr3, 0, SEEK_END);
        s.pin = pincode;
        s.cen_no = no_of_centre;

        fprintf(ptr3, "%d \t %d \t 1\n", s.pin, s.cen_no);
        SetColor(14, 0);
        printf("\nYOU HAVE SUCCESSFULLY REGISTERED A SLOT FOR VACCINE ON THE  ");
        tmro();
        SetColor(12, 0);
        printf("\n%d Vaccine slots are now available on Center No %d", alloc_no - 1, no_of_centre);
        SetColor(15, 0);
    }
    fclose(ptr3);

    /* if (i >= 50)
    {
        SetColor(12, 0);
        printf("NO SLOTS AVILABLE on ");
        tmro();
        printf("PLEASE SELECT ANOTHER CENTRE OR TRY FOR TOMMOROW");
        SetColor(15, 0);
    }
    else
    {

        fseek(ptr3, 0, SEEK_END);
        s.pin = pincode;
        s.cen_no = no_of_centre;

        fprintf(ptr3, "%d \t %d \t 1\n", s.pin, s.cen_no);
        SetColor(14, 0);
        printf("YOU HAVE SUCCESSFULLY REGISTERED A SLOT FOR VACCINE ON THE ");
        tmro();
        SetColor(15, 0);
    }
    fclose(ptr3);*/
    SetColor(14, 0);
    printf("\t\t\t========================================\n");
    SetColor(15, 0);
    printf("               CHOOSE FROM FOLLOWING \n\t\t\t1. MAIN MENU \n\t\t\t2. EXIT \n\t\t\t");
    int q;
    // scanf("%d", &q);
    while (scanf("%d", &q) != 1)
    {
        SetColor(12, 0);
        printf("\t\t\tPlease enter Valid format \n");
        SetColor(15, 0);
        printf("\t\t\tEnter Your Choice : ");

        while (getchar() != '\n')
            ;
    }
    if (q == 1)
    {
        system("cls");
        main();
    }
    else
    {
        exit(1);
    }
}
void tmro()
{
    int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    if (daysPerMonth[tm.tm_mon - 1] == tm.tm_mday)
    {
        tm.tm_mday = 1, tm.tm_mon++;
        printf("Date: %d-%d-%d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    }
    else
    {
        tm.tm_mday++;
        printf(" Date: %d-%d-%d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    }
}
void tmro_a(int *tday, int *tmont, int *tyear)
{
    int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    if (daysPerMonth[tm.tm_mon - 1] == tm.tm_mday)
    {
        tm.tm_mday = 1, tm.tm_mon++;
        //printf("Date: %d-%d-%d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
        *tday = tm.tm_mday;
        *tmont = tm.tm_mon + 1;
        *tyear = tm.tm_year + 1900;
    }
    else
    {
        tm.tm_mday++;
        //printf(" Date: %d-%d-%d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
        *tday = tm.tm_mday;
        *tmont = tm.tm_mon + 1;
        *tyear = tm.tm_year + 1900;
    }
}
void date1()
{
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("Date: %d-%d-%d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
}
void time1()
{
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    tm = *localtime(&t);
    printf("   Time: %d:%d", tm.tm_hour, tm.tm_min);
}
void alocation()
{
    int op, tday, tmont, tyear, alloc_no, end;
    FILE *ptr5;
    printf("\n\t\t\t Select district from following\n\t\t\t");
    printf("1.Kolhapur\n\t\t\t2.Sangali\n\t\t\t3.Satara\n\t\t\t4.solapur\n\t\t\t");
begin:
    while (scanf("%d", &op) != 1)

    {
        while (getchar() != '\n')
            ;
        SetColor(12, 0);
        printf("Please Enter Valid Format");
        SetColor(15, 0);
        printf("\n\t\t\tEnter the District Name \n \t\t\t 1. Kolhapur \n \t\t\t 2. Sangli \n \t\t\t 3. Satara \n \t\t\t 4. Solapur\n\n");
        printf("\t\t\t");
    }
    switch (op)
    {
    case 1:
        ptr5 = fopen("Kolhapur_a.txt", "a+");
        break;
    case 2:
        ptr5 = fopen("Sangli_a.txt", "a+");
        break;
    case 3:
        ptr5 = fopen("Satara_a.txt", "a+");
        break;
    case 4:
        ptr5 = fopen("Solapur_a.txt", "a+");
        break;

    default:
        printf("\t\t\tIT IS INVALID\n");
        printf("\t\t\tPlease Enter Valid No.");
        goto begin;
        break;
    }
    tmro_a(&tday, &tmont, &tyear);
    // printf("%d %d %d ",tday,tmont,tyear);
    printf("Enter number of vaccines allocated for each centre......for ");
    tmro();
    printf("\n\t\t\t");
    //scanf("%d",&alloc_no);
    while (scanf("%d", &alloc_no) != 1)

    {
        while (getchar() != '\n')
            ;
        SetColor(12, 0);
        printf("Please Enter Valid Format");
        SetColor(15, 0);
        // printf("\n\t\t\tEnter the District Name \n \t\t\t 1. Kolhapur \n \t\t\t 2. Sangli \n \t\t\t 3. Satara \n \t\t\t 4. Solapur\n\n");
        printf("\t\t\t");
    }
    /* while(feof(ptr5)){
		 fscanf(ptr5,"%d %d %d",&s.pin, &s.cen_no, &s.no);
		printf("\n\t\t\t%d  %d   %d",s.pin,s.cen_no,s.no);
	} */
    fprintf(ptr5, "%d %d %d %d \n", tday, tmont, tyear, alloc_no);
    fclose(ptr5);
endd:
    printf("\n\t\t\tAllocation Successful.....\n\t\t\t1.Main Menu \n\t\t\t 2. Exit");
    while (scanf("%d", &end) != 1)

    {
        while (getchar() != '\n')
            ;
        SetColor(12, 0);
        printf("Please Enter Valid Format");
        SetColor(15, 0);
        // printf("\n\t\t\tEnter the District Name \n \t\t\t 1. Kolhapur \n \t\t\t 2. Sangli \n \t\t\t 3. Satara \n \t\t\t 4. Solapur\n\n");
        printf("\t\t\t");
    }
    if (end == 1)
    {
		system("cls");
        main();
    }
    else if (end == 2)
    {
        exit(0);
    }
    else
    {
        printf("enter valid option");
        goto endd;
    }
}
void registrationPerCen()
{
    int op, end;
    FILE *ptr6;
    SetColor(14, 0);
    printf("\n\t\t\t Select district from following\n\t\t\t\t");
    SetColor(15, 0);
    printf("1.Kolhapur\n\t\t\t2.Sangali\n\t\t\t3.Satara\n\t\t\t4.solapur\n\t\t\t");
begin:
    while (scanf("%d", &op) != 1)

    {
        while (getchar() != '\n')
            ;
        SetColor(12, 0);
        printf("Please Enter Valid Format");
        SetColor(15, 0);
        printf("\n\t\t\tEnter the District Name \n \t\t\t 1. Kolhapur \n \t\t\t 2. Sangli \n \t\t\t 3. Satara \n \t\t\t 4. Solapur\n\n");
        printf("\t\t\t");
    }
    switch (op)
    {
    case 1:
        ptr6 = fopen("Kolhapur1.txt", "r");
        break;
    case 2:
        ptr6 = fopen("Sangli1.txt", "r");
        break;
    case 3:
        ptr6 = fopen("Satara1.txt", "r");
        break;
    case 4:
        ptr6 = fopen("Solapur1.txt", "r");
        break;

    default:
        printf("\t\t\tIT IS INVALID\n");
        printf("\t\t\tPlease Enter Valid No.");
        goto begin;
        break;
    }
    SetColor(12, 0);
    printf("\n\t\t\tPincode\t");
    SetColor(14, 0);
    printf(" Center No\t");
    SetColor(1, 0);
    printf(" No registrations");
    SetColor(15, 0);
    printf("\n\n\t\t----------------------------------------------------------\n");
    while (!feof(ptr6))
    {
        fscanf(ptr6, "%d %d %d", &s.pin, &s.cen_no, &s.no);
        printf("\n\t\t\t%d\t %4d\t\t %6d", s.pin, s.cen_no, s.no);
    }
    fclose(ptr6);
endd:
    printf("\n\n\t\t\t1.Main Menu \n\t\t\t 2. Exit");
    while (scanf("%d", &end) != 1)

    {
        while (getchar() != '\n')
            ;
        SetColor(12, 0);
        printf("Please Enter Valid Format");
        SetColor(15, 0);
        // printf("\n\t\t\tEnter the District Name \n \t\t\t 1. Kolhapur \n \t\t\t 2. Sangli \n \t\t\t 3. Satara \n \t\t\t 4. Solapur\n\n");
        printf("\t\t\t");
    }
    if (end == 1)
    {
		system("cls");
        main();
    }
    else if (end == 2)
    {
        exit(0);
    }
    else
    {
        printf("enter valid option");
        goto endd;
    }
}
int main()
{

    //introduction and registration
    //#include <stdio.h>
    // int main()
    //{
    // }

    printf("\t\t\t ********************************* \n");
    printf("\t\t\t |            ");
    SetColor(5, 0);
    printf("WELCOME");
    SetColor(15, 0);
    printf("            | \n");
    printf("\t\t\t |              TO               | \n");
    printf("\t\t\t |");
    SetColor(2, 0);
    printf("         AAROGYA SETU          ");
    SetColor(15, 0);
    printf("| \n");
    printf("\t\t\t ********************************* \n\n\t\t\t");
    date1();
    time1();
    {
        SetColor(12, 0);
        Heart();
        SetColor(15, 0);
    }
begin:
    SetColor(14, 0);
    printf("\n\t\t\t========================================\n");
    SetColor(15, 0);
    // printf("\n\t\t\t_________________________________________\n");
    printf("\t  \n\t\t\t1.Admin ....\t\n\t\t\t2.Registration... \t  \n\t\t\t3.Check for Vaccine center...\n \t\t\t4.Take a Quick Assesment...\n");
    SetColor(14, 0);
    printf("\t\t\t========================================\n");
    SetColor(15, 0);
    //printf("\t\t\t_________________________________________\n");
    printf("\t\t\t");
    // scanf("%d", &i);
    while (scanf("%d", &i) != 1)
    {
        SetColor(12, 0);
        printf("\t\t\tPlease enter Valid format \n");
        SetColor(15, 0);
        printf("\t\t\tEnter Your Choice : ");

        while (getchar() != '\n')
            ;
    }
    z = i;
    if (i == 1)
    {
        loginScreen();
    }
    else if (i == 2)
    {
        registeer();
    }
    else if (i == 3)
    {
        district();
    }
    else if (i == 4)
    {
        Question();
    }
    else
    {
        goto begin;
    }

    return 0;
}
