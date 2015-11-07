/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FindMyFriends/FindMyFriends-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol AddLabelViewControllerDelegate;
@class FMFClientLocation, UITextField, NSString;

@interface AddLabelViewController : UIViewController <UITextFieldDelegate> {

	char _isMyLocationLabelUpdated;
	FMFClientLocation* _location;
	id<AddLabelViewControllerDelegate> _delegate;
	FMFClientLocation* _labeledLocationBeingUpdated;
	UITextField* _addressLabelTextField;

}

@property (nonatomic,retain) FMFClientLocation * location;                               //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) id<AddLabelViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) FMFClientLocation * labeledLocationBeingUpdated;              //@synthesize labeledLocationBeingUpdated=_labeledLocationBeingUpdated - In the implementation block
@property (assign,nonatomic) char isMyLocationLabelUpdated;                              //@synthesize isMyLocationLabelUpdated=_isMyLocationLabelUpdated - In the implementation block
@property (nonatomic,retain) UITextField * addressLabelTextField;                        //@synthesize addressLabelTextField=_addressLabelTextField - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performDoneAction:(id)arg1 ;
-(UITextField *)addressLabelTextField;
-(void)setLabeledLocationBeingUpdated:(FMFClientLocation *)arg1 ;
-(void)updateLabel:(id)arg1 withTypeDefault:(char)arg2 ;
-(unsigned)limitForLabel;
-(char)allowTextChange:(unsigned)arg1 ;
-(void)removeSendingLabel;
-(void)setIsMyLocationLabelUpdated:(char)arg1 ;
-(char)isMyLocationLabelUpdated;
-(FMFClientLocation *)labeledLocationBeingUpdated;
-(void)deinitializeAfterResponseNotification;
-(void)performCancelAction:(id)arg1 ;
-(void)textFieldEditingChanged:(id)arg1 ;
-(void)setAddressLabelTextField:(UITextField *)arg1 ;
-(void)updateDoneButton;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<AddLabelViewControllerDelegate>)arg1 ;
-(id<AddLabelViewControllerDelegate>)delegate;
-(void)loadView;
-(void)textDidChange:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(FMFClientLocation *)location;
-(void)setLocation:(FMFClientLocation *)arg1 ;
@end

