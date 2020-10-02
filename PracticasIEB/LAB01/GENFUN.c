#include "stdio.h"
#include "GENFUN.h"

void main ( void )
{
	printf("Testing GENFUN_vCapsOff\n");
	uint8 au8BufferTest[12] = "HELLO WoRLD!";
	printf("Buffer before function %s\n", au8BufferTest);
	GENFUN_vCapsOff(&au8BufferTest[0], 12);
	printf("Buffer after function %s\n", au8BufferTest);


}

void GENFUN_vCapsOff (uint8 *pu8Src, uint8 u8SizeOfList) 
{
	while ( u8SizeOfList != 0 )
	{
		if( *pu8Src >= ASCII_LOW_THRESHOLD_CAPSON_TO_OFF &&
			*pu8Src <= ASCII_HIGH_THRESHOLD_CAPSON_TO_OFF )
		{
			*pu8Src += ASCII_CONVERTION_FACTOR;
		}
		else
		{
			/*Nothing to do*/
		}
		pu8Src++;
		u8SizeOfList --;
	}
}

void GENFUN_allfunctions ( void )
{
	
}