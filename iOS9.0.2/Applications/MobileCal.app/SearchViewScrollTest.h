/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/ApplicationTest.h>

@interface SearchViewScrollTest : ApplicationTest {

	float _totalScrollDistance;
	float _scrollDistanceInterval;
	float _scrollAccumulator;
	unsigned _iterations;
	char _inputInvalid;

}
-(void)runTest;
-(id)initWithApplication:(id)arg1 model:(id)arg2 options:(id)arg3 ;
-(void)_searchViewDidAppear;
-(void)_scrollView:(id)arg1 ;
-(void)dealloc;
@end

