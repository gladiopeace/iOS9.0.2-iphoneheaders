/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RAPTransitSubcategory.h>
@class NSString;


@protocol RAPTransitSubcategory <NSObject>
@property (nonatomic,readonly) NSString * localizedName; 
@required
-(void)proceedWithCases:(id)arg1;
-(NSString *)localizedName;

@end


@class NSString, RAPQuestion;

@interface RAPTransitSubcategory : NSObject <RAPTransitSubcategory> {

	SEL _caseSelector;
	/*^block*/id _followUpQuestionCreationBlock;
	NSString* _localizedName;
	RAPQuestion* _followUpQuestion;

}

@property (nonatomic,readonly) RAPQuestion * followUpQuestion;              //@synthesize followUpQuestion=_followUpQuestion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * localizedName;                    //@synthesize localizedName=_localizedName - In the implementation block
-(void)proceedWithCases:(id)arg1 ;
-(id)initWithLocalizedName:(id)arg1 caseSelector:(SEL)arg2 followUpQuestionCreationBlock:(/*^block*/id)arg3 ;
-(RAPQuestion *)followUpQuestion;
-(id)_followUpQuestion;
-(void)track;
-(NSString *)localizedName;
@end

