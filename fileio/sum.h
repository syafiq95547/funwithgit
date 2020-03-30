#ifndef SUM_H
#define SUM_H


 void addition(int argc,char *argv[])
{
    int sum = 0;
    for (int i = 1; argv[i]; ++i)
    {
      sum += atoi(argv[i]);
    }
    printf("Sum of %d argument is: %d\n", argc, sum);

}
#endif
