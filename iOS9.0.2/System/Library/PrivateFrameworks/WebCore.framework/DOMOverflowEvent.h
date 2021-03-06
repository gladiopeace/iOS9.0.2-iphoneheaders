/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMEvent.h>

@interface DOMOverflowEvent : DOMEvent

@property (readonly) unsigned short orient; 
@property (readonly) char horizontalOverflow; 
@property (readonly) char verticalOverflow; 
-(unsigned short)orient;
-(char)horizontalOverflow;
-(char)verticalOverflow;
-(void)initOverflowEvent:(unsigned short)arg1 horizontalOverflow:(char)arg2 verticalOverflow:(char)arg3 ;
@end

