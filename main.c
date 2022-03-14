#include <stdio.h>
#include <stdlib.h>
int menu ()  {
    int action;
    print f("select and action below\n");
    printf("1.Add new patron\n");
    printf("2. view all patron\n");
    printf("3.Add new resource\n");
    printf("4.Your action\n");
    scanf("%d",&action);
    return action;
}

int main()
{
    int action;
    printf("county library system!\n");
    printf("Welcome Mr.Titus\n");
    action = menu();
    printf("You selected action %d\n",action);
    return 0;
}

    return 0;
}
