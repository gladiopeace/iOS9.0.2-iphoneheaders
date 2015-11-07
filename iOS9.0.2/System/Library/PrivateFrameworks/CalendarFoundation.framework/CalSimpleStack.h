/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface CalSimpleStack : NSObject {

	char _objectsProbablyAvailable;
	NSMutableArray* _objects;

}

@property (assign) char objectsProbablyAvailable;              //@synthesize objectsProbablyAvailable=_objectsProbablyAvailable - In the implementation block
@property (readonly) NSMutableArray * objects;                 //@synthesize objects=_objects - In the implementation block
-(NSMutableArray *)objects;
-(id)init;
-(void)addObject:(id)arg1 ;
-(char)objectsProbablyAvailable;
-(void)setObjectsProbablyAvailable:(char)arg1 ;
-(id)popObject;
@end

