/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface WMListLevelTextMapper : NSObject {

	NSMutableArray* m_tokens;
	int m_format;
	unsigned m_initNumber;
	void* m_numberFormatter;

}
-(void)dealloc;
-(id)initWithText:(id)arg1 ;
-(id)initWithText:(id)arg1 format:(int)arg2 initNumber:(int)arg3 language:(int)arg4 ;
-(id)initWithText:(id)arg1 format:(int)arg2 language:(int)arg3 ;
-(id)listLevelTextforOutline:(id)arg1 ;
-(unsigned)tokenCount;
-(id)token:(unsigned)arg1 ;
@end

