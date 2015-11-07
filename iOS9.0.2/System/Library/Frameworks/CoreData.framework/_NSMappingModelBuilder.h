/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectModel, NSEntityMapping, NSError;

@interface _NSMappingModelBuilder : NSObject {

	NSManagedObjectModel* _sourceModel;
	NSManagedObjectModel* _destinationModel;
	NSEntityMapping* _currentEntityMapping;
	NSError* _error;

}
+(int)migrationDebugLevel;
+(void)setMigrationDebugLevel:(int)arg1 ;
-(id)newEntityMappingWithSource:(id)arg1 destination:(id)arg2 ;
-(char)inferPropertyMappingsForEntityMapping:(id)arg1 ;
-(id)newInferredPropertyMappingWithSourceAttribute:(id)arg1 destinationAttribute:(id)arg2 ;
-(id)newInferredPropertyMappingWithSourceRelationship:(id)arg1 destinationRelationship:(id)arg2 ;
-(char)_canTransformSourceAttributeType:(unsigned)arg1 toDestinationAttributeType:(unsigned)arg2 ;
-(id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2 ;
-(id)newInferredMappingModel:(id*)arg1 ;
-(void)_resetCaches;
-(void)dealloc;
@end

