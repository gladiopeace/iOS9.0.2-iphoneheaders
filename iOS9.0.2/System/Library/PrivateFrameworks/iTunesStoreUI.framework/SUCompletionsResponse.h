/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface SUCompletionsResponse : NSObject {

	NSArray* _completionItems;
	NSString* _title;

}

@property (nonatomic,readonly) NSArray * completionItems;              //@synthesize completionItems=_completionItems - In the implementation block
@property (nonatomic,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
-(void)dealloc;
-(id)init;
-(NSString *)title;
-(id)initWithPropertyList:(id)arg1 ;
-(NSArray *)completionItems;
@end

