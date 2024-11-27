#include<stdio.h> 
int main(int argc, char const *argv[])
{   
    /* 
    int num1 = 2; 
    int num2 = 2; 
    int num3 = 2;
    float avg; 
    avg = (num1 + num2 + num3) / 3; 
    
           (int + int + int) / (int)
           (int) / (int)
            int => RHS   
            float => LHS
            (float)<=(int)
            2.00<=(2)
     
    printf("%.2f",avg); 
  */   
    // int num1 = 2; 
    // int num2 = 2; 
    // int num3 = 1;
    // float avg; 
    // avg = (num1 + num2 + num3) / 3; 
    // /* 
    //        (int + int + int) / (int)
    //        (int) / (int)
    //         int => RHS   
    //         float => LHS
    //         (float)<=(int)
    //         RHS => 1.6 => 1 
    //         1.00<=1 
            
    // */         
     
    // printf("%.2f",avg); 

    // int num1 = 2; 
    // int num2 = 2; 
    // int num3 = 1;
    // float avg; 
    // avg = (num1 + num2 + num3) / 3.0; 
    
    // /*
    //        (int + int + int) / (double)
    //        (int) / (double)
    //         double => RHS   
    //         float => LHS
    //         RHS => 1.66 => double ( Yes ) 
    //         (float)<=(double)
    // */   
    // printf("%.2f",avg); 


    // int num1 = 2; 
    // int num2 = 2; 
    // int num3 = 1;
    // float avg; 
    // avg = (num1 + num2 + num3) / 3.0f; 
    
    // /*
    //        (int + int + int) / (float)
    //        (int) / (float)
    //         float => RHS   
    //         float => LHS
    //         RHS => 1.66 => float ( Yes ) 
    //         (float)<=(float)
    // */   
    // printf("%.2f",avg); 
    
    int num1 = 2; 
    int num2 = 2; 
    int num3 = 1;
    float avg; 
    avg = ((float)num1 + num2 + num3) / 3; //typecasing (explicit)
    
    /*
           (float + int + int) / (int)
           (float) / (int)
            float => RHS   
            float => LHS
            RHS => 1.66 => float ( Yes ) 
            (float)<=(float)
    */   
    printf("%.2f",avg); 
    return 0;
}
