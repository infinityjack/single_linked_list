#include"linked_list.h"


list(int);

list(double);

list(char);

list(string);

list(float);


PRIVATE void int_operations(void)
{
    int_list* iL = int_new();

    int_head(iL) == NULL ?
        puts("head is null") : puts("head is not null");

    int_push(iL, 6);
    int_pop(iL);
    int_push(iL, 7);
    int_push(iL, 8);
    int_push(iL, 9);

    int_head(iL) == NULL ?
        puts("head is null") : puts("head is not null"), printf("head->data: %d\n", iL->head->data);

    int_empty(iL) == true ?
        puts("true") : puts("false");

    int_traverse(iL);
}


PRIVATE void double_operations(void)
{
    double_list* dL = double_new();
    
    double_head(dL);

    double_append(dL, 3.0);
    double_append(dL, 4.0);

    double_size(dL) == dL->size ?
        printf("double size: %d\n", dL->size) : puts("not equal");

    double_traverse(dL);
}


PRIVATE void char_operations(void)
{
    char_list* cL = char_new();

    char_append(cL, 'c');
    char_head(cL) == NULL ?
        puts("char head is null") : puts("char head is not null");

    char_append(cL, 'd');
    char_append(cL, 'e');
    char_push(cL, 'b');
    char_push(cL, 'a');
    char_append(cL, 'f');
    char_insert(cL, 3, 'x');
    char_insert(cL, 0, '0');
    char_insert(cL, 0, '0');
    char_remove(cL, '0');


    char_delete(cL, 0);
    char_delete(cL, 2);

    char_traverse(cL);
}


PRIVATE void string_operations(void)
{
    string_list* sL = string_new();

    string_append(sL, "whatis");
    string_append(sL, "myip");
    string_append(sL, ".com");
    string_push(sL, "www.");
    string_insert(sL, 0, "https:");
    string_insert(sL, 1, "//");
    string_insert(sL, 0, "nslookup duckduckgo.com");
    string_append(sL, "qqq");
    string_append(sL, "lll");
    string_append(sL, "rrr");

    puts(string_get(sL, 0));
    printf("%d\n",(string_index(sL, "//")));
    string_pop(sL);

    string_search(sL, "//") == true ?
        puts("found") : puts("not found");

    string_traverse(sL);
}



void main(void)
{
    int_operations();

    double_operations();    

    char_operations();
    
    string_operations();
}
