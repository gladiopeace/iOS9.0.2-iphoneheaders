/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPassGroupStackViewDatasource <NSObject>
@optional
-(id)groupStackView:(id)arg1 headerForPassType:(unsigned)arg2;
-(id)groupStackView:(id)arg1 subheaderForPassType:(unsigned)arg2;
-(char)groupStackViewShouldShowHeaderViews:(id)arg1;
-(char)groupStackView:(id)arg1 requiresHeaderForPassType:(unsigned)arg2;

@required
-(unsigned)indexOfGroup:(id)arg1;
-(unsigned)indexOfSeparationGroup;
-(id)groupAtIndex:(unsigned)arg1;
-(unsigned)numberOfGroups;

@end

