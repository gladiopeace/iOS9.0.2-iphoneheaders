/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OADShapeProperties.h>

@class OADConnection;

@interface OADConnectorProperties : OADShapeProperties {

	OADConnection* mFrom;
	OADConnection* mTo;

}
+(id)defaultProperties;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)from;
-(id)to;
-(id)initWithDefaults;
@end

