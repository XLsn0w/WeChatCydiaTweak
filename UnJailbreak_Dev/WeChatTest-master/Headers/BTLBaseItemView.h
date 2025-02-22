//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class BTLBaseItemViewModel, CALayer, MMWebImageView, RichTextView;
@protocol BTLBaseItemViewDelegate;

@interface BTLBaseItemView : UIButton
{
    RichTextView *m_titleLabel;
    MMWebImageView *m_coverImageView;
    CALayer *m_itemHighlightLayer;
    CALayer *m_separateLayer;
    BTLBaseItemViewModel *m_viewModel;
    _Bool m_bIsForceHighlight;
    _Bool _needSeparateLine;
    unsigned int _itemIndex;
    id <BTLBaseItemViewDelegate> _delegate;
}

@property(nonatomic) _Bool needSeparateLine; // @synthesize needSeparateLine=_needSeparateLine;
@property(nonatomic) __weak id <BTLBaseItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int itemIndex; // @synthesize itemIndex=_itemIndex;
- (void).cxx_destruct;
- (void)handleLongPressEx:(id)arg1;
- (void)onTouchDown;
- (void)onClick;
- (void)layoutSubviewsNormal;
- (void)initTitleLabel;
- (void)initCoverView;
- (void)initSeparateLayer;
- (void)initNormalReaderItem;
- (void)forceSetHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)initItemHighlightLayer;
@property(readonly, nonatomic) BTLBaseItemViewModel *viewModel; // @dynamic viewModel;
- (void)setViewModel:(id)arg1;
- (void)initLongPressGesture;
- (id)initWithViewModel:(id)arg1;

@end

