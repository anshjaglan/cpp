#include <stdio.h>
#include <math.h>

int main()
{
    int x[10], y[10], n, i;
    int choice;
    int tx, ty, sx, sy;
    float angle;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    // Input polygon points
    for(i = 0; i < n; i++)
    {
        printf("Enter x and y for point %d: ", i + 1);
        scanf("%d%d", &x[i], &y[i]);
    }

    printf("\n1. Translation");
    printf("\n2. Scaling");
    printf("\n3. Rotation");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            // Translation
            printf("Enter tx and ty: ");
            scanf("%d%d", &tx, &ty);

            for(i = 0; i < n; i++)
            {
                x[i] = x[i] + tx;
                y[i] = y[i] + ty;
            }

            printf("\nAfter Translation:\n");
            for(i = 0; i < n; i++)
            {
                printf("(%d , %d)\n", x[i], y[i]);
            }
            break;

        case 2:
            // Scaling
            printf("Enter sx and sy: ");
            scanf("%d%d", &sx, &sy);

            for(i = 0; i < n; i++)
            {
                x[i] = x[i] * sx;
                y[i] = y[i] * sy;
            }

            printf("\nAfter Scaling:\n");
            for(i = 0; i < n; i++)
            {
                printf("(%d , %d)\n", x[i], y[i]);
            }
            break;

        case 3:
            // Rotation
            printf("Enter angle in degrees: ");
            scanf("%f", &angle);

            angle = angle * 3.14 / 180;

            for(i = 0; i < n; i++)
            {
                int tempX = x[i];

                x[i] = x[i] * cos(angle) - y[i] * sin(angle);
                y[i] = tempX * sin(angle) + y[i] * cos(angle);
            }

            printf("\nAfter Rotation:\n");
            for(i = 0; i < n; i++)
            {
                printf("(%d , %d)\n", x[i], y[i]);
            }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
