#pragma once
namespace HEURC_dataFormat {
	#define myUint32 unsigned int
	#define myInt32  int
	#define myUint16 unsigned short
	#define myInt16  short
	#define myUint8  unsigned char
	#define myInt8   char
	typedef struct {
		myUint16 header;
		myUint16 dataID;
		myUint16 dataType;
		myUint16 dataNum;
	}dataInfoDef;
	enum dataType {
		dataType_Double = 1,
		dataType_Float,
		dataType_Int,
		dataType_Char,
		noData
	};
}


