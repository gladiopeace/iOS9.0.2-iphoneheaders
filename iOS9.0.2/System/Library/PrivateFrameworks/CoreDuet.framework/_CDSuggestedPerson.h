/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CNContactProperty, _CDContact, NSArray;

@interface _CDSuggestedPerson : NSObject {

	CNContactProperty* _contactProperty;
	_CDContact* _contact;
	NSArray* _interactions;
	double _rank;
	double _score;

}

@property (retain) CNContactProperty * contactProperty;              //@synthesize contactProperty=_contactProperty - In the implementation block
@property (retain) _CDContact * contact;                             //@synthesize contact=_contact - In the implementation block
@property (assign) double rank;                                      //@synthesize rank=_rank - In the implementation block
@property (assign) double score;                                     //@synthesize score=_score - In the implementation block
@property (retain) NSArray * interactions;                           //@synthesize interactions=_interactions - In the implementation block
-(CNContactProperty *)contactProperty;
-(void)setContact:(_CDContact *)arg1 ;
-(_CDContact *)contact;
-(double)score;
-(id)description;
-(void)setInteractions:(NSArray *)arg1 ;
-(void)setContactProperty:(CNContactProperty *)arg1 ;
-(NSArray *)interactions;
-(void)setScore:(double)arg1 ;
-(double)rank;
-(void)setRank:(double)arg1 ;
@end

