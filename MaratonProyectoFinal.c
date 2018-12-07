#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

FILE *fd;

int main()
{
    int opc, J1, J2, J3, J4, J, R, i, p, x, y;     //J = Jugador    R = Ronda del juego
    char C[20][100], H[20][100], M[20][100], L[20][100], G[20][100], Cr[20][100], Hr[20][100], Mr[20][100], Lr[20][100], Gr[20][100], Re[100], c;
    srand(time(NULL));
    //////////////////////////////////////////////LLENADO DE ARREGLOS///////////////////////////////////////////////////////////
    char direccion0[] = "C:\\Users\\RODRI\\Desktop\\Preguntas\\Ciencias\\CP.txt";
    x=0;
    y=0;
    fd = fopen(direccion0,"r"); 
    if(fd == NULL)
    {
        printf("Error al leer el archivo");
    }
    else
    {
        while((c=fgetc(fd))!=EOF) 
        {
            if(c=='\n')
            {
                C[x][y]='\0';
                x=x+1;
                y=0;
            }
            else 
            {
                C[x][y]=c;
                y=y+1;
            }
        }
    }
    fclose(fd);
    
    char direccion1[] = "C:\\Users\\RODRI\\Desktop\\Preguntas\\Ciencias\\CR.txt";
    x=0;
    y=0;
    fd = fopen(direccion1,"r"); 
    if(fd == NULL)
    {
        printf("Error al leer el archivo");
    }
    else
    {
        while((c=fgetc(fd))!=EOF) 
        {
            if(c=='\n')
            {
                Cr[x][y]='\0';
                x=x+1;
                y=0;
            }
            else
            {
                Cr[x][y]=c;
                y=y+1;
            }
        }
    }
    fclose(fd);
    for(x=0;x<20;x++)
    {
        strlwr(Cr[x]);
    }
    
    char direccion2[] = "C:\\Users\\RODRI\\Desktop\\Preguntas\\Geografia\\GP.txt";
    x=0;
    y=0;
    fd = fopen(direccion2,"r"); 
    if(fd == NULL)
    {
        printf("Error al leer el archivo");
    }
    else
    {
        while((c=fgetc(fd))!=EOF) 
        {
            if(c=='\n')
            {
                G[x][y]='\0';
                x=x+1;
                y=0;
            }
            else
            {
                G[x][y]=c;
                y=y+1;
            }
        }
    }
    fclose(fd);
    
    char direccion3[] = "C:\\Users\\RODRI\\Desktop\\Preguntas\\Geografia\\GR.txt";
    x=0;
    y=0;
    fd = fopen(direccion3,"r"); 
    if(fd == NULL)
    {
        printf("Error al leer el archivo");
    }
    else
    {
        while((c=fgetc(fd))!=EOF) 
        {
            if(c=='\n')
            {
                Gr[x][y]='\0';
                x=x+1;
                y=0;
            }
            else
            {
                Gr[x][y]=c;
                y=y+1;
            }
        }
    }
    fclose(fd);
    for(x=0;x<20;x++)
    {
        strlwr(Gr[x]);
    }
    
    char direccion4[] = "C:\\Users\\RODRI\\Desktop\\Preguntas\\Historia\\HP.txt";
    x=0;
    y=0;
    fd = fopen(direccion4,"r"); 
    if(fd == NULL)
    {
        printf("Error al leer el archivo");
    }
    else
    {
        while((c=fgetc(fd))!=EOF) 
        {
            if(c=='\n')
            {
                H[x][y]='\0';
                x=x+1;
                y=0;
            }
            else
            {
                H[x][y]=c;
                y=y+1;
            }
        }
    }
    fclose(fd);
    
    char direccion5[] = "C:\\Users\\RODRI\\Desktop\\Preguntas\\Historia\\HR.txt";
    x=0;
    y=0;
    fd = fopen(direccion5,"r"); 
    if(fd == NULL)
    {
        printf("Error al leer el archivo");
    }
    else
    {
        while((c=fgetc(fd))!=EOF) 
        {
            if(c=='\n')
            {
                Hr[x][y]='\0';
                x=x+1;
                y=0;
            }
            else
            {
                Hr[x][y]=c;
                y=y+1;
            }
        }
    }
    fclose(fd);
    for(x=0;x<20;x++)
    {
        strlwr(Hr[x]);
    }
    
    char direccion6[] = "C:\\Users\\RODRI\\Desktop\\Preguntas\\Literatura\\LP.txt";
    x=0;
    y=0;
    fd = fopen(direccion6,"r"); 
    if(fd == NULL)
    {
        printf("Error al leer el archivo");
    }
    else
    {
        while((c=fgetc(fd))!=EOF) 
        {
            if(c=='\n')
            {
                L[x][y]='\0';
                x=x+1;
                y=0;
            }
            else
            {
                L[x][y]=c;
                y=y+1;
            }
        }
    }
    fclose(fd);
    
    char direccion7[] = "C:\\Users\\RODRI\\Desktop\\Preguntas\\Literatura\\LR.txt";
    x=0;
    y=0;
    fd = fopen(direccion7,"r"); 
    if(fd == NULL)
    {
        printf("Error al leer el archivo");
    }
    else
    {
        while((c=fgetc(fd))!=EOF) 
        {
            if(c=='\n')
            {
                Lr[x][y]='\0';
                x=x+1;
                y=0;
            }
            else
            {
                Lr[x][y]=c;
                y=y+1;
            }
        }
    }
    fclose(fd);
    for(x=0;x<20;x++)
    {
        strlwr(Lr[x]);
    }
    
    char direccion8[] = "C:\\Users\\RODRI\\Desktop\\Preguntas\\Matematicas\\MP.txt";
    x=0;
    y=0;
    fd = fopen(direccion8,"r"); 
    if(fd == NULL)
    {
        printf("Error al leer el archivo");
    }
    else
    {
        while((c=fgetc(fd))!=EOF) 
        {
            if(c=='\n')
            {
                M[x][y]='\0';
                x=x+1;
                y=0;
            }
            else
            {
                M[x][y]=c;
                y=y+1;
            }
        }
    }
    fclose(fd);
    
    char direccion9[] = "C:\\Users\\RODRI\\Desktop\\Preguntas\\Matematicas\\MR.txt";
    x=0;
    y=0;
    fd = fopen(direccion9,"r"); 
    if(fd == NULL)
    {
        printf("Error al leer el archivo");
    }
    else
    {
        while((c=fgetc(fd))!=EOF) 
        {
            if(c=='\n')
            {
                Mr[x][y]='\0';
                x=x+1;
                y=0;
            }
            else
            {
                Mr[x][y]=c;
                y=y+1;
            }
        }
    }
    fclose(fd);
    for(x=0;x<20;x++)
    {
        strlwr(Mr[x]);
    }
    ///////////////////////////////////////////////////// CODIGO DEL JUEGO//////////////////////////////////////////////////////////////////
    do
    {
        printf("\t\t\t\t\t\tBIENVENIDO A MARATON\n\t\t\t\t\t\t1.Nuevo Juego\n\t\t\t\t\t\t2.Instrucciones\n\t\t\t\t\t\t3.Salir\n\t\t\t\t\t\t");
        scanf("%d",&opc);
        system("cls");
        switch(opc)
        {
        case 1:
            do
            {
                printf("Cuantos jugadores seran?(minimo 2, maximo 4 jugadores)\n");
                scanf("%d", &J);
                system("cls");
                switch(J)   //Aqui se selecciona el numero de jugadores
                {
                case 2:
                    R=1;
                    J1=0;
                    J2=0;
                    while(J1!=42&&J2!=42)
                    {
                        printf("MARCADOR\nJ1 = %d\nJ2 = %d\n", J1, J2);
                        printf("Para iniciar la ronda ");
                        system("pause");
                        fflush(stdin);
                        system("cls");
                        i=rand()%5;
                        switch(i)
                        {
                        case 0:
                            for(i=0;i<2;i++)
                            {
                                printf("Ronda %d   Ciencias\n", R);
                                printf("Jugador %d\n", i+1);
                                p=rand()%20;
                                puts(C[p]);
                                printf("\n");
                                gets(Re);
                                strlwr(Re);
                                system("cls");
                                if(strcmp(Re,Cr[p])==0)
                                {
                                    switch(i)
                                    {
                                    case 0:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J1=J1+1;
                                        break;
                                    case 1:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J2=J2+1;
                                        break;

                                    }
                                }
                                else
                                {
                                    printf("Respuesta Incorrecta\n\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            R=R+1;
                            break;
                        case 1:
                            for(i=0;i<2;i++)
                            {
                                printf("Ronda %d   Historia\n", R);
                                printf("Jugador %d\n", i+1);
                                p=rand()%20;
                                puts(H[p]);
                                printf("\n");
                                gets(Re);
                                strlwr(Re);
                                system("cls");
                                if(strcmp(Re,Hr[p])==0)
                                {
                                    switch(i)
                                    {
                                    case 0:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J1=J1+1;
                                        break;
                                    case 1:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J2=J2+1;
                                        break;

                                    }
                                }
                                else
                                {
                                    printf("Respuesta Incorrecta\n\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            R=R+1;
                            break;
                        case 2:
                            for(i=0;i<2;i++)
                            {
                                printf("Ronda %d   Matematicas\n", R);
                                printf("Jugador %d\n", i+1);
                                p=rand()%20;
                                puts(M[p]);
                                printf("\n");
                                gets(Re);
                                strlwr(Re);
                                system("cls");
                                if(strcmp(Re,Mr[p])==0)
                                {
                                    switch(i)
                                    {
                                    case 0:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J1=J1+1;
                                        break;
                                    case 1:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J2=J2+1;
                                        break;

                                    }
                                }
                                else
                                {
                                    printf("Respuesta Incorrecta\n\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            R=R+1;
                            break;
                        case 3:
                            for(i=0;i<2;i++)
                            {
                                printf("Ronda %d   Literatura\n", R);
                                printf("Jugador %d\n", i+1);
                                p=rand()%20;
                                puts(L[p]);
                                printf("\n");
                                gets(Re);
                                strlwr(Re);
                                system("cls");
                                if(strcmp(Re,Lr[p])==0)
                                {
                                    switch(i)
                                    {
                                    case 0:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J1=J1+1;
                                        break;
                                    case 1:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J2=J2+1;
                                        break;

                                    }
                                }
                                else
                                {
                                    printf("Respuesta Incorrecta\n\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            R=R+1;
                            break;
                        case 4:
                            for(i=0;i<2;i++)
                            {
                                printf("Ronda %d   Geografia\n", R);
                                printf("Jugador %d\n", i+1);
                                p=rand()%20;
                                puts(G[p]);
                                printf("\n");
                                gets(Re);
                                strlwr(Re);
                                system("cls");
                                if(strcmp(Re,Gr[p])==0)
                                {
                                    switch(i)
                                    {
                                    case 0:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J1=J1+1;
                                        break;
                                    case 1:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J2=J2+1;
                                        break;

                                    }
                                }
                                else
                                {
                                    printf("Respuesta Incorrecta\n\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            R=R+1;
                            break;
                        }
                    }
                    break;
                case 3:
                    R=1;
                    J1=0;
                    J2=0;
                    J3=0;
                    while(J1!=42&&J2!=42&&J3!=42)
                    {
                        printf("MARCADOR\nJ1 = %d\nJ2 = %d\nJ3 = %d\n", J1, J2, J3);
                        printf("Para iniciar la ronda ");
                        system("pause");
                        fflush(stdin);
                        system("cls");
                        i=rand()%5;
                        switch(i)
                        {
                        case 0:
                            for(i=0;i<3;i++)
                            {
                                printf("Ronda %d   Ciencias\n", R);
                                printf("Jugador %d\n", i+1);
                                p=rand()%20;
                                puts(C[p]);
                                printf("\n");
                                gets(Re);
                                strlwr(Re);
                                system("cls");
                                if(strcmp(Re,Cr[p])==0)
                                {
                                    switch(i)
                                    {
                                    case 0:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J1=J1+1;
                                        break;
                                    case 1:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J2=J2+1;
                                        break;
                                    case 2:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J3=J3+1;
                                        break;

                                    }
                                }
                                else
                                {
                                    printf("Respuesta Incorrecta\n\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            R=R+1;
                            break;
                        case 1:
                            for(i=0;i<3;i++)
                            {
                                printf("Ronda %d   Historia\n", R);
                                printf("Jugador %d\n", i+1);
                                p=rand()%20;
                                puts(H[p]);
                                printf("\n");
                                gets(Re);
                                strlwr(Re);
                                system("cls");
                                if(strcmp(Re,Hr[p])==0)
                                {
                                    switch(i)
                                    {
                                    case 0:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J1=J1+1;
                                        break;
                                    case 1:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J2=J2+1;
                                        break;
                                    case 2:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J3=J3+1;
                                        break;

                                    }
                                }
                                else
                                {
                                    printf("Respuesta Incorrecta\n\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            R=R+1;
                            break;
                        case 2:
                            for(i=0;i<3;i++)
                            {
                                printf("Ronda %d   Matematicas\n", R);
                                printf("Jugador %d\n", i+1);
                                p=rand()%20;
                                puts(M[p]);
                                printf("\n");
                                gets(Re);
                                strlwr(Re);
                                system("cls");
                                if(strcmp(Re,Mr[p])==0)
                                {
                                    switch(i)
                                    {
                                    case 0:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J1=J1+1;
                                        break;
                                    case 1:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J2=J2+1;
                                        break;
                                    case 2:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J3=J3+1;
                                        break;

                                    }
                                }
                                else
                                {
                                    printf("Respuesta Incorrecta\n\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            R=R+1;
                            break;
                        case 3:
                            for(i=0;i<3;i++)
                            {
                                printf("Ronda %d   Literatura\n", R);
                                printf("Jugador %d\n", i+1);
                                p=rand()%20;
                                puts(L[p]);
                                printf("\n");
                                gets(Re);
                                strlwr(Re);
                                system("cls");
                                if(strcmp(Re,Lr[p])==0)
                                {
                                    switch(i)
                                    {
                                    case 0:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J1=J1+1;
                                        break;
                                    case 1:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J2=J2+1;
                                        break;
                                    case 2:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J3=J3+1;
                                        break;

                                    }
                                }
                                else
                                {
                                    printf("Respuesta Incorrecta\n\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            R=R+1;
                            break;
                        case 4:
                            for(i=0;i<3;i++)
                            {
                                printf("Ronda %d   Geografia\n", R);
                                printf("Jugador %d\n", i+1);
                                p=rand()%20;
                                puts(G[p]);
                                printf("\n");
                                gets(Re);
                                strlwr(Re);
                                system("cls");
                                if(strcmp(Re,Gr[p])==0)
                                {
                                    switch(i)
                                    {
                                    case 0:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J1=J1+1;
                                        break;
                                    case 1:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J2=J2+1;
                                        break;
                                    case 2:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J3=J3+1;
                                        break;

                                    }
                                }
                                else
                                {
                                    printf("Respuesta Incorrecta\n\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            R=R+1;
                            break;
                        }
                    }
                    break;
                case 4:
                    R=1;
                    J1=0;
                    J2=0;
                    J3=0;
                    J4=0;
                    while(J1!=42&&J2!=42&&J3!=42&&J4!=42)
                    {
                        printf("MARCADOR\nJ1 = %d\nJ2 = %d\nJ3 = %d\nJ4 = %d\n", J1, J2, J3, J4);
                        printf("Para iniciar la ronda ");
                        system("pause");
                        fflush(stdin);
                        system("cls");
                        i=rand()%5;
                        switch(i)
                        {
                        case 0:
                            for(i=0;i<4;i++)
                            {
                                printf("Ronda %d   Ciencias\n", R);
                                printf("Jugador %d\n", i+1);
                                p=rand()%20;
                                puts(C[p]);
                                printf("\n");
                                gets(Re);
                                strlwr(Re);
                                system("cls");
                                if(strcmp(Re,Cr[p])==0)
                                {
                                    switch(i)
                                    {
                                    case 0:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J1=J1+1;
                                        break;
                                    case 1:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J2=J2+1;
                                        break;
                                    case 2:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J3=J3+1;
                                        break;
                                    case 3:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J4=J4+1;
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Respuesta Incorrecta\n\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            R=R+1;
                            break;
                        case 1:
                            for(i=0;i<4;i++)
                            {
                                printf("Ronda %d   Historia\n", R);
                                printf("Jugador %d\n", i+1);
                                p=rand()%20;
                                puts(H[p]);
                                printf("\n");
                                gets(Re);
                                strlwr(Re);
                                system("cls");
                                if(strcmp(Re,Hr[p])==0)
                                {
                                    switch(i)
                                    {
                                    case 0:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J1=J1+1;
                                        break;
                                    case 1:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J2=J2+1;
                                        break;
                                    case 2:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J3=J3+1;
                                        break;
                                    case 3:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J4=J4+1;
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Respuesta Incorrecta\n\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            R=R+1;
                            break;
                        case 2:
                            for(i=0;i<4;i++)
                            {
                                printf("Ronda %d   Matematicas\n", R);
                                printf("Jugador %d\n", i+1);
                                p=rand()%20;
                                puts(M[p]);
                                printf("\n");
                                gets(Re);
                                strlwr(Re);
                                system("cls");
                                if(strcmp(Re,Mr[p])==0)
                                {
                                    switch(i)
                                    {
                                    case 0:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J1=J1+1;
                                        break;
                                    case 1:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J2=J2+1;
                                        break;
                                    case 2:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J3=J3+1;
                                        break;
                                    case 3:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J4=J4+1;
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Respuesta Incorrecta\n\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            R=R+1;
                            break;
                        case 3:
                            for(i=0;i<4;i++)
                            {
                                printf("Ronda %d   Literatura\n", R);
                                printf("Jugador %d\n", i+1);
                                p=rand()%20;
                                puts(L[p]);
                                printf("\n");
                                gets(Re);
                                strlwr(Re);
                                system("cls");
                                if(strcmp(Re,Lr[p])==0)
                                {
                                    switch(i)
                                    {
                                    case 0:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J1=J1+1;
                                        break;
                                    case 1:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J2=J2+1;
                                        break;
                                    case 2:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J3=J3+1;
                                        break;
                                    case 3:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J4=J4+1;
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Respuesta Incorrecta\n\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            R=R+1;
                            break;
                        case 4:
                            for(i=0;i<4;i++)
                            {
                                printf("Ronda %d   Geografia\n", R);
                                printf("Jugador %d\n", i+1);
                                p=rand()%20;
                                puts(G[p]);
                                printf("\n");
                                gets(Re);
                                strlwr(Re);
                                system("cls");
                                if(strcmp(Re,Gr[p])==0)
                                {
                                    switch(i)
                                    {
                                    case 0:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J1=J1+1;
                                        break;
                                    case 1:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J2=J2+1;
                                        break;
                                    case 2:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J3=J3+1;
                                        break;
                                    case 3:
                                        printf("Respuesta Correcta!\n\n");
                                        system("pause");
                                        system("cls");
                                        J4=J4+1;
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Respuesta Incorrecta\n\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            R=R+1;
                            break;
                        }
                    }
                    break;
                default:
                    printf("Error, cantidad invalida de jugadores\n\n");
                    system("pause");
                    system("cls");
                    break;
                }
            }while(J1!=42&&J2!=42&&J3!=42&&J4!=42);
            if(J1==42)
            {
                J=1;
            }
            if(J2==42)
            {
                J=2;
            }
            if(J3==42)
            {
                J=3;
            }
            if(J4==42)
            {
                J=4;
            }
            printf("El ganador es el Jugador %d  FELICIDADES!!!", J);
            Sleep(5000);
            system("cls");
            break;
        case 2: printf("\nBienvenido a Maraton!\nEl juego consiste en contestar correctamente una serie de preguntas de cultura general.\nCada jugador tendra un turno por ronda para contestar una pregunta aleatoria.\nEl primer jugador en obtener 42 puntos es el ganador.\nNo utilices acentos ni espacios al final de tus respuestas\nRevisa que antes de apretar enter hayas escrito correctamente tu respuesta\n\n");
                system("pause");
                system("cls");
            break;
        case 3: printf("\n\n\t\t\t\t\t\tHasta pronto!!\n\n\n");
            break;
        default: printf("Opcion invalida");
            break;


        }
    }while(opc!=3);
    return 0;
}
