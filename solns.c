/* Enter your solutions in this file */
#include <stdio.h>
int max(int arr[],int length);
int min(int arr[],int length);
float average(int arr[],int length);
int mode(int arr[],int length);
int factors(int num,int ret[]);


int max(int arr[],int length)
{ int maximum;
  maximum=arr[0];
  for(int i=0;i<length;i++)
   { if(maximum<arr[i])
         maximum=arr[i];
   }
  return maximum;
}
  


int min(int arr[],int length)
{ int minimum;
  minimum=arr[0];
  for(int i=0;i<length;i++)
   {if(minimum>arr[i])
      minimum=arr[i];
   }
   return minimum;
}



float average(int arr[],int length)
{int sum=0;
 for(int i=0;i<length;i++)
 { sum=sum+arr[i];
 }
 sum=(float)sum/length;
 return sum;
}



int mode(int arr[],int length)
{ int count[length],mode_count=count[0],mode;
  for(int i=0;i<length;i++)
  { count[i]=1;
    for(int j=i+1;j<length;j++)
     {if(arr[i]==arr[j])
         count[i]=count[i]+1;

     }
   }


  for(int i=0;i<length;i++)
  {
    if(mode_count<count[i])
       mode_count=count[i];
       mode=arr[i];
  }
  
  return mode;
}




int factors(int num,int ret[])
{ int j=0;
  for(int i=2;i<=num;i++)
   { while(num%i==0)
       { ret[j]=i;
         num=num/i;
         
         j++;
       }
      
      
    
   }
  return j;
}
