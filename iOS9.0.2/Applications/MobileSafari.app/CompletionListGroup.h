/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CompletionListGroup : NSObject {

	NSString* _title;
	NSString* _headerViewReuseIdentifier;
	NSArray* _completions;

}

@property (nonatomic,readonly) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * headerViewReuseIdentifier;              //@synthesize headerViewReuseIdentifier=_headerViewReuseIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * completions;                             //@synthesize completions=_completions - In the implementation block
-(id)initWithTitle:(id)arg1 completions:(id)arg2 ;
-(void)configureHeaderView:(id)arg1 forCompletionList:(id)arg2 ;
-(NSString *)headerViewReuseIdentifier;
-(NSString *)title;
-(id)headerView;
-(NSArray *)completions;
@end

