/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableOrderedSet, NSArray;

@interface AKModelController : NSObject {

	NSMutableOrderedSet* _mutablePageModelControllers;

}

@property (readonly) NSArray * pageModelControllers; 
-(id)init;
-(id)pageModelControllerForAnnotation:(id)arg1 ;
-(NSArray *)pageModelControllers;
-(id)allSelectedAnnotations;
-(void)deleteAllSelectedAnnotations;
-(void)insertObject:(id)arg1 inPageModelControllersAtIndex:(unsigned)arg2 ;
-(void)replaceObjectInPageModelControllersAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)insertPageModelControllers:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeObjectFromPageModelControllersAtIndex:(unsigned)arg1 ;
-(void)removePageModelControllersAtIndexes:(id)arg1 ;
-(void)replacePageModelControllersAtIndexes:(id)arg1 withPageModelControllers:(id)arg2 ;
-(id)pageModelControllerForPage:(unsigned)arg1 ;
-(void)deselectAllAnnotations;
-(id)archivablePageModelControllers;
-(void)populateFromArchivablePageModelControllers:(id)arg1 ;
@end

