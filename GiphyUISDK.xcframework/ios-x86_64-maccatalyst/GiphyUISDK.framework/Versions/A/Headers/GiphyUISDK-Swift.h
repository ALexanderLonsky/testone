// Generated by Apple Swift version 5.3 (swiftlang-1200.0.29.2 clang-1200.0.30.1)
#ifndef GIPHYUISDK_SWIFT_H
#define GIPHYUISDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import GiphyCoreSDK;
@import ObjectiveC;
@import UIKit;
#endif

#import <GiphyUISDK/GiphyUISDK.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="GiphyUISDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSCoder;

SWIFT_CLASS("_TtC10GiphyUISDK18GPHAttributionView")
@interface GPHAttributionView : UIButton
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC10GiphyUISDK10GPHContent")
@interface GPHContent : NSObject
@property (nonatomic, readonly, strong) GPHContent * _Nonnull contentCopy;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) GPHContent * _Nonnull trendingGifs;)
+ (GPHContent * _Nonnull)trendingGifs SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) GPHContent * _Nonnull trendingStickers;)
+ (GPHContent * _Nonnull)trendingStickers SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) GPHContent * _Nonnull trendingText;)
+ (GPHContent * _Nonnull)trendingText SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) GPHContent * _Nonnull emoji;)
+ (GPHContent * _Nonnull)emoji SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) GPHContent * _Nonnull recents;)
+ (GPHContent * _Nonnull)recents SWIFT_WARN_UNUSED_RESULT;
+ (GPHContent * _Nonnull)searchWithQuery:(NSString * _Nonnull)queryString mediaType:(enum GPHMediaType)mediaType language:(enum GPHLanguageType)language SWIFT_WARN_UNUSED_RESULT;
+ (GPHContent * _Nonnull)trendingWithMediaType:(enum GPHMediaType)mediaType SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, GPHContentType, open) {
  GPHContentTypeRecents = 0,
  GPHContentTypeGifs = 1,
  GPHContentTypeStickers = 2,
  GPHContentTypeText = 3,
  GPHContentTypeEmoji = 4,
};

typedef SWIFT_ENUM(NSInteger, GPHFileExtension, open) {
  GPHFileExtensionMp4 = 0,
  GPHFileExtensionGif = 1,
  GPHFileExtensionWebp = 2,
};

typedef SWIFT_ENUM(NSInteger, GPHGifButtonColor, open) {
  GPHGifButtonColorPink = 0,
  GPHGifButtonColorBlue = 1,
  GPHGifButtonColorBlack = 2,
  GPHGifButtonColorWhite = 3,
};

@class GPHMedia;
@class UICollectionViewCell;

SWIFT_PROTOCOL("_TtP10GiphyUISDK15GPHGridDelegate_")
@protocol GPHGridDelegate
- (void)contentDidUpdateWithResultCount:(NSInteger)resultCount;
- (void)didSelectMediaWithMedia:(GPHMedia * _Nonnull)media cell:(UICollectionViewCell * _Nonnull)cell;
@optional
- (void)didScrollWithOffset:(CGFloat)offset;
@end


SWIFT_CLASS("_TtC10GiphyUISDK8GPHIcons")
@interface GPHIcons : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



@interface GPHMedia (SWIFT_EXTENSION(GiphyUISDK))
- (GPHMedia * _Nonnull)nonAdVersion SWIFT_WARN_UNUSED_RESULT;
@end


@interface GPHMedia (SWIFT_EXTENSION(GiphyUISDK))
- (NSString * _Nullable)urlWithRendition:(enum GPHRenditionType)rendition fileType:(enum GPHFileExtension)fileType SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) CGFloat aspectRatio;
@end


SWIFT_CLASS("_TtC10GiphyUISDK12GPHMediaCell")
@interface GPHMediaCell : UICollectionViewCell
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL _Nonnull)action withSender:(id _Nullable)sender SWIFT_WARN_UNUSED_RESULT;
- (void)prepareForReuse;
@end

@protocol GPHMediaViewDelegate;
@class UIImage;

SWIFT_CLASS("_TtC10GiphyUISDK12GPHMediaView")
@interface GPHMediaView : GiphyYYAnimatedImageView
@property (nonatomic, weak) id <GPHMediaViewDelegate> _Nullable delegate;
@property (nonatomic, strong) GPHMedia * _Nullable media;
- (nonnull instancetype)init;
- (void)loadAssetAt:(NSString * _Nonnull)url queueOriginalRendition:(BOOL)queueOriginalRendition;
- (void)cancelLoading;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL _Nonnull)action withSender:(id _Nullable)sender SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image highlightedImage:(UIImage * _Nullable)highlightedImage OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(maccatalyst,introduced=13.0) SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


@interface GPHMediaView (SWIFT_EXTENSION(GiphyUISDK))
- (void)setMedia:(GPHMedia * _Nonnull)media rendition:(enum GPHRenditionType)rendition shouldQueueOriginalRendition:(BOOL)shouldQueueOriginalRendition;
@end


SWIFT_PROTOCOL("_TtP10GiphyUISDK20GPHMediaViewDelegate_")
@protocol GPHMediaViewDelegate
- (void)didPressMoreByUser:(NSString * _Nonnull)user;
@end


SWIFT_CLASS("_TtC10GiphyUISDK12GPHNoResults")
@interface GPHNoResults : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC10GiphyUISDK12GPHSearchBar")
@interface GPHSearchBar : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITextField;

@interface GPHSearchBar (SWIFT_EXTENSION(GiphyUISDK)) <UITextFieldDelegate>
- (BOOL)textFieldShouldEndEditing:(UITextField * _Nonnull)textField SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM(NSInteger, GPHStickerColumnCount, open) {
  GPHStickerColumnCountTwo = 0,
  GPHStickerColumnCountThree = 1,
  GPHStickerColumnCountFour = 2,
};


SWIFT_CLASS("_TtC10GiphyUISDK9GPHTabBar")
@interface GPHTabBar : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
@end

@class UIResponder;

SWIFT_CLASS("_TtC10GiphyUISDK12GPHTextField")
@interface GPHTextField : UITextField
@property (nonatomic, readonly, strong) UIResponder * _Nullable nextResponder;
- (BOOL)canPerformAction:(SEL _Nonnull)action withSender:(id _Nullable)sender SWIFT_WARN_UNUSED_RESULT;
- (CGRect)textRectForBounds:(CGRect)bounds SWIFT_WARN_UNUSED_RESULT;
- (CGRect)editingRectForBounds:(CGRect)bounds SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

enum GPHThemeType : NSInteger;
@class UIColor;
@class UIFont;

SWIFT_CLASS("_TtC10GiphyUISDK8GPHTheme")
@interface GPHTheme : NSObject
- (nonnull instancetype)initWithType:(enum GPHThemeType)type;
@property (nonatomic) enum GPHThemeType type;
@property (nonatomic, readonly, strong) UIColor * _Nonnull searchBarActiveBackgroundColor;
@property (nonatomic, readonly, strong) UIColor * _Nonnull searchBarBackgroundColor;
@property (nonatomic, readonly, strong) UIColor * _Nonnull suggestionCellBackgroundColor;
@property (nonatomic, readonly, strong) UIColor * _Nonnull suggestionCellTextColor;
@property (nonatomic, readonly, strong) UIColor * _Nonnull placeholderTextColor;
@property (nonatomic, readonly, strong) UIColor * _Nonnull textFieldTextColor;
@property (nonatomic, readonly, strong) UIColor * _Nonnull selectButtonColor;
@property (nonatomic, readonly, strong) UIColor * _Nonnull selectButtonTextColor;
@property (nonatomic, readonly) CGFloat searchBarPadding;
@property (nonatomic, readonly) CGFloat searchBarCornerRadius;
@property (nonatomic, readonly) CGFloat cellCornerRadius;
@property (nonatomic, readonly, strong) UIFont * _Nullable textFieldFont;
@property (nonatomic, readonly, strong) UIColor * _Nonnull backgroundColorForLoadingCells;
@property (nonatomic, readonly) BOOL showSuggestionsBar;
@property (nonatomic, readonly, strong) UIImage * _Nullable buttonIcon;
@property (nonatomic, readonly, strong) UIColor * _Nonnull searchButtonColor;
@property (nonatomic, readonly) UIKeyboardAppearance keyboardAppearance;
@property (nonatomic, readonly, strong) UIColor * _Nonnull placeholderColor;
@property (nonatomic, readonly, strong) UIColor * _Nonnull backgroundColor;
@property (nonatomic, readonly, strong) UIColor * _Nonnull textColor;
@property (nonatomic, readonly, strong) UIColor * _Nonnull handleBarColor;
@property (nonatomic, readonly, strong) UIColor * _Nonnull gridDimColor;
@property (nonatomic, readonly, strong) UIColor * _Nonnull tabBarSwitchSelectedColor;
@property (nonatomic, readonly) CGFloat tabBarBackgroundAlpha;
@property (nonatomic, readonly, strong) UIColor * _Nonnull stickerBackgroundColor;
@property (nonatomic, readonly) BOOL fixedSizeCells;
@property (nonatomic, readonly) UIBlurEffectStyle blurStyle;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, GPHThemeType, open) {
  GPHThemeTypeDark = 0,
  GPHThemeTypeLight = 1,
  GPHThemeTypeLightBlur = 2,
  GPHThemeTypeDarkBlur = 3,
  GPHThemeTypeAutomatic = 4,
};


SWIFT_CLASS("_TtC10GiphyUISDK28GPHWaterfallLayoutAttributes")
@interface GPHWaterfallLayoutAttributes : UICollectionViewLayoutAttributes
- (id _Nonnull)copyWithZone:(struct _NSZone * _Nullable)zone SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UICollectionView;

SWIFT_PROTOCOL("_TtP10GiphyUISDK26GPHWaterfallLayoutDelegate_")
@protocol GPHWaterfallLayoutDelegate
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView sizeForSectionItem:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)numberOfColumnsForItemAt:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewScrollDirection)scrollDirection SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC10GiphyUISDK5Giphy")
@interface Giphy : NSObject
+ (void)configureWithApiKey:(NSString * _Nonnull)apiKey verificationMode:(BOOL)verificationMode;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class GiphyViewController;

SWIFT_PROTOCOL("_TtP10GiphyUISDK13GiphyDelegate_")
@protocol GiphyDelegate
@optional
- (void)didSearchFor:(NSString * _Nonnull)term;
@required
- (void)didSelectMediaWithGiphyViewController:(GiphyViewController * _Nonnull)giphyViewController media:(GPHMedia * _Nonnull)media;
- (void)didDismissWithController:(GiphyViewController * _Nullable)controller;
@end

@class UIScrollView;
@protocol UIViewControllerTransitionCoordinator;
@class NSBundle;

SWIFT_CLASS("_TtC10GiphyUISDK19GiphyGridController")
@interface GiphyGridController : UIViewController
@property (nonatomic, weak) id <GPHGridDelegate> _Nullable delegate;
@property (nonatomic) UICollectionViewScrollDirection direction;
@property (nonatomic, strong) GPHTheme * _Nonnull theme;
@property (nonatomic) enum GPHRatingType rating;
@property (nonatomic, strong) GPHContent * _Nonnull content;
@property (nonatomic) CGFloat cellPadding;
- (void)setNumberOfTracks:(NSInteger)tracks;
@property (nonatomic) BOOL fixedSizeCells;
@property (nonatomic) enum GPHFileExtension imageType;
- (void)setAPIKey:(NSString * _Nonnull)apiKey verificationMode:(BOOL)verificationMode;
- (nonnull instancetype)init;
@property (nonatomic) BOOL showViewOnGiphy;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewDidLoad;
@property (nonatomic) enum GPHRenditionType renditionType;
- (void)update;
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


@interface GiphyGridController (SWIFT_EXTENSION(GiphyUISDK)) <UICollectionViewDelegate>
- (void)collectionView:(UICollectionView * _Nonnull)collectionView willDisplayCell:(UICollectionViewCell * _Nonnull)cell forItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

@class UICollectionViewLayout;

@interface GiphyGridController (SWIFT_EXTENSION(GiphyUISDK)) <UICollectionViewDelegateFlowLayout>
- (CGFloat)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout minimumInteritemSpacingForSectionAtIndex:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


@interface GiphyGridController (SWIFT_EXTENSION(GiphyUISDK)) <GPHTrackingDelegate>
- (GPHMedia * _Nullable)mediaForIndexPath:(NSIndexPath * _Nonnull)item SWIFT_WARN_UNUSED_RESULT;
- (BOOL)mediaIsLoadedAtIndexPath:(NSIndexPath * _Nonnull)item SWIFT_WARN_UNUSED_RESULT;
@end


@interface GiphyGridController (SWIFT_EXTENSION(GiphyUISDK)) <GPHWaterfallLayoutDelegate>
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView sizeForSectionItem:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)numberOfColumnsForItemAt:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewScrollDirection)scrollDirection SWIFT_WARN_UNUSED_RESULT;
@end


@interface GiphyGridController (SWIFT_EXTENSION(GiphyUISDK)) <UICollectionViewDataSource>
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView * _Nonnull)collectionView SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end



SWIFT_CLASS("_TtC10GiphyUISDK21GiphySearchController")
@interface GiphySearchController : UIViewController
@property (nonatomic) BOOL showViewOnGiphy;
@property (nonatomic) BOOL showConfirmationScreen;
@property (nonatomic) BOOL shouldLocalizeSearch;
@property (nonatomic, strong) GPHTheme * _Nonnull theme;
@property (nonatomic, weak) id <GiphyDelegate> _Nullable delegate;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end





@interface GiphySearchController (SWIFT_EXTENSION(GiphyUISDK))
- (void)didTapUsername:(NSString * _Nonnull)username;
- (void)didLongPressCell:(GPHMediaCell * _Nullable)cell;
@end


@interface GiphySearchController (SWIFT_EXTENSION(GiphyUISDK))
- (void)selectedContentTypeDidChange:(enum GPHContentType)contentType;
@end



@interface GiphySearchController (SWIFT_EXTENSION(GiphyUISDK))
- (void)searchBarFocusDidChange:(GPHSearchBar * _Nonnull)searchBarView focused:(BOOL)focused text:(NSString * _Nonnull)text;
- (void)searchBarTextDidChange:(GPHSearchBar * _Nonnull)searchBarView query:(NSString * _Nonnull)query;
@end


@interface GiphySearchController (SWIFT_EXTENSION(GiphyUISDK)) <GPHGridDelegate>
- (void)contentDidUpdateWithResultCount:(NSInteger)resultCount;
- (void)didScrollWithOffset:(CGFloat)offset;
- (void)didSelectMediaWithMedia:(GPHMedia * _Nonnull)media cell:(UICollectionViewCell * _Nonnull)cell;
@end



SWIFT_CLASS("_TtC10GiphyUISDK19GiphyViewController")
@interface GiphyViewController : UIViewController
- (void)setAPIKey:(NSString * _Nonnull)apiKey verificationMode:(BOOL)verificationMode;
- (nonnull instancetype)init;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, weak) id <GiphyDelegate> _Nullable delegate;
@property (nonatomic, copy) NSString * _Nullable showMoreByUser;
@property (nonatomic) enum GPHStickerColumnCount stickerColumnCount;
/// Option to open or not the gif on th GIPHY app.
@property (nonatomic) BOOL showViewOnGiphy;
/// Option to show a secondary confirmation screen when the user taps a GIF, which shows a larger rendition of the asset.
/// This confirmation screen is only available for <code>.waterfall</code> mode - this property will be ignored if the <code>layout</code> is <code>.carousel</code>.
@property (nonatomic) BOOL showConfirmationScreen;
/// Option to choose whether or not to localize the search results based on phone settings. Default <code>en</code>.
@property (nonatomic) BOOL shouldLocalizeSearch;
/// Set the theme to be <code>.dark</code> or <code>.light</code>.
@property (nonatomic, strong) GPHTheme * _Nonnull theme;
- (void)setMediaConfigWithTypes:(NSArray<NSNumber *> * _Nonnull)types;
/// Set a specific content rating for the search results.
@property (nonatomic) enum GPHRatingType rating;
/// Set whether or not to dim the background when the tray is open in <code>waterfall</code> layout.
@property (nonatomic) BOOL dimBackground;
/// Set the rendition type. See <a href="https://developers.giphy.com/docs/#rendition-guide">Rendition Guide</a>
@property (nonatomic) enum GPHRenditionType renditionType;
- (void)viewDidLoad;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@end


@protocol UIViewControllerAnimatedTransitioning;

@interface GiphyViewController (SWIFT_EXTENSION(GiphyUISDK)) <UIViewControllerTransitioningDelegate>
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForDismissedController:(UIViewController * _Nonnull)dismissed SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForPresentedController:(UIViewController * _Nonnull)presented presentingController:(UIViewController * _Nonnull)presenting sourceController:(UIViewController * _Nonnull)source SWIFT_WARN_UNUSED_RESULT;
@end

@protocol UIViewControllerContextTransitioning;

@interface GiphyViewController (SWIFT_EXTENSION(GiphyUISDK)) <UIViewControllerAnimatedTransitioning>
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> _Nullable)transitionContext SWIFT_WARN_UNUSED_RESULT;
- (void)animateTransition:(id <UIViewControllerContextTransitioning> _Nonnull)transitionContext;
@end


@interface GiphyViewController (SWIFT_EXTENSION(GiphyUISDK))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) CGFloat trayHeightMultiplier;)
+ (CGFloat)trayHeightMultiplier SWIFT_WARN_UNUSED_RESULT;
+ (void)setTrayHeightMultiplier:(CGFloat)value;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
@end




#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
