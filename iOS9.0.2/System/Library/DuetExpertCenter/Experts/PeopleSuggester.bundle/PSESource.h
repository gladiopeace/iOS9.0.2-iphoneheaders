/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DuetExpertCenter/Experts/PeopleSuggester.bundle/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PeopleSuggester/PSESource.h>

@protocol PSESource <NSObject>
@required
-(id)peopleWithLimit:(unsigned)arg1 consumer:(unsigned)arg2;

@end


@class NSMutableDictionary, PSESourceSettings, NSString;

@interface PSESource : NSObject <PSESource> {

	NSMutableDictionary* _pushedResults;

}

@property (readonly) PSESourceSettings * settings; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pushedResultsKeySource:(id)arg1 consumer:(unsigned)arg2 ;
+(id)sharedInstance;
-(void)_receiveSourceChanged:(id)arg1 ;
-(void)_setupSourceChangedNotification;
-(id)peopleWithLimit:(unsigned)arg1 consumer:(unsigned)arg2 ;
-(id)_meItem;
-(PSESourceSettings *)settings;
@end

