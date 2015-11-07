/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate;

@interface PDAutomaticGroup : NSObject {

	char _nfcEnabled;
	NSString* _passTypeID;
	NSString* _groupingID;
	int _passStyle;
	NSDate* _minDate;
	NSDate* _maxDate;
	NSDate* _ingestedDate;

}

@property (nonatomic,copy) NSString * passTypeID;                                                    //@synthesize passTypeID=_passTypeID - In the implementation block
@property (nonatomic,copy) NSString * groupingID;                                                    //@synthesize groupingID=_groupingID - In the implementation block
@property (assign,nonatomic) int passStyle;                                                          //@synthesize passStyle=_passStyle - In the implementation block
@property (nonatomic,retain) NSDate * minDate;                                                       //@synthesize minDate=_minDate - In the implementation block
@property (nonatomic,retain) NSDate * maxDate;                                                       //@synthesize maxDate=_maxDate - In the implementation block
@property (nonatomic,retain) NSDate * ingestedDate;                                                  //@synthesize ingestedDate=_ingestedDate - In the implementation block
@property (assign,setter=setNFCEnabled:,getter=isNFCEnabled,nonatomic) char nfcEnabled;              //@synthesize nfcEnabled=_nfcEnabled - In the implementation block
+(id)automaticGroupWithGroupingProfile:(id)arg1 ;
-(void)setNFCEnabled:(char)arg1 ;
-(char)isNFCEnabled;
-(void)addPassWithGroupingProfile:(id)arg1 ;
-(void)setMaxDate:(NSDate *)arg1 ;
-(char)_canAcceptDate:(id)arg1 withLeeway:(double)arg2 ;
-(char)_dateIsAcceptable:(id)arg1 ;
-(int)passStyle;
-(NSDate *)ingestedDate;
-(void)dealloc;
-(void)setMinDate:(NSDate *)arg1 ;
-(NSDate *)minDate;
-(NSDate *)maxDate;
-(void)setGroupingID:(NSString *)arg1 ;
-(void)setIngestedDate:(NSDate *)arg1 ;
-(NSString *)groupingID;
-(NSString *)passTypeID;
-(void)setPassTypeID:(NSString *)arg1 ;
-(void)setPassStyle:(int)arg1 ;
@end

