/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MSVSystemDialogTextField : NSObject {

	char _secure;
	NSString* _title;
	int _keyboardType;

}

@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (assign,getter=isSecure,nonatomic) char secure;              //@synthesize secure=_secure - In the implementation block
@property (assign,nonatomic) int keyboardType;                         //@synthesize keyboardType=_keyboardType - In the implementation block
+(id)textFieldWithTitle:(id)arg1 secure:(char)arg2 ;
+(id)textFieldWithTitle:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setSecure:(char)arg1 ;
-(char)isSecure;
-(id)initWithTitle:(id)arg1 ;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1 ;
@end

