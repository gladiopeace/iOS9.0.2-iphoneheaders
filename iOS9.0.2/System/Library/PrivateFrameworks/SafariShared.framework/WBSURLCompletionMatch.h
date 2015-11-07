/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSCompletionListItem.h>

@class NSString;

@interface WBSURLCompletionMatch : NSObject <WBSCompletionListItem> {

	int _matchLocation;

}

@property (nonatomic,readonly) int matchLocation;                              //@synthesize matchLocation=_matchLocation - In the implementation block
@property (nonatomic,readonly) char matchLocationIsInURL; 
@property (getter=isTopHit,nonatomic,readonly) char topHit; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) NSString * lastSearchQuery; 
+(int)matchLocationForString:(id)arg1 inURLString:(id)arg2 ;
+(int)matchLocationForString:(id)arg1 inTitle:(id)arg2 ;
-(NSString *)description;
-(id)title;
-(id)originalURLString;
-(NSString *)parsecDomainIdentifier;
-(id)initWithMatchLocation:(int)arg1 ;
-(id)userVisibleURLString;
-(char)isTopHit;
-(int)matchLocation;
-(char)matchLocationIsInURL;
-(id)matchingStringWithUserTypedPrefix:(id)arg1 ;
@end

