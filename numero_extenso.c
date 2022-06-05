#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


void numeroextenso (int num, char *nue);
void numeroatemil (int num, char *nue);
void numeroatemilhao (int num, char *nue);
void numeroatebilhao (int num, char *nue);


main ()
{
    setlocale(LC_ALL,"Portuguese");
    int valor, c,d,u;
    char nxt[500];
    printf("Digite o valor entre 0 e 999.999.999: ");
    scanf("%d", &valor);
    getchar();
    printf("\nNúmero por extenso: ");
    numeroextenso(valor, nxt);
}


void numeroextenso (int num, char *nue)
{
    int valor, c,d,u;
    char centena [20], dezena[20], unidade[20], numext[60];
    strcpy(centena, "");
    strcpy(dezena, "");
    strcpy(unidade, "");
    strcpy(numext, "");
    valor=num;

    if ((valor >0) && (valor < 999))
    {
        numeroatemil (num,*nue);
    }

    if ((valor >999) && (valor < 999999))
    {
        numeroatemilhao (num,*nue);
    }

    if ((valor >999999) && (valor < 999999999))
    {
        numeroatebilhao (num,*nue);
    }
}

//CASE ATÉ 999-----------------------------------------------------------------------------------------------------------------------
void numeroatemil (int num, char *nue)
{
    int valor, c,d,u;
    char centena [20], dezena[20], unidade[20], numext[60];
    strcpy(centena, "");
    strcpy(dezena, "");
    strcpy(unidade, "");
    strcpy(numext, "");
    valor=num;

    if ((valor >0) && (valor < 999))
    {
        c = (int) valor / 100;
        d = (int) ((valor % 100) / 10);
        u = (int) ((valor % 100) % 10);



        switch (c)
        {
        case 1:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "cem");
            }
            else
            {
                strcpy (centena, "cento e ");
            }
        }
        break;
        case 2:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "duzentos ");
            }
            else
            {
                strcpy (centena, "duzentos e ");
            }
        }
        break;
        case 3:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "trezentos ");
            }
            else
            {
                strcpy (centena, "trezentos e ");
            }
        }
        break;
        case 4:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "quatrocentos ");
            }
            else
            {
                strcpy (centena, "quatrocentos e ");
            }
        }
        break;
        case 5:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "quinhentos ");
            }
            else
            {
                strcpy (centena, "quinhentos e ");
            }
        }
        break;
        case 6:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "seiscentos ");
            }
            else
            {
                strcpy (centena, "seiscentos e ");
            }
        }
        break;
        case 7:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "setecentos ");
            }
            else
            {
                strcpy (centena, "setecentos e ");
            }
        }
        break;
        case 8:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "oitocentos ");
            }
            else
            {
                strcpy (centena, "oitocentos e ");
            }
        }
        break;
        case 9:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "novecentos ");
            }
            else
            {
                strcpy (centena, "novecentos e ");
            }
        }
        break;
        }



        switch (d)
        {
        case 2:
        {
            if (u==0)
            {
                strcpy (dezena, "vinte ");
            }
            else
            {
                strcpy (dezena, "vinte e ");
            }
        }
        break;
        case 3:
        {
            if (u==0)
            {
                strcpy (dezena, "trinta ");
            }
            else
            {
                strcpy (dezena, "trinta e ");
            }
        }
        break;
        case 4:
        {
            if (u==0)
            {
                strcpy (dezena, "quarenta ");
            }
            else
            {
                strcpy (dezena, "quarenta e ");
            }
        }
        break;
        case 5:
        {
            if (u==0)
            {
                strcpy (dezena, "cinquenta ");
            }
            else
            {
                strcpy (dezena, "cinquenta e ");
            }
        }
        break;
        case 6:
        {
            if (u==0)
            {
                strcpy (dezena, "sessenta ");
            }
            else
            {
                strcpy (dezena, "sessenta e ");
            }
        }
        break;
        case 7:
        {
            if (u==0)
            {
                strcpy (dezena, "setenta ");
            }
            else
            {
                strcpy (dezena, "setenta e ");
            }
        }
        break;
        case 8:
        {
            if (u==0)
            {
                strcpy (dezena, "oitenta ");
            }
            else
            {
                strcpy (dezena, "oitenta e ");
            }
        }
        break;
        case 9:
        {
            if (u==0)
            {
                strcpy (dezena, "noventa ");
            }
            else
            {
                strcpy (dezena, "noventa e ");
            }
        }
        break;
        case 1:
        {
            if (u==0)
                strcpy (dezena, "dez");
            if (u==1)
                strcpy (dezena, "onze");
            if (u==2)
                strcpy (dezena, "doze");
            if (u==3)
                strcpy (dezena, "treze");
            if (u==4)
                strcpy (dezena, "catorze");
            if (u==5)
                strcpy (dezena, "quinze");
            if (u==6)
                strcpy (dezena, "dezesseis");
            if (u==7)
                strcpy (dezena, "dezesete");
            if (u==8)
                strcpy (dezena, "dezoito");
            if (u==9)
                strcpy (dezena, "dezenove");
        }
        break;
        }


        if (d!=1)
        {
            switch (u)
            {
            case 1:
            {
                strcpy(unidade, "um");
            }
            break;
            case 2:
            {
                strcpy(unidade, "dois");
            }
            break;
            case 3:
            {
                strcpy(unidade, "três");
            }
            break;
            case 4:
            {
                strcpy(unidade, "quatro");
            }
            break;
            case 5:
            {
                strcpy(unidade, "cinco");
            }
            break;
            case 6:
            {
                strcpy(unidade, "seis");
            }
            break;
            case 7:
            {
                strcpy(unidade, "sete");
            }
            break;
            case 8:
            {
                strcpy(unidade, "oito");
            }
            break;
            case 9:
            {
                strcpy(unidade, "nove");
            }
            break;
            }
        }

        strcat(numext, centena);
        strcat(numext, dezena);
        strcat(numext, unidade);
        printf("%s \n", numext);
    }
}

//CASE ATÉ 999.999-----------------------------------------------------------------------------------------------------------------------
void numeroatemilhao (int num, char *nue)
{
    int valor, c,d,u,sobra;
    char centena [20], dezena[20], unidade[20], numext[60],aux[60];
    strcpy(centena, "");
    strcpy(dezena, "");
    strcpy(unidade, "");
    strcpy(numext, "");
    valor=num;

    if ((valor >999) && (valor < 999999))
    {
        c = (int) valor / 100000;
        d = (int) ((valor -c*100000) / 10000);
        u = (int) ((valor -c*100000 - d*10000)/1000);
        sobra = (int) ((valor -c*100000 - d*10000)-u*1000);

        switch (c)
        {
        case 1:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "cem");
            }
            else
            {
                strcpy (centena, "cento e ");
            }
        }
        break;
        case 2:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "duzentos ");
            }
            else
            {
                strcpy (centena, "duzentos e ");
            }
        }
        break;
        case 3:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "trezentos ");
            }
            else
            {
                strcpy (centena, "trezentos e ");
            }
        }
        break;
        case 4:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "quatrocentos ");
            }
            else
            {
                strcpy (centena, "quatrocentos e ");
            }
        }
        break;
        case 5:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "quinhentos ");
            }
            else
            {
                strcpy (centena, "quinhentos e ");
            }
        }
        break;
        case 6:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "seiscentos ");
            }
            else
            {
                strcpy (centena, "seiscentos e ");
            }
        }
        break;
        case 7:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "setecentos ");
            }
            else
            {
                strcpy (centena, "setecentos e ");
            }
        }
        break;
        case 8:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "oitocentos ");
            }
            else
            {
                strcpy (centena, "oitocentos e ");
            }
        }
        break;
        case 9:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "novecentos ");
            }
            else
            {
                strcpy (centena, "novecentos e ");
            }
        }
        break;
        }





        switch (d)
        {
        case 2:
        {
            if (u==0)
            {
                strcpy (dezena, "vinte ");
            }
            else
            {
                strcpy (dezena, "vinte e ");
            }
        }
        break;
        case 3:
        {
            if (u==0)
            {
                strcpy (dezena, "trinta ");
            }
            else
            {
                strcpy (dezena, "trinta e ");
            }
        }
        break;
        case 4:
        {
            if (u==0)
            {
                strcpy (dezena, "quarenta ");
            }
            else
            {
                strcpy (dezena, "quarenta e ");
            }
        }
        break;
        case 5:
        {
            if (u==0)
            {
                strcpy (dezena, "cinquenta ");
            }
            else
            {
                strcpy (dezena, "cinquenta e ");
            }
        }
        break;
        case 6:
        {
            if (u==0)
            {
                strcpy (dezena, "sessenta ");
            }
            else
            {
                strcpy (dezena, "sessenta e ");
            }
        }
        break;
        case 7:
        {
            if (u==0)
            {
                strcpy (dezena, "setenta ");
            }
            else
            {
                strcpy (dezena, "setenta e ");
            }
        }
        break;
        case 8:
        {
            if (u==0)
            {
                strcpy (dezena, "oitenta ");
            }
            else
            {
                strcpy (dezena, "oitenta e ");
            }
        }
        break;
        case 9:
        {
            if (u==0)
            {
                strcpy (dezena, "noventa ");
            }
            else
            {
                strcpy (dezena, "noventa e ");
            }
        }
        break;
        case 1:
        {
            if (u==0)
                strcpy (dezena, "dez");
            if (u==1)
                strcpy (dezena, "onze");
            if (u==2)
                strcpy (dezena, "doze");
            if (u==3)
                strcpy (dezena, "treze");
            if (u==4)
                strcpy (dezena, "catorze");
            if (u==5)
                strcpy (dezena, "quinze");
            if (u==6)
                strcpy (dezena, "dezesseis");
            if (u==7)
                strcpy (dezena, "dezesete");
            if (u==8)
                strcpy (dezena, "dezoito");
            if (u==9)
                strcpy (dezena, "dezenove");
        }
        break;
        }

        switch (u)
        {
        case 1:
        {
            strcpy(unidade, "um");
        }
        break;
        case 2:
        {
            strcpy(unidade, "dois");
        }
        break;
        case 3:
        {
            strcpy(unidade, "três");
        }
        break;
        case 4:
        {
            strcpy(unidade, "quatro");
        }
        break;
        case 5:
        {
            strcpy(unidade, "cinco");
        }
        break;
        case 6:
        {
            strcpy(unidade, "seis");
        }
        break;
        case 7:
        {
            strcpy(unidade, "sete");
        }
        break;
        case 8:
        {
            strcpy(unidade, "oito");
        }
        break;
        case 9:
        {
            strcpy(unidade, "nove");
        }
        break;
        }

        strcat(numext, centena);
        strcat(numext, dezena);
        strcat(numext, unidade);
        printf("%s mil ", numext);
        if (sobra !=0)
        {
            printf("e ");
            numeroatemil (sobra,*aux);
        }


    }
}
//CASE ATÉ 999.999.999-----------------------------------------------------------------------------------------------------------------------
void numeroatebilhao (int num, char *nue)
{
    int valor, c,d,u,sobra;
    char centena [20], dezena[20], unidade[20], numext[60],aux[60];
    strcpy(centena, "");
    strcpy(dezena, "");
    strcpy(unidade, "");
    strcpy(numext, "");
    valor=num;
    if ((valor >999999) && (valor < 999999999))
    {
        c = (int) valor / 100000000;
        d = (int) ((valor -c*100000000) / 10000000);
        u = (int) ((valor -c*100000000 - d*10000000)/1000000);
        sobra = (int) ((valor -c*100000000 - d*10000000)-u*1000000);
        switch (c)
        {
        case 1:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "cem");
            }
            else
            {
                strcpy (centena, "cento e ");
            }
        }
        break;
        case 2:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "duzentos ");
            }
            else
            {
                strcpy (centena, "duzentos e ");
            }
        }
        break;
        case 3:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "trezentos ");
            }
            else
            {
                strcpy (centena, "trezentos e ");
            }
        }
        break;
        case 4:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "quatrocentos ");
            }
            else
            {
                strcpy (centena, "quatrocentos e ");
            }
        }
        break;
        case 5:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "quinhentos ");
            }
            else
            {
                strcpy (centena, "quinhentos e ");
            }
        }
        break;
        case 6:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "seiscentos ");
            }
            else
            {
                strcpy (centena, "seiscentos e ");
            }
        }
        break;
        case 7:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "setecentos ");
            }
            else
            {
                strcpy (centena, "setecentos e ");
            }
        }
        break;
        case 8:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "oitocentos ");
            }
            else
            {
                strcpy (centena, "oitocentos e ");
            }
        }
        break;
        case 9:
        {
            if ((d==0) && (u==0))
            {
                strcpy (centena, "novecentos ");
            }
            else
            {
                strcpy (centena, "novecentos e ");
            }
        }
        break;
        }
        switch (d)
        {
        case 2:
        {
            if (u==0)
            {
                strcpy (dezena, "vinte ");
            }
            else
            {
                strcpy (dezena, "vinte e ");
            }
        }
        break;
        case 3:
        {
            if (u==0)
            {
                strcpy (dezena, "trinta ");
            }
            else
            {
                strcpy (dezena, "trinta e ");
            }
        }
        break;
        case 4:
        {
            if (u==0)
            {
                strcpy (dezena, "quarenta ");
            }
            else
            {
                strcpy (dezena, "quarenta e ");
            }
        }
        break;
        case 5:
        {
            if (u==0)
            {
                strcpy (dezena, "cinquenta ");
            }
            else
            {
                strcpy (dezena, "cinquenta e ");
            }
        }
        break;
        case 6:
        {
            if (u==0)
            {
                strcpy (dezena, "sessenta ");
            }
            else
            {
                strcpy (dezena, "sessenta e ");
            }
        }
        break;
        case 7:
        {
            if (u==0)
            {
                strcpy (dezena, "setenta ");
            }
            else
            {
                strcpy (dezena, "setenta e ");
            }
        }
        break;
        case 8:
        {
            if (u==0)
            {
                strcpy (dezena, "oitenta ");
            }
            else
            {
                strcpy (dezena, "oitenta e ");
            }
        }
        break;
        case 9:
        {
            if (u==0)
            {
                strcpy (dezena, "noventa ");
            }
            else
            {
                strcpy (dezena, "noventa e ");
            }
        }
        break;
        case 1:
        {
            if (u==0)
                strcpy (dezena, "dez");
            if (u==1)
                strcpy (dezena, "onze");
            if (u==2)
                strcpy (dezena, "doze");
            if (u==3)
                strcpy (dezena, "treze");
            if (u==4)
                strcpy (dezena, "catorze");
            if (u==5)
                strcpy (dezena, "quinze");
            if (u==6)
                strcpy (dezena, "dezesseis");
            if (u==7)
                strcpy (dezena, "dezesete");
            if (u==8)
                strcpy (dezena, "dezoito");
            if (u==9)
                strcpy (dezena, "dezenove");
        }
        break;
        }
        switch (u)
        {
        case 1:
        {
            strcpy(unidade, "um");
        }
        break;
        case 2:
        {
            strcpy(unidade, "dois");
        }
        break;
        case 3:
        {
            strcpy(unidade, "três");
        }
        break;
        case 4:
        {
            strcpy(unidade, "quatro");
        }
        break;
        case 5:
        {
            strcpy(unidade, "cinco");
        }
        break;
        case 6:
        {
            strcpy(unidade, "seis");
        }
        break;
        case 7:
        {
            strcpy(unidade, "sete");
        }
        break;
        case 8:
        {
            strcpy(unidade, "oito");
        }
        break;
        case 9:
        {
            strcpy(unidade, "nove");
        }
        break;
        }
        strcat(numext, centena);
        strcat(numext, dezena);
        strcat(numext, unidade);
        printf(" %s milhões\n", numext);
        if (sobra !=0)
        {
            printf("e ");
            numeroatemilhao (sobra,*aux);
        }
    }
}
