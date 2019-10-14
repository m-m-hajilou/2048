#include <stdio.h>

#include <stdlib.h> 

//#include <conio.h>
//product random number
int randoms(int a, int b){
return rand()% b+a;

}


  int main(){
  int a[3][3],x,y;
    x=randoms(0,3);//number random for horizontal
    y=randoms(0,3);//number random for vertical
    
    //for (int iyt=0;iyt<=2;iyt++){// clean number in arraye 
  // for (int ixt=0;ixt<=2;ixt++)
//   a[ixt][iyt]=0;}


  
    for (int iy=0;iy<=2;iy++){
   for  (int ix=0;ix<=2;ix++){
        printf("%d",a[ix][iy]);
        printf("\t");}
        printf("\n");} 

    return 0;

}
