/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, <TSUMultipleChoiceListChoiceProviding>;

typedef struct __CFData* CFDataRef;

typedef struct opaque_pthread_mutex_t {
	long __sig;
	char __opaque[40];
} opaque_pthread_mutex_t;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned long field1;
	id field2;
	unsigned long field3;
	unsigned long field4[5];
} SCD_Struct_TS3;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFDateFormatter* CFDateFormatterRef;

typedef struct __CFLocale* CFLocaleRef;

typedef struct __CFDate* CFDateRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFArray* CFArrayRef;

typedef struct __CFNumberFormatter* CFNumberFormatterRef;

typedef struct timeval {
	int tv_sec;
	int tv_usec;
} timeval;

typedef struct TSUOpstat_s {
	char running;
	unsigned long long count;
	timeval min_time;
	timeval max_time;
	timeval total_time;
	timeval last_time;
} TSUOpstat_s;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct __CFSet* CFSetRef;

typedef struct CGColor* CGColorRef;

typedef struct CGContext* CGContextRef;

typedef struct CGPath* CGPathRef;

typedef struct _compressed_pair<std::__1::shared_ptr<TSUStringChunk> *, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk> > > {
	shared_ptr<TSUStringChunk> __first_;
} compressed_pair<std::__1::shared_ptr<TSUStringChunk> *, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk> > >;

typedef struct vector<std::__1::shared_ptr<TSUStringChunk>, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk> > > {
	shared_ptr<TSUStringChunk> __begin_;
	shared_ptr<TSUStringChunk> __end_;
	compressed_pair<std::__1::shared_ptr<TSUStringChunk> *, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk> > > __end_cap_;
} vector<std::__1::shared_ptr<TSUStringChunk>, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk> > >;

typedef struct {
	int field1;
	/*function pointer*/void* field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
	/*function pointer*/void* field6;
} SCD_Struct_TS21;

typedef struct {
	int field1;
	/*function pointer*/void* field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
} SCD_Struct_TS22;

typedef struct CGImage* CGImageRef;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct {
	NSString* mCurrencyCode;
	unsigned mDecimalPlaces : 8;
	unsigned mNegativeStyle : 3;
	unsigned mShowThousandsSeparator : 1;
	unsigned mUseAccountingStyle : 1;
} SCD_Struct_TS25;

typedef struct {
	unsigned mFractionAccuracy : 8;
} SCD_Struct_TS26;

typedef struct {
	unsigned mBase : 8;
	unsigned mBasePlaces : 8;
	unsigned mBaseUseMinusSign : 1;
} SCD_Struct_TS27;

typedef struct {
	unsigned mSuppressDateFormat : 1;
	unsigned mSuppressTimeFormat : 1;
	NSString* mDateTimeFormat;
} SCD_Struct_TS28;

typedef struct {
	unsigned mUseAutomaticUnits : 1;
	int mDurationUnitSmallest;
	int mDurationUnitLargest;
	int mDurationStyle;
} SCD_Struct_TS29;

typedef struct {
	double mMinimum;
	double mMaximum;
	double mIncrement;
	int mDisplayFormatType;
	unsigned mOrientation : 2;
	unsigned mPosition : 2;
} SCD_Struct_TS30;

typedef struct {
	int mInitialValue;
	unsigned mMultipleChoiceListFormatID;
	<TSUMultipleChoiceListChoiceProviding>* mData;
} SCD_Struct_TS31;

typedef struct {
	unsigned mCustomFormatID;
	/*function pointer*/void* mData;
} SCD_Struct_TS32;

typedef struct {
	int mFormatType;
	/*function pointer*/void* ;
	SCD_Struct_TS25 mNumberFormatStruct;
	SCD_Struct_TS26 mFractionFormatStruct;
	SCD_Struct_TS27 mBaseFormatStruct;
	SCD_Struct_TS28 mDateFormatStruct;
	SCD_Struct_TS29 mDurationFormatStruct;
	SCD_Struct_TS32 mCustomFormatStruct;
	SCD_Struct_TS30 mControlFormatStruct;
	SCD_Struct_TS31) mMultipleChoiceListFormatStruct;
} SCD_Struct_TS33;

typedef struct {
	id field1;
	unsigned field2 : 8;
	unsigned field3 : 3;
	unsigned field4 : 1;
	unsigned field5 : 1;
} SCD_Struct_TS34;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	id field3;
} SCD_Struct_TS35;

typedef struct {
	int field1;
	unsigned field2;
	id field3;
} SCD_Struct_TS36;

typedef struct {
	int( field1;
	/*function pointer*/void* field2;
	= field3;
	SCD_Struct_TS3 field4;
	4 field5;
	SCD_Struct_TS3 field6;
	SCD_Struct_TS3 field7;
	SCD_Struct_TS3 field8;
	5 field9;
	SCD_Struct_TS3 field10;
	SCD_Struct_TS26 field11;
	2 field12;
	SCD_Struct_TS27 field13;
	0 field14;
	SCD_Struct_TS29 field15;
	6) field16;
} SCD_Struct_TS37;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
	id field5;
	double field6;
	unsigned field7 : 8;
	unsigned char field8;
	unsigned char field9;
	unsigned char field10;
	unsigned char field11;
	unsigned char field12;
	unsigned char field13;
	unsigned char field14;
	unsigned field15 : 1;
	unsigned field16 : 1;
	unsigned field17 : 1;
	unsigned field18 : 1;
	unsigned field19 : 1;
	unsigned field20 : 1;
} SCD_Struct_TS38;

typedef struct _CCCryptor* CCCryptorRef;

typedef struct _xmlTextReader* xmlTextReaderRef;

typedef struct CGDataProvider* CGDataProviderRef;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned total_in;
	char* next_out;
	unsigned avail_out;
	unsigned total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned adler;
	unsigned reserved;
} z_stream_s;

typedef struct __CTFont* CTFontRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

