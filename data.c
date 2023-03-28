#include "common.h"

// FIXME: Find size of byte array.
// This is an endian-swapped array, or at least will be
// after it passes through sub_401000()
#define		SIZE_OF_5A8A50	0x600
uint8_t		word_5A8A50_array[ SIZE_OF_5A8A50 ];  // size IMPLIED by the two address below
uint8_t		*word_5A8A50 = &word_5A8A50_array[ 0x0 ];
uint8_t		*word_5A9050 = &word_5A8A50_array[ SIZE_OF_5A8A50-1 ];


// FIXME: Find size of byte array.
// This might be read data from files.
#define		SIZE_OF_486110	0xFFFF
uint8_t		byte_486110_array[ SIZE_OF_486110 ];
uint8_t		*byte_486110 = &byte_486110_array[ 0 ];
uint8_t		*byte_486111 = &byte_486110_array[ 1 ];
uint8_t		*byte_486112 = &byte_486110_array[ 2 ];
uint8_t		*byte_486113 = &byte_486110_array[ 3 ];

// FIXME: Find size of char array.  Maybe 0x94, according to IDA.
#define		SIZE_OF_486078	0x94
char		byte_486078_array[ SIZE_OF_486078 ];
char		*byte_486078 = &byte_486078_array[ 0 ];

// FIXME: Find size of word array.
// Size inffered by checking next memmory address directly accessed in IDA.
#define		SIZE_OF_59D930	128
int16_t		word_59D930_array[ SIZE_OF_59D930 ];
int16_t		*word_59D930 = &word_59D930_array[ 0 ];

// FIXME: Find size of word array.
// Size inffered by checking next memmory address directly accessed in IDA.
#define     SIZE_OF_59C870	128
int16_t		word_59C870_array[ SIZE_OF_59C870 ];
int16_t		*word_59C870 = &word_59C870_array[ 0 ];

// FIXME: Find size of word array.
// Size inffered by checking next memmory address directly accessed in IDA.
#define     SIZE_OF_59D2F0  128
int32_t		dword_59D2F0_array[ SIZE_OF_59D2F0 ];
int32_t		*dword_59D2F0 = &dword_59D2F0_array[ 0 ];

// FIXME: Find size of word array.
// Size inffered by checking next memmory address directly accessed in IDA.
#define     SIZE_OF_59C950	128
int16_t		word_59C950_array[ SIZE_OF_59C950 ];
int16_t		*word_59C950 = &word_59C950_array[ 0 ];

// FIXME: Find size of word array.
// Size inffered by checking next memmory address directly accessed in IDA.
#define     SIZE_OF_59CD90	128
int16_t		word_59CD90_array[ SIZE_OF_59CD90 ];
int16_t		*word_59CD90 = &word_59CD90_array[ 0 ];

// FIXME: Find size of word array.
// Size inffered by checking next memmory address directly accessed in IDA.
#define     SIZE_OF_59D230	128
int16_t		word_59D230_array[ SIZE_OF_59D230 ];
int16_t		*word_59D230 = &word_59D230_array[ 0 ];

// FIXME: Find size of word array.
// Size inffered by checking next memmory address directly accessed in IDA.
#define     SIZE_OF_59D9B0  128
uint16_t	word_59D9B0_array[ SIZE_OF_59D9B0 ];
uint16_t	*word_59D9B0 = &word_59D9B0_array[ 0 ];



int16_t		word_59A852	 = 0;
int16_t     word_59A854  = 0;


// FIXME: Find size of word array.
// sub_401040 passes dword_5A7510 to sub_442050 as some type of array.
#define		SIZE_OF_5A7510	128
int32_t		word_5A7510_array[ SIZE_OF_5A7510 ];
int32_t		*dword_5A7510 = &word_5A7510_array[ 0 ];


// Windows Stuff
uint32_t	dword_486074 = 0;  // Real type is "HWND" from DirectDraw 

// int? == integer of unknown type
//int16_t	(*dword_46B1A4)( functionPointer, int?, int? ); // A function pointer
functionPointer		dword_46B1A4;
//int16_t	(*dword_46B1A8)( functionPointer, int?, int?, int?, &array[] )
functionPointer		dword_46B1A8;
//int16_t	(*dword_46B1B0)( functionPointer, functionPointer );
functionPointer		dword_46B1B0;
//??		(*dword_46B1AC)( functionPointer );
functionPointer		dword_46B1AC;
//??		(*dword_46B1A8)( functionPointer );
functionPointer		dword_46B1A8;
//??		(*dword_46B1A4)( functionPointer );
functionPointer		dword_46B1A4;
