#include "stdio.h"
#include "GENFUN.h"


void main ( void )
{

	uint8 au8TestArray[11] = "hello world";
	
	printf("Testing GENFUN_vCapsOn\n");
	printf("Array before CapsOn: %s\n", au8TestArray);
	GENFUN_vCapsOn(&au8TestArray[0], 11);
	printf("Array after CapsOn: %s\n", au8TestArray);

}


void GENFUN_vCapsOn (uint8 *pu8Src, uint8 u8SizeOfList) 
{
	while ( u8SizeOfList != 0 )
	{
		if( *pu8Src > ASCII_LOW_THRESHOLD_OFF_ON && 
			*pu8Src < ASCII_HIGH_THRESHOLD_OFF_ON)
		{
			*pu8Src -= ASCII_CONVERTION_FACTOR;
		}
		else
		{
			/*Nothing to do*/
		}
		pu8Src++;
		u8SizeOfList--;
	}
}

void GENFUNC_vCapsOff ( void );