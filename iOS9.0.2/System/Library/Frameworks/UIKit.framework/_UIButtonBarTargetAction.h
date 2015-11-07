/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIBarButtonItem;

@interface _UIButtonBarTargetAction : NSObject {

	UIBarButtonItem* _barButtonItem;
	/*^block*/id _actionFilter;

}

@property (nonatomic,readonly) UIBarButtonItem * barButtonItem;              //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (nonatomic,copy) id actionFilter;                                  //@synthesize actionFilter=_actionFilter - In the implementation block
@property (nonatomic,readonly) SEL proxyAction; 
-(id)init;
-(UIBarButtonItem *)barButtonItem;
-(id)initWithBarButtonItem:(id)arg1 ;
-(void)setActionFilter:(id)arg1 ;
-(SEL)proxyAction;
-(void)_invoke:(id)arg1 forEvent:(id)arg2 ;
-(id)actionFilter;
@end

