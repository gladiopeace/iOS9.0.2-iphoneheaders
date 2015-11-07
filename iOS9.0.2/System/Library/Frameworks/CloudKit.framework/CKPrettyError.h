/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSError.h>

@interface CKPrettyError : NSError
+(id)itemErrorFromError:(id)arg1 forID:(id)arg2 ;
+(id)_errorDomain;
+(id)dictionaryRepresentationForError:(id)arg1 ;
+(id)errorWithDictionaryRepresentation:(id)arg1 ;
+(id)descriptionForError:(id)arg1 paths:(char)arg2 ;
+(char)isError:(id)arg1 withCode:(int)arg2 ;
+(char)isError:(id)arg1 withCodes:(id)arg2 ;
+(id)sanitizedError:(id)arg1 ;
+(id)errorWithCode:(int)arg1 userInfo:(id)arg2 error:(id)arg3 format:(id)arg4 ;
+(id)errorWithCode:(int)arg1 URL:(id)arg2 format:(id)arg3 ;
+(id)errorWithCode:(int)arg1 error:(id)arg2 URL:(id)arg3 format:(id)arg4 ;
+(id)errorWithDomain:(id)arg1 code:(int)arg2 format:(id)arg3 ;
+(id)errorWithDomain:(id)arg1 code:(int)arg2 path:(id)arg3 format:(id)arg4 ;
+(id)errorWithCode:(int)arg1 format:(id)arg2 ;
+(id)errorWithCode:(int)arg1 userInfo:(id)arg2 format:(id)arg3 ;
+(id)errorWithCode:(int)arg1 path:(id)arg2 format:(id)arg3 ;
+(id)errorWithCode:(int)arg1 error:(id)arg2 format:(id)arg3 ;
+(id)errorWithCode:(int)arg1 userInfo:(id)arg2 error:(id)arg3 path:(id)arg4 URL:(id)arg5 description:(id)arg6 ;
+(id)errorWithCode:(int)arg1 error:(id)arg2 path:(id)arg3 format:(id)arg4 ;
+(id)secureCodableError:(id)arg1 ;
+(id)descriptionForError:(id)arg1 ;
-(id)CKPartialErrorDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end

