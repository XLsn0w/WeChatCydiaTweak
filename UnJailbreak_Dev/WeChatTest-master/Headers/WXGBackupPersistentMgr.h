//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WXGBackupPersistentMgr : NSObject
{
}

+ (id)convertByteSizeToString:(unsigned long long)arg1;
+ (_Bool)canSucccesInOneTransfer;
+ (void)failOnFirstTransfer;
+ (void)writeBeginFirstTransfer;
+ (_Bool)getMigrationBuildIndex;
+ (void)saveMigrationBuildIndex:(_Bool)arg1;
+ (_Bool)getStateOfMigrationTimeSelection;
+ (void)resetStateOfMigraitonTimeSelection;
+ (void)setStateOfMigrationTimeSelection;
+ (_Bool)getStateOfBackupSelection;
+ (void)resetStateOfBackupSelection;
+ (void)setStateOfBackupSelection;
+ (_Bool)isExportChatLog;
+ (void)resetStateOfExportChatLog;
+ (void)setStateOfExportChatLog;
+ (_Bool)getMigrationSelectTextOnlySetting;
+ (void)saveMigrationSelectTextOnly:(_Bool)arg1;
+ (unsigned long long)getSelectMigrationType;
+ (void)setSelectMigrationType:(unsigned long long)arg1;
+ (_Bool)hasMigrationSelection;
+ (id)loadMigrationSelection;
+ (void)deleteMigrationSelection;
+ (_Bool)saveMigrationSelection:(id)arg1;
+ (void)clearChatSyncData;
+ (void)syncClearChatSyncData;
+ (id)getChatSyncFilePath;
+ (id)getChatSyncTmpPathWithDataID:(id)arg1;
+ (id)getChatSyncTmpPath;
+ (id)getChatSyncPath;
+ (void)setLastBackupComputerName:(id)arg1;
+ (id)getLastBackupComputerName;
+ (_Bool)getStateOfMigrated;
+ (void)resetStateOfMigrated;
+ (void)setStateOfMigrated;
+ (void)syncDeleteMigrationMsgListArray:(id)arg1;
+ (void)p_clearMigrationBufferPath;
+ (void)p_syncClearMigrationBufferPath;
+ (void)p_clearMigrationPath;
+ (void)p_syncClearMigrationPath;
+ (void)clearMigrationTmpData;
+ (void)syncClearMigrationTmpData;
+ (void)syncDeleteBackupMsgListArray:(id)arg1;
+ (void)p_clearBackupPath;
+ (void)p_clearBackupBufferData;
+ (void)p_syncClearBackupPath;
+ (void)p_syncClearBackupBufferData;
+ (void)clearBackupTmpData;
+ (void)syncClearBackupTmpData;
+ (id)getMigrationProgress;
+ (void)writeMigrationProgressCurrent:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
+ (id)getMigrationSessionProgress;
+ (void)writeMigrationSessionCurrent:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
+ (id)getProgress;
+ (void)writeProgressCurrent:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
+ (_Bool)isMigrationOldRecover;
+ (void)writeMigrationNewRecover;
+ (void)writeMigrationOldRecover;
+ (unsigned long long)checkMigrationRecoverState;
+ (void)resetMigrationRecoverInfo;
+ (void)writeMigrationRecoverDataPartWaitInfo;
+ (void)writeMigrationRecoverDataWaitInfo;
+ (void)writeMigrationRecoverDataBeignInfo;
+ (void)writeMigrationRecoverTransferBeginInfo;
+ (_Bool)checkBackupRecvoerOnlyText;
+ (void)writeBackupRecoverOnlyText:(_Bool)arg1;
+ (unsigned long long)checkBackupRecoverState;
+ (void)resetBackupRecoverInfo;
+ (void)writeBackupRecoverDataWaitInfo;
+ (void)writeBackupRecoverDataBeignInfo;
+ (void)writeBackupRecoverTransferBeginInfo;
+ (id)getLastDeviceID;
+ (void)saveCurrentDeviceID:(id)arg1;
+ (_Bool)hasBackupDeleteSelection;
+ (id)loadBackupDeleteSelection;
+ (void)deleteBackupDeleteSelection;
+ (_Bool)saveBackupDeleteSelection:(id)arg1;
+ (_Bool)getBackupSelectTextOnlySetting;
+ (void)saveBackupSelectTextOnly:(_Bool)arg1;
+ (_Bool)hasBackupSelection;
+ (id)loadBackupSelection;
+ (void)deleteBackupSelection;
+ (_Bool)saveBackupSelection:(id)arg1;
+ (unsigned long long)getFreeDiskSpaceBeforeBackupDelete;
+ (void)writeFreeSpaceBeforeBackupDelete:(unsigned long long)arg1;
+ (unsigned long long)getFreeDiskSpace;
+ (unsigned long long)getFileSizeOfMigrationPath;
+ (unsigned long long)getFileSizeOfBackupPath;
+ (id)getMigrationSelectionPath;
+ (id)getMigrationFilePathWithDataId:(id)arg1;
+ (id)getMigrationFileBufferPathWithDataId:(id)arg1;
+ (id)getMigrationInfoDBPath;
+ (id)getMigrationMsgItemDBPath;
+ (id)getMigrationTmpPath;
+ (id)getMigrationBufferPath;
+ (id)getMigrationPath;
+ (id)getBackupDeleteSelectionPath;
+ (id)getRelatedMemoryKV;
+ (id)getRecoverReportPath;
+ (id)getBackupReportPath;
+ (id)getBackupSelectionPath;
+ (id)getBackupIndexDataBasePath;
+ (id)getBackupBufferPathWithDataId:(id)arg1;
+ (id)getBackupBufferPath;
+ (id)getBackupTmpPathWithDataId:(id)arg1;
+ (id)getBackupTmpPath;
+ (id)getBackupPathWithDataId:(id)arg1;
+ (id)getBackupPath;
+ (void)triggerToQuickClearTrashPath;

@end

