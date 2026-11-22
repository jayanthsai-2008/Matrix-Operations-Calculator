    #include <stdio.h>

int main()
{
    int choice;

    do
    {
        printf("\n--- MATRIX OPERATIONS ---\n");
        printf("1. Matrix Addition\n");
        printf("2. Matrix Subtraction\n");
        printf("3. Matrix Multiplication\n");
        printf("4. Matrix Transpose\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            int r, c, i, j;

            printf("Enter rows and columns: ");
            scanf("%d %d", &r, &c);

            if(r <= 0 || c <= 0)
                printf("Invalid dimensions\n");
            else
            {
                int A[r][c], B[r][c], C[r][c];

                printf("Enter first matrix:\n");

                for(i = 0; i < r; i++)
                    for(j = 0; j < c; j++)
                        scanf("%d", &A[i][j]);

                printf("Enter second matrix:\n");

                for(i = 0; i < r; i++)
                    for(j = 0; j < c; j++)
                        scanf("%d", &B[i][j]);

                printf("Addition Result:\n");

                for(i = 0; i < r; i++)
                {
                    for(j = 0; j < c; j++)
                    {
                        C[i][j] = A[i][j] + B[i][j];
                        printf("%d ", C[i][j]);
                    }
                    printf("\n");
                }
            }
        }

        else if(choice == 2)
        {
            int r, c, i, j;

            printf("Enter rows and columns: ");
            scanf("%d %d", &r, &c);

            if(r <= 0 || c <= 0)
                printf("Invalid dimensions\n");
            else
            {
                int A[r][c], B[r][c], C[r][c];

                printf("Enter first matrix:\n");

                for(i = 0; i < r; i++)
                    for(j = 0; j < c; j++)
                        scanf("%d", &A[i][j]);

                printf("Enter second matrix:\n");

                for(i = 0; i < r; i++)
                    for(j = 0; j < c; j++)
                        scanf("%d", &B[i][j]);

                printf("Subtraction Result:\n");

                for(i = 0; i < r; i++)
                {
                    for(j = 0; j < c; j++)
                    {
                        C[i][j] = A[i][j] - B[i][j];
                        printf("%d ", C[i][j]);
                    }
                    printf("\n");
                }
            }
        }

        else if(choice == 3)
        {
            int r1, c1, r2, c2, i, j, k;

            printf("Enter rows and columns of first matrix: ");
            scanf("%d %d", &r1, &c1);

            printf("Enter rows and columns of second matrix: ");
            scanf("%d %d", &r2, &c2);

            if(r1 <= 0 || c1 <= 0 || r2 <= 0 || c2 <= 0)
                printf("Invalid dimensions\n");
            else if(c1 != r2)
                printf("Multiplication not possible\n");
            else
            {
                int A[r1][c1], B[r2][c2], C[r1][c2];

                printf("Enter first matrix:\n");

                for(i = 0; i < r1; i++)
                    for(j = 0; j < c1; j++)
                        scanf("%d", &A[i][j]);

                printf("Enter second matrix:\n");

                for(i = 0; i < r2; i++)
                    for(j = 0; j < c2; j++)
                        scanf("%d", &B[i][j]);

                printf("Multiplication Result:\n");

                for(i = 0; i < r1; i++)
                {
                    for(j = 0; j < c2; j++)
                    {
                        C[i][j] = 0;

                        for(k = 0; k < c1; k++)
                            C[i][j] += A[i][k] * B[k][j];

                        printf("%d ", C[i][j]);
                    }
                    printf("\n");
                }
            }
        }

        else if(choice == 4)
        {
            int r, c, i, j;

            printf("Enter rows and columns: ");
            scanf("%d %d", &r, &c);

            if(r <= 0 || c <= 0)
                printf("Invalid dimensions\n");
            else
            {
                int A[r][c];

                printf("Enter matrix elements:\n");

                for(i = 0; i < r; i++)
                    for(j = 0; j < c; j++)
                        scanf("%d", &A[i][j]);

                printf("Transpose:\n");

                for(i = 0; i < c; i++)
                {
                    for(j = 0; j < r; j++)
                        printf("%d ", A[j][i]);

                    printf("\n");
                }
            }
        }

        else if(choice == 5)
        {
            printf("Exiting program...\n");
        }

        else
        {
            printf("Invalid choice\n");
        }

    } while(choice != 5);

    return 0;
}