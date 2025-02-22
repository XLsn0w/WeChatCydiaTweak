//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTipsViewControllerDelegate-Protocol.h"
#import "WAAppDetailInfoManagerExtension-Protocol.h"

@class CContact, MMTableViewInfo, NSArray, NSString, UIView;
@protocol WAAppAuthorizationDelegate;

@interface WAAppAuthorizationViewController : MMUIViewController <WAAppDetailInfoManagerExtension, MMTipsViewControllerDelegate>
{
    NSString *m_appid;
    NSArray *m_authorationList;
    _Bool m_isAuthInfoChanged;
    int m_receiveMsgSwitchOriginalStatus;
    int m_receiveMsgSwitchLastStatus;
    UIView *m_emptyView;
    MMTableViewInfo *m_tableViewInfo;
    CContact *_contact;
    id <WAAppAuthorizationDelegate> _delegate;
}

@property(nonatomic) __weak id <WAAppAuthorizationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)setReceiveMsgOriginalStatus;
- (void)onGetAppAuthInfoList:(id)arg1 appid:(id)arg2 errorCode:(int)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)setReceiveMsgLastStatusIfNeed:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onAuthInfoChangeed:(id)arg1;
- (void)requestAuthorazitionInfo;
- (void)initEmptyView;
- (id)makeHeaderView;
- (void)reloadTableViewInfo;
- (void)initTableViewInfo;
- (void)onReturn;
- (void)initCustomNavigationBar;
- (void)viewDidBePoped:(_Bool)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithContact:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

