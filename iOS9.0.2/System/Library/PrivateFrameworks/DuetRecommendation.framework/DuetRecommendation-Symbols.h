-[_DRTopicInterestSummary initWithPresentationsCount:selectionsCount:]
-[_DRTopicInterestSummary init]
-[_DRTopicInterestSummary initWithCoder:]
-[_DRTopicInterestSummary isEqual:]
-[_DRTopicInterestSummary encodeWithCoder:]
-[_DRTopicInterestSummary description]
-[_DRTopicInterestSummary copyWithZone:]
-[_DRTopicInterestSummary topicSelectionsCount]
-[_DRTopicInterestSummary setTopicSelectionsCount:]
-[_DRTopicInterestSummary topicPresentationsCount]
-[_DRTopicInterestSummary setTopicPresentationsCount:]
-[_DRTopicInterestModel init]
-[_DRTopicInterestModel initWithStorageDirectory:]
+[_DRTopicInterestModel newsStorageDirectory]
+[_DRTopicInterestModel topicActionCategoryType]
___48+[_DRTopicInterestModel topicActionCategoryType]_block_invoke
+[_DRTopicInterestModel topicPresentedCategory]
___47+[_DRTopicInterestModel topicPresentedCategory]_block_invoke
+[_DRTopicInterestModel topicSelectedCategory]
___46+[_DRTopicInterestModel topicSelectedCategory]_block_invoke
-[_DRTopicInterestModel recordPresentationOfTopics:onDate:]
___59-[_DRTopicInterestModel recordPresentationOfTopics:onDate:]_block_invoke
-[_DRTopicInterestModel recordSelectionOfTopics:onDate:]
___56-[_DRTopicInterestModel recordSelectionOfTopics:onDate:]_block_invoke
+[_DRTopicInterestModel predicateForTopicsWithPrefix:]
+[_DRTopicInterestModel predicateForTopicInteractionsAfter:]
+[_DRTopicInterestModel predicateForTopicInteractionsBefore:]
-[_DRTopicInterestModel enumerateTopicCountsWithFilter:block:]
-[_DRTopicInterestModel computeSummaryWithFilter:]
-[_DRTopicInterestModel purgeEntriesEarlierThanDate:]
-[_DRTopicInterestModel purgeEntriesWithPrefix:earlierThanDate:]
-[_DRTopicInterestModel syncQueue]
-[_DRTopicInterestModel setSyncQueue:]
-[_DRTopicInterestModel storage]
-[_DRTopicInterestModel setStorage:]
-[_DRTopicInterestModel .cxx_destruct]
-[_DRTopicActionEntry initWithTopic:when:action:]
-[_DRTopicActionEntry description]
-[_DRTopicActionEntry topic]
-[_DRTopicActionEntry when]
-[_DRTopicActionEntry action]
-[_DRTopicActionEntry .cxx_destruct]
-[_DRInMemoryTopicInterestModel init]
-[_DRInMemoryTopicInterestModel recordPresentationOfTopics:onDate:]
___67-[_DRInMemoryTopicInterestModel recordPresentationOfTopics:onDate:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[_DRInMemoryTopicInterestModel recordSelectionOfTopics:onDate:]
___64-[_DRInMemoryTopicInterestModel recordSelectionOfTopics:onDate:]_block_invoke
___copy_helper_block_52
___destroy_helper_block_53
+[_DRInMemoryTopicInterestModel predicateForTopicsWithPrefix:]
+[_DRInMemoryTopicInterestModel predicateForTopicInteractionsAfter:]
+[_DRInMemoryTopicInterestModel predicateForTopicInteractionsBefore:]
-[_DRInMemoryTopicInterestModel enumerateTopicCountsWithFilter:block:]
___70-[_DRInMemoryTopicInterestModel enumerateTopicCountsWithFilter:block:]_block_invoke
___70-[_DRInMemoryTopicInterestModel enumerateTopicCountsWithFilter:block:]_block_invoke_2
___copy_helper_block_88
___destroy_helper_block_89
___copy_helper_block_94
___destroy_helper_block_95
-[_DRInMemoryTopicInterestModel computeSummaryWithFilter:]
___58-[_DRInMemoryTopicInterestModel computeSummaryWithFilter:]_block_invoke
___copy_helper_block_97
___destroy_helper_block_98
-[_DRInMemoryTopicInterestModel purgeEntriesEarlierThanDate:]
-[_DRInMemoryTopicInterestModel purgeEntriesWithPrefix:earlierThanDate:]
___72-[_DRInMemoryTopicInterestModel purgeEntriesWithPrefix:earlierThanDate:]_block_invoke
___copy_helper_block_120
___destroy_helper_block_121
-[_DRInMemoryTopicInterestModel .cxx_destruct]
+[_DRTopicEnumerationQuery topicEnumerationQueryWithPredicate:topicEnumerator:]
-[_DRTopicEnumerationQuery initWithPredicate:topicEnumerator:]
+[_DRTopicEnumerationQuery enumerationCountExpresion]
___53+[_DRTopicEnumerationQuery enumerationCountExpresion]_block_invoke
+[_DRTopicEnumerationQuery enumerationSumExpression]
___52+[_DRTopicEnumerationQuery enumerationSumExpression]_block_invoke
-[_DRTopicEnumerationQuery handleResults:error:responseQueue:]
___62-[_DRTopicEnumerationQuery handleResults:error:responseQueue:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[_DRTopicEnumerationQuery executeUsingCoreDataStorage:reponseQueue:]
___69-[_DRTopicEnumerationQuery executeUsingCoreDataStorage:reponseQueue:]_block_invoke
___copy_helper_block_110
___destroy_helper_block_111
-[_DRTopicEnumerationQuery topicEnumerator]
-[_DRTopicEnumerationQuery setTopicEnumerator:]
-[_DRTopicEnumerationQuery .cxx_destruct]
+[_DRTopicStatisticsQuery topicStatisticsQuery]
+[_DRTopicStatisticsQuery topicStatisticsQueryWithFilter:]
-[_DRTopicStatisticsQuery initWithPredicate:]
-[_DRTopicStatisticsQuery clearSummary]
-[_DRTopicStatisticsQuery handleResults:error:responseQueue:]
+[_DRTopicStatisticsQuery countExpression]
___42+[_DRTopicStatisticsQuery countExpression]_block_invoke
+[_DRTopicStatisticsQuery sumExpression]
___40+[_DRTopicStatisticsQuery sumExpression]_block_invoke
-[_DRTopicStatisticsQuery executeUsingCoreDataStorage:reponseQueue:]
___68-[_DRTopicStatisticsQuery executeUsingCoreDataStorage:reponseQueue:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[_DRTopicStatisticsQuery summary]
-[_DRTopicStatisticsQuery setSummary:]
-[_DRTopicStatisticsQuery .cxx_destruct]
_objc_msgSend$shim
_objc_release$shim
_objc_retainAutoreleaseReturnValue$shim
_objc_autoreleaseReturnValue$shim
_objc_getProperty$shim
_objc_setProperty_atomic$shim
_objc_storeStrong$shim
_objc_retain$shim
__Block_object_assign$shim
_objc_setProperty_atomic_copy$shim
 stub helpers
GCC_except_table11
GCC_except_table10
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp18
___block_literal_global19
___block_descriptor_tmp20
___block_literal_global21
___block_descriptor_tmp38
___block_literal_global39
___block_descriptor_tmp44
___block_literal_global45
___block_descriptor_tmp
___block_descriptor_tmp54
___block_descriptor_tmp91
___block_descriptor_tmp96
___block_descriptor_tmp99
___block_descriptor_tmp122
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp44
___block_literal_global45
___block_descriptor_tmp60
___block_descriptor_tmp112
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp52
___block_literal_global53
___block_descriptor_tmp101
_OBJC_IVAR_$__DRTopicInterestSummary._topicPresentationsCount
_OBJC_IVAR_$__DRTopicInterestSummary._topicSelectionsCount
_OBJC_IVAR_$__DRTopicInterestModel._syncQueue
_OBJC_IVAR_$__DRTopicInterestModel._storage
_OBJC_IVAR_$__DRTopicActionEntry._topic
_OBJC_IVAR_$__DRTopicActionEntry._when
_OBJC_IVAR_$__DRTopicActionEntry._action
_OBJC_IVAR_$__DRInMemoryTopicInterestModel._topics
_OBJC_IVAR_$__DRInMemoryTopicInterestModel._summary
_OBJC_IVAR_$__DRInMemoryTopicInterestModel._syncQueue
_OBJC_IVAR_$__DRTopicEnumerationQuery._defaultQueue
_OBJC_IVAR_$__DRTopicEnumerationQuery._topicEnumerator
_OBJC_IVAR_$__DRTopicStatisticsQuery._summary
_OBJC_IVAR_$__DRTopicStatisticsQuery._defaultQueue
_OBJC_IVAR_$__DRTopicStatisticsQuery._predicate
_topicActionCategoryType.onceToken
_topicActionCategoryType.categoryType
_topicPresentedCategory.onceToken
_topicPresentedCategory.presentedCategory
_topicSelectedCategory.onceToken
_topicSelectedCategory.selectedCategory
_enumerationCountExpresion.onceToken
_enumerationCountExpresion.expressionDescriptionCount
_enumerationSumExpression.onceToken
_enumerationSumExpression.expressionDescriptionSum
_countExpression.onceToken
_countExpression.expressionDescriptionCount
_sumExpression.onceToken
_sumExpression.expressionDescriptionSum
_DuetRecommendationVersionNumber
_DuetRecommendationVersionString
_OBJC_CLASS_$__DRInMemoryTopicInterestModel
_OBJC_CLASS_$__DRTopicActionEntry
_OBJC_CLASS_$__DRTopicEnumerationQuery
_OBJC_CLASS_$__DRTopicInterestModel
_OBJC_CLASS_$__DRTopicInterestSummary
_OBJC_CLASS_$__DRTopicStatisticsQuery
_OBJC_METACLASS_$__DRInMemoryTopicInterestModel
_OBJC_METACLASS_$__DRTopicActionEntry
_OBJC_METACLASS_$__DRTopicEnumerationQuery
_OBJC_METACLASS_$__DRTopicInterestModel
_OBJC_METACLASS_$__DRTopicInterestSummary
_OBJC_METACLASS_$__DRTopicStatisticsQuery
_NSFileProtectionCompleteUntilFirstUserAuthentication
_NSLog
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSCompoundPredicate
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSEntityDescription
_OBJC_CLASS_$_NSExpression
_OBJC_CLASS_$_NSExpressionDescription
_OBJC_CLASS_$_NSFetchRequest
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSPredicate
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$__CDLogging
_OBJC_CLASS_$__DKCategory
_OBJC_CLASS_$__DKCustomCategory
_OBJC_CLASS_$__DKEvent
_OBJC_CLASS_$__DKEventStream
_OBJC_CLASS_$__DKKnowledgeStorage
_OBJC_CLASS_$__DKQuery
_OBJC_EHTYPE_$_NSException
_OBJC_METACLASS_$_NSObject
_OBJC_METACLASS_$__DKQuery
__Block_object_assign
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__Unwind_SjLj_Register
__Unwind_SjLj_Resume
__Unwind_SjLj_Unregister
___CFConstantStringClassReference
___objc_personality_v0
___stack_chk_fail
___stack_chk_guard
__objc_empty_cache
_dispatch_async
_dispatch_once
_dispatch_queue_create
_dispatch_sync
_objc_autoreleasePoolPop
_objc_autoreleasePoolPush
_objc_autoreleaseReturnValue
_objc_begin_catch
_objc_end_catch
_objc_enumerationMutation
_objc_getProperty
_objc_msgSend
_objc_msgSendSuper2
_objc_release
_objc_retain
_objc_retainAutorelease
_objc_retainAutoreleaseReturnValue
_objc_retainAutoreleasedReturnValue
_objc_setProperty_atomic
_objc_setProperty_atomic_copy
_objc_storeStrong
dyld_stub_binder
