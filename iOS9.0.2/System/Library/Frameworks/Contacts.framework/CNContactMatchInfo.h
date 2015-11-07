/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSNumber, NSDictionary, NSAttributedString;

@interface CNContactMatchInfo : NSObject {

	char _matchedNameProperty;
	NSNumber* _relevanceScore;
	NSDictionary* _matchedProperties;
	NSAttributedString* _excerpt;

}

@property (nonatomic,copy) NSNumber * relevanceScore;                     //@synthesize relevanceScore=_relevanceScore - In the implementation block
@property (nonatomic,copy) NSDictionary * matchedProperties;              //@synthesize matchedProperties=_matchedProperties - In the implementation block
@property (nonatomic,retain) NSAttributedString * excerpt;                //@synthesize excerpt=_excerpt - In the implementation block
@property (assign,nonatomic) char matchedNameProperty;                    //@synthesize matchedNameProperty=_matchedNameProperty - In the implementation block
-(NSDictionary *)matchedProperties;
-(void)setRelevanceScore:(NSNumber *)arg1 ;
-(void)setMatchedNameProperty:(char)arg1 ;
-(void)setMatchedProperties:(NSDictionary *)arg1 ;
-(char)matchedNameProperty;
-(NSAttributedString *)excerpt;
-(void)setExcerpt:(NSAttributedString *)arg1 ;
-(NSNumber *)relevanceScore;
-(void)dealloc;
@end
