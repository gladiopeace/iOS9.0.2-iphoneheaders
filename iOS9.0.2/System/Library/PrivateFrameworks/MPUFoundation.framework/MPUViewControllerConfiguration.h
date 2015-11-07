/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, MPUDataSourceConfiguration;

@interface MPUViewControllerConfiguration : NSObject {

	char _wantsModalPresentation;
	char _wantsNavigationController;
	Class _cellConfigurationClass;
	Class _viewControllerClass;
	NSString* _aggregateStatisticDisplayCountKey;
	MPUDataSourceConfiguration* _dataSourceConfiguration;
	/*^block*/id _configurationBlock;
	Class _navigationControllerClass;

}

@property (nonatomic,readonly) Class cellConfigurationClass;                                    //@synthesize cellConfigurationClass=_cellConfigurationClass - In the implementation block
@property (nonatomic,readonly) Class viewControllerClass;                                       //@synthesize viewControllerClass=_viewControllerClass - In the implementation block
@property (nonatomic,copy) NSString * aggregateStatisticDisplayCountKey;                        //@synthesize aggregateStatisticDisplayCountKey=_aggregateStatisticDisplayCountKey - In the implementation block
@property (nonatomic,retain) MPUDataSourceConfiguration * dataSourceConfiguration;              //@synthesize dataSourceConfiguration=_dataSourceConfiguration - In the implementation block
@property (nonatomic,copy) id configurationBlock;                                               //@synthesize configurationBlock=_configurationBlock - In the implementation block
@property (assign,nonatomic) char wantsModalPresentation;                                       //@synthesize wantsModalPresentation=_wantsModalPresentation - In the implementation block
@property (assign,nonatomic) char wantsNavigationController;                                    //@synthesize wantsNavigationController=_wantsNavigationController - In the implementation block
@property (nonatomic,retain) Class navigationControllerClass;                                   //@synthesize navigationControllerClass=_navigationControllerClass - In the implementation block
+(id)configurationWithViewControllerClass:(Class)arg1 cellConfigurationClass:(Class)arg2 ;
+(id)configurationWithViewControllerClass:(Class)arg1 ;
-(id)configurationBlock;
-(void)setConfigurationBlock:(id)arg1 ;
-(Class)viewControllerClass;
-(id)initWithViewControllerClass:(Class)arg1 cellConfigurationClass:(Class)arg2 ;
-(id)initWithViewControllerClass:(Class)arg1 ;
-(NSString *)aggregateStatisticDisplayCountKey;
-(void)setAggregateStatisticDisplayCountKey:(NSString *)arg1 ;
-(MPUDataSourceConfiguration *)dataSourceConfiguration;
-(void)setDataSourceConfiguration:(MPUDataSourceConfiguration *)arg1 ;
-(void)setWantsModalPresentation:(char)arg1 ;
-(void)setWantsNavigationController:(char)arg1 ;
-(void)setNavigationControllerClass:(Class)arg1 ;
-(char)wantsModalPresentation;
-(char)wantsNavigationController;
-(Class)navigationControllerClass;
-(Class)cellConfigurationClass;
@end

