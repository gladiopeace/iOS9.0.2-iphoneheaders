/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CNVCardParsedResultBuilder <NSObject>
@required
-(char)canSetValueForProperty:(id)arg1;
-(char)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4;
-(char)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3;
-(void)setUnknownProperties:(id)arg1;
-(id)validCountryCodes;
-(id)valueForProperty:(id)arg1;
-(id)build;
-(char)setValue:(id)arg1 forProperty:(id)arg2;

@end

