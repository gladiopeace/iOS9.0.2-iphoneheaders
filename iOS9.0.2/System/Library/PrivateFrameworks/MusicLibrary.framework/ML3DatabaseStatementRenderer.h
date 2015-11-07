/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ML3DatabaseStatementRenderer : NSObject
+(id)defaultRenderer;
-(id)statementWithPrefix:(id)arg1 inParameterCount:(unsigned)arg2 ;
-(id)insertStatementWithOptions:(id)arg1 ;
-(id)insertStatementForTableName:(id)arg1 columnNames:(id)arg2 ;
-(id)insertStatementUsingDefaultValuesForTableName:(id)arg1 ;
-(id)rollbackTranscationStatementToSavepointName:(id)arg1 ;
-(id)beginTransactionStatementWithBehaviorType:(unsigned)arg1 ;
-(id)commitTransactionStatement;
-(id)rollbackTranscationStatement;
-(id)savepointStatementWithName:(id)arg1 ;
-(id)savepointReleaseStatementWithName:(id)arg1 ;
@end

