/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAMPCollection.h>

@class NSString;

@interface SAMPAudiobookCollection : SAMPCollection

@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,copy) NSString * sortArtist; 
+(id)audiobookCollection;
+(id)audiobookCollectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)artist;
-(void)setArtist:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)sortArtist;
-(void)setSortArtist:(NSString *)arg1 ;
@end

