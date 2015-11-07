/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString, IPPerson, NSDate;

@interface IPMessage : NSObject {

	NSArray* _messageUnits;
	NSString* _identifier;
	NSString* _subject;
	IPPerson* _sender;
	NSArray* _recipients;
	NSDate* _dateSent;
	NSString* _htmlContent;

}

@property (retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * subject;                            //@synthesize subject=_subject - In the implementation block
@property (retain) IPPerson * sender;                             //@synthesize sender=_sender - In the implementation block
@property (retain) NSArray * recipients;                          //@synthesize recipients=_recipients - In the implementation block
@property (retain) NSDate * dateSent;                             //@synthesize dateSent=_dateSent - In the implementation block
@property (nonatomic,retain) NSArray * messageUnits;              //@synthesize messageUnits=_messageUnits - In the implementation block
@property (retain) NSString * htmlContent;                        //@synthesize htmlContent=_htmlContent - In the implementation block
-(NSString *)htmlContent;
-(NSDate *)dateSent;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(IPPerson *)sender;
-(void)setSubject:(NSString *)arg1 ;
-(void)setSender:(IPPerson *)arg1 ;
-(NSString *)subject;
-(void)setDateSent:(NSDate *)arg1 ;
-(void)setMessageUnits:(NSArray *)arg1 ;
-(id)initWithIdentifier:(id)arg1 subject:(id)arg2 sender:(id)arg3 recipients:(id)arg4 dateSent:(id)arg5 ;
-(NSArray *)messageUnits;
-(id)firstHeaderValueForKey:(id)arg1 inHeaders:(id)arg2 ;
-(void)setHtmlContent:(NSString *)arg1 ;
-(id)initWithHTMLContent:(id)arg1 emailHeadersDictionary:(id)arg2 dateSent:(id)arg3 ;
@end

