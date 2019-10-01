#include<stdio.h>
int main ()
{
    int P_Code[2],P_Unit[2],i;
    float P_Price[2],joha;

    for (i=0;i<2;i++)
    {
        printf("Enter your Product Code Unit Price: ");
        scanf("%d%d%f", &P_Code[i],&P_Unit[i],&P_Price[i]);
    }
    //joha=((P_Price[0]*P_Unit[0])+(P_Price[1]+P_Unit[1]));
    joha=(P_Price[0]*P_Unit[0])+(P_Price[1]*P_Unit[1])+(P_Price[2]*P_Unit[2]);

    printf("VALOR A PAGAR: R$ %.2f\n", joha);				//Created By Ajm Joha
    return 0;
}
