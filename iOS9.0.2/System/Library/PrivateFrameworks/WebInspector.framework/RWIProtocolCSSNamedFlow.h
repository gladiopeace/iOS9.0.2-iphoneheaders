/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolCSSNamedFlow : RWIProtocolJSONObject

@property (assign,nonatomic) int documentNodeId; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) char overset; 
@property (nonatomic,copy) NSArray * content; 
@property (nonatomic,copy) NSArray * regions; 
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSArray *)content;
-(void)setRegions:(NSArray *)arg1 ;
-(NSArray *)regions;
-(void)setContent:(NSArray *)arg1 ;
-(char)overset;
-(void)setDocumentNodeId:(int)arg1 ;
-(void)setOverset:(char)arg1 ;
-(id)initWithDocumentNodeId:(int)arg1 name:(id)arg2 overset:(char)arg3 content:(id)arg4 regions:(id)arg5 ;
-(int)documentNodeId;
@end
