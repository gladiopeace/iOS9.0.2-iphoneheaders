/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBInfoOperation : NSObject {

	id _operand;

}

@property (nonatomic,retain,readonly) id operand;              //@synthesize operand=_operand - In the implementation block
+(id)operationWithOperand:(id)arg1 ;
-(id)initWithOperand:(id)arg1 ;
-(id)operand;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
@end
