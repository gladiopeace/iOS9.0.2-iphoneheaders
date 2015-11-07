/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSMutableArray;

@interface TSUDateFormatCategory : NSObject {

	CFDateFormatterRef mInitialFormatter;
	NSMutableArray* mEntries;

}
-(void)dealloc;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 forceAllowAMPM:(char)arg2 successfulFormatString:(const _CFString*)arg3 perfect:(char*)arg4 ;
-(id)initWithInitialPattern:(id)arg1 locale:(CFLocaleRef)arg2 ;
-(void)addSeparator:(unsigned short)arg1 format:(id)arg2 locale:(CFLocaleRef)arg3 ;
-(id)entryForSeparator:(unsigned short)arg1 ;
@end

