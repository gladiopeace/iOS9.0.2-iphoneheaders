/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TKProtocolSmartCardSlot <TKProtocolSlot>
@required
-(void)reserveProtocols:(id)arg1 currentlyReserved:(id)arg2 reply:(/*^block*/id)arg3;
-(void)sessionWithParameters:(id)arg1 reply:(/*^block*/id)arg2;
-(void)sendControl:(id)arg1 data:(id)arg2 expectedLength:(unsigned long)arg3 reply:(/*^block*/id)arg4;
-(void)getAttrib:(unsigned long)arg1 expectedLength:(unsigned long)arg2 reply:(/*^block*/id)arg3;
-(void)setAttrib:(unsigned long)arg1 data:(id)arg2 reply:(/*^block*/id)arg3;
-(void)runUserInteraction:(id)arg1 reply:(/*^block*/id)arg2;

@end

