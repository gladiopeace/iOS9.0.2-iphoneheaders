/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSNumber, NSDictionary, NSError;


@protocol ACMTicketVerificationResponse <NSObject>
@property (retain,readonly) NSNumber * personDSID; 
@property (retain,readonly) NSDictionary * rawResponseData; 
@property (retain,readonly) NSError * error; 
@property (retain,readonly) id userInfo; 
@required
-(NSError *)error;
-(id)userInfo;
-(NSDictionary *)rawResponseData;
-(NSNumber *)personDSID;

@end

