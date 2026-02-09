// * Define a structure **Book** with members for title, author, and price. 
// * Create an array of structures to store information for four books. 
// * Find and print the details of the book with the highest price.


#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main(void) {

    struct Book book_array[4];
    int highest = 0;

    // Input
    for (int i = 0; i < 4; i++) {
        printf("\nEnter details for book\n");

        printf("Enter the title of the book: ");
        fgets(book_array[i].title, 50, stdin);
        

        printf("Enter the author: ");
        fgets(book_array[i].title, 50, stdin);
        
        
        
        printf("Enter the price: ");
        scanf("%d", &book_array[i].price);
       
    }

    
    for (int i = 1; i < 4; i++) {
        if (book_array[i].price > book_array[highest].price) {
            highest = i;
        }
    }

    
    printf("\nBook with the highest price:\n");
    printf("Title: %s\n", book_array[highest].title);
    printf("Author: %s\n", book_array[highest].author);
    printf("Price: %.2f\n", book_array[highest].price);

    return 0;
}