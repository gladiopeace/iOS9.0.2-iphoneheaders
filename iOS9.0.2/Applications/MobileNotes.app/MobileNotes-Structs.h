/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct CGImage* CGImageRef;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGColor* CGColorRef;

typedef struct CGContext* CGContextRef;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_IC7;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct CGPDFPage* CGPDFPageRef;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct _NSZone* NSZoneRef;

typedef struct ICDeviceHardwareInfo {
	unsigned modelName;
	int version;
	int subVersion;
} ICDeviceHardwareInfo;

typedef struct __GLsync* GLsyncRef;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_TS15;

typedef struct {
	float x;
	float y;
	float z;
	float w;
} SCD_Struct_TS16;

typedef struct CATransform3D {
	float m11;
	float m12;
	float m13;
	float m14;
	float m21;
	float m22;
	float m23;
	float m24;
	float m31;
	float m32;
	float m33;
	float m34;
	float m41;
	float m42;
	float m43;
	float m44;
} CATransform3D;

typedef struct {
	int arcType;
	char before;
	float snapAngle;
} SCD_Struct_IC18;

typedef struct {
	CGPoint field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6;
	double field7;
	char field8;
	char field9;
	float field10;
} SCD_Struct_IC19;

typedef struct __CVOpenGLESTextureCache* CVOpenGLESTextureCacheRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	int field1;
	unsigned field2;
	char field3;
	char* field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
	char field8;
	_ field9;
	NSRange field10;
	unsigned field11;
} SCD_Struct_TS22;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct _long {
	unsigned __cap_;
	unsigned __size_;
	char* __data_;
} long;

typedef struct _short {
	/*function pointer*/void* ;
	unsigned char __size_;
	c) __lx;
	char __data_[11];
} short;

typedef struct _raw {
	unsigned long __words[3];
} raw;

typedef struct _rep {
	/*function pointer*/void* ;
	long __l;
	short __s;
	const aw) __r;
} rep;

typedef struct _compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > {
	const ep __first_;
} compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >;

typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {
	compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > __r_;
} basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >;

typedef struct Document {
	/*function pointer*/void* _vptr$MessageLite;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _unknown_fields_;
	unsigned _has_bits_[1];
	int _cached_size_;
	NoteDocument notedocument_;
	LegacyNoteDocument legacynotedocument_;
} Document;

typedef struct NoteContext* NoteContextRef;

