/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSArray, MapsDebugValuesViewController, NSString;

@interface MapsDebugTableSection : NSObject {

	NSMutableArray* _mutableRows;
	NSArray* _rows;
	MapsDebugValuesViewController* _displayingViewController;
	NSString* _title;
	NSString* _footer;

}

@property (assign,nonatomic,__weak) MapsDebugValuesViewController * displayingViewController;              //@synthesize displayingViewController=_displayingViewController - In the implementation block
@property (nonatomic,copy) NSString * title;                                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * footer;                                                              //@synthesize footer=_footer - In the implementation block
@property (nonatomic,readonly) NSArray * rows;                                                             //@synthesize rows=_rows - In the implementation block
-(id)addCheckmarkRowsGroupWithContent:(/*^block*/id)arg1 object:(id)arg2 key:(id)arg3 ;
-(id)addSwitchRowWithTitle:(id)arg1 defaultsKey:(id)arg2 ;
-(id)addNavigationRowWithTitle:(id)arg1 viewControllerContent:(/*^block*/id)arg2 ;
-(id)addSliderRowWithTitle:(id)arg1 subtitleStringFormat:(id)arg2 min:(float)arg3 max:(float)arg4 defaultsKey:(id)arg5 sliderValueIfUnset:(float)arg6 changeHandler:(/*^block*/id)arg7 ;
-(id)addCheckmarkRowsGroupWithContent:(/*^block*/id)arg1 defaultsKey:(id)arg2 checkedRowValueIfUnset:(id)arg3 changeHandler:(/*^block*/id)arg4 ;
-(id)addSwitchRowWithTitle:(id)arg1 get:(/*^block*/id)arg2 set:(/*^block*/id)arg3 ;
-(id)addSwitchRowWithTitle:(id)arg1 defaultsKey:(id)arg2 switchOnStateIfUnset:(char)arg3 changeHandler:(/*^block*/id)arg4 ;
-(id)addEmptySectionBannerRowWithTitle:(id)arg1 ;
-(id)addSliderRowWithTitle:(id)arg1 subtitleStringFormat:(id)arg2 min:(float)arg3 max:(float)arg4 get:(/*^block*/id)arg5 set:(/*^block*/id)arg6 ;
-(void)setDisplayingViewController:(MapsDebugValuesViewController *)arg1 ;
-(id)addCheckmarkRowsGroupWithContent:(/*^block*/id)arg1 get:(/*^block*/id)arg2 set:(/*^block*/id)arg3 ;
-(id)addTextFieldRowWithTitle:(id)arg1 placeholderText:(id)arg2 inputType:(int)arg3 get:(/*^block*/id)arg4 set:(/*^block*/id)arg5 ;
-(id)addTextFieldRowWithTitle:(id)arg1 placeholderText:(id)arg2 inputType:(int)arg3 defaultsKey:(id)arg4 ;
-(id)addNavigationRowWithTitle:(id)arg1 action:(/*^block*/id)arg2 ;
-(id)addCheckmarkRowsGroupWithContent:(/*^block*/id)arg1 defaultsKey:(id)arg2 changeHandler:(/*^block*/id)arg3 ;
-(MapsDebugValuesViewController *)displayingViewController;
-(id)addNavigationRowForViewControllerClass:(Class)arg1 ;
-(id)addButtonRowWithTitle:(id)arg1 action:(/*^block*/id)arg2 ;
-(id)addGEOTextFieldRowWithTitle:(id)arg1 placeholderText:(id)arg2 inputType:(int)arg3 defaultsKey:(id)arg4 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)commit;
-(NSArray *)rows;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
-(void)addRow:(id)arg1 ;
@end

