/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IKCSSSelectorList, IKCSSDeclarationList, IKCSSMediaQuery;

@interface IKCSSRule : NSObject {

	IKCSSSelectorList* _selectorList;
	IKCSSDeclarationList* _declarationList;

}

@property (nonatomic,retain) IKCSSSelectorList * selectorList;                    //@synthesize selectorList=_selectorList - In the implementation block
@property (nonatomic,retain) IKCSSDeclarationList * declarationList;              //@synthesize declarationList=_declarationList - In the implementation block
@property (nonatomic,readonly) IKCSSMediaQuery * mediaQuery; 
-(IKCSSMediaQuery *)mediaQuery;
-(id)description;
-(IKCSSSelectorList *)selectorList;
-(IKCSSDeclarationList *)declarationList;
-(void)setSelectorList:(IKCSSSelectorList *)arg1 ;
-(void)setDeclarationList:(IKCSSDeclarationList *)arg1 ;
@end

