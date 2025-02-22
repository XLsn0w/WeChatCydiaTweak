//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"
#import "MMovieCompressorDelegate-Protocol.h"
#import "SightCaptureDelegate-Protocol.h"
#import "SightMomentDraftTipsViewControllerDelegate-Protocol.h"

@class CMMotionManager, MMObject, MMWindowController, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SightDraftMgr, UIImage;
@protocol SightCaptureLogic;

@interface SightFacade : MMService <SightMomentDraftTipsViewControllerDelegate, MMService, IMsgExt, SightCaptureDelegate, MMovieCompressorDelegate>
{
    _Bool m_preventCamera;
    MMWindowController *m_sightDraftTipsWindow;
    MMWindowController *m_sightTipsWindow;
    MMWindowController *m_sightWindowController;
    MMObject<SightCaptureLogic> *m_logic;
    SightDraftMgr *m_draftMgr;
    unsigned int m_compressorID;
    NSMutableDictionary *m_compressorDic;
    NSMutableArray *m_invalidateCompressor;
    unsigned int m_captureCounter;
    unsigned int m_continousCaptureID;
    CDStruct_1b6d18a9 m_lastCaptureTime;
    UIImage *m_blurImage;
    _Bool m_lightDetector;
    CMMotionManager *m_cmManager;
    _Bool _needShakeDetector;
    _Bool _isNeedResumeWXMusic;
    float _jsapiMaxVideoDuration;
    float _allowableSightMaxDuration;
    NSDictionary *_sightLimitationDictionary;
    NSArray *_allowableSightFPS;
    NSArray *_allowableSightFrameSize;
}

+ (id)generateSessionID;
@property(nonatomic) _Bool isNeedResumeWXMusic; // @synthesize isNeedResumeWXMusic=_isNeedResumeWXMusic;
@property(nonatomic) float allowableSightMaxDuration; // @synthesize allowableSightMaxDuration=_allowableSightMaxDuration;
@property(retain, nonatomic) NSArray *allowableSightFrameSize; // @synthesize allowableSightFrameSize=_allowableSightFrameSize;
@property(retain, nonatomic) NSArray *allowableSightFPS; // @synthesize allowableSightFPS=_allowableSightFPS;
@property(retain, nonatomic) NSDictionary *sightLimitationDictionary; // @synthesize sightLimitationDictionary=_sightLimitationDictionary;
@property(nonatomic) float jsapiMaxVideoDuration; // @synthesize jsapiMaxVideoDuration=_jsapiMaxVideoDuration;
@property(nonatomic) _Bool needShakeDetector; // @synthesize needShakeDetector=_needShakeDetector;
@property(retain, nonatomic) UIImage *blurImage; // @synthesize blurImage=m_blurImage;
@property(readonly, nonatomic) _Bool preventCamera; // @synthesize preventCamera=m_preventCamera;
- (void).cxx_destruct;
- (void)setShouldSaveMediaToLibrary:(_Bool)arg1 withMediaType:(unsigned long long)arg2;
- (_Bool)shouldSaveMediaToLibraryWithMediaType:(unsigned long long)arg1;
- (void)muteVideoWithPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)calcVideoMd5WithFilePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)exportVideoWithCompressByAsset:(id)arg1 assetURL:(id)arg2 scene:(unsigned long long)arg3 isSlowMotion:(_Bool)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)exportVideoWithAsset:(id)arg1 scene:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)isVideoShouldExportWithoutCompressByAsset:(id)arg1 scene:(unsigned long long)arg2;
- (void)resetExposureISO;
- (void)turnOnExposureHighISO;
- (_Bool)isUsingHighExposureISO;
- (void)setTorchMode:(long long)arg1;
- (long long)torchMode;
- (_Bool)supportTorchMode;
- (void)setFlashlightMode:(long long)arg1;
- (long long)flashMode;
- (_Bool)supportFlashlightMode;
- (struct CGSize)videoSizeWithAsset:(id)arg1;
- (_Bool)canSendVideoWithoutCompressionWithAsset:(id)arg1;
- (unsigned long long)checkIfVideoAllowedToBeSentWithVideoAsset:(id)arg1 videoPath:(id)arg2 pickerScene:(unsigned long long)arg3 isSlowmotion:(_Bool)arg4;
- (float)currentMaxSightDurationForKey:(id)arg1;
- (float)sightCaptureMaxDurationWithScene:(unsigned long long)arg1;
- (_Bool)isTurnOnLegalityCheckForReceivedSight;
- (unsigned long long)legalityTypeOfSight:(id)arg1;
- (id)sightAudioOutputSettings;
- (id)sightVideoOutputSettingsWithVideoSize:(struct CGSize)arg1 bitRate:(double)arg2;
- (void)statDraftUse:(unsigned int)arg1 operation:(unsigned int)arg2;
- (void)statDraftSave:(unsigned int)arg1;
- (void)statPlay:(unsigned int)arg1;
- (void)statOper:(unsigned int)arg1 operation:(unsigned int)arg2 targetCount:(unsigned int)arg3;
- (void)statSent:(unsigned int)arg1 target:(unsigned int)arg2;
- (id)getDraftList;
- (void)removeDraft:(id)arg1;
- (void)addDraft:(id)arg1;
- (void)addSightDraft:(id)arg1;
- (struct CGSize)sightViewSizeWithImgSize:(struct CGSize)arg1;
- (struct CGSize)thumbImageSizeWithMediaItem:(id)arg1;
- (struct CGRect)jumpToMomentTimelineTopAtBackgroundWithMediaItem:(id)arg1;
- (void)resumeMusicPlay;
- (void)moveOutSightWindowWithMomentDraftTips:(_Bool)arg1;
- (void)moveOutSightWindow;
- (void)fadeOutSightWindow;
- (void)closeSightWindowWithMomentDraftTips;
- (void)closeSightWindow;
- (id)getSubImage:(struct CGRect)arg1 inImage:(id)arg2;
- (void)showSightWindowForMomentWithMask:(id)arg1 byViewController:(id)arg2 scene:(int)arg3;
- (void)onSightDraftTipsTouchBegin;
- (void)hideDraftTipsWindow;
- (void)showSightDraftTipsWindow;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFinished:(id)arg2 thumbImg:(id)arg3 ret:(unsigned int)arg4;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFailed:(unsigned int)arg2;
- (void)cancelCompress:(unsigned int)arg1;
- (unsigned int)compressSightVideo:(id)arg1 withVideoSize:(struct CGSize)arg2 andBitrate:(int)arg3;
- (void)turnOffLightBoost;
- (void)turnOnLightBoost;
- (_Bool)isLightBoostOn;
- (void)onRecorderFinished:(unsigned int)arg1 moviePath:(id)arg2 withThumb:(id)arg3;
- (void)onRecorderFailed:(unsigned int)arg1;
- (void)onCameraStop;
- (void)onCameraAudioReady;
- (void)onCameraVideoReady;
- (void)onCameraPreviewReady:(id)arg1;
- (void)onCameraPreviewGap:(id)arg1;
- (void)stopShakeDetector;
- (void)startShakeDector;
- (void)realStartRecording;
- (unsigned int)prepareRecording:(struct CGSize)arg1 bitrate:(double)arg2 atCaptureScene:(unsigned long long)arg3;
- (void)cancelRecording:(unsigned int)arg1;
- (void)stopRecording:(unsigned int)arg1;
- (unsigned int)startRecording:(struct CGSize)arg1 bitrate:(double)arg2 atCaptureScene:(unsigned long long)arg3 orientation:(long long)arg4;
- (void)stopCameraCapture;
- (void)savePreviewBlurImage:(id)arg1;
- (void)detactImageLight:(id)arg1;
- (void)processScreenCapture:(id)arg1;
- (void)savePreviewCapture:(unsigned int)arg1;
- (void)stopSnapShotTimer;
- (void)startSnapShotTimer;
- (void)captureImage:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)takePicturWithCompletion:(CDUnknownBlockType)arg1;
- (void)releasePreviewView:(id)arg1;
- (id)genPreviewView:(struct CGRect)arg1;
- (_Bool)switchCamera;
- (long long)cameraPosition;
- (_Bool)isSupportSwitchCamera;
- (void)setZoomFactor:(double)arg1;
- (double)zoomFactor;
- (_Bool)isSupportZoomWithFactor:(double)arg1;
- (double)maxZoomFactor;
- (void)zoomInCamera;
- (void)zoomCamera;
- (_Bool)isSupportZoom;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)startQRCodeScanner;
- (_Bool)pauseCamera;
- (void)startCameraAudio;
- (void)activateAudioSession;
- (void)startCamera:(_Bool)arg1 withAudio:(_Bool)arg2;
- (void)startCamera:(_Bool)arg1;
- (void)startCamera;
- (_Bool)isCameraOn;
- (void)onPictureRetake;
- (void)onBecomeActive;
- (void)onResignActive;
- (double)getCameraHeight;
- (_Bool)isAuthStatusOK;
- (_Bool)checkRequestAuthAccess;
- (_Bool)needCheckRequestAuthAccess;
- (_Bool)isDeviceSupportForSightCamera;
- (_Bool)isSupportSight;
- (void)dealloc;
- (id)init;
- (void)endSessionWithID:(id)arg1;
- (void)beginSessionWithID:(id)arg1;
- (id)activeSessionID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

