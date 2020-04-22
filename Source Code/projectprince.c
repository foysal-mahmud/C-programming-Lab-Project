#include<stdio.h>
void main()
{
    int value,n,a,b,d,e,f,g;
    char c;
    system("color 0A");
    FILE*f1,*f2,*f3,*f4;
    printf("\n\n\t\tDeveloper: Md.Foysal Mahmud.\n\t\tRoll No: 14CSE028.\n\t\tDepartment of CSE.\n\t\tUniversity Of Barisal. \n");
menu:
    printf("\n======================================================================");
    printf("\n ******  WELCOME TO  PUBLIC UNIVERSITIES OF BANGLADESH  ******\n");
    printf("\n======================================================================\n");
    printf("\n Enter 1 for all Engineering Universities. \n");
    printf("\n Enter 2 for all Science & technology Universities. \n");
    printf("\n Enter 3 for all General Universities. \n");
    printf("\n Enter 4 for all Agriculture Universities. \n ");
    printf("\n -------------------------------------------------------------------------\n");
    scanf("%d",&value);
    switch(value)
    {
    case 1:
        while(a!=-1)
        {

            printf("\n Enter 1 to know about Bangladesh University of Engineering & Technology. \n");
            printf("\n Enter 2 to know about Khulna University of Engineering & Technology. \n");
            printf("\n Enter 3 to know about Chittagong University of Engineering & Technology. \n");
            printf("\n Enter 4 to know about Rajshahi University of Engineering & Technology. \n");
            printf("\n Enter 5 to know about Bangladesh University of Textiles. \n");
            scanf("%d",&n);
            switch(n)
            {
            case 1:
                printf("\n Bangladesh University of Engineering and Technology : \n\n");
                f1=fopen("BUET.txt","r");
                while((c=getc(f1)) !=EOF)
                    printf("%c",c);
                fclose(f1);
                break;
            case 2:
                printf("\n Khulna University of Engineering and Technology : \n\n");
                f1=fopen("KUET.txt","r");
                while((c=getc(f1)) !=EOF)
                    printf("%c",c);
                fclose(f1);
                break;
            case 3:
                printf("\n Chittagong University of Engineering & Technology :  \n\n");
                f1=fopen("CUET.txt","r");
                while((c=getc(f1)) !=EOF)
                    printf("%c",c);
                fclose(f1);
                break;
            case 4:
                printf("\n Rajshahi University of Engineering & Technology :  \n\n");
                f1=fopen("RUET.txt","r");
                while((c=getc(f1)) !=EOF)
                    printf("%c",c);
                fclose(f1);
                break;
            case 5:
                printf("\n  Bangladesh University of Textiles :  \n\n");
                f1=fopen("BUTEX.txt","r");
                while((c=getc(f1)) !=EOF)
                    printf("%c",c);
                fclose(f1);
            }
            scanf("%d",&a);
            if(a!=0)
                goto menu;
        }
        break;
    case 2:
        while(b!=-1)
        {
            printf("\n Enter 1 to know Shahjalal University of Science and Technology. \n\n ");
            printf("\n Enter 2 to know Patuakhali Science and Technology University. \n\n ");
            printf("\n Enter 3 to know Hajee Mohammad Danesh Science and Technology University. \n\n ");
            printf("\n Enter 4 to know Mawlana Bhashani Science and Technology University. \n\n ");
            printf("\n Enter 5 to know  Noakhali Science and Technology University. \n\n ");
            printf("\n Enter 6 to know  Jessore University of Science and Technology. \n\n\n ");
            printf("\n Enter 7 to know  Pabna University of Science & Technology. \n\n ");
            printf("\n Enter 8 to know  Bangabandhu Sheikh Mujibur Rahman Science and Technology University. \n\n ");
            scanf("%d",&n);
            if(n==1)
            {
                printf("\n Shahjalal University of Science and Technology :\n\n");
                f2=fopen("SUST.txt","r");
                while((c=getc(f2)) !=EOF)
                    printf("%c",c);
                fclose(f2);
            }
            else if(n==2)
            {
                printf("\n Patuakhali Science and Technology University :\n\n");
                f2=fopen("PSTU.txt","r");
                while((c=getc(f2)) !=EOF)
                    printf("%c",c);
                fclose(f2);
            }
            else if(n==3)
            {
                printf("\n Hajee Mohammad Danesh Science and Technology University :\n\n");
                f2=fopen("HSTU.txt","r");
                while((c=getc(f2)) !=EOF)
                    printf("%c",c);
                fclose(f2);
            }
            else if(n==4)
            {
                printf("\n Mawlana Bhashani Science and Technology University :\n\n");
                f2=fopen("MBSTU.txt","r");
                while((c=getc(f2)) !=EOF)
                    printf("%c",c);
                fclose(f2);
            }
            else if(n==5)
            {
                printf("\n Noakhali Science and Technology University :\n\n");
                f2=fopen("NSTU.txt","r");
                while((c=getc(f2)) !=EOF)
                    printf("%c",c);
                fclose(f2);
            }
            else if(n==6)
            {
                printf("\n Jessore University of Science and Technology :\n\n");
                f2=fopen("JSTU.txt","r");
                while((c=getc(f2)) !=EOF)
                    printf("%c",c);
                fclose(f2);
            }
            else if(n==7)
            {
                printf("\n Pabna University of Science & Technology :\n\n");
                f2=fopen("PUST.txt","r");
                while((c=getc(f2)) !=EOF)
                    printf("%c",c);
                fclose(f2);
            }
            else if(n==8)
            {
                printf("\n Bangabandhu Sheikh Mujibur Rahman Science and Technology University : \n\n");
                f2=fopen("BSMRSTU.txt","r");
                while((c=getc(f2)) !=EOF)
                    printf("%c",c);
                fclose(f2);
            }
            printf("\n\nEnter any number to find the previous menu\n\n");
            scanf("%d",&b);
            if(b!=0)
                goto menu;
        }
        break;
    case 3:
        while(g!=-1)
        {
            printf("\n Enter 1 to know about University of Dhaka.\n");
            printf("\n Enter 2 to know about  University of Chittagong.\n");
            printf("\n Enter 3 to know about  University of Rajshahi.\n");
            printf("\n Enter 4 to know about Jahangirnagar University.\n");
            printf("\n Enter 5 to know about Khulna University.\n");
            printf("\n Enter 6 to know about  Jagannath University.\n");
            printf("\n Enter 7 to know about  Jatiya Kabi Kazi Nazrul Islam University.\n");
            printf("\n Enter 8 to know about  Comilla University.\n");
            printf("\n Enter 9 to know about  Begum Rokeya University.\n");
            printf("\n Enter 10 to know about University of Barisal.\n");
            printf("\n Enter 11 to know about Islamic University.\n");
            scanf("%d",&n);
            switch(n)
            {
            case 1:
                printf("\n Dhaka University :\n\n");
                f3=fopen("DU.txt","r");
                while((c=getc(f3)) !=EOF)
                    printf("%c",c);
                fclose(f3);
                break;
            case 2:
                printf("\n Chittagong University :\n\n");
                f3=fopen("CU.txt","r");
                while((c=getc(f3)) !=EOF)
                    printf("%c",c);
                fclose(f3);
                break;
            case 3:
                printf("\n Rajshahi University :\n\n");
                f3=fopen("RU.txt","r");
                while((c=getc(f3)) !=EOF)
                    printf("%c",c);
                fclose(f3);
                break;
            case 4:
                printf("\n Jahangirnagar University: \n\n");
                f3=fopen("JU.txt","r");
                while((c=getc(f3)) !=EOF)
                    printf("%c",c);
                fclose(f3);
                break;
            case 5:
                printf("\n Khulna University\n\n");
                f3=fopen("KU.txt","r");
                while((c=getc(f3)) !=EOF)
                    printf("%c",c);
                fclose(f3);
                break;
            case 6:
                printf("\n Jagannath University :\n\n");
                f3=fopen("JNU.txt","r");
                while((c=getc(f3)) !=EOF)
                    printf("%c",c);
                fclose(f3);
                break;
            case 7:
                printf("\n Jatiya Kabi Kazi Nazrul Islam University: \n\n");
                f3=fopen("JKKNIU.txt","r");
                while((c=getc(f3)) !=EOF)
                    printf("%c",c);
                fclose(f3);
                break;
            case 8:
                printf("\n  Details about Comilla University: \n\n");
                f3=fopen("COU.txt","r");
                while((c=getc(f3)) !=EOF)
                    printf("%c",c);
                fclose(f3);
                break;
            case 9:
                printf("\n Begum Rokeya University: \n\n");
                f3=fopen("BRU.txt","r");
                while((c=getc(f3)) !=EOF)
                    printf("%c",c);
                fclose(f3);
                break;
            case 10:
                printf("\n Barisal University\n\n");
                f3=fopen("BU.txt","r");
                while((c=getc(f3)) !=EOF)
                    printf("%c",c);
                fclose(f3);
                break;
            case 11:
                printf("\n Islamic University\n\n");
                f3=fopen("IU.txt","r");
                while((c=getc(f3)) !=EOF)
                    printf("%c",c);
                fclose(f3);
                break;
            }
            scanf("%d",&g);
            if(g!=0)
                goto menu;
        }
        break;
    case 4:
        while(d!=-1)
        {
            printf("\n Enter 1 to know  Bangladesh Agricultural University. \n");
            printf("\n Enter 2 to know  Bangabandhu Sheikh Mujibur Rahman Agricultural University. \n");
            printf("\n Enter 3 to know  Sher-e-Bangla Agricultural University. \n");
            printf("\n Enter 4 to know  Sylhet Agricultural University. \n");
            scanf("%d",&n);
            if(n==1)
            {
                printf("\n Bangladesh Agricultural University :\n\n");
                f4=fopen("BAU.txt","r");
                while((c=getc(f4)) !=EOF)
                    printf("%c",c);
                fclose(f4);
            }
            else if(n==2)
            {
                printf("\n Bangabandhu Sheikh Mujibur Rahman Agricultural University : \n\n");
                f4=fopen("BSMRAU.txt","r");
                while((c=getc(f4)) !=EOF)
                    printf("%c",c);
                fclose(f4);
            }
            else if(n==3)
            {
                printf("\n Sher-e-Bangla Agricultural University :\n\n");
                f4=fopen("SAU.txt","r");
                while((c=getc(f4)) !=EOF)
                    printf("%c",c);
                fclose(f4);
            }
            else if(n==4)
            {
                printf("\n Sylhet Agricultural University :\n\n");
                f4=fopen("SYAU.txt","r");
                while((c=getc(f4)) !=EOF)
                    printf("%c",c);
                fclose(f4);
            }
            scanf("%d",&d);
            if(d!=0)
                goto menu;
        }
        break;

    }
}
