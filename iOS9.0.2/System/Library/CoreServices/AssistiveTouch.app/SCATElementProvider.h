/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCATElementProvider <NSObject>
@property (nonatomic,readonly) char providesElements; 
@required
-(id)lastElementWithOptions:(int*)arg1;
-(id)firstElementWithOptions:(int*)arg1;
-(char)providesElements;
-(id)elementAfter:(id)arg1 didWrap:(char*)arg2 options:(int*)arg3;
-(id)elementBefore:(id)arg1 didWrap:(char*)arg2 options:(int*)arg3;
-(char)containsElement:(id)arg1;
-(void)willBeginProvidingElements;
-(void)didFinishProvidingElements;

@end

