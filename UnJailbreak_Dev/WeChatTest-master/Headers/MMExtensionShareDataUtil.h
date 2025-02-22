//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMExtensionShareDataUtil : NSObject
{
}

+ (id)getPathOfIDKeyReportDataDir;
+ (id)getPathOfFavThumbnalImg:(id)arg1;
+ (id)getPathOfFavCompressImg:(id)arg1;
+ (id)getPathOfFavFileTaskDir;
+ (id)getPathOfFavThumbnalImgDir;
+ (id)getPathOfFavCompressImgDir;
+ (id)getPathOfFavVideoTaskDir;
+ (id)getPathOfFavUrlTaskDir;
+ (id)getPathOfFavImgTaskDir;
+ (id)getPathOfFavDir;
+ (id)getPathOfMsgAppFileWithFileName:(id)arg1;
+ (id)getPathOfMsgCompressedVideWithVideoUrl:(id)arg1;
+ (id)getPathOfVideoTempCacheWithVideoUrl:(id)arg1;
+ (id)getPathOfVideoCompressDir;
+ (id)getPathOfVideoTempCacheDir;
+ (id)getPathOfMsgAppThumbImageWithContentUrl:(id)arg1;
+ (id)getPathOfMsgVideoThumbnailWithVideoUrl:(id)arg1;
+ (id)getPathOfMsgThumbImageWithImageUrl:(id)arg1;
+ (id)getPathOfMsgNormalImageWithImageUrl:(id)arg1;
+ (id)getPathOfMsgFileDir;
+ (id)getPathOfMsgVideoDir;
+ (id)getPathOfMsgImageDir;
+ (id)shareExtensionLogFilePath;
+ (id)shareExtensionLogFolderPath;
+ (id)getShareExtensionMessageFailSessionPathWithFileName:(id)arg1;
+ (id)getShareExtensionMessageFailSessionDir;
+ (id)getShareExtensionMessageTaskIdPathWithFileName:(id)arg1;
+ (id)getShareExtensionMessageTaskIdDir;
+ (id)getShareExtensionMessageTaskDataPathWithFileName:(id)arg1;
+ (id)getShareExtensionMessageTaskDataDir;
+ (id)getShareExtensionTimelineFailTaskDataPathWithFileName:(id)arg1;
+ (id)getShareExtensionTimelineFailTaskDataDir;
+ (id)getShareExtensionTimelineTaskDataPathWithFileName:(id)arg1;
+ (id)getShareExtensionTimelineTaskDataDir;
+ (id)getShareExtensionPostDataCachePathWithFileName:(id)arg1;
+ (id)getShareExtensionShareSessionHeadImgWithFileName:(id)arg1;
+ (id)getShareExtensionShareSessionHeadImgDir;
+ (id)getShareExtensionShareSessionDataPath;
+ (id)getShareExtensionShareSessionExtraSessionDataPath;
+ (id)getPathOfShareExtensionExtraSessionUpdateTime;
+ (id)getPathOfShareExtensionTransmitData;
+ (id)getShareExtensionShareSessionDir;
+ (id)getShareExtensionAppGroupRootDir;
+ (void)removeTaskAfterHandle:(id)arg1 withTaskID:(unsigned long long)arg2;
+ (_Bool)isTaskHadHandled:(id)arg1 withTaskID:(unsigned long long)arg2;
+ (void)setTaskCanBeHandle:(id)arg1 withTaskID:(unsigned long long)arg2;
+ (id)getMessageBackgroundURLSessionIdentifierPrefix;
+ (id)getTimelineBackgroundURLSessionIdentifierPrefix;
+ (_Bool)syncUserDefaultData;
+ (void)saveShareExtCheckSwitch:(unsigned int)arg1;
+ (void)saveLongImageLongEdge:(unsigned long long)arg1;
+ (void)saveLongImageRatio:(unsigned long long)arg1;
+ (void)saveMsgImgResolution:(id)arg1;
+ (void)saveSnsImgResolution:(id)arg1;
+ (void)saveSnsImgQuality:(double)arg1;
+ (void)saveMsgImgQuality:(double)arg1;
+ (void)saveHeadDeviceType:(unsigned short)arg1;
+ (void)saveDeviceType:(id)arg1;
+ (void)saveDeviceID:(id)arg1;
+ (void)saveSnsCdnInfo:(id)arg1;
+ (void)saveAppCdnInfo:(id)arg1;
+ (void)saveCdnDnsInfo:(id)arg1;
+ (void)saveCgiHost:(id)arg1;
+ (void)saveServerID:(id)arg1;
+ (void)saveExtensionKey:(id)arg1;
+ (void)saveOSType:(id)arg1;
+ (void)saveVersion:(unsigned int)arg1;
+ (id)getShortHost;
+ (void)saveShortHost:(id)arg1;
+ (void)saveCurrentNickname:(id)arg1;
+ (void)saveCurrentUsername:(id)arg1;
+ (void)saveCryptUin:(unsigned int)arg1;
+ (_Bool)clearAllValues;
+ (id)containerURL;
+ (id)appGroupID;
+ (id)userDefaults;

@end

