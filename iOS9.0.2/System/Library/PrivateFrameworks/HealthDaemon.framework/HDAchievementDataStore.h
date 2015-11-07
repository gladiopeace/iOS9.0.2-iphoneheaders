/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HDHealthDaemon;
@class NSMutableDictionary, NSMutableArray, NSError, NSString, NSDate;

@interface HDAchievementDataStore : NSObject {

	id<HDHealthDaemon> _healthDaemon;
	NSMutableDictionary* _cachedValues;
	NSMutableDictionary* _updatedValues;
	NSMutableArray* _achievements;
	NSError* _currentRunError;
	NSString* _currentRunErroredPropertyKey;

}

@property (nonatomic,retain) NSDate * lastSessionEndDate; 
@property (assign,nonatomic) unsigned totalSessionCount; 
@property (assign,nonatomic) unsigned bestSessionCountAnyWeek; 
@property (assign,nonatomic) unsigned bestOneTimeStepCount; 
@property (assign,nonatomic) unsigned stepCountYesterday; 
@property (assign,nonatomic) unsigned stepCountToday; 
@property (assign,nonatomic) unsigned stepCountLastCheckedActivityCacheIndex; 
@property (assign,nonatomic) unsigned briskMinutesFirstCheckedActivityCacheIndex; 
@property (assign,nonatomic) unsigned briskMinutesLastCheckedActivityCacheIndex; 
@property (assign,nonatomic) double briskMinutesYesterday; 
@property (assign,nonatomic) double briskMinutesToday; 
@property (assign,nonatomic) double bestBriskMinutes; 
@property (assign,nonatomic) unsigned consecutiveBriskMinutesGoalsMet; 
@property (nonatomic,retain) NSDate * lastPerfectWeekBriskMinutesDate; 
@property (assign,nonatomic) unsigned standingHoursLastCheckedActivityCacheIndex; 
@property (assign,nonatomic) unsigned standingHoursYesterday; 
@property (assign,nonatomic) unsigned standingHoursToday; 
@property (assign,nonatomic) unsigned consecutiveStandingHoursGoalsMet; 
@property (nonatomic,retain) NSDate * lastPerfectWeekStandDate; 
@property (nonatomic,retain) NSDate * lastDistanceDate; 
@property (assign,nonatomic) double distanceToday; 
@property (assign,nonatomic) double bestDistance; 
@property (assign,nonatomic) unsigned caloriesBurnedFirstCheckedActivityCacheIndex; 
@property (assign,nonatomic) unsigned caloriesBurnedLastCheckedActivityCacheIndex; 
@property (assign,nonatomic) double caloriesBurnedYesterday; 
@property (assign,nonatomic) double caloriesBurnedToday; 
@property (assign,nonatomic) double bestDailyCalorieBurn; 
@property (assign,nonatomic) double latestCalorieBurnGoalMetCalories; 
@property (assign,nonatomic) double bestCalorieBurnGoalMetCalories; 
@property (assign,nonatomic) unsigned currentGoalConsecutiveCompleteDays; 
@property (assign,nonatomic) unsigned consecutiveCompleteDays; 
@property (assign,nonatomic) unsigned bestConsecutiveCompleteDays; 
@property (assign,nonatomic) unsigned lifetimeCompleteDays; 
@property (nonatomic,retain) NSDate * lastPerfectWeekCaloriesBurnedDate; 
@property (nonatomic,retain) NSDate * lastPerfectWeekAllDate; 
@property (nonatomic,retain) id<HDHealthDaemon> healthDaemon;                                    //@synthesize healthDaemon=_healthDaemon - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedValues;                                 //@synthesize cachedValues=_cachedValues - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updatedValues;                                //@synthesize updatedValues=_updatedValues - In the implementation block
@property (nonatomic,retain) NSMutableArray * achievements;                                      //@synthesize achievements=_achievements - In the implementation block
@property (nonatomic,retain) NSError * currentRunError;                                          //@synthesize currentRunError=_currentRunError - In the implementation block
@property (nonatomic,retain) NSString * currentRunErroredPropertyKey;                            //@synthesize currentRunErroredPropertyKey=_currentRunErroredPropertyKey - In the implementation block
+(id)_keyForSessionCountWithActivityType:(unsigned)arg1 ;
+(id)_keyForSessionCountOverFirstSessionMinimumDurationWithActivityType:(unsigned)arg1 ;
+(id)_keyForBestSessionCaloriesWithActivityType:(unsigned)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(id)init;
-(id<HDHealthDaemon>)healthDaemon;
-(void)setHealthDaemon:(id<HDHealthDaemon>)arg1 ;
-(id)initWithHealthDaemon:(id)arg1 ;
-(double)caloriesBurnedYesterday;
-(double)caloriesBurnedToday;
-(double)briskMinutesYesterday;
-(double)briskMinutesToday;
-(unsigned)standingHoursYesterday;
-(unsigned)standingHoursToday;
-(void)addAchievement:(id)arg1 ;
-(id)uncommittedAchievements;
-(char)commit:(id*)arg1 ;
-(unsigned)countOfUnalertedAchievements;
-(id)unalertedAchievements;
-(void)markAchievementAlerted:(id)arg1 ;
-(unsigned)unsignedIntegerForKey:(id)arg1 ;
-(id)dateForKey:(id)arg1 ;
-(void)setUnsignedInteger:(unsigned)arg1 forKey:(id)arg2 ;
-(void)setDate:(id)arg1 forKey:(id)arg2 ;
-(NSMutableArray *)achievements;
-(void)setAchievements:(NSMutableArray *)arg1 ;
-(NSDate *)lastSessionEndDate;
-(void)setLastSessionEndDate:(NSDate *)arg1 ;
-(unsigned)totalSessionCount;
-(void)setTotalSessionCount:(unsigned)arg1 ;
-(unsigned)sessionCountForActivityType:(unsigned)arg1 ;
-(unsigned)sessionCountOverFirstSessionMininumDurationForActivityType:(unsigned)arg1 ;
-(void)setSessionCountOverFirstSessionMinimumDuration:(unsigned)arg1 activityType:(unsigned)arg2 ;
-(double)bestSessionCaloriesForActivityType:(unsigned)arg1 ;
-(void)setBestSessionCalories:(double)arg1 forActivityType:(unsigned)arg2 ;
-(void)setSessionCount:(unsigned)arg1 activityType:(unsigned)arg2 ;
-(unsigned)bestSessionCountAnyWeek;
-(void)setBestSessionCountAnyWeek:(unsigned)arg1 ;
-(unsigned)briskMinutesLastCheckedActivityCacheIndex;
-(unsigned)consecutiveBriskMinutesGoalsMet;
-(NSDate *)lastPerfectWeekBriskMinutesDate;
-(unsigned)briskMinutesFirstCheckedActivityCacheIndex;
-(double)bestBriskMinutes;
-(void)addAchievements:(id)arg1 ;
-(void)setBriskMinutesYesterday:(double)arg1 ;
-(void)setBriskMinutesToday:(double)arg1 ;
-(void)setBriskMinutesFirstCheckedActivityCacheIndex:(unsigned)arg1 ;
-(void)setBriskMinutesLastCheckedActivityCacheIndex:(unsigned)arg1 ;
-(void)setConsecutiveBriskMinutesGoalsMet:(unsigned)arg1 ;
-(void)setBestBriskMinutes:(double)arg1 ;
-(void)setLastPerfectWeekBriskMinutesDate:(NSDate *)arg1 ;
-(unsigned)standingHoursLastCheckedActivityCacheIndex;
-(unsigned)consecutiveStandingHoursGoalsMet;
-(NSDate *)lastPerfectWeekStandDate;
-(void)setStandingHoursYesterday:(unsigned)arg1 ;
-(void)setStandingHoursToday:(unsigned)arg1 ;
-(void)setStandingHoursLastCheckedActivityCacheIndex:(unsigned)arg1 ;
-(void)setConsecutiveStandingHoursGoalsMet:(unsigned)arg1 ;
-(void)setLastPerfectWeekStandDate:(NSDate *)arg1 ;
-(unsigned)bestOneTimeStepCount;
-(unsigned)stepCountYesterday;
-(unsigned)stepCountToday;
-(unsigned)stepCountLastCheckedActivityCacheIndex;
-(void)setStepCountYesterday:(unsigned)arg1 ;
-(void)setStepCountToday:(unsigned)arg1 ;
-(void)setBestOneTimeStepCount:(unsigned)arg1 ;
-(void)setStepCountLastCheckedActivityCacheIndex:(unsigned)arg1 ;
-(unsigned)caloriesBurnedLastCheckedActivityCacheIndex;
-(double)latestCalorieBurnGoalMetCalories;
-(double)bestCalorieBurnGoalMetCalories;
-(double)bestDailyCalorieBurn;
-(unsigned)currentGoalConsecutiveCompleteDays;
-(unsigned)lifetimeCompleteDays;
-(unsigned)consecutiveCompleteDays;
-(unsigned)bestConsecutiveCompleteDays;
-(NSDate *)lastPerfectWeekCaloriesBurnedDate;
-(unsigned)caloriesBurnedFirstCheckedActivityCacheIndex;
-(void)setCaloriesBurnedYesterday:(double)arg1 ;
-(void)setCaloriesBurnedToday:(double)arg1 ;
-(void)setCaloriesBurnedFirstCheckedActivityCacheIndex:(unsigned)arg1 ;
-(void)setCaloriesBurnedLastCheckedActivityCacheIndex:(unsigned)arg1 ;
-(void)setBestDailyCalorieBurn:(double)arg1 ;
-(void)setLifetimeCompleteDays:(unsigned)arg1 ;
-(void)setConsecutiveCompleteDays:(unsigned)arg1 ;
-(void)setBestConsecutiveCompleteDays:(unsigned)arg1 ;
-(void)setLatestCalorieBurnGoalMetCalories:(double)arg1 ;
-(void)setBestCalorieBurnGoalMetCalories:(double)arg1 ;
-(void)setCurrentGoalConsecutiveCompleteDays:(unsigned)arg1 ;
-(void)setLastPerfectWeekCaloriesBurnedDate:(NSDate *)arg1 ;
-(NSDate *)lastPerfectWeekAllDate;
-(void)setLastPerfectWeekAllDate:(NSDate *)arg1 ;
-(id)_valueForKey:(id)arg1 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(NSDate *)lastDistanceDate;
-(void)setLastDistanceDate:(NSDate *)arg1 ;
-(double)distanceToday;
-(void)setDistanceToday:(double)arg1 ;
-(double)bestDistance;
-(void)setBestDistance:(double)arg1 ;
-(NSMutableDictionary *)cachedValues;
-(void)setCachedValues:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)updatedValues;
-(void)setUpdatedValues:(NSMutableDictionary *)arg1 ;
-(NSError *)currentRunError;
-(void)setCurrentRunError:(NSError *)arg1 ;
-(NSString *)currentRunErroredPropertyKey;
-(void)setCurrentRunErroredPropertyKey:(NSString *)arg1 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
@end

