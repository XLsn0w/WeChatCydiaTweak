//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BaseSessionInfo-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class CBaseContact, CMessageWrap, NSString, PBCMessageWrap;

@interface MMBaseSessionInfo : NSObject <WCTTableCoding, BaseSessionInfo>
{
    NSString *sessionId;
    unsigned int unreadCount;
    unsigned int lastMsgUpdateTime;
    NSString *draftMsg;
    unsigned int draftMsgTime;
    unsigned int sessionFlag;
    PBCMessageWrap *pbLastMessage;
    unsigned int outUnreadCount;
    unsigned int outUnreadMsgTime;
    unsigned int jumpMsgLocalId;
    CBaseContact *contact;
    CMessageWrap *lastMessage;
    unsigned int sessionTopTime;
    unsigned int sessionUnTopTime;
    NSString *_atUserList;
}

+ (id)baseSessionInfoWithUsrName:(id)arg1 contact:(id)arg2 lastMessage:(id)arg3 unreadCount:(unsigned int)arg4;
+ (id)baseSessionInfoWithUsrName:(id)arg1 contact:(id)arg2 lastMessage:(id)arg3;
+ (id)baseSessionInfoWithUsrName:(id)arg1;
+ (const struct WCTProperty *)jumpMsgLocalId;
+ (const struct WCTProperty *)outUnreadMsgTime;
+ (const struct WCTProperty *)sessionUnTopTime;
+ (const struct WCTProperty *)pbLastMessage;
+ (const struct WCTProperty *)sessionTopTime;
+ (const struct WCTProperty *)outUnreadCount;
+ (const struct WCTProperty *)sessionFlag;
+ (const struct WCTProperty *)draftMsgTime;
+ (const struct WCTProperty *)draftMsg;
+ (const struct WCTProperty *)lastMsgUpdateTime;
+ (const struct WCTProperty *)unreadCount;
+ (const struct WCTProperty *)sessionId;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *atUserList; // @synthesize atUserList=_atUserList;
@property(nonatomic) unsigned int jumpMsgLocalId; // @synthesize jumpMsgLocalId;
@property(nonatomic) unsigned int outUnreadMsgTime; // @synthesize outUnreadMsgTime;
@property(nonatomic) unsigned int sessionUnTopTime; // @synthesize sessionUnTopTime;
@property(retain, nonatomic) PBCMessageWrap *pbLastMessage; // @synthesize pbLastMessage;
@property(nonatomic) unsigned int sessionTopTime; // @synthesize sessionTopTime;
@property(nonatomic) unsigned int outUnreadCount; // @synthesize outUnreadCount;
@property(nonatomic) unsigned int sessionFlag; // @synthesize sessionFlag;
@property(nonatomic) unsigned int draftMsgTime; // @synthesize draftMsgTime;
@property(retain, nonatomic) NSString *draftMsg; // @synthesize draftMsg;
@property(nonatomic) unsigned int lastMsgUpdateTime; // @synthesize lastMsgUpdateTime;
@property(nonatomic) unsigned int unreadCount; // @synthesize unreadCount;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId;
- (void).cxx_destruct;
- (_Bool)isEqualToSessionInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (void)updateContact;
- (void)updateLastMessage;
- (void)updateUnreadCount;
- (void)updateDraftAndTime:(id)arg1 Time:(unsigned int)arg2;
- (void)updateSessionInfo;
- (void)copyFieldFromSessionInfo:(id)arg1;
@property(retain, nonatomic) CMessageWrap *lastMessage; // @synthesize lastMessage;
- (id)genLastMessage;
- (void)setContact:(id)arg1;
@property(readonly, nonatomic) CBaseContact *contact; // @synthesize contact;
- (id)genContact;
@property(nonatomic) _Bool showRedDotOuter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

