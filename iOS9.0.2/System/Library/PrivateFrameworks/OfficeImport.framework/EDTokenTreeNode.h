/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface EDTokenTreeNode : NSObject {

	unsigned mTokenIndex;
	int mTokenType;
	EDTokenTreeNode* mFirstChild;
	EDTokenTreeNode* mSibling;

}
+(id)tokenTreeNodeWithIndexAndType:(unsigned)arg1 type:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)firstChild;
-(id)initWithIndexAndType:(unsigned)arg1 type:(int)arg2 ;
-(unsigned)tokenIndex;
-(void)setFirstChild:(id)arg1 ;
-(id)sibling;
-(void)setSibling:(id)arg1 ;
@end

