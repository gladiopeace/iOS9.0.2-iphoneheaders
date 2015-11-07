/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIDocumentPickerDirectoryObserverItem.h>

@class _UIDocumentPickerURLContainerModel, NSOperation, NSMapTable, _UIDocumentPickerContainerModel, NSString, NSURL, NSDate;

@interface _UIDocumentPickerContainerItem : NSObject <_UIDocumentPickerDirectoryObserverItem> {

	_UIDocumentPickerURLContainerModel* _model;
	_UIDocumentPickerURLContainerModel* _weak_model;
	int _modelDisplayCount;
	id _resourceIdentifier;
	NSOperation* _thumbnailLoadOperation;
	char _pickable;
	int _type;
	NSMapTable* _thumbnailsBySize;
	_UIDocumentPickerContainerModel* _parentModel;
	NSString* _pickabilityReason;

}

@property (nonatomic,readonly) int type;                                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,retain,readonly) NSString * subtitle; 
@property (nonatomic,retain,readonly) NSString * subtitle2; 
@property (nonatomic,retain,readonly) NSURL * url; 
@property (nonatomic,retain,readonly) NSURL * urlInLocalContainer; 
@property (assign,nonatomic) char pickable;                                                     //@synthesize pickable=_pickable - In the implementation block
@property (nonatomic,readonly) NSDate * sortDate; 
@property (nonatomic,readonly) char renameable; 
@property (nonatomic,retain,readonly) _UIDocumentPickerContainerModel * model; 
@property (nonatomic,retain) NSMapTable * thumbnailsBySize;                                     //@synthesize thumbnailsBySize=_thumbnailsBySize - In the implementation block
@property (assign,nonatomic,__weak) _UIDocumentPickerContainerModel * parentModel;              //@synthesize parentModel=_parentModel - In the implementation block
@property (nonatomic,copy) NSString * pickabilityReason;                                        //@synthesize pickabilityReason=_pickabilityReason - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_lruThumbnailArray;
+(void)markThumbnailAsRecentlyUsed:(id)arg1 ;
+(id)_blockingThumbnailForItem:(id)arg1 documentProxy:(id)arg2 withSize:(CGSize)arg3 scale:(float)arg4 wantsBorder:(char*)arg5 ;
+(void)clearLRUThumbnailCache;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(NSURL *)url;
-(int)type;
-(NSString *)title;
-(id)modificationDate;
-(id)contentType;
-(_UIDocumentPickerContainerModel *)model;
-(id)_formattedSubtitleForNumberOfItems:(unsigned)arg1 ;
-(NSString *)subtitle;
-(NSString *)subtitle2;
-(NSURL *)urlInLocalContainer;
-(id)tags;
-(NSDate *)sortDate;
-(void)_modelChanged;
-(unsigned)indentationLevel;
-(id)sortPath;
-(char)renameable;
-(void)setPickable:(char)arg1 ;
-(void)setParentModel:(_UIDocumentPickerContainerModel *)arg1 ;
-(void)setPickabilityReason:(NSString *)arg1 ;
-(char)pickable;
-(_UIDocumentPickerContainerModel *)parentModel;
-(id)_createThumbnailWithSize:(CGSize)arg1 scale:(float)arg2 ;
-(id)_blockingThumbnailWithSize:(CGSize)arg1 scale:(float)arg2 wantsBorder:(char*)arg3 ;
-(id)_resourceIdentifier;
-(id)_blipWithTags:(id)arg1 height:(float)arg2 scale:(float)arg3 ;
-(void)_ensureModelPresent;
-(void)modelChanged;
-(id)thumbnailWithSize:(CGSize)arg1 scale:(float)arg2 ;
-(id)tagBlipsWithHeight:(float)arg1 scale:(float)arg2 ;
-(id)sortTag;
-(void)incrementModelDisplayCount;
-(void)decrementModelDisplayCount;
-(NSMapTable *)thumbnailsBySize;
-(void)setThumbnailsBySize:(NSMapTable *)arg1 ;
-(NSString *)pickabilityReason;
@end

