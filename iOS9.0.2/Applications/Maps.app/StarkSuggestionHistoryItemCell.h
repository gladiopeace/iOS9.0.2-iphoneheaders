/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/HistoryItemTableViewCell.h>

@class StarkSuggestion;

@interface StarkSuggestionHistoryItemCell : HistoryItemTableViewCell {

	StarkSuggestion* _suggestion;

}

@property (nonatomic,retain) StarkSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
+(Class)layoutClass;
-(StarkSuggestion *)suggestion;
-(void)setSuggestion:(StarkSuggestion *)arg1 ;
-(id)glyph;
-(void)layoutSubviews;
@end

