/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/VoiceMemos.app/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKit/UIToolbar.h>

@class UITableViewCell, _RCBarButtonItem, UIBarButtonItem;

@interface _RCPlaybackToolbar : UIToolbar {

	UITableViewCell* _containingCell;
	_RCBarButtonItem* _shareItem;
	UIBarButtonItem* _centerItem;

}

@property (nonatomic,__weak,readonly) UITableViewCell * containingCell;              //@synthesize containingCell=_containingCell - In the implementation block
@property (nonatomic,retain) _RCBarButtonItem * shareItem;                           //@synthesize shareItem=_shareItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * centerItem;                           //@synthesize centerItem=_centerItem - In the implementation block
-(_RCBarButtonItem *)shareItem;
-(UIBarButtonItem *)centerItem;
-(id)initWithContainingCell:(id)arg1 ;
-(void)setShareItem:(_RCBarButtonItem *)arg1 ;
-(void)setCenterItem:(UIBarButtonItem *)arg1 ;
-(UITableViewCell *)containingCell;
-(void)drawRect:(CGRect)arg1 ;
@end
