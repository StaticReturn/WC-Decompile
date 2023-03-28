#ifndef __PROTOTYPES_H__
#define __PROTOTYPES_H__

uint8_t	sub_401000();
uint8_t sub_4413C0( int16_t index, uint8_t *destination );
uint8_t sub_433020( int16_t index, uint8_t *destination );

int16_t sub_401020();
int16_t	sub_434FB0();
int16_t sub_4311E0();
int16_t	sub_433120( uint8_t *byteArrayIn );

void	quit_on_dd_error( const char *string, int32_t errorCode );
const char*		sub_4331F0( int32_t errorCode ); 

int16_t     sub_401040( int16_t arg0 );
int16_t sub_442050( int32_t *a1, uint16_t a2, int16_t a3, int32_t a4, int16_t a5, int16_t a6, int16_t a7, int16_t a8, char *a9 );

void    sub_4408A0( int32_t *memory_address );
#endif