/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol AFSessionObject <NSObject>
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@required
-(id)serializedAceDataError:(id*)arg1;
-(char)af_bufferingAllowedDuringActiveSession;
-(void)af_logDiagnostics;
-(NSString *)aceId;
-(void)setAceId:(id)arg1;
-(NSString *)refId;
-(void)setRefId:(id)arg1;

@end

