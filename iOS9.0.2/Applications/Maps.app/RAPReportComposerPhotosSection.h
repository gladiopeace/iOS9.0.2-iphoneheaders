/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RAPTablePartSection.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class NSMutableArray, RAPCommentQuestion, RAPPhotoPickerController, NSString;

@interface RAPReportComposerPhotosSection : RAPTablePartSection <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

	NSMutableArray* _photos;
	RAPCommentQuestion* _question;
	RAPPhotoPickerController* _picker;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForRowAtIndex:(int)arg1 ;
-(int)rowsCount;
-(void)didSelectCellForRowAtIndex:(int)arg1 tableIndexPath:(id)arg2 ;
-(id)initWithQuestion:(id)arg1 ;
-(char)usesAutoLayoutForRowAtIndex:(int)arg1 ;
-(int)_appearance;
-(void)_startPickingPhotoFromView:(id)arg1 ;
@end

