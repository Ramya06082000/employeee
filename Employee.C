#include <stdio.h>

#include <string.h>
char fn();
char ln();
char f[100];
char fn1();
char id();
char no();
int s=0,s1=0,s2=0,s3=0,s4=0;
struct emplye
{
    char firstname[100],lastname[100],fathername[100],empid[100],phonenumber[100],designation[100];
    
    long int salary;
};
struct emplye e[10];
int main()
{
    
    for(int i=0;i<=9;i++)
    {
        printf("enter firstname: ");
        s++;
        fn(s);
        printf("enter last name: ");
        s1++;
        ln(s1);
        printf("enter father name");
        s2++;
        fn1(s2);
        printf("enter employe id");
        s3++;
        id(s3);
        printf("enter phone number");
        s4++;
        no(s4);
        printf("enter designation");
        scanf("%s",e[i].designation);
        printf("enter salary");
        scanf("%ld",&e[i].salary);
        
    }
    for(int i=0;i<=1;i++)
    {
        printf("%s %s %s\n",e[i].firstname,e[i].lastname,e[i].fathername);
        printf("%s \n",e[i].empid);
        printf("%s \n",e[i].phonenumber);
        printf("%s \n",e[i].designation);
        printf("%ld \n",e[i].salary);
        
    }
    return 0;
}

char fn(int k)
{
    int count=0;
      scanf("%s",f);//ram=3
        for(int j=0;j<strlen(f);j++)
        {
            if((f[j] >= 'a' && f[j] <= 'z') || (f[j] >= 'A' && f[j] <= 'Z'))
            {
                count++;
            }
            
        }
        if(count==strlen(f))
        {
            
            strcpy(e[k-1].firstname,f);
            strcpy(f, "");
        }
        else
        {
        printf("Verify the data entered");
        fn(k);
        }
        
}
char ln(int k)
{
    int count=0;
      scanf("%s",f);
        for(int j=0;j<strlen(f);j++)
        {
            if((f[j] >= 'a' && f[j] <= 'z') || (f[j] >= 'A' && f[j] <= 'Z'))
            {
                count++;
            }
            
        }
        if(count==strlen(f))
        {
            
            strcpy(e[k-1].lastname,f);
            strcpy(f, "");
        }
        else
        {
        printf("Verify the data entered: ");
        ln(k);
        }
}

       
char fn1(int k)
{
    int count=0;
      scanf("%s",f);
        for(int j=0;j<strlen(f);j++)
        {
            if((f[j] >= 'a' && f[j] <= 'z') || (f[j] >= 'A' && f[j] <= 'Z'))
            {
                count++;
            }
            
        }
        
        if(count==strlen(f))
        {
            
            strcpy(e[k-1].fathername,f);
            strcpy(f, "");
        }
        else
        {
        printf("Verify the data entered: ");
        fn1(k);
        }
        
}

char id(int k)
{
    int flag=0,result;
    
    if(k==1)
    {
    scanf("%s",e[k-1].empid);
    }
    else
    {
        scanf("%s",f);
        int l=k;
        
        for(int i=0;i<k-1;i++)
        {
            result=strcmp(f,e[i].empid);
            if(result==0)
            {
            flag++;
            break;
            }
        }
        if(flag!=0)
         {
        printf("invalid");
        id(k);
          }
        else
         {
         strcpy(e[k-1].empid,f);
            strcpy(f, "");
        
          }
    }
    
}

char no(int k)
{
    char temp[15];
    scanf("%s",temp);
    int flag=0,result;
    
    
    if((k==1)&&(temp[0]=='6'||temp[0]=='7'||temp[0]=='8'||temp[0]=='9')&&(strlen(temp)==10))
    {  
        strcpy(e[k-1].phonenumber,temp);
    }
    else if((temp[0]=='6'||temp[0]=='7'||temp[0]=='8'||temp[0]=='9')&&(strlen(temp)==10))
    {
        strcpy(f,temp);
        for(int i=0;i<k-1;i++)
        {
            result=strcmp(f,e[i].phonenumber);
            if(result==0)
            {
            flag++;
            break;
            }
        }
        if(flag!=0)
         {
        printf("invalids");
        no(k);
          }
        else
         {
            strcpy(e[k-1].phonenumber,f);
            strcpy(f, "");
            strcpy(temp,"");
        
          }
          
    }
    else
    {
         printf("invalidss");
         no(k);
    }
    
}