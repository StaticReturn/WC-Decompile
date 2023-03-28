#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "dd_errors.h"


// Formerly sub_432140
void    quit_on_dd_error( const char *string, int32_t errorCode ) {
    const char *errorMessage;
    FILE		*errorFile;
    
    errorMessage = sub_4331F0( errorCode );
    sprintf( byte_486078, "ERROR: %s - (%s)", string, errorMessage );
    
    if( dword_46B1AC != 0 ) {
        /* FIXME: FUNCTION POINTERS
         (*(dword_46B1AC+8))(dword_46B1A8);
         */
        dword_46B1AC = 0;
    }
    
    if( dword_46B1A8 != 0 ) {
        /* FIXME: FUNCTION POINTERS
         (*(dword_46B1A8+8))(dword_46B1A8);
         */
        dword_46B1A8 = 0;
    }
    
    /* FIXME: FUNCTION POINTERS
     (*(dword_45B1A4+76))(dword_45B1A4);
     (*(dword_45B1A4+8))(dword_45B1A4);
     */
    
    OutputDebugStringA( byte_486078 );
    SetWindowPos( dword_486074, 1, 0, 0, 0x140, 0x0C8, 0x40 );
    errorFile = fopen( "direct.err", "wt+" );
    fprintf( errorFile, "%s", byte_486078 );
    fclose( errorFile );
    MessageBoxA( 0, byte_486078, "DirectDraw Error", 0x10 );
    exit( 1 );
}


const char * sub_4331F0( int32_t errorCode ) {

 if( errorCode <= 0x887601A4 ) {
	switch( errorCode ) {
		case 0x80004005: return aDderr_generic;
		case 0x80004001: return aDderr_unsuppor;
		case 0x80070057: return aDderr_invalidp;
		case 0x8007000E: return aDderr_outofmem;
		case 0x8876000A: return aDderr_cannotat;
		case 0x88760005: return aDderr_alreadyi;
		case 0x88760028: return aDderr_currentl;
		case 0x88760014: return aDderr_cannotde;
		case 0x8876005A: return aDderr_heightal;
		case 0x88760037: return aDderr_exceptio;
		case 0x88760064: return aDderr_invalidc;
		case 0x8876005F: return aDderr_incompat;
		case 0x88760078: return aDderr_invalidm;
		case 0x8876006E: return aDderr_invali_0;
		case 0x88760091: return aDderr_invali_1;
		case 0x88760082: return aDderr_invalido;
		case 0x887600A0: return aDderr_lockedsu;
		case 0x99760096: return aDderr_invalidr;
		case 0x887600B4: return aDderr_noalphah;
		case 0x887600AA: return aDderr_no3d;
		case 0x887600D2: return aDderr_nocolorc;
		case 0x887600CD: return aDderr_noclipli;
		case 0x887600D7: return aDderr_nocolork;
		case 0x887600D4: return aDderr_nocooper;
		case 0x887600E6: return aDderr_nofliphw;
		case 0x887600DC: return aDderr_nocolo_0;
		case 0x887600DE: return aDderr_nodirect;
		case 0x887600E1: return aDderr_noexclus;
		case 0x887600FA: return aDderr_nomirror;
		case 0x887600F0: return aDderr_nogdi;
		case 0x88760104: return aDderr_nooverla;
		case 0x887600FF: return aDderr_notfound;
		case 0x88760122: return aDderr_norotati;
		case 0x88760118: return aDderr_noraster;
		case 0x8876013C: return aDderr_not4bitc;
		case 0x88760136: return aDderr_nostretc;
		case 0x88760140: return aDderr_not8bitc;
		case 0x8876013D: return aDderr_not4bi_0;
		case 0x8876014F: return aDderr_novsynch;
		case 0x8876014A: return aDderr_notextur;
		case 0x8876015E: return aDderr_nozoverl;
		case 0x88760154: return aDderr_nozbuffe;
		case 0x8876017C: return aDderr_outofvid;
		case 0x88760168: return aDderr_outofcap;
		case 0x88760190: return aDderr_colorkey;
		case 0x8876017E: return aDderr_overlayc;
		case 0x88760180: return aDderr_overla_0;
		case 0x88760183: return aDderr_paletteb;
		case 0x887601A4: return aDderr_surfac_0;
		case 0x8876019A: return aDderr_surfacea;
		default:
			return aUndefined;
	}
 }

 //FIXME: for this to work properly, errorCode needs to be unsigned.
 errorCode += 0x7789FE52;

 switch( errorCode ) {
	case 0: return aDderr_surfaceb;
	case 5:	return aDderr_cantlock;
	case 10: return aDderr_surfacei;
	case 20: return aDderr_surfacel;
	case 30: return aDderr_surfacen;
	case 40: return aDderr_toobighe;
	case 50: return aDderr_toobigsi;
	case 60: return aDderr_toobigwi;
	case 80: return aDderr_unsupp_0;
	case 90: return aDderr_unsupp_1;
	case 107: return aDderr_vertical;
	case 111: return aDderr_wasstill;
	case 130: return aDderr_xalign;
	case 131: return aDderr_invalidd;
	case 132: return aDderr_directdr;
	case 133: return aDderr_nodire_0;
	case 134: return aDderr_primarys;
	case 135: return aDderr_noemulat;
	case 136: return aDderr_regionto;
	case 137: return aDderr_clipperi;
	case 138: return aDderr_noclippe;
	case 139: return aDderr_nohwnd;
	case 140: return aDderr_hwndsubc;
	case 141: return aDderr_hwndalre;
	case 142: return aDderr_nopalett;
	case 143: return aDderr_nopale_0;
	case 144: return aDderr_bltfastc;
	case 145: return aDderr_noblthw;
	case 146: return aDderr_noddrops;
	case 147: return aDderr_overlayn;
	case 148: return aDderr_noover_0;
	case 149: return aDderr_invali_2;
	case 150: return aDderr_notaover;
	case 151: return aDderr_exclusiv;
	case 152: return aDderr_notflipp;
	case 153: return aDderr_cantdupl;
	case 154: return aDderr_notlocke;
	case 155: return aDderr_cantcrea;
	case 156: return aDderr_nodc;
	case 157: return aDderr_wrongmod;
	case 158: return aDderr_implicit;
	case 159: return aDderr_notpalet;
	case 160: return aDderr_unsupp_2;
	case 161: return aDderr_nomipmap;
	case 162: return aDderr_invalids;
	case 190: return aDderr_dcalread;
	case 210: return aDderr_cantpage;
	case 230: return aDderr_cantpa_0;
	case 250: return aDderr_notpagel;
	default:
		return aUndefined;
 }

 return "sub_4331F0():  Unreachable";
}