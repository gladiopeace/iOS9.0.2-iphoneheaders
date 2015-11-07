/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPContainerCoalescingToken.h>

@protocol MSPContainerCoalescingToken <NSObject>
@required
-(void)endCoalescingEdits;

@end


@protocol NSObjectNSCopying;
@class MSPContainer, NSString;

@interface MSPContainerCoalescingToken : NSObject <MSPContainerCoalescingToken> {

	MSPContainer* _container;
	id<NSObject><NSCopying> _context;
	char _invalidated;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)initWithContainerOwner:(id)arg1 context:(id)arg2 ;
-(void)endCoalescingEdits;
@end

