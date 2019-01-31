#include<stdio.h>
#include<math.h>
void towerOfHanoi(int n, char A, char C, char B){

    if (n == 1){
        printf("\n Move disk 1 from rod %c to rod %c", A, C);
        return;
    }
    towerOfHanoi(n-1, A, B, C);
    printf("\n Move disk %d from rod %c to rod %c", n, A, C);
    towerOfHanoi(n-1, B, C, A);
}
 
int main(){
    int n,a;
    char yn;
  do{
    system("cls");
    printf("Enter The Number Of Disk: ");
    scanf("%d",&n);
    a =pow(2,n);
    printf("So! There Will Be %d Disk Movements",a-1);
    towerOfHanoi(n, 'A', 'C', 'B');
    printf("\nDo You Want To Continue?..(y/n):");
    fflush(stdin);
    scanf("%c",&yn);
  }while((yn=='y')||(yn=='Y'));
}
