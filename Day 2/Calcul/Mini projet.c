// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    // Write C code here
 int choix;
double N1,N2,S;
char menu [400]= "1=addition \n 2=soustration \n 3=multiplication \n 4=division \n 5=moyenne \n 6=valeur absolue \n 7=exponentiation \n 8=racine carre \n 9=qitter le programme \n";
        do{ 
            printf("%s",menu);
            scanf("%d",&choix);
            switch(choix){
                case 1 :{
                printf("entre le 1 er nombre \n");
                scanf("%lf",&N1);
                printf("entre le 2 nombre \n");
                scanf("%lf",&N2);
                S = N1 + N2;
                printf("%2.lf\n",S);
                break;
                    
                }
              case 2 :{
               
                printf("entre le 1 er nombre \n");
                scanf("%lf",&N1);
                printf("entre le 2 nombre \n");
                scanf("%lf",&N2);
                S = N1 - N2;
                printf("%2.lf\n",S);
                break;}
                  case 3 :{
          
                printf("entre le 1 er nombre \n");
                scanf("%lf",&N1);
                printf("entre le 2 nombre \n");
                scanf("%lf",&N2);
                S = N1 * N2;
                printf("%2.lf\n",S);
                break;}
                   case 4 :{
             
                printf("entre le 1 er nombre \n");
                scanf("%lf",&N1);
                printf("entre le 2 nombre \n");
                scanf("%lf",&N2);
                S = N1 / N2;
                printf("%2.lf\n",S);
                break;}
                    case 5 :{
               
                printf("entre le 1 er nombre \n");
                scanf("%lf",&N1);
                printf("entre le 2 nombre \n");
                scanf("%lf",&N2);
                S = (N1 + N2) /2;
                printf("%2.lf\n",S);
                break;}
                    case 6 :{
        
                printf("entre le 1 er nombre \n");
                scanf("%lf",&N1);
                S = fabs(N1);
                printf("%2.lf\n",S);
                break;}
                    case 7 :{ 
            
                printf("entre le 1 er nombre \n");
                scanf("%lf",&N1);
                printf("entre le 2 nombre \n");
                scanf("%lf",&N2);
                S = pow(N1,N2);
                printf("%2.lf\n",S);
                break;}
                    case 8 :{ 
             
                printf("entre le 1 er nombre \n");
                scanf("%lf",&N1);
                if(N1>0){
                S =sqrt(N1);
                printf("%2.lf\n",S);
                }else{
                    printf("impossible");
                }
            
                break;
            
                    }
            }

            }while(choix!=9);
    return 0;
}