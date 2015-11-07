/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSDictionary;

@interface SagaSetItemPropertyOperation : CloudLibraryOperation {

	unsigned _sagaID;
	NSDictionary* _properties;

}
-(id)initWithSagaID:(unsigned)arg1 properties:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isPersistent;
-(void)main;
@end

