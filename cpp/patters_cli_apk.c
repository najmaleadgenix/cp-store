#include<stdio.h>
// #include<conio.h>

// ****
// ****
// ****
// ****
//square
int square(int n){
    for(int i=0;i<n;i++){
        for(int i=0;i<n;i++){
        printf("*");
    }
    printf("\n");
    }
}

//*****
// *    *
//  *    *
//   *    *
//    *****
//samantorik
int samantorik(int n){
    for(int i=0;i<n;i++){
        if(i==0){
            for(int j=0;j<n;j++){
                printf("*");
            }
            printf("\n");
        }
        else if(i==(n-1)){
            for(int j=0;j<n-1;j++){
                printf(" ");
            }
            for(int j=0;j<n;j++){
                printf("*");
            }
            printf("\n");
        }
        else{
            for(int j=n;j>n-i;j--){
                printf(" ");}
            printf("*");
            for(int j=0;j<n-2;j++){
                printf(" ");}
            printf("*\n");
        }    
        }
}


//    *
//   **
//  ***
// ****
//*****
//right hand triangle(full)
int right_triangle_full(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
        
    }
}


//    *
//   **
//  * *
// *  *
//*****
//right hand triangle(blank)
int right_triangle_blank(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        if(i==0){
            printf("*");
        }
        else if(i==1){
            printf("**");
        }
        else if(i==n-1){
            for(int j=0;j<n;j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(int j=0;j<i-1;j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}

//   *
//  ***
// *****
//pyramid
int pyramid(int n){
    for(int i=0;i<n;i++){
        //printing space
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }         
        //printing asterics
        for(int j=0;j<=i*2;j++){
           printf("*");
        }
    printf("\n");
    }
}

// *******
//  *   *
//   * *
//    *
//upsidedown_blank_pyramid
int upsidedown_blank_pyramid(int n){
    for(int i=0;i<n;i++){
        //print space
        for(int j=0;j<i;j++){
            printf(" ");
        }
        if(i==n-1){
            printf("*");
        }
        // else if(i==1){
        //     printf("**");
        // }
        else if(i==0){
            for(int j=0;j<((2*n)-1);j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(int j=((2*(n-i))-3);j>0;j--){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}


//   *
//  ***
// *****
//*******
// *****
//  ***
//   *
//diamond
int diamond(int num){
    if(num%2==0){
        printf("enter only odd number for better visuals!\n");
        return 1;
    }
    else{
        int n=num/2;
        for(int i=0;i<n;i++){
            //printing space
            for(int j=0;j<n-i;j++){
                printf(" ");
            }         
            //printing asterics
            for(int j=0;j<=i*2;j++){
            printf("*");
            }
            printf("\n");
        }
        for(int i=0;i<num;i++ ){
            printf("*");
        }
        printf("\n");
        for(int i=0;i<n;i++){
            //printing space
            for(int j=0;j<=i;j++){
                printf(" ");
            }         
            //printing asterics
            for(int j=2*n;j>=i*2+2;j--){
            printf("*");
            }
            printf("\n");
        }


    }
}


//********
//***  ***
//**    **
//*      *
//**    **
//***  ***
//********
//inverse diamond
int inverse_diamond(int num){
    if(num%2!=0){
        printf("enter only even number for better visual!");
        return 1;
    }
    else{
            //up straight line
            for(int j=0;j<num;j++){
                printf("*");
            }
            printf("\n");

            int n=(num/2)-1;
            //up pyramid
            for(int j=n;j>0;j--){
                for(int k=0;k<j;k++){
                    printf("*");
                }
                for(int k=0;k<(num-(2*j));k++){
                    printf(" ");
                }
                for(int k=0;k<j;k++){
                    printf("*");
                }
                printf("\n");
            }
            //down upside down pyramid
            for(int j=0;j<n;j++){
                for(int k=0;k<=j;k++){
                    printf("*");
                }
                for(int k=0;k<=(num-(2*j)-3);k++){
                    printf(" ");
                }
                for(int k=0;k<=j;k++){
                    printf("*");
                }
                printf("\n");
            }
            //down straight line
            for(int j=0;j<num;j++){
                printf("*");
                }
            printf("\n");
    }         
}


//*****
//  ****
//    ***
//      **
//        *
//      **
//    ***
//  ****
//*****
//inverse diamond right

int inverse_diamond_right(int num){
    if(num%2==0){
        printf("enter only odd number for better visual!\n");
        return 1;
    }
    else{
        int n=num/2-1;
        for(int i=0;i<=2*n;i+=2){
            for(int j=0;j<i;j++){
                printf(" ");
            }
            for(int j=0;j<((num/2)+1-(i/2));j++){
                printf("*");
            }
            printf("\n");
        }
        for(int i=0;i<num-1;i++){
            printf(" ");
        }
        printf("*\n");
        for(int i=2*n;i>=0;i-=2){
            for(int j=i;j>0;j--){
                printf(" ");
            }
            for(int j=0;j<((num/2)+1-(i/2));j++){
                printf("*");
            }
            printf("\n");
        }
    }         
}

//x with numbers:
int x_with_numbers(int num){
    if (num%2==0){
        printf("enter odd number only for better visual!\n");
        return 1;
    }
    else{
        int n=num/2;
        for(int i=0;i<n;i++){
            int space=0,number=0;
            for(int j=0;j<i;j++){
                printf(" ");
                space+=1;
            }
            printf("%d",i+1);
            for(int j=0;j<(num-(space*2)-2);j++){
                printf(" ");
            }
            printf("%d",i+1);
            printf("\n");
        }
        for(int i=0;i<n;i++){
            printf(" ");
        }
        printf("%d\n",n+1);

        for(int i=n;i>0;i--){
            int space=0,number=0;
            for(int j=i;j>1;j--){
                printf(" ");
                space+=1;
            }
            printf("%d",i);
            for(int j=(num-(space*2)-2);j>0;j--){
                printf(" ");
            }
            printf("%d",i);
            printf("\n");
        }

    }
}

//love shape with asterics
int love_shape_with_asterics(int num){
    int n=(num/2);
    //up two pyramid
    // printf("n: %d\n",n);
    for(int i=0;i<n;i++){
        //printing space
        for(int j=0;j<n-i+1;j++){
            printf(" ");
        }         
        //printing asterics
        for(int j=0;j<=i*2;j++){
           printf("*");
        }
        for(int j=n;j>i;j--){
            printf(" ");
        }
        //printing space
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }         
        //printing asterics
        for(int j=0;j<=i*2;j++){
           printf("*");
        }
        printf("\n");
    }
    //bottom big pyramid
    for(int i=0;i<num;i++){
        n=2*num;
        int space=0;
        for(int j=0;j<i;j++){
            printf(" ");
            space+=1;
        }
        for(int j=0;j<n-(2*space);j++){
            printf("*");
        }

        printf("\n");
    }
}



int main(){
    int try=1;
    while(try==1){
        // clrscr();
        printf("---------Welcome to the pattern show----------\n");
        printf("1. square\n2. Parallelogram (samantorik)\n3. right sided triangle full inside\n4. right sided triangle blank inside\n5. pyramid\n6. upsidedown blank pyramid\n7. diamond\n8. inverse diamond\n9. right arrow (inverse diamond right sided)\n10. x with numbers\n11. love shape with astericks ");
        printf("type any number to select pattern printing\ntype 0 to quit: ");
        int n;
        scanf("%d",&n);
        if(n==0){try=0;return 0;}
        else if (n>0 && n<=11){
            int input;
            printf("enter value: ");
            scanf("%d",&input);
            if(n==1){square(input);}
            else if (n==2){samantorik(input);}
            else if (n==3){right_triangle_full(input);}
            else if (n==4){right_triangle_blank(input);}
            else if (n==5){pyramid(input);}
            else if (n==6){upsidedown_blank_pyramid(input);}
            else if (n==7){diamond(input);}
            else if (n==8){inverse_diamond(input);}
            else if (n==9){inverse_diamond_right(input);}
            else if (n==10){x_with_numbers(input);}
            else if (n==11){love_shape_with_asterics(input);}
            else{printf("wront input: %d, try again !\n",input);continue;}

        }
    }
    // square(3);
    // samantorik(5);
    // right_triangle_full(5);
    // right_triangle_blank(10);
    // pyramid(5);
    // upsidedown_blank_pyramid(10);
    // diamond(55);
    // inverse_diamond(20);
    // inverse_diamond_right(10);
    // x_with_numbers(15);
    // love_shape_with_asterics(25);
}