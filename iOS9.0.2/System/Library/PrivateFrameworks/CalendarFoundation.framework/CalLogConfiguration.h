/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface CalLogConfiguration : NSObject {

	NSString* _name;
	NSMutableArray* _nodes;

}

@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * nodes;              //@synthesize nodes=_nodes - In the implementation block
-(void)setNodes:(NSMutableArray *)arg1 ;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithSimpleDefinition:(id)arg1 ;
-(void)parseConfigurationDefinition:(id)arg1 ;
-(id)parseNodeDefinition:(id)arg1 ;
-(id)parseWriterDefinition:(id)arg1 ;
-(id)parseFilterDefinition:(id)arg1 ;
-(id)initWithDetailedDefinition:(id)arg1 ;
-(NSMutableArray *)nodes;
@end

