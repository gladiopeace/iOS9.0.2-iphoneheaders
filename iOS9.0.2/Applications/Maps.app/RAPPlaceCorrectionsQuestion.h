/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/RAPQuestion.h>
#import <Maps/RAPQuestionAcceptingAlternatePlace.h>

@protocol RAPPlace;
@class NSArray, RAPPlaceCorrectableAddress, RAPCommentQuestion, NSString;

@interface RAPPlaceCorrectionsQuestion : RAPQuestion <RAPQuestionAcceptingAlternatePlace> {

	id<RAPPlace> _reportedPlace;
	SCD_Struct_RA7 _originalCoordinate;
	NSArray* _correctableItems;
	RAPPlaceCorrectableAddress* _correctableAddress;
	NSArray* _originalSelectedCategoryTitles;
	NSArray* _selectedCategoryTitles;
	RAPCommentQuestion* _commentQuestion;
	RAPCommentQuestion* _geotaggedPhotoCommentQuestion;
	SCD_Struct_RA7 _coordinate;

}

@property (nonatomic,readonly) NSArray * correctableItems;                                              //@synthesize correctableItems=_correctableItems - In the implementation block
@property (nonatomic,readonly) RAPPlaceCorrectableAddress * correctableAddress;                         //@synthesize correctableAddress=_correctableAddress - In the implementation block
@property (nonatomic,readonly) id<RAPPlaceCorrectionsQuestionChangeContext> changeContext; 
@property (nonatomic,readonly) char shouldShowCategorySelection; 
@property (nonatomic,readonly) NSArray * originalSelectedCategoryTitles;                                //@synthesize originalSelectedCategoryTitles=_originalSelectedCategoryTitles - In the implementation block
@property (nonatomic,copy) NSArray * selectedCategoryTitles;                                            //@synthesize selectedCategoryTitles=_selectedCategoryTitles - In the implementation block
@property (nonatomic,readonly) unsigned maximumCountForSelectedCategories; 
@property (nonatomic,readonly) NSString * localizedCorrectionsPrompt; 
@property (nonatomic,readonly) NSString * localizedCategoriesListTitle; 
@property (nonatomic,readonly) NSString * localizedAddCategoryCommandTitle; 
@property (assign,nonatomic) SCD_Struct_RA7 coordinate;                                                 //@synthesize coordinate=_coordinate - In the implementation block
@property (getter=isCoordinateEdited,nonatomic,readonly) char coordinateEdited; 
@property (nonatomic,readonly) char requiresSelectingCoordinateImmediately; 
@property (nonatomic,readonly) NSString * localizedLocationLabel; 
@property (nonatomic,readonly) NSString * localizedLocationExplanation; 
@property (nonatomic,readonly) NSString * localizedCoordinatePickingPrompt; 
@property (nonatomic,readonly) SCD_Struct_RA13 coordinatePickingMapRect; 
@property (nonatomic,readonly) unsigned coordinatePickingMapType; 
@property (nonatomic,readonly) SCD_Struct_RA7 coordinatePickingInitialFeatureCoordinate; 
@property (nonatomic,readonly) RAPCommentQuestion * commentQuestion;                                    //@synthesize commentQuestion=_commentQuestion - In the implementation block
@property (nonatomic,readonly) RAPCommentQuestion * geotaggedPhotoCommentQuestion;                      //@synthesize geotaggedPhotoCommentQuestion=_geotaggedPhotoCommentQuestion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)mapServiceAction;
+(id)localizedTitle;
-(void)_fillSubmittableProblem:(id)arg1 ;
-(RAPCommentQuestion *)commentQuestion;
-(NSString *)localizedCategoriesListTitle;
-(NSString *)localizedAddCategoryCommandTitle;
-(NSString *)localizedCorrectionsPrompt;
-(NSArray *)originalSelectedCategoryTitles;
-(char)_isNowComplete;
-(char)addressPresentationWasUpdatedSinceChangeContext:(id)arg1 ;
-(id)_userPathItems;
-(void)_beginObservingCorrectableItem:(id)arg1 ;
-(NSString *)localizedLocationLabel;
-(RAPCommentQuestion *)geotaggedPhotoCommentQuestion;
-(NSArray *)selectedCategoryTitles;
-(NSString *)localizedLocationExplanation;
-(id)initWithReport:(id)arg1 parentQuestion:(id)arg2 ;
-(char)shouldShowCategorySelection;
-(NSString *)localizedCoordinatePickingPrompt;
-(unsigned)coordinatePickingMapType;
-(NSArray *)correctableItems;
-(char)isCoordinateValid;
-(SCD_Struct_RA13)coordinatePickingMapRect;
-(void)_correctableValueDidChange;
-(void)setSelectedCategoryTitles:(NSArray *)arg1 ;
-(char)shouldAllowMarkingWrongForItem:(id)arg1 ;
-(SCD_Struct_RA7)coordinatePickingInitialFeatureCoordinate;
-(char)requiresValueForCorrectableItem:(id)arg1 ;
-(SCD_Struct_RA13)_initialCoordinatePickingMapRect;
-(char)isCoordinateEdited;
-(id)_initWithReport:(id)arg1 parentQuestion:(id)arg2 place:(id)arg3 ;
-(id)correctableItemOfKind:(int)arg1 ;
-(char)validateSelectedCategoryTitles:(inout id*)arg1 error:(out id*)arg2 ;
-(int)_problemType;
-(char)requiresSelectingCoordinateImmediately;
-(unsigned)maximumCountForSelectedCategories;
-(RAPPlaceCorrectableAddress *)correctableAddress;
-(void)setCoordinate:(SCD_Struct_RA7)arg1 ;
-(SCD_Struct_RA7)coordinate;
-(id<RAPPlaceCorrectionsQuestionChangeContext>)changeContext;
@end

