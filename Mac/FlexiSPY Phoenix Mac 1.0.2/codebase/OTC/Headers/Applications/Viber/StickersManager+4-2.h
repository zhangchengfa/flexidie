/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class NSMutableDictionary; //, NSObject<OS_dispatch_queue>;

//@interface StickersManager : NSObject
//{
//    NSObject<OS_dispatch_queue> *extractionQueue;
//    NSMutableDictionary *attemptsForFailedPackages;
//    BOOL isImportingEmbeddedStickers;
//    BOOL _installPackageProcessInProgress;
//    BOOL _queueOperationsCancelled;
//    NSMutableDictionary *stickerDataCache;
//    float stickerPackageDownloadProgress;
//}
@interface StickersManager (Viber4_2)
+ (void)finalizeDownloadedStickerWithID:(id)arg1 sourcePath:(id)arg2 moveIt:(BOOL)arg3;
+ (BOOL)extractStickersPackage:(id)arg1 isEmbedded:(BOOL)arg2;
+ (id)stickerIDFromFileName:(id)arg1;
+ (id)stickerPackageIconPath:(id)arg1;
+ (id)stickersPackageTempDir:(id)arg1;
+ (id)stickersPackagePath:(id)arg1;
+ (id)singleStickerUrlWithID:(id)arg1;
+ (id)stickersPackageUrl:(id)arg1;
+ (id)packageIconResolutionQualifier;
+ (id)resolutionQualifier;
+ (id)pathForStickerOutlineWithStickerPath:(id)arg1;
+ (id)pathForStickerOutlineWithID:(id)arg1;
+ (id)pathForStickerWithID:(id)arg1;
+ (id)stickerDir:(id)arg1;
+ (id)packageDir:(id)arg1;
+ (id)stickersDir;
+ (id)tempPathForSingleStickerWithID:(id)arg1;
+ (id)packageFileNameWithID:(id)arg1;
+ (id)packageNameWithID:(id)arg1;
+ (id)packageIDForName:(id)arg1;
+ (id)packageIDForSticker:(id)arg1;
+ (id)iconURLForPackageWithID:(id)arg1;
+ (id)fileNameForIconWithPackageID:(id)arg1;
+ (id)iconNameForPackageWithID:(id)arg1;
+ (id)fileNameForOutlineWithID:(id)arg1;
+ (id)fileNameForStickerWithID:(id)arg1;
+ (id)nameForOutlineWithID:(id)arg1;
+ (id)nameForStickerWithID:(id)arg1;
+ (id)stickersMarketURLPageForStickerPackage:(id)arg1;
+ (void)moveDefaultPackageToLowRes;
+ (id)stickersMarketURL;
+ (void)createStickersDir;
+ (id)sharedStickersManager;
@property BOOL queueOperationsCancelled; // @synthesize queueOperationsCancelled=_queueOperationsCancelled;
@property(readonly, nonatomic) BOOL installPackageProcessInProgress; // @synthesize installPackageProcessInProgress=_installPackageProcessInProgress;
@property(nonatomic) float stickerPackageDownloadProgress; // @synthesize stickerPackageDownloadProgress;
@property(retain, nonatomic) NSMutableDictionary *stickerDataCache; // @synthesize stickerDataCache;
//- (void).cxx_destruct;
- (void)resetFS;
- (void)cleanupDownloadedStickers:(BOOL)arg1;
- (id)iconForPackageWithID:(id)arg1;
- (BOOL)isStickerAvailable:(id)arg1;
- (id)stickerDataForID:(id)arg1;
- (id)stickerDataForSticker:(id)arg1;
- (void)downloadStickerWithID:(id)arg1;
- (void)continueOldStyleDownloadsAsTransfers;
- (void)resetStickersDatabaseIfNeeded;
- (void)checkStickersResolution;
- (void)updatePendingDownloadsStatus;
- (void)packageInstallationFailed:(id)arg1 externalRetryBlock:(id)arg2;
- (void)packageInstallationCompletedSuccessfully:(id)arg1;
- (void)resumePackageInstallation;
- (void)setStatus:(unsigned int)arg1 forPackage:(id)arg2;
- (void)downloadIcon:(id)arg1 completion:(id)arg2;
- (void)startPackageDownload:(id)arg1;
- (void)startPromotionPackageIconDownload:(id)arg1;
- (void)syncPromotionPackages:(id)arg1;
- (BOOL)downloadPackage:(id)arg1;
- (void)onIconDownloaded:(id)arg1 completion:(id)arg2;
- (void)extractPackage:(id)arg1 queue:(id)arg2 isEmbedded:(BOOL)arg3;
- (void)extractPackage:(id)arg1 isEmbedded:(BOOL)arg2;
- (void)extractDefaultPackage;
- (void)finalizePackage:(id)arg1;
- (void)subscribeToStickerPackageDownload:(id)arg1;
- (void)subscribeToStickerPackageIconDownload:(id)arg1;
- (void)subscribeToStickerDownload:(id)arg1;
- (void)deactivate;
- (void)dealloc;
- (void)start;
- (id)init;
- (void)fixDefaultPackageDate;
- (void)installPromotionPackages;
- (void)importEmbededPackagesIfNeeded;
- (void)clearDBMetadata;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

