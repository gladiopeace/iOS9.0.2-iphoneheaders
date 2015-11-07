/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class NSString, NSArray, NSIndexSet;

@interface MFMessageCriterion : NSObject {

	NSString* _uniqueId;
	NSString* _criterionIdentifier;
	NSString* _expression;
	int _qualifier;
	NSArray* _criteria;
	int _dateUnitType;
	NSString* _name;
	unsigned _allCriteriaMustBeSatisfied : 1;
	unsigned _dateIsRelative : 1;
	unsigned _includeRelatedMessages : 1;
	int _type;
	NSArray* _requiredHeaders;
	char _useFlaggedForUnreadCount;
	char _expressionIsSanitized;
	NSIndexSet* _libraryIdentifiers;

}

@property (nonatomic,retain) NSIndexSet * libraryIdentifiers;              //@synthesize libraryIdentifiers=_libraryIdentifiers - In the implementation block
@property (assign,nonatomic) char useFlaggedForUnreadCount;                //@synthesize useFlaggedForUnreadCount=_useFlaggedForUnreadCount - In the implementation block
@property (assign,nonatomic) char includeRelatedMessages;                  //@synthesize includeRelatedMessages=_includeRelatedMessages - In the implementation block
@property (assign,nonatomic) char expressionIsSanitized;                   //@synthesize expressionIsSanitized=_expressionIsSanitized - In the implementation block
+(id)criterionForMailboxURL:(id)arg1 ;
+(id)messageIsDeletedCriterion:(char)arg1 ;
+(id)messageIsServerSearchResultCriterion:(char)arg1 ;
+(id)andCompoundCriterionWithCriteria:(id)arg1 ;
+(id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(char)arg2 ;
+(int)criterionTypeForString:(id)arg1 ;
+(id)stringForCriterionType:(int)arg1 ;
+(id)criteriaFromDefaultsArray:(id)arg1 ;
+(id)defaultsArrayFromCriteria:(id)arg1 ;
+(void)_updateAddressComments:(id)arg1 ;
+(id)VIPSenderMessageCriterion;
+(id)threadNotifyMessageCriterion;
+(id)threadMuteMessageCriterion;
+(id)flaggedMessageCriterion;
+(id)unreadMessageCriterion;
+(id)includesMeCriterion;
+(id)hasAttachmentsCriterion;
+(id)todayMessageCriterion;
+(id)notCriterionWithCriterion:(id)arg1 ;
+(id)orCompoundCriterionWithCriteria:(id)arg1 ;
-(id)expression;
-(NSIndexSet *)libraryIdentifiers;
-(id)criteria;
-(void)setCriteria:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)dictionaryRepresentation;
-(int)criterionType;
-(char)allCriteriaMustBeSatisfied;
-(id)initWithType:(int)arg1 qualifier:(int)arg2 expression:(id)arg3 ;
-(void)setCriterionIdentifier:(id)arg1 ;
-(void)setAllCriteriaMustBeSatisfied:(char)arg1 ;
-(id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(char)arg2 ;
-(void)setCriterionType:(int)arg1 ;
-(void)setQualifier:(int)arg1 ;
-(id)initWithCriterion:(id)arg1 expression:(id)arg2 ;
-(int)messageRuleQualifierForString:(id)arg1 ;
-(id)criterionIdentifier;
-(int)qualifier;
-(id)descriptionWithDepth:(unsigned)arg1 ;
-(id)_qualifierString;
-(id)stringForMessageRuleQualifier:(int)arg1 ;
-(char)doesMessageSatisfyCriterion:(id)arg1 ;
-(id)_headersRequiredForEvaluation;
-(char)_evaluateCompoundCriterion:(id)arg1 ;
-(char)_evaluateFlagCriterion:(id)arg1 ;
-(char)_evaluateAddressBookCriterion:(id)arg1 ;
-(char)_evaluateHeaderCriterion:(id)arg1 ;
-(char)_evaluateSenderHeaderCriterion:(id)arg1 ;
-(char)_evaluateAccountCriterion:(id)arg1 ;
-(char)_evaluateDateCriterion:(id)arg1 ;
-(char)_evaluateAddressHistoryCriterion:(id)arg1 ;
-(char)_evaluateFullNameCriterion:(id)arg1 ;
-(char)_evaluatePriorityIsNormalCriterion:(id)arg1 ;
-(char)_evaluatePriorityIsHighCriterion:(id)arg1 ;
-(char)_evaluatePriorityIsLowCriterion:(id)arg1 ;
-(char)_evaluateAttachmentCriterion:(id)arg1 ;
-(id)simplifiedCriterion;
-(id)simplifyOnce;
-(void)setUseFlaggedForUnreadCount:(char)arg1 ;
-(void)setDateUnits:(int)arg1 ;
-(void)setDateIsRelative:(char)arg1 ;
-(char)_evaluateIsDigitallySignedCriterion:(id)arg1 ;
-(char)_evaluateIsEncryptedCriterion:(id)arg1 ;
-(int)dateUnits;
-(char)dateIsRelative;
-(id)emailAddressesForGroupCriterion;
-(void)setLibraryIdentifiers:(NSIndexSet *)arg1 ;
-(char)useFlaggedForUnreadCount;
-(char)includeRelatedMessages;
-(void)setIncludeRelatedMessages:(char)arg1 ;
-(char)expressionIsSanitized;
-(void)setExpressionIsSanitized:(char)arg1 ;
-(id)fixOnce;
-(id)_criterionForSQL;
-(char)isFullTextSearchableCriterion;
-(id)_evaluateFTSCriterionWithIndex:(id)arg1 mailboxIDs:(id)arg2 ;
-(id)_resolveWithIndex:(id)arg1 mailboxIDs:(id)arg2 ;
-(id)_collapsedMessageNumberCriterion:(id)arg1 allMustBeSatisfied:(char)arg2 collapsedIndexes:(id*)arg3 ;
-(char)hasLibraryIDCriterion;
-(id)SQLExpressionWithContext:(SCD_Struct_MF13*)arg1 depth:(unsigned)arg2 ;
-(unsigned)bestBaseTable;
-(void)_addCriteriaSatisfyingPredicate:(/*function pointer*/void*)arg1 toCollector:(id)arg2 ;
-(char)includesCriterionSatisfyingPredicate:(/*function pointer*/void*)arg1 restrictive:(char)arg2 ;
-(id)criterionByApplyingTransform:(/*^block*/id)arg1 ;
-(id)criteriaSatisfyingPredicate:(/*function pointer*/void*)arg1 ;
-(id)criterionForSQL;
-(id)SQLExpressionWithTables:(unsigned*)arg1 baseTable:(unsigned)arg2 protectedDataAvailable:(char)arg3 searchableIndex:(id)arg4 mailboxIDs:(id)arg5 ;
-(id)extractedDateCriterion;
-(id)extractedUnreadCriterion;
-(id)unreadCountCriterion;
-(id)spotlightQueryString;
-(char)hasNonFullTextSearchableCriterion;
-(id)_spotlightQueryString;
-(id)_queryWithAttributes:(id)arg1 matchingValue:(id)arg2 ;
-(id)_comparisonOperationMatchingValue:(id)arg1 ;
-(id)_attributesForHeaderCriterion;
-(id)_wordQueryWithAttributes:(id)arg1 matchingValue:(id)arg2 ;
-(void)setExpression:(id)arg1 ;
@end

