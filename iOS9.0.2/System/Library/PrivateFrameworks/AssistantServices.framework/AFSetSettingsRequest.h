/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFSetSettingsRequest : AFSiriRequest {

	NSArray* _settings;
	char _applyChanges;

}

@property (nonatomic,copy) NSArray * settings;               //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) char applyChanges;              //@synthesize applyChanges=_applyChanges - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)settings;
-(id)createResponse;
-(id)createResponseWithSettingChanges:(id)arg1 ;
-(void)_setSettings:(id)arg1 ;
-(char)applyChanges;
-(void)_setApplyChanges:(char)arg1 ;
@end

