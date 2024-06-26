#include <stdio.h>

int counter (int decimal) 
{
    int digits=0;
    while (decimal>=100000)//we must first determine the output string length
    {
        decimal-=100000;
        digits+=1;
    }
    while (decimal>=90000)
    {
        decimal-=90000;
        digits+=2;
    }
    while (decimal>=50000)
    {
        decimal-=50000;
        digits+=1;
    }
    while (decimal>=40000)
    {
        decimal-=40000;
        digits+=2;
    }
    while (decimal>=10000)
    {
        decimal-=10000;
        digits+=1;
    }
    while (decimal>=9000)
    {
        decimal-=9000;
        digits+=2;
    }
    while (decimal>=5000)
    {
        decimal-=5000;
        digits+=1;
    }
    while (decimal>=4000)
    {
        decimal-=4000;
        digits+=2;
    }
    while (decimal>=1000)
    {
        decimal-=1000;
        digits+=1;
    }
    while (decimal>=900)
    {
        decimal-=900;
        digits+=2;
    }
    while (decimal>=500)
    {
        decimal-=500;
        digits+=1;
    }
        while (decimal>=400)
    {
        decimal-=400;
        digits+=2;
    }
    while (decimal>=100)
    {
        decimal-=100;
        digits+=1;
    }
    while (decimal>=90)
    {
        decimal-=90;
        digits+=2;
    }
    while (decimal>=50)
    {
        decimal-=50;
        digits+=1;
    }
    while (decimal>=40)
    {
        decimal-=40;
        digits+=2;
    }
    while (decimal>=10)
    {
        decimal-=10;
        digits+=1;
    }
    while (decimal>=9)
    {
        decimal-=9;
        digits+=2;
    }
        while (decimal>=5)
    {
        decimal-=5;
        digits+=1;
    }
    while (decimal>=4)
    {
        decimal-=4;
        digits+=2;
    }
    while (decimal>=1)
    {
        decimal-=1;
        digits+=1;
    }
    //digits now stores the number of digits in our Roman numeral assuming we start at
    //digit zero and add '\0' at the end
    return digits;
}
void builder(char *output,int length, int input)
{
    int i=0;
    while (input>=100000)
    {
        input-=100000;
        *(output+i)='ↈ';
    }
    while (input>=90000)
    {
        input-=90000;
        *(output+i)='ↇ';
        i++;
        *(output+i)='ↈ';
        i++;
    }
    while (input>=50000)
    {
        input-=50000;
        *(output+i)='ↇ';
        i++;
    }
    while (input>=40000)
    {
        input-=40000;
        *(output+i)='X̅';
        i++;
        *(output+i)='ↇ';
        i++;
    }
    while (input>=10000)
    {
        input-=10000;
        *(output+i)='X̅';
        i++;
    }
    while (input>=9000)
    {
        input-=9000;
        *(output+i)='M';
        i++;
        *(output+i)='X̅';
        i++;
    }
    while (input>=5000)
    {
        input-=5000;
        *(output+i)='V̅';
        i++;
    }
    while (input>=4000)
    {
        input-=4000;
        *(output+i)='M';
        i++;
        *(output+i)='V̅';
        i++;
    }
    while (input>=1000)
    {
        input-=1000;
        *(output+i)='M';
        i++;
    }
    while (input>=900)
    {
        input-=900;
        *(output+i)='C';
        i++;
        *(output+i)='M';
        i++;
    }
    while (input>=500)
    {
        input-=500;
        *(output+i)='D';
        i++;
    }
        while (input>=400)
    {
        input-=400;
        *(output+i)='C';
        i++;
        *(output+i)='D';
        i++;
    }
    while (input>=100)
    {
        input-=100;
        *(output+i)='C';
        i++;
    }
    while (input>=90)
    {
        input-=90;
        *(output+i)='X';
        i++;
        *(output+i)='C';
        i++;
    }
    while (input>=50)
    {
        input-=50;
        *(output+i)='L';
        i++;
    }
    while (input>=40)
    {
        input-=40;
        *(output+i)='X';
        i++;
        *(output+i)='L';
        i++;
    }
    while (input>=10)
    {
        input-=10;
        *(output+i)='X';
        i++;
    }
    while (input>=9)
    {
        input-=9;
        *(output+i)='I';
        i++;
        *(output+i)='X';
        i++;
    }
        while (input>=5)
    {
        input-=5;
        *(output+i)='V';
        i++;
    }
    while (input>=4)
    {
        input-=4;
        *(output+i)='I';
        i++;
        *(output+i)='V';
        i++;
    }
    while (input>=1)
    {
        input-=1;
        *(output+i)='I';
        i++;
    }
    *(output+i)='\0';
}

int main() {
    int length, i, input;
    printf("Enter a number, and the program will convert to Roman numeral\n");
    scanf("%d", &input);
    length = counter(input);
    char output[length + 1];  // Allocate enough space for the output string
    builder(output, length, input);
    printf("%s", output);
    return 0;
}