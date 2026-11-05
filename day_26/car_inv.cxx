#include <stdio.h>
#include <string.h>

struct car{
 char brand[20];
 char model[20];
 int qty;
};
int main()
{

    struct car c1;
    strcpy(c1.brand, "TOYOTA");
    strcpy(c1.model, "Corolla");
    c1.qty = 4;

    struct car c2 = {"HONDA", "Civic", 12};// remenber that in direct access the { } is used istaed of  the method above

    printf("%s, %s, %d\n", c1.brand, c1.model, c1.qty);
    printf("%s, %s, %d\n", c2.brand, c2.model, c2.qty);
    
    return 0;
}