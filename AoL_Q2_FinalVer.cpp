// Note to koh Ivan, Koh ini code nya aku bikin biar ngeloop terus, baru nge terminate kalau user exit

#include <stdio.h>
#include <string.h>

typedef struct{
	char loc[101];
	char city[101];
	long long int price;
	char rooms[101];
	char bathroom[101];
	char carpark[101];
	char type[101];
	char furnish[101];
} apt; 

apt apart[4000];

int dataNum;
bool checkData=0; // If data exist change into 1
char tempStr[9999];


// -------------------------- Basic Functions ------------------------------------

void printHeader(){
	printf("%-29s %-14s %-9s %-7s %-9s %-9s %-11s %s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carpark", "Type", "Furnish");
}
void printData(int i){	
	printf("%-30s",apart[i].loc);
	printf("%-15s",apart[i].city);
	printf("%-10lld",apart[i].price);
	printf("%-8s",apart[i].rooms);
	printf("%-10s",apart[i].bathroom);
	printf("%-10s",apart[i].carpark);
	printf("%-12s",apart[i].type);
	printf("%s\n",apart[i].furnish);
}

void displayMenu(){
	printf("\n");
	printf("What do you want to do?\n"
			"1. Display data\n"
			"2. Search data\n"
			"3. Sort data\n"
			"4. Export data\n"
			"5. Exit\n"
			"Your choice: ");
}

void swap(apt *a, apt*b){
	apt temp = *a;
	*a = *b;
	*b = temp;
}


//---------------------------------------------------------------------------------


// ------------------------- Searching Functions -------------------------------------

void searchLoc(char input[]){
	for(int i=0; i<dataNum; i++){
		if(strcmp(apart[i].loc, input)==0){
		checkData=1;
		break;
		}
	}
}
void searchCity(char input[]){
	for(int i=0; i<dataNum; i++){
		if(strcmp(apart[i].city, input)==0){
		checkData=1;
		break;
		}
	}
}
void searchPrice(long long int input){
	for(int i=0; i<dataNum; i++){
		if( apart[i].price == input){
		checkData=1;
		break;
		}
	}
}
void searchRooms(char input[]){
	for(int i=0; i<dataNum; i++){
		if(strcmp(apart[i].rooms, input)==0){
		checkData=1;
		break;
		}
	}
}
void searchBathroom(char input[]){
	for(int i=0; i<dataNum; i++){
		if(strcmp(apart[i].bathroom, input)==0){
		checkData=1;
		break;
		}
	}
}
void searchCarpark(char input[]){
	for(int i=0; i<dataNum; i++){
		if(strcmp(apart[i].carpark, input)==0){
		checkData=1;
		break;
		}
	}
}
void searchType(char input[]){
	for(int i=0; i<dataNum; i++){
		if(strcmp(apart[i].type, input)==0){
		checkData=1;
		break;
		}
	}
}
void searchFurnish(char input[]){
	for(int i=0; i<dataNum; i++){
		if(strcmp(apart[i].furnish, input)==0){
		checkData=1;
		break;
		}
	}
}

//---------------------------------------------------------------------------------

// --------------------------- Sorting Functions -----------------------------------
void ascSortLoc(){
	for (int i=0; i<dataNum-1; i++){
        for (int j=0; j<dataNum-i-1; j++){
            if (strcmp(apart[j].loc, apart[j+1].loc) > 0){
				swap(&apart[j], &apart[j+1]);
            }
        }
    }
}
void ascSortCity(){
	for (int i=0; i<dataNum-1; i++){
        for (int j=0; j<dataNum-i-1; j++){
            if (strcmp(apart[j].city, apart[j+1].city) > 0){
            	swap(&apart[j], &apart[j+1]);
            }
        }
    }
}
void ascSortPrice(){
	for (int i=0; i<dataNum-1; i++){
        for (int j=0; j<dataNum-i-1; j++){
            if (apart[j].price > apart[j+1].price ){
            	swap(&apart[j], &apart[j+1]);
            }
        }
    }
}
void ascSortRooms(){
	for (int i=0; i<dataNum-1; i++){
        for (int j=0; j<dataNum-i-1; j++){
            if (strcmp(apart[j].rooms, apart[j+1].rooms) > 0){
            	swap(&apart[j], &apart[j+1]);
            }
        }
    }
}
void ascSortBathroom(){
	for (int i=0; i<dataNum-1; i++){
        for (int j=0; j<dataNum-i-1; j++){
            if (strcmp(apart[j].bathroom, apart[j+1].bathroom) > 0){
            	swap(&apart[j], &apart[j+1]);
            }
        }
    }
}
void ascSortCarpark(){
	for (int i=0; i<dataNum-1; i++){
        for (int j=0; j<dataNum-i-1; j++){
            if (strcmp(apart[j].carpark, apart[j+1].carpark) > 0){
            	swap(&apart[j], &apart[j+1]);
            }
        }
    }
}
void ascSortType(){
	for (int i=0; i<dataNum-1; i++){
        for (int j=0; j<dataNum-i-1; j++){
            if (strcmp(apart[j].type, apart[j+1].type) > 0){
            	swap(&apart[j], &apart[j+1]);
            }
        }
    }
}
void ascSortFurnish(){
	for (int i=0; i<dataNum-1; i++){
        for (int j=0; j<dataNum-i-1; j++){
            if (strcmp(apart[j].furnish, apart[j+1].furnish) > 0){
            	swap(&apart[j], &apart[j+1]);
            }
        }
    }
}

// Descending sort
void dscSortLoc(){
	for (int i=0; i<dataNum-1; i++){
        for (int j=0; j<dataNum-i-1; j++){
            if (strcmp(apart[j].loc, apart[j+1].loc) < 0){
            	swap(&apart[j], &apart[j+1]);
            }
        }
    }
}
void dscSortCity(){
	for (int i=0; i<dataNum-1; i++){
        for (int j=0; j<dataNum-i-1; j++){
            if (strcmp(apart[j].city, apart[j+1].city) < 0){
            	swap(&apart[j], &apart[j+1]);
            }
        }
    }
}
void dscSortPrice(){
	for (int i=0; i<dataNum-1; i++){
        for (int j=0; j<dataNum-i-1; j++){
            if (apart[j].price < apart[j+1].price){
            	swap(&apart[j], &apart[j+1]);
            }
        }
    }
}
void dscSortRooms(){
	for (int i=0; i<dataNum-1; i++){
        for (int j=0; j<dataNum-i-1; j++){
            if (strcmp(apart[j].rooms, apart[j+1].rooms) < 0){
            	swap(&apart[j], &apart[j+1]);
            }
        }
    }
}
void dscSortBathroom(){
	for (int i=0; i<dataNum-1; i++){
        for (int j=0; j<dataNum-i-1; j++){
            if (strcmp(apart[j].bathroom, apart[j+1].bathroom) < 0){
            	swap(&apart[j], &apart[j+1]);
            }
        }
    }
}
void dscSortCarpark(){
	for (int i=0; i<dataNum-1; i++){
        for (int j=0; j<dataNum-i-1; j++){
            if (strcmp(apart[j].carpark, apart[j+1].carpark) < 0){
            	swap(&apart[j], &apart[j+1]);
            }
        }
    }
}
void dscSortType(){
	for (int i=0; i<dataNum-1; i++){
        for (int j=0; j<dataNum-i-1; j++){
            if (strcmp(apart[j].type, apart[j+1].type) < 0){
            	swap(&apart[j], &apart[j+1]);
            }
        }
    }
}
void dscSortFurnish(){
	for (int i=0; i<dataNum-1; i++){
        for (int j=0; j<dataNum-i-1; j++){
            if (strcmp(apart[j].furnish, apart[j+1].furnish) < 0){
            	swap(&apart[j], &apart[j+1]);
            }
        }
    }
}
//----------------------------------------------------------------------------------


// ------------------ 4 Main Functionality (Options) -------------------------------

// * ------------------- OPTION 1 --------------------------------
void displayData(){
	int rows;
	printf("Number of rows: ");
	scanf("%d", &rows);	
	
	if(rows>3939){
		rows=3939;
	}
	
	printHeader();
	for(int i=0; i<rows; i++){
		printData(i);
	}

}

// * ---------------- Option 2 ---------------------------------
void searchData(){
	printf("\nOptions:\n");
	printf("Location - City - Price - Rooms - Bathroom - Carpark - Type - Furnish\n");
	char column[102];
	char input[102];
	printf("Choose Column: ");
	scanf("%s",column); 
	
	// Location
	if(strcmp(column, "Location")==0){
		printf("What data do you want to find? ");
		scanf("%s",input);
		searchLoc(input);
		if(checkData==0){
			printf("Data not found!\n");
		}
		else{
			printf("\n");
			printf("Data found. Detail of data:\n");
			
			printHeader();
			for(int i=0; i<dataNum; i++){
				if(strcmp(apart[i].loc, input)==0){
				printData(i);
				}
			}
		}
	}
	
	// City
	else if(strcmp(column, "City")==0){
		printf("What data do you want to find? ");
		scanf("%s",input);
		searchCity(input);
		if(checkData==0){
			printf("Data not found!\n");
		}
		else{
			printf("\n");
			printf("Data found. Detail of data:\n");
			
			printHeader();
			for(int i=0; i<dataNum; i++){
				if(strcmp(apart[i].city, input)==0){
				printData(i);
				}
			}
		}
	}
	
	// Price
	else if(strcmp(column, "Price")==0){
		printf("What data do you want to find? ");
        long long int input;
		scanf("%lld", &input);
		searchPrice(input);
		if(checkData==0){
			printf("Data not found!\n");
		}
		else{
			printf("\n");
			printf("Data found. Detail of data:\n");
			printHeader();
			for(int i=0; i<dataNum; i++){
				if(apart[i].price == input){
				printData(i);
				}
			}
		}
	}
	
	// Rooms
	else if(strcmp(column, "Rooms")==0){
		printf("What data do you want to find? ");
		scanf("%s",input);
		searchRooms(input);
		if(checkData==0){
			printf("Data not found!\n");
		}
		else{
			printf("\n");
			printf("Data found. Detail of data:\n");
			printHeader();
			for(int i=0; i<dataNum; i++){
				if(strcmp(apart[i].rooms, input)==0){
				printData(i);
				}
			}
		}
	}
	
	// Bathroom
	else if(strcmp(column, "Bathroom")==0){
		printf("What data do you want to find? ");
		scanf("%s",input);
		searchBathroom(input);
		if(checkData==0){
			printf("Data not found!\n");
		}
		else{
			printf("\n");
			printf("Data found. Detail of data:\n");
			printHeader();
			for(int i=0; i<dataNum; i++){
				if(strcmp(apart[i].bathroom, input)==0){
				printData(i);
				}
			}
		}
	}
	
	// Carpark
	else if(strcmp(column, "Carpark")==0){
		printf("What data do you want to find? ");
		scanf("%s",input);
		searchCarpark(input);
		if(checkData==0){
			printf("Data not found!\n");
		}
		else{
			printf("\n");
			printf("Data found. Detail of data:\n");
			printHeader();
			for(int i=0; i<dataNum; i++){
				if(strcmp(apart[i].carpark, input)==0){
				printData(i);
				}
			}
		}
	}
	
	// Type
	else if(strcmp(column, "Type")==0){
		printf("What data do you want to find? ");
		scanf("%s",input);
		searchType(input);
		if(checkData==0){
			printf("Data not found!\n");
		}
		else{
			printf("\n");
			printf("Data found. Detail of data:\n");
			printHeader();
			for(int i=0; i<dataNum; i++){
				if(strcmp(apart[i].type, input)==0){
				printData(i);
				}
			}
		}
	}
	
	// Furnish
	else if(strcmp(column, "Furnish")==0){
		printf("What data do you want to find? ");
		scanf("%s",input);
		searchFurnish(input);
		if(checkData==0){
			printf("Data not found!\n");
		}
		else{
			printf("\n");
			printf("Data found. Detail of data:\n");
			printHeader();
			for(int i=0; i<dataNum; i++){
				if(strcmp(apart[i].furnish, input)==0){
				printData(i);
				}
			}
		}
	}
	
	// Invalid
	else{
		printf("Input is invalid!\n");
	}
	
}

// * -------------------- Option 3 -----------------------------------
void sortData(){
	printf("\nOptions:\n");
	printf("Location - City - Price - Rooms - Bathroom - Carpark - Type - Furnish\n");
	char column[102];
	char adc[11];
	printf("Choose Column: ");
	scanf("%s",column);

	// Sort location
	if (!strcmp(column, "Location")){
        printf("Sort ascending or descending? (asc/dsc): ");
		scanf("%s",adc);
		
		if(strcmp(adc, "asc")==0 || strcmp(adc, "ascending")==0 || strcmp(adc, "Ascending")==0){
			ascSortLoc();
			printf("\nData found. Detail of data:\n");
			printHeader();

			for(int i=0; i<10; i++){
				printData(i);
			}

		}
		else if(strcmp(adc, "dsc")==0 || strcmp(adc, "descending")==0 || strcmp(adc, "Descending")==0){
			dscSortLoc();
			printf("\nData found. Detail of data:\n");
			printHeader();
			for(int i=0; i<10; i++){
				printData(i);
			}
		}
		else{
			printf("Invalid Input!\n");
		}
    }
    
    // Sort city
	else if (!strcmp(column, "City")){
         printf("Sort ascending or descending? (asc/dsc): ");
		scanf("%s",adc);
		
		if(strcmp(adc, "asc")==0 || strcmp(adc, "ascending")==0 || strcmp(adc, "Ascending")==0){
			ascSortCity();
			printf("\nData found. Detail of data:\n");
			printHeader();
			for(int i=0; i<10; i++){
				printData(i);
			}
		}
		else if(strcmp(adc, "dsc")==0 || strcmp(adc, "descending")==0 || strcmp(adc, "Descending")==0){
			dscSortCity();
			printf("\nData found. Detail of data:\n");
			printHeader();
			for(int i=0; i<10; i++){
				printData(i);
			}
		}
		else{
			printf("Invalid Input!\n");
		}
    }
    
    // Sort price
	else if (!strcmp(column, "Price")){
        printf("Sort ascending or descending? (asc/dsc): ");
		scanf("%s",adc);
		
		if(strcmp(adc, "asc")==0 || strcmp(adc, "ascending")==0 || strcmp(adc, "Ascending")==0){
			ascSortPrice();
			printf("\nData found. Detail of data:\n");
			printHeader();
			for(int i=0; i<10; i++){
				printData(i);
			}
		}
		else if(strcmp(adc, "dsc")==0 || strcmp(adc, "descending")==0 || strcmp(adc, "Descending")==0){
			dscSortPrice();
			printf("\nData found. Detail of data:\n");
			printHeader();
			for(int i=0; i<10; i++){
				printData(i);
			}
		}
		else{
			printf("Invalid Input!\n");
		}
    }
    
    // Sort rooms
	else if (!strcmp(column, "Rooms")){
		printf("Sort ascending or descending? (asc/dsc): ");
		scanf("%s",adc);
		
		if(strcmp(adc, "asc")==0 || strcmp(adc, "ascending")==0 || strcmp(adc, "Ascending")==0){
			ascSortRooms();
			printf("\nData found. Detail of data:\n");
			printHeader();
			for(int i=0; i<10; i++){
				printData(i);
			}
		}
		else if(strcmp(adc, "dsc")==0 || strcmp(adc, "descending")==0 || strcmp(adc, "Descending")==0){
			dscSortRooms();
			printf("\nData found. Detail of data:\n");
			printHeader();
			for(int i=0; i<10; i++){
				printData(i);
			}
		}
		else{
			printf("Invalid Input!\nPlease Beware that it is case sensitive!\n");
		}
    }
    
    // Sort Bathroom
	else if (!strcmp(column, "Bathroom")){
         printf("Sort ascending or descending? (asc/dsc): ");
		scanf("%s",adc);
		
		if(strcmp(adc, "asc")==0 || strcmp(adc, "ascending")==0 || strcmp(adc, "Ascending")==0){
			ascSortBathroom();
			printf("\nData found. Detail of data:\n");
			printHeader();
			for(int i=0; i<10; i++){
				printData(i);
			}
		}
		else if(strcmp(adc, "dsc")==0 || strcmp(adc, "descending")==0 || strcmp(adc, "Descending")==0){
			dscSortBathroom();
			printf("\nData found. Detail of data:\n");
			printHeader();
			for(int i=0; i<10; i++){
				printData(i);
			}
		}
		else{
			printf("Invalid Input!\n");
		}
    }
    
    // Sort Carpark
	else if (!strcmp(column, "Carpark")){
         printf("Sort ascending or descending? (asc/dsc): ");
		scanf("%s",adc);
		
		if(strcmp(adc, "asc")==0 || strcmp(adc, "ascending")==0 || strcmp(adc, "Ascending")==0){
			ascSortCarpark();
			printf("\nData found. Detail of data:\n");
			printHeader();
			for(int i=0; i<10; i++){
				printData(i);
			}
		}
		else if(strcmp(adc, "dsc")==0 || strcmp(adc, "descending")==0 || strcmp(adc, "Descending")==0){
			dscSortCarpark();
			printf("\nData found. Detail of data:\n");
			printHeader();
			for(int i=0; i<10; i++){
				printData(i);
			}
		}
		else{
			printf("Invalid Input!\n");
		}
    }
    
    // Sort Type
	else if (!strcmp(column, "Type")){
         printf("Sort ascending or descending? (asc/dsc): ");
		scanf("%s",adc);
		
		if(strcmp(adc, "asc")==0 || strcmp(adc, "ascending")==0 || strcmp(adc, "Ascending")==0){
			ascSortType();
			printf("\nData found. Detail of data:\n");
			printHeader();
			for(int i=0; i<10; i++){
				printData(i);
			}
		}
		else if(strcmp(adc, "dsc")==0 || strcmp(adc, "descending")==0 || strcmp(adc, "Descending")==0){
			dscSortType();
			printf("\nData found. Detail of data:\n");
			printHeader();
			for(int i=0; i<10; i++){
				printData(i);
			}
		}
		else{
			printf("Invalid Input!\n");
		}
    }
    
    // Sort Furnish
	else if (!strcmp(column, "Furnish")){
        printf("Sort ascending or descending? (asc/dsc): ");
		scanf("%s",adc);
		
		if(strcmp(adc, "asc")==0 || strcmp(adc, "ascending")==0 || strcmp(adc, "Ascending")==0){
			ascSortFurnish();
			printf("\nData found. Detail of data:\n");
			printHeader();
			for(int i=0; i<10; i++){
				printData(i);
			}
		}
		else if(strcmp(adc, "dsc")==0 || strcmp(adc, "descending")==0 || strcmp(adc, "Descending")==0){
			dscSortFurnish();
			printf("\nData found. Detail of data:\n");
			printHeader();
			for(int i=0; i<10; i++){
				printData(i);
			}
		}
		else{
			printf("Invalid Input!\n");
		}
    }
	else{
        printf("Column doesn't exist!\n");
    }
    
}

// * --------------------------- Option 4 ---------------------------------------------
void exportData(){
	char ina[200];
	printf("File name: ");
	scanf("%s",ina);
	getchar();
	
	strcat(ina, ".csv");
	FILE *file = fopen(ina, "w");
	fprintf(file, "Location,City,Price,Rooms,Bathroom,Carpark,Type,Furnish\n");
	for(int i=0; i<dataNum; i++){
		fprintf(file, "%s,",apart[i].loc);
		fprintf(file, "%s,",apart[i].city);
		fprintf(file, "%lld,",apart[i].price);
		fprintf(file, "%s,",apart[i].rooms);
		fprintf(file, "%s,",apart[i].bathroom);
		fprintf(file, "%s,",apart[i].carpark);
		fprintf(file, "%s,",apart[i].type);
		fprintf(file, "%s\n",apart[i].furnish);
	}
	fclose(file);
	
	printf("Data successfully written to file %s!\n", ina);
}


// ---------------- MAIN --------------------
int main(){
	
	FILE *inputFile = fopen("file.csv", "r");
	

	if(inputFile==NULL){
		printf("Error opening file.\n");
		return 1;
	}
	
	char header[101];
	fscanf(inputFile, "%[^\n]\n",header);
	
	int i=0;
	while(!feof(inputFile)){
		fscanf(inputFile, "%[^,],", apart[i].loc);
		fscanf(inputFile, "%[^,],", apart[i].city);
		fscanf(inputFile, "%lld,", &apart[i].price);
		fscanf(inputFile, "%[^,],", apart[i].rooms);
		fscanf(inputFile, "%[^,],", apart[i].bathroom);
		fscanf(inputFile, "%[^,],", apart[i].carpark);
		fscanf(inputFile, "%[^,],", apart[i].type);
		fscanf(inputFile, "%[^\n]\n", apart[i].furnish);
		i++;
	}
	fclose(inputFile);
	dataNum=i;
	
	int choice = 0;
	do {
		displayMenu();

		scanf("%d", &choice); getchar();
		switch(choice){
			case 1:
				displayData();
				break;
			case 2:
				searchData();
				break;
			case 3:
				sortData();
				break;
			case 4:
				exportData();
				break;
			case 5:
				printf("\nProgram Exit\n");
				break;
		}
	} while (choice != 5);
	
	return 0;
}
