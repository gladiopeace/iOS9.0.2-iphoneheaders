/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, UIImage, NSURL, NSDate, NSNumber;


@protocol IMMediaChapter <NSObject>
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * customTitle; 
@property (nonatomic,readonly) NSString * bookTitle; 
@property (nonatomic,readonly) UIImage * artwork; 
@property (nonatomic,readonly) SCD_Struct_AE41 mediaTimeRange; 
@property (nonatomic,readonly) SCD_Struct_AE41 assetTimeRange; 
@property (nonatomic,readonly) NSURL * assetURL; 
@property (nonatomic,readonly) NSURL * externalURL; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) int metadataType; 
@property (nonatomic,readonly) char hasAlternateArtwork; 
@property (nonatomic,retain) NSDate * dateLastOpened; 
@property (nonatomic,readonly) NSNumber * persistentID; 
@required
-(void)setDateLastOpened:(id)arg1;
-(NSDate *)dateLastOpened;
-(NSString *)bookTitle;
-(SCD_Struct_AE41)assetTimeRange;
-(SCD_Struct_AE41)mediaTimeRange;
-(void)incrementPlayCount;
-(char)hasAlternateArtwork;
-(id)artworkCatalogForTime:(double)arg1;
-(int)metadataType;
-(NSURL *)externalURL;
-(NSURL *)assetURL;
-(NSNumber *)persistentID;
-(int)type;
-(NSString *)title;
-(NSString *)customTitle;
-(UIImage *)artwork;

@end

