//program to calculate the no. of ways to reach nth stair(for ex :- 5th) , and we can climb a single stair / double stair / triple staire at one time
#include <stdio.h>
int no_of_ways(int stairs)
{
    if (stairs == 2 || stairs == 1) return stairs;
    else if (stairs == 0) return 1;
    return no_of_ways(stairs - 1) + no_of_ways(stairs - 2) + no_of_ways(stairs - 3);
}
int main()
{
    int stairs;
    printf("Enter the number of Stairs : ");
    scanf("%d", &stairs);
    int ways = no_of_ways(stairs);
    printf("%d", ways);
    return 0;
}