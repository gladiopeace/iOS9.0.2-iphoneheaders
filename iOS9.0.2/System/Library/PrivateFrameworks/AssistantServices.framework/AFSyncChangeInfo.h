/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistant_service
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class SADomainObject, NSString;


@protocol AFSyncChangeInfo
@property (nonatomic,retain) SADomainObject * object; 
@property (nonatomic,copy) NSString * postAnchor; 
@property (assign,nonatomic) char isDelete; 
@required
-(void)setPostAnchor:(id)arg1;
-(NSString *)postAnchor;
-(SADomainObject *)object;
-(void)setObject:(id)arg1;
-(char)isDelete;
-(void)setIsDelete:(char)arg1;

@end

