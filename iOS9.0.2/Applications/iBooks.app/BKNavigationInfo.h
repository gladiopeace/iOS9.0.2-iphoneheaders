/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class AEBookInfo, NSString, NSNumber;

@interface BKNavigationInfo : NSManagedObject

@property (nonatomic,retain) AEBookInfo * bookInfo; 
@property (nonatomic,retain) NSString * href; 
@property (nonatomic,retain) NSString * baseHref; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * htmlName; 
@property (nonatomic,retain) NSNumber * indentationLevel; 
@property (nonatomic,retain) NSNumber * absoluteOrder; 
+(char)isExcludedFromSampleHash:(id)arg1 ;
+(id)newEmptyNavigationInfo:(id)arg1 ;
-(char)isExcludedFromSample;
@end

