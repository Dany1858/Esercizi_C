	

    /* Predisporre un programma che stampi a video un rettangolo la cui cornice sia costituita  *
     * da caratteri asterisco, e la parte interna da 'Q'. il numero di linee e di colonne verrà *
     * scelto dall'utente. */
     
    #include <stdio.h>
    #include <stdlib.h>
     
    main()
    {
      int r, c;
      int i, j;
      printf("digitare numero righe desiderate: ");
      scanf("%d", &r);
      printf("\n\ndigitare numero colonne desiderate: ");
      scanf("%d", &c);
      for(i=1; i<=r; i++)
      {
               printf("\n*");
               
               for(j=1; j<=c-2; j++)
               {
                        if(i==1 || i==r)
                        printf("*");
                        else
                        printf("Q");
               }
               
               printf("*");
      }
      printf("\n\n\n");
     
      system("PAUSE");     
      return 0;
    }

