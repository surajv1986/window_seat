/* Program to return if a given seat is left window seat or right window seat for a bus with ordered seats arranged as an 15*4 matrix */
/*Explanation of Program Logic                                         
 *Given that the seats in the bus are numbered as
 * 1   2   3   4
 * 5   6   7   8
 * 9   10  11  12
 * 13  14  15  16
 * .   .   .    .
 * .   .   .    .
 * .   .   .    .
 * 57  58  59   60   
 *
 *It can be observed that the right window seats are all perfect multiples of 4 and all the
 *Left Window seats denoted by x satisfy the relation (x%4) = 1 for all x.Morover none of the
 *other columns satisfy either of the above mentioned relationships.
 *
 * */
#include<stdio.h>
#include<stdint.h>
#define LEFTWINDOW 1
#define RIGHTWINDOW 2
#define NOWINDOW 3


int window_seat(uint8_t seatno)
{
	/* Check if given seat is left window seat*/
	if((seatno % 4) == 1) 	
		return LEFTWINDOW;
	/* Check if given seat is right window seat */
	else if((seatno %4) == 0) 
		return RIGHTWINDOW;
	else 
		return NOWINDOW;

	return 0;
}
int main()
{
	int ret;
	uint8_t seat;

	while (1)
	{
		printf("Enter seat No between 1 and 60 \n");
		scanf("%hhu", &seat);
		ret = window_seat(seat);
		if (ret == LEFTWINDOW)
			printf("Given window seat is left window seat\n");
		else if (ret == RIGHTWINDOW)
			printf("Given window seat is right window seat \n");
		else if (ret == NOWINDOW) 
			printf("Given seat is not a window seat\n");
		
	}

}
