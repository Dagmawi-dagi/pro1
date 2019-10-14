#include <stdio.h>



int cnt = 0;                /* counter for number allocated     */
    int field = 0;              /* couter for field in line         */
    int it = 0;

    FILE *fp;
    fp = fopen (argv[1], "r");  /* open file , read only            */
    if (!fp) {
        fprintf (stderr, "failed to open file for reading\n");
        return 1;
    }

    students = calloc (MAXS, sizeof (*students)); /* allocate 200 ptrs set to NULL */
    // (1)
    while ((read = getline (&line, &n, fp)) != -1) {    /* read each line in input file */

        sp = p = line;      /* set start ptr and ptr to beginning of line */
        field = 0;          /* set/reset field to 0 */

        // (2)
        students[cnt] = malloc (sizeof (**students));   /* alloc a stuct with malloc    */
        // (3)
                            /* parse id, name, age, gpa     */
        while (*p)          /* for each character in line   */
        {
            if (*p == ',')  /* if ',' end of field found    */
            {
                *p = 0;     /* set as null-term char (temp) */

                if (field == 0) students[cnt]->id   = atoi (sp);
                if (field == 1) students[cnt]->name = strdup (sp); /* strdup allocates for you */
                if (field == 2) students[cnt]->age  = atoi (sp);

                *p = ',';   /* replace with original ','    */
                sp = p + 1; /* set new start ptr start pos  */
                field++;    /* update field count           */
            }
            p++;            /* increment pointer p          */
        }
        students[cnt]->gpa = strtof (sp, NULL);   /* read gpa (sp already set to begin) */

        cnt++;              /* increment students count     */
    }

    /* iterate over all students and print */
    printf ("\nThe students in the class are:\n\n");
    while (students[it])
    {
        printf ("  %d   %s   %d   %6.2f\n",
                students[it]->id, students[it]->name, students[it]->age, students[it]->gpa);
        it++;
    }

    int total = it;
    printf ("\nTotal number of students: %d\n", total);

    /* compute average age and gpa*/
    float avg_age = 0;
    float avg_gpa = 0;

    for (it = 0; it < total; it++)
    {
        avg_age += (float)students[it]->age;
        avg_gpa += students[it]->gpa;
    }
    avg_age /= (float)total;
    avg_gpa /= (float)total;

    printf ("Average Age of students : %.2f\n", avg_age);
    printf ("Average GPA of students : %.2f\n\n", avg_gpa);

    // free memory

    return 0;
}
