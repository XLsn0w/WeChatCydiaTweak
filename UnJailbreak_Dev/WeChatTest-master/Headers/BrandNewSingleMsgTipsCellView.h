//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMHeadImageView, UIButton;
@protocol BrandNewSingleMsgTipsCellViewDelegate;

@interface BrandNewSingleMsgTipsCellView : MMTableViewCell
{
    id <BrandNewSingleMsgTipsCellViewDelegate> _delegate;
    UIButton *_messageTipsVew;
    MMHeadImageView *_headerView;
}

@property(retain, nonatomic) MMHeadImageView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIButton *messageTipsVew; // @synthesize messageTipsVew=_messageTipsVew;
@property(nonatomic) __weak id <BrandNewSingleMsgTipsCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onClick;
- (void)layoutSubviews;
- (void)updateWithLastUnreadMessage:(id)arg1 unreadCount:(unsigned int)arg2;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

