/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface OCXSStream : NSObject {

	NSMutableArray* mLevelStack;

}
-(void)dealloc;
-(id)init;
-(char)hasLevels;
-(int)currentContextDepth;
-(char)popLevel;
-(int)currentContextChildDepth;
-(void)pushLevel:(int)arg1 name:(const char*)arg2 ;
@end

