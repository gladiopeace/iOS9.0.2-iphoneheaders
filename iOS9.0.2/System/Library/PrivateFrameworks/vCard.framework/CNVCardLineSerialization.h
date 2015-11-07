/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CNVCardLineSerialization <NSObject>
@required
-(void)serializeData:(id)arg1;
-(void)serializeString:(id)arg1;
-(id)insertionMarker;
-(unsigned)estimatedDataLength;
-(void)insertLine:(id)arg1 atMarker:(id)arg2;
-(char)canSerializeString:(id)arg1;
-(char)canSerializeArray:(id)arg1;
-(char)canSerializeData:(id)arg1;
-(void)serializeLine:(id)arg1;
-(void)serializeArray:(id)arg1 withItemSeparator:(id)arg2;
-(void)serializeOpaqueValue:(id)arg1;
-(void)serializeVersionPlaceholder;

@end

