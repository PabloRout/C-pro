#include<stdio.h>
    int main()
{
    int phy,chem,math;
    float tot;

    printf("\t\t  Enter your phy mark: \n");
      scanf("%d",&phy);

    printf("\t\t  Enter your chem mark: \n");
      scanf("%d",&chem);

    printf("\t\t  Enter your math mark: \n");
      scanf("%d",&math);
tot=(phy+chem+math)*100/3;


      if((tot<=44) || 33>=phy || 33>=math || 33>=chem)
	 printf("your percentage is %f and you are failed!!!",tot);
      else
	 printf("**********your percentage is %fand you passed the exam**********",tot);

   return 0;
}
