/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class JSValue, NSString, NSArray;


@protocol ADTwitterJSO_Bindings <JSExport>
@property (nonatomic,retain) JSValue * listener; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) NSArray * images; 
@property (nonatomic,retain) NSArray * URLs; 
@optional
-(void)followScreenName:(id)arg1 userID:(id)arg2 __JS_EXPORT_AS__follow:(id)arg3;

@required
-(void)presentComposer;
-(void)followScreenName:(id)arg1 userID:(id)arg2;
-(NSString *)text;
-(void)setText:(id)arg1;
-(NSArray *)images;
-(void)setImages:(id)arg1;
-(void)setURLs:(id)arg1;
-(NSArray *)URLs;
-(JSValue *)listener;
-(void)setListener:(id)arg1;

@end

