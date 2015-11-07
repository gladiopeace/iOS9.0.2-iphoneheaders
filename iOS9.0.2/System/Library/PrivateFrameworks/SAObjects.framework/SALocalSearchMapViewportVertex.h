/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SALocalSearchMapViewportVertex : AceObject <SAAceSerializable>

@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mapViewportVertex;
+(id)mapViewportVertexWithDictionary:(id)arg1 context:(id)arg2 ;
-(double)latitude;
-(double)longitude;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

