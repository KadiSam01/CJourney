/*
this is my notes on learning strings in c
 */
int main(){
    //declaring and initalizing strings in c
    char name[] = "Sam";
    printf("%s", name);
    char fruit [] = {"a", "b", "c"};
    char *test = "hello";

    //accessing a specific characters in a string
    char str [] = "hello";
    printf("%c", str[0]); //prints h
    printf("%c", str[1]); //prints e
}