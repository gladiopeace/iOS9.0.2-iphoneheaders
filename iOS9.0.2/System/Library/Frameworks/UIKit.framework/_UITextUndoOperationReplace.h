/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSUndoTextOperation.h>

@class NSAttributedString;

@interface _UITextUndoOperationReplace : NSUndoTextOperation {

	NSRange _replacementRange;
	NSAttributedString* _attributedString;

}
-(id)initWithAffectedRange:(NSRange)arg1 inputController:(id)arg2 replacementRange:(NSRange)arg3 ;
-(void)undoRedo;
@end

