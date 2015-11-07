/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSArray, NSString;

@interface SSFamilyCircle : NSObject <SSXPCCoding> {

	NSArray* _familyMembers;
	NSArray* _iTunesAccountNames;

}

@property (nonatomic,retain) NSArray * familyMembers;                   //@synthesize familyMembers=_familyMembers - In the implementation block
@property (nonatomic,retain) NSArray * iTunesAccountNames;              //@synthesize iTunesAccountNames=_iTunesAccountNames - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSArray *)familyMembers;
-(id)newCacheRepresentation;
-(id)allITunesIdentifiers;
-(id)allITunesAccountNames;
-(void)setFamilyMembers:(NSArray *)arg1 ;
-(NSArray *)iTunesAccountNames;
-(void)setITunesAccountNames:(NSArray *)arg1 ;
@end

