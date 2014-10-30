//
//  main.c
//  RPassword-C
//
//  Created by Roger on 10/29/14.
//  Copyright (c) 2014 betterservant.com. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, const char * argv[]) {
    int length=10;      //default password length
    char term;
    int op;
    while (1) {
        printf("Length of the password (1-1024): ");
        op=scanf("%d%c", &length, &term);
        if (op!=2 || term!='\n') {
            printf("Enter numbers only\n");
            return -1;
        }
        if (length<1 || length>1024) {
            printf("Please enter a number between 1 and 1024\n");
            //return -1;
            continue;
        }
        
        //initialize random seed
        srandom((unsigned)time(NULL));
        
        for (; length>0; length--) {
            putchar(random()%95+32);
        }
        printf("\n");
    }
    return 0;
}
