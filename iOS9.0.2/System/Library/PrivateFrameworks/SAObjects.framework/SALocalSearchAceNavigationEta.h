/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SADistance, SADuration, NSString;

@interface SALocalSearchAceNavigationEta : AceObject <SAAceSerializable>

@property (nonatomic,retain) SADistance * distanceEta; 
@property (nonatomic,retain) SADuration * timeEta; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceNavigationEta;
+(id)aceNavigationEtaWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SADistance *)distanceEta;
-(void)setDistanceEta:(SADistance *)arg1 ;
-(SADuration *)timeEta;
-(void)setTimeEta:(SADuration *)arg1 ;
@end

