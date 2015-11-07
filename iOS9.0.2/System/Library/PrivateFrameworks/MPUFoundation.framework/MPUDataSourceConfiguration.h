/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MPUDataSourceConfiguration : NSObject {

	Class _dataSourceClass;
	NSString* _dataSourceCachingKey;
	/*^block*/id _defaultQueryCreationBlock;
	int _entityType;

}

@property (nonatomic,readonly) Class dataSourceClass;                    //@synthesize dataSourceClass=_dataSourceClass - In the implementation block
@property (nonatomic,copy) NSString * dataSourceCachingKey;              //@synthesize dataSourceCachingKey=_dataSourceCachingKey - In the implementation block
@property (nonatomic,copy) id defaultQueryCreationBlock;                 //@synthesize defaultQueryCreationBlock=_defaultQueryCreationBlock - In the implementation block
@property (assign,nonatomic) int entityType;                             //@synthesize entityType=_entityType - In the implementation block
+(id)configurationWithDataSourceClass:(Class)arg1 ;
-(void)setEntityType:(int)arg1 ;
-(int)entityType;
-(id)initWithDataSourceClass:(Class)arg1 ;
-(NSString *)dataSourceCachingKey;
-(void)setDataSourceCachingKey:(NSString *)arg1 ;
-(id)defaultQueryCreationBlock;
-(void)setDefaultQueryCreationBlock:(id)arg1 ;
-(Class)dataSourceClass;
@end

