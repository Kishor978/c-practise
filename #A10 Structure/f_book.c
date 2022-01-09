// f) Book(ISBN, title, author, category, pages)

#include <stdio.h>
struct Book
{
    char ISBN[20], title[20], author[20], category[20];
    int page;
};
int main()
{
    int n, i;
    printf("Enter the number of book: ");
    scanf("%d", &n);
    struct Book b[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Enter the title :");
        scanf("%s", &b[i].title);
        printf("Enter %s's ISBN :", b[i].title);
        scanf("%s", &b[i].ISBN);
        printf("Enter %s's author :", b[i].title);
        scanf("%s", &b[i].author);
        printf("Enter %s's category :", b[i].title);
        scanf("%s", &b[i].category);
        printf("Enter %s's page :", b[i].title);
        scanf("%d", &b[i].page);
    }
    printf("\n\nEersonnels Details:");
    for (int i = 0; i < n; i++)
    {
        printf("Person %d\n", i+1);
        printf("Title:\t\t%s\n",b[i].title);
        printf("ISBN:\t\t%s\n",b[i].ISBN);
        printf("Author:\t\t%s\n",b[i].author);
        printf("Category:\t%s\n",b[i].category);
        printf("Page:\t\t%d\n",b[i].page);

    }

    return 0;
}