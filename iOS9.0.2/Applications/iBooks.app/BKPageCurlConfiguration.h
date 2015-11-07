/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/IMConfiguration.h>

@protocol IMFrameEnvironmentUITraitEnvironment;
@interface BKPageCurlConfiguration : IMConfiguration {

	id<IMFrameEnvironment><UITraitEnvironment> _context;

}

@property (nonatomic,readonly) id<IMFrameEnvironment><UITraitEnvironment> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) float heightAllowanceScalar; 
-(void)_setupDefault;
-(void)_setupPortraitCompactWidth;
-(float)heightAllowanceScalar;
-(id<IMFrameEnvironment><UITraitEnvironment>)context;
-(id)initWithContext:(id)arg1 ;
@end

