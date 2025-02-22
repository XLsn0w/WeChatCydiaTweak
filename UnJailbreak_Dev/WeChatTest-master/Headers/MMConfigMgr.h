//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IMMLanguageMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMPackageDownloadMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class JDWebViewMenuData, NSDictionary, NSMutableDictionary, NSString;

@interface MMConfigMgr : MMService <MMPackageDownloadMgrExt, MMService, MMKernelExt, IMMLanguageMgrExt, IMsgExt>
{
    NSMutableDictionary *m_dicCacheConfigSeperator;
    NSMutableDictionary *m_dicConfig;
    NSMutableDictionary *m_dicDynamicConfig;
    NSMutableDictionary *m_dicDynamicConfigSplit;
    int m_iVersion;
    NSMutableDictionary *m_dicJDConfigCache;
    JDWebViewMenuData *m_JDMenuCache;
    NSDictionary *m_dicPrefetchDomains;
    _Bool m_bDomainPrefetchEnabled;
}

+ (_Bool)isAutoDownloadCloseForValue:(id)arg1;
@property(retain) NSMutableDictionary *m_dicCacheConfigSeperator; // @synthesize m_dicCacheConfigSeperator;
- (void).cxx_destruct;
- (_Bool)isAutoDownloadCloseForKey:(id)arg1;
- (_Bool)isCurrentTimeInRangeForKey:(id)arg1;
- (id)getJDWebviewMenuData;
- (id)prefetchedDomainDictWithXMLString:(id)arg1;
- (void)loadDNSPrefetchConfig;
- (id)prefetchedDomainsForDomain:(id)arg1;
- (void)updateSignalingScenes;
- (unsigned int)uintFromDynamicConfigForKey:(id)arg1 defaultValue:(unsigned int)arg2;
- (unsigned int)uintFromDynamicConfigForKey:(id)arg1;
- (unsigned int)uintWithHexFromDynamicConfigForKey:(id)arg1;
- (id)valueFromDynamicConfigForKey:(id)arg1;
- (unsigned int)uintForKey:(id)arg1 config:(id)arg2;
- (id)valueForKey:(id)arg1 config:(id)arg2;
- (id)arrSubValueForKey:(id)arg1 config:(id)arg2 seperator:(id)arg3;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onLanguageChange;
- (void)onAuthOK;
- (void)dealloc;
- (id)init;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)loadData;
- (void)saveDynamicConfigSplit;
- (void)loadDynamicConfigSplit;
- (id)getDynamicConfigSplitFilePath;
- (id)getDynamicConfigFilePath;
- (void)initStaticConfig:(id)arg1;
- (void)mergeDynamicConfig:(id)arg1;
- (void)initDynamicConfig:(id)arg1;
- (id)parseDynamicConfig:(id)arg1 type:(const char *)arg2;
- (id)parseXMLToMenuItem:(struct XmlReaderNode_t *)arg1;
- (void)parseWebViewCustomizeConfig:(struct XmlReaderNode_t *)arg1 forMenuData:(id)arg2;
- (void)initConfig:(id)arg1 for:(id)arg2;
- (_Bool)isItemSupportCountry:(id)arg1 item:(struct XmlReaderNode_t *)arg2;
- (_Bool)isItemSupportLanguage:(id)arg1 item:(struct XmlReaderNode_t *)arg2;
- (id)addConfigName:(id)arg1 forConfig:(id)arg2;
- (void)downLoadConfig;
- (void)onPackageNeedUpdate:(id)arg1 withPackIDs:(id)arg2;
- (void)onPackageListUpdated:(id)arg1;
- (long long)getVideoHWMaxFPS;
- (long long)getVideoHWMaxRes;
- (long long)getVideoSWMaxFPS;
- (long long)getVideoSWMaxRes;
- (long long)getVideoHWEnable;
- (long long)getVideoCaptureFps;
- (long long)getVideoCaptureRes;
- (unsigned int)getEmotionStoreType;
- (long long)getMultiTalkAudioUnitSubType;
- (long long)getMultiTalkAgclimiter;
- (long long)getMultiTalkAgcflag;
- (long long)getMultiTalkAgcgaindb;
- (long long)getMultiTalkAgctargetdb;
- (long long)getMultiTalkAgcMode;
- (long long)getMultiTalkAecMode;
- (long long)getMultiTalkNsMode;
- (long long)getAudioUnitSubType;
- (long long)getEngineAgcRxLimiter;
- (long long)getEngineAgcRxGain;
- (long long)getEngineAgcRxTarget;
- (long long)getEngineAgcRxFlag;
- (long long)getOutputVolumeScale:(_Bool)arg1;
- (long long)getInputVolumeScale:(_Bool)arg1;
- (long long)getEngineECModeLevel:(_Bool)arg1;
- (long long)getEngineXnoiseSupFlag;
- (long long)getEngineAecMode;
- (long long)getEngineAgclimiter;
- (long long)getEngineAgcflag;
- (long long)getEngineAgcgaindb;
- (long long)getEngineAgctargetdb;
- (long long)getEngineAgcMode;
- (long long)getEngineNsMode;
- (long long)getEngineSpkEcMode;
- (_Bool)shouldBlockVoipMinimizeMode;
- (_Bool)shouldBlockVoipIgnoreButton;
- (_Bool)shouldShowVoipInChat;
- (_Bool)shouldCloseVoiceAgc:(_Bool)arg1;
- (_Bool)shouldCloseVoiceProcess:(_Bool)arg1;
- (double)GetMinCompressEarningsPercent;
- (unsigned long long)GetNoneCompressLongImageSize;
- (unsigned long long)GetNoneCompressNormalImageSize;
- (unsigned long long)compressLongImageLongEdge;
- (unsigned long long)compressLongImageRatio;
- (id)getCompressParameterForScene:(unsigned long long)arg1 parameterType:(unsigned long long)arg2;
- (struct CGSize)compressResolutionForScene:(unsigned long long)arg1;
- (double)compressQualityForScene:(unsigned long long)arg1;
- (double)compressQualityForSnsWithoutWebp;
- (id)signalingScenes;
- (int)GetSignalInterval;
- (_Bool)IsShouldSendSignalInScene:(id)arg1;
- (_Bool)hasJDStoreCell;
- (id)GetJDStoreCellItem;
- (unsigned int)getHeightLimitForShowingTextMsg;
- (unsigned int)getInputLimitFileSize;
- (unsigned int)getInputLimitVideoSize;
- (unsigned int)getInputLimitFavVoiceLength;
- (unsigned int)getInputLimitFavImageSize;
- (unsigned int)getInputLimitEmotionWidth;
- (unsigned int)getInputLimitAppMsgEmotionBufSize;
- (unsigned int)getInputLimitEmotionBufSize;
- (unsigned int)getInputLimitForFavMsg;
- (unsigned int)getInputLimitForFloatBottleMsg;
- (unsigned int)getInputLimitForTextMsg;
- (long long)getVoipkeyVer;
- (long long)getVoipkeyPhone;
- (long long)getVoipkeyTime;
- (long long)getVoipkeyMicadd;
- (long long)getVoipkeyMicnum;
- (long long)getVoipkeyGtype;
- (long long)getVoipkeyStype;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

