//program to calculate the no. of ways to reach nth stair(for ex :- 5th) , and we can climb a single stair / double stair at one time
#include <stdio.h>
int no_of_ways(int stairs)
{
    if (stairs == 2 || stairs == 1)
        return stairs;
    return no_of_ways(stairs - 1) + no_of_ways(stairs - 2);
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