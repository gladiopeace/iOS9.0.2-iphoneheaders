/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/suggestd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <suggestd/SGSuggestHistoryObserver.h>

@class SGSqlEntityStore, NSString;

@interface SGHistoryObserver : NSObject <SGSuggestHistoryObserver> {

	SGSqlEntityStore* _store;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStore:(id)arg1 ;
-(void)hashesDidChange;
-(void)processNewConfirmOrRejectEventHashes:(id)arg1 ;
@end

