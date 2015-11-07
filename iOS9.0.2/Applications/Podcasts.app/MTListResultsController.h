/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTResultsController.h>
#import <Podcasts/MTResultsChangeGeneratorDelegate.h>

@class NSArray, MTResultsChangeGenerator, NSString;

@interface MTListResultsController : MTResultsController <MTResultsChangeGeneratorDelegate> {

	NSArray* _objects;
	MTResultsChangeGenerator* _changeGenerator;

}

@property (nonatomic,retain) NSArray * objects;                                       //@synthesize objects=_objects - In the implementation block
@property (nonatomic,retain) MTResultsChangeGenerator * changeGenerator;              //@synthesize changeGenerator=_changeGenerator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)numberOfObjectsInSection:(unsigned)arg1 ;
-(unsigned)startingIndexForDisplay;
-(void)generator:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned)arg4 newIndexPath:(id)arg5 ;
-(void)setChangeGenerator:(MTResultsChangeGenerator *)arg1 ;
-(MTResultsChangeGenerator *)changeGenerator;
-(id)objectAtIndexPath:(id)arg1 ;
-(id)indexPathForObject:(id)arg1 ;
-(NSArray *)objects;
-(id)init;
-(id)allObjects;
-(void)setObjects:(NSArray *)arg1 ;
@end

