/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSString;

@interface STContactAddress : STSiriModelObject {

	int _type;
	NSString* _stringValue;

}
+(char)supportsSecureCoding;
-(id)initWithStringValue:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(int)type;
-(id)stringValue;
-(id)initWithType:(int)arg1 stringValue:(id)arg2 ;
-(id)_aceContextObjectValue;
@end

