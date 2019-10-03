#ifndef SPLASH_H_
#define SPLASH_H_

void splashscreen(){
	int i, a=0;
	char istr[1];
	char *filename;
    char str[MAXCHAR];
    FILE *fp;
    
    
	    fp=fopen("1.txt", "r");
	    if (fp == NULL){
	        printf("Could not open file");
	        return 1;
	    }
	    while (fgets(str, MAXCHAR, fp) != NULL)
	        printf("%s", str);
	
	    Sleep(600);
		system("cls");
		

	    fp=fopen("2.txt","r");
	    if (fp == NULL){
	        printf("Could not open file");
	        return 1;
	    }
	    while (fgets(str, MAXCHAR, fp) != NULL)
	        printf("%s", str);
	
	    Sleep(600);
		system("cls");
		

	    fp=fopen("3.txt","r");
	    if (fp == NULL){
	        printf("Could not open file");
	        return 1;
	    }
	    while (fgets(str, MAXCHAR, fp) != NULL)
	        printf("%s", str);
	
	    Sleep(600);
		system("cls");
		
		fp=fopen("4.txt","r");
	    if (fp == NULL){
	        printf("Could not open file");
	        return 1;
	    }
	    while (fgets(str, MAXCHAR, fp) != NULL)
	        printf("%s", str);
	
	    Sleep(600);
		system("cls");
		
		fp=fopen("5.txt","r");
	    if (fp == NULL){
	        printf("Could not open file");
	        return 1;
	    }
	    while (fgets(str, MAXCHAR, fp) != NULL)
	        printf("%s", str);
	
	    Sleep(600);
		system("cls");
		
		fp=fopen("6.txt","r");
	    if (fp == NULL){
	        printf("Could not open file");
	        return 1;
	    }
	    while (fgets(str, MAXCHAR, fp) != NULL)
	        printf("%s", str);
	
	    Sleep(600);
		system("cls");
		
		fp=fopen("7.txt","r");
	    if (fp == NULL){
	        printf("Could not open file");
	        return 1;
	    }
	    while (fgets(str, MAXCHAR, fp) != NULL)
	        printf("%s", str);
	
	    sleep(1);
		system("cls");
		
		fp=fopen("8.txt","r");
	    if (fp == NULL){
	        printf("Could not open file");
	        return 1;
	    }
	    while (fgets(str, MAXCHAR, fp) != NULL)
	        printf("%s", str);
	
	    sleep(2);
		system("cls");

	fclose(fp);
    
}

#endif
