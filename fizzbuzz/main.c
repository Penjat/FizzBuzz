//
//  main.c
//  fizz-buzz
//
//  Created by Spencer Symington on 2018-10-24.
//  Copyright © 2018 Spencer Symington. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
    for(int i=1;i<101;i++){
        /* use powers of 2 to store the multiples of the number */
        int val = 0;
        
        
        if(i%3 == 0){
            val += 1;
        }
        if(i%5 == 0){
            val +=2;
        }
        switch(val){
                
            case 0:
                printf("%i\n",i);
                break;
            case 1:
                printf("Fizz\n");
                break;
            case 2:
                printf("Buzz\n");
                break;
            case 3:
                printf("FizzBuzz\n");
                break;
                
        }
        
    }
    return 0;
}
