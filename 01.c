#include "common.h"

uint8_t	sub_401000	() {
 uint8_t	*edi, esi = 0;
 uint8_t	result;

 edi = &word_5A8A50;

 do {
	result = sub_4413C0( esi, edi );
	edi += 6;
	esi++;
 } while( edi < &word_5A9050 );

 return result;
}


// FIXME: Delete this function.
uint8_t sub_4413C0( int16_t index, uint8_t *destination ) {
 return sub_433020( index, destination );
}


// Takes an index and an array and places 3 values into that array
// in reverse order, returning the second value.
// Disregards byte_486113. 
uint8_t sub_433020( int16_t index, uint8_t *destination ) {
 uint8_t	byteOne, byteTwo, byteThree;

 index	= index * 4;  // 4 byte boundry...?
 byteOne	= byte_486112[index];  // movzx used, which implies uint8_t
 *(destination + 0) = byteOne;
 byteTwo	= byte_486111[index];
 *(destination + 2) = byteTwo;
 byteThree	= byte_486110[index];
 *(destination + 4) = byteThree;

 return byteTwo;
}


int16_t	sub_401020() {
 sub_434FB0();
 return sub_433120( word_5A8A50 );
}


// FIXME: Delete this function...?
int16_t sub_434FB0() {
 return sub_4311E0();   // FIXME:  This is actually a JMP, which means we can't
						// return here...
}


// Unkown return type of sub_4311E0() or dword_46B1A4.
int16_t sub_4311E0() {
/* FIXME: FUNCTION POINTERS
 return (*(dword_46B1A4 + 0x58))( dword_46B1A4, 1, 0 );
 */
 return 1;  // FIXME:  Should be the return value of the function called.
}


int16_t sub_433120( uint8_t *byteArrayIn ) {
 int32_t esi = 0, result = 0;
 int16_t ARRAY_SIZE = 1024;
 uint8_t *edi;
 int8_t  al, byteArrayOut[ARRAY_SIZE];

/* FIXME: FUNCTION POINTERS
 (*(dword_46B1A4 + 0x58))( dword_46B1A4, 1, 0 );
 */
 edi = byteArrayIn;

 {
	al  = *edi;
	edi += 6;
	byte_486112[esi] = al;
    byteArrayOut[esi] = al;
	al	= *(edi - 4);
	byte_486111[esi] = al;
	byteArrayOut[esi+1] = al;
	al	= *(edi - 2);
	byte_486110[esi] = al;
	byteArrayOut[esi+2] = al;
	byteArrayOut[esi+3] = 0;	// el or ecx
	byte_486113[esi] = 4;	// dl or edx
	esi += 4;  // edx
 } while( esi < ARRAY_SIZE );

/* FIXME: FUNCTION POINTERS
 result = (*(dword_46B1B0 + 0x18))(dword_46B1B0, 0, 0, 0x100, &byteArray)
*/

 if( result != 0 )
	quit_on_dd_error( aDibsetwholepal, result );

/* FIXME: FUNCTION POINTERS
 result = (*(dword_46B1A8 + 0x7C))(dword_46B1A8, dword_46B1B0);
*/

 if( result != 0 )
	quit_on_dd_error( aDibmakedibCr_3, result );

 return result;
}


int16_t		sub_401040( int16_t index ) {
 char		*local = "Unnecessary"; // Not used in this function?

 if( word_59D9B0[ index ] == 0x8001 ) { // Implies word_59D9B0 is uint16_t
	return 0;
 }

return sub_442050(
	dword_5A7510,
	word_59D9B0[ index ] + word_59A852,
	word_59D930[ index ] + word_59A854,
	dword_59D2F0[ index ],
	word_59D230[ index ],
	word_59CD90[ index ],
	word_59C950[ index ],
	word_59C870[ index ],
	local );
}


int16_t sub_442050( int32_t *a1, uint16_t a2, int16_t a3, int32_t *a4,
    int16_t a5, int16_t a6, int16_t a7, int16_t a8, char *a9 ) {
 int var_4, var_8;

 if( a4 == 0 ) {
	if( a1[0x08] > a2 || a1[0x0C] < a2 ||
		a1[0x0A] > a3 || a1[0x0E] < a3    )
		return 0;
	else
		return 1;
 }

 sub_4408A0( a4 );
 ecx = *(a4 + 4);
 eax = *(a5 * 4) + 4;

 if( ecx < eax )
	return 0;

 eax = *(a4 + eax) + a4;

 ecx = (word *)(eax + 2)
 edi = (word *)(eax)
 esi = (word *)(eax + 4)
 ebx = (word *)(eax + 6)
 ebp = 0;

 var_4 = esi;
 ebp = (a7 * word_470778[a6]) >> 8;  // or divide by 256
 edx = (a7 * word_470A48[a6]) >> 8;  // or divide by 256

 if( ebp == 0 )
	ebp = 1;

 if( edx == 0 )
	edx = 1;

 edi = edi + ecx;
 var_8 = var_4 + ebx;
 eax = (edx * edi) + (ebp * var_8);
 
 if( eax != 0 )
	eax += 0x100;

 eax = eax >> 8; // a signed shift
 ebx = (ebp * edi) + (edx * var_8);

 if( ebx != 0 )
	ebx += 0x100;

 ebx = ebx >> 8; // a signed shift
 
 if( ebp == 0 )
	ebp = 1;

 if( edx == 0 )
	edx = 1;

 edi = (edx * ecx) >> 8;
 esi = esi - edi;
 edi = ebp;
 edi = edi * var_4;
 esi = esi - edi;
 ebp = ebp * ecx;
 ebp = ebp >> 8;


 edi = (edx * ecx) >> 8;
 edi = ebp * var_4;
 esi = (a3 - edi) - edi;
 ebp = (ebp * ecx) >> 8;


 edi = (edx * ecx) >> 8; // a signed shift
 edi = (ebp * var_4) >> 8; // a signed shift
 esi = (a3 - edi) - edi;
 ebp = (ebp * ecx) >> 8; // a signed shift
 edi = esi + eax; // Load effective address
 eax = ((edx * var_8) >> 8) +1; // a signed shift
 edx = (edx * var_4) >> 8; // a signed shift
 edx = ((edx - ebp) + a2) - eax;
 ecx = ebx + edx; // Load effective address
 
 if( (a1[0x08] <= ecx) && (a1[0x0C] >= edx) &&
	 (a1[0x0A] <= edi) && (a1[0x0E] >= esi)    ) {
	a9[0] = edx;	// This will be a word value
	a9[4] = ecx;	// This will be a word value
	a9[2] = esi;	// This will be a word value
	a9[6] = edi;	// This will be a word value
	return 1;
 }

 return 0;
}


void	sub_4408A0( int32_t *memory_address ) {
	if( *(memory_address - 8) != 0x6666656A )
		logError( "not jefftep" );	
}