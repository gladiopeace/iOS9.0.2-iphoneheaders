/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MTLibraryMigrator : NSObject
+(void)migrateDatabaseToSharedContainerIfNeeded;
+(char)runCoreDataMigration;
+(char)runDataMigration;
+(void)migrateSettingsForVersion:(unsigned)arg1 ;
+(void)migratePlaylistsForVersion:(int)arg1 ;
+(void)runMigrationOnEpisodesByPodcastForVersion:(int)arg1 ;
+(void)recalculateAllPlaylists;
+(void)touchMigrationVersion;
+(void)migratePlaylistDefaultsForVersion7to8;
+(void)migrateDefaultPlaylistsForVersion18to19;
+(char)isDefaultSettingsForPlaylist:(id)arg1 title:(id)arg2 episodesToShow:(long long)arg3 showPlayedEpisodes:(char)arg4 includeAllPodcasts:(char)arg5 ;
+(void)deleteOrUpdatePlaylist:(id)arg1 ifIsDefault:(char)arg2 ;
+(void)migrateSettingDefaultsForVersion6to7;
+(void)migrateSettingDefaultsForVersion9to10;
+(void)migrateSettingDefaultsForVersion10to11;
+(int)episodesToKeepDefaultValue;
+(long long)episodesToKeepToEpisodeLimit:(int)arg1 ;
+(char)runMigrationForPodcast:(id)arg1 version:(int)arg2 ;
+(void)episodeMigrationForVersion0to1:(id)arg1 ;
+(void)episodeMigrationForVersion6to7:(id)arg1 ;
+(void)episodeMigrationForVersion13to14:(id)arg1 ;
+(void)episodeMigrationForVersion16to17:(id)arg1 ;
+(void)episodeMigrationForVersion17to18:(id)arg1 ;
+(void)episodeMigrationForVersion21to22:(id)arg1 ;
+(void)podcastMigrationForVersion6to7:(id)arg1 ;
+(char)podcastMigrationForVersion8to9:(id)arg1 ;
+(void)podcastMigrationForVersion9to10:(id)arg1 ;
+(void)podcastMigrationForVersion11to12:(id)arg1 ;
+(void)podcastMigrationForVersion14to15:(id)arg1 ;
+(void)podcastMigrationForVersion19to20:(id)arg1 ;
+(void)podcastMigrationForVersion20to21:(id)arg1 ;
+(id)legacyLibraryPath;
+(char)needToMigrateDataToSharedContainer;
+(char)moveSQLiteFilesFromDocumentsToSharedContainer;
+(void)fixupDataMigrationVersion;
+(char)needsMigration;
@end

