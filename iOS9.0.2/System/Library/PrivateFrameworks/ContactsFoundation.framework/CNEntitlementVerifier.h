/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ContactsFoundation/ContactsFoundation-Structs.h>
@interface CNEntitlementVerifier : NSObject
+(char)currentProcessHasBooleanEntitlement:(id)arg1 error:(id*)arg2 ;
+(char)secTask:(SecTaskRef)arg1 hasBooleanEntitlement:(id)arg2 error:(id*)arg3 ;
+(char)auditToken:(SCD_Struct_CN1)arg1 hasBooleanEntitlement:(id)arg2 error:(id*)arg3 ;
@end

