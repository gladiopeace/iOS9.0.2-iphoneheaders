/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/_NSConcreteObservation.h>
#import <libobjc.A.dylib/NSOwningObserver.h>
#import <libobjc.A.dylib/NSObservable.h>

@class NSObservation, NSString;

@interface _NSOwningMappingObservation : _NSConcreteObservation <NSOwningObserver, NSObservable> {

	NSObservation* _ownedObservation;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setObservation:(id)arg1 ;
@end

