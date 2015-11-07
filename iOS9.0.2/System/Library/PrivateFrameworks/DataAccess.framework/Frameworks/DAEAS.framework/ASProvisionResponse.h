/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber, NSString;

@interface ASProvisionResponse : ASItem {

	NSArray* _policies;
	NSNumber* _status;
	char _remoteWipe;
	NSString* _policyType;

}
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
-(id)policies;
-(void)_setStatus:(id)arg1 ;
-(id)init;
-(id)description;
-(id)status;
-(id)asParseRules;
-(void)_setPolicies:(id)arg1 ;
-(void)_setRemoteWipe:(id)arg1 ;
-(void)setPolicyType:(id)arg1 ;
-(char)remoteWipe;
-(id)initWithPolicyType:(id)arg1 ;
-(id)policyType;
@end

