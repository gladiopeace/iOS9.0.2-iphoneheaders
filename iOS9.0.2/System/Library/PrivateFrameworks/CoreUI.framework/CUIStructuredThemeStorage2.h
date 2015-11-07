/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CUIStructuredThemeStorage2
@optional
-(void)removeImageNamed:(id)arg1 withDescription:(id)arg2;
-(void)insertCGImage:(CGImageRef)arg1 withName:(id)arg2 andDescription:(id)arg3;
-(id)renditionNameForKeyList:(renditionkeytoken*)arg1;
-(id)themeStore;

@required
-(id)imagesWithName:(id)arg1;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1;
-(char)canGetRenditionWithKey:(const renditionkeytoken*)arg1;
-(id)allImageNames;

@end

