/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSArray;


@protocol _NCDataSourceManager <NSObject>
@property (assign,nonatomic) id<_NCParentDataSourceManager> parentDataSourceManager; 
@property (nonatomic,readonly) NSArray * dataSources; 
@required
-(void)_start:(/*^block*/id)arg1;
-(id<_NCParentDataSourceManager>)parentDataSourceManager;
-(void)setParentDataSourceManager:(id)arg1;
-(void)_stop:(/*^block*/id)arg1;
-(NSArray *)dataSources;

@end

