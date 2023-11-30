#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class XPKMPKmpResponseResultCompanion, XPKMPKmpResponseResult<__covariant T, __covariant E>, XPKMPKmpResponseResultError<E>, XPKMPKotlinNothing, XPKMPKmpResponseResultSuccess<T>, XPKMPCVPData, XPKMPCVPTermsConditionsData, XPKMPKotlinEnumCompanion, XPKMPKotlinEnum<E>, XPKMPExceptionType, XPKMPKotlinArray<T>, XPKMPKotlinThrowable, NSError, XPKMPCVPAction, XPKMPCVPHeader, XPKMPCVPCardThemeItem, XPKMPCVPListingSection, XPKMPCVPOrderedSection, XPKMPCVPFAQSection, XPKMPCVPFooter, XPKMPGeneralKMPError, XPKMPCVPContentResult, XPKMPCVPTermConditionItem, XPKMPCVPFAQSectionItem, XPKMPCVPTermConditionItemHyperData, XPKMPCVPOrderedSectionItem, XPKMPCVPListingSectionItem, XPKMPKotlinException, XPKMPKotlinRuntimeException, XPKMPKotlinIllegalStateException;

@protocol XPKMPKotlinComparable, XPKMPKotlinCoroutineContext, XPKMPKotlinx_coroutines_coreCoroutineScope, XPKMPCVPContentRepository, XPKMPKotlinIterator, XPKMPKotlinCoroutineContextElement, XPKMPKotlinCoroutineContextKey;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface XPKMPBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface XPKMPBase (XPKMPBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface XPKMPMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface XPKMPMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorXPKMPKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface XPKMPNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface XPKMPByte : XPKMPNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface XPKMPUByte : XPKMPNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface XPKMPShort : XPKMPNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface XPKMPUShort : XPKMPNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface XPKMPInt : XPKMPNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface XPKMPUInt : XPKMPNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface XPKMPLong : XPKMPNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface XPKMPULong : XPKMPNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface XPKMPFloat : XPKMPNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface XPKMPDouble : XPKMPNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface XPKMPBoolean : XPKMPNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("KmpResponseResult")))
@interface XPKMPKmpResponseResult<__covariant T, __covariant E> : XPKMPBase
@property (class, readonly, getter=companion) XPKMPKmpResponseResultCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) E _Nullable errorOrNil __attribute__((swift_name("errorOrNil")));
@property (readonly) BOOL isFailure __attribute__((swift_name("isFailure")));
@property (readonly) T _Nullable resultOrNil __attribute__((swift_name("resultOrNil")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpResponseResultCompanion")))
@interface XPKMPKmpResponseResultCompanion : XPKMPBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XPKMPKmpResponseResultCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpResponseResultError")))
@interface XPKMPKmpResponseResultError<E> : XPKMPKmpResponseResult<XPKMPKotlinNothing *, E>
- (instancetype)initWithError:(E _Nullable)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (XPKMPKmpResponseResultError<E> *)doCopyError:(E _Nullable)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) E _Nullable error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpResponseResultSuccess")))
@interface XPKMPKmpResponseResultSuccess<T> : XPKMPKmpResponseResult<T, XPKMPKotlinNothing *>
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (XPKMPKmpResponseResultSuccess<T> *)doCopyValue:(T _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("CVPContentRepository")))
@protocol XPKMPCVPContentRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)retrieveCVPContentCheckCancellation:(XPKMPBoolean *(^)(void))checkCancellation completionHandler:(void (^)(XPKMPCVPData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("retrieveCVPContent(checkCancellation:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)retrieveTermsAndConditionContentCheckCancellation:(XPKMPBoolean *(^)(void))checkCancellation completionHandler:(void (^)(XPKMPCVPTermsConditionsData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("retrieveTermsAndConditionContent(checkCancellation:completionHandler:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol XPKMPKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface XPKMPKotlinEnum<E> : XPKMPBase <XPKMPKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) XPKMPKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExceptionType")))
@interface XPKMPExceptionType : XPKMPKotlinEnum<XPKMPExceptionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) XPKMPExceptionType *general __attribute__((swift_name("general")));
@property (class, readonly) XPKMPExceptionType *cardApplicationNotAllowed __attribute__((swift_name("cardApplicationNotAllowed")));
@property (class, readonly) XPKMPExceptionType *notDefined __attribute__((swift_name("notDefined")));
+ (XPKMPKotlinArray<XPKMPExceptionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<XPKMPExceptionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface XPKMPKotlinThrowable : XPKMPBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(XPKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(XPKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (XPKMPKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) XPKMPKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeneralKMPError")))
@interface XPKMPGeneralKMPError : XPKMPKotlinThrowable
- (instancetype)initWithExceptionType:(XPKMPExceptionType *)exceptionType error:(NSError *)error __attribute__((swift_name("init(exceptionType:error:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(XPKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(XPKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSError *error __attribute__((swift_name("error")));
@property (readonly) XPKMPExceptionType *exceptionType __attribute__((swift_name("exceptionType")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol XPKMPKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<XPKMPKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("iOSScope")))
@interface XPKMPiOSScope : XPKMPBase <XPKMPKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)cancel __attribute__((swift_name("cancel()")));
@property (readonly) id<XPKMPKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CVPAction")))
@interface XPKMPCVPAction : XPKMPBase
- (instancetype)initWithTitle:(NSString *)title link:(NSString *)link __attribute__((swift_name("init(title:link:)"))) __attribute__((objc_designated_initializer));
- (XPKMPCVPAction *)doCopyTitle:(NSString *)title link:(NSString *)link __attribute__((swift_name("doCopy(title:link:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *link __attribute__((swift_name("link")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CVPData")))
@interface XPKMPCVPData : XPKMPBase
- (instancetype)initWithTitle:(NSString *)title header:(XPKMPCVPHeader *)header cardThemes:(NSArray<XPKMPCVPCardThemeItem *> *)cardThemes listingSections:(NSArray<XPKMPCVPListingSection *> *)listingSections orderedSections:(NSArray<XPKMPCVPOrderedSection *> *)orderedSections faqSection:(XPKMPCVPFAQSection * _Nullable)faqSection footer:(XPKMPCVPFooter *)footer __attribute__((swift_name("init(title:header:cardThemes:listingSections:orderedSections:faqSection:footer:)"))) __attribute__((objc_designated_initializer));
- (XPKMPCVPData *)doCopyTitle:(NSString *)title header:(XPKMPCVPHeader *)header cardThemes:(NSArray<XPKMPCVPCardThemeItem *> *)cardThemes listingSections:(NSArray<XPKMPCVPListingSection *> *)listingSections orderedSections:(NSArray<XPKMPCVPOrderedSection *> *)orderedSections faqSection:(XPKMPCVPFAQSection * _Nullable)faqSection footer:(XPKMPCVPFooter *)footer __attribute__((swift_name("doCopy(title:header:cardThemes:listingSections:orderedSections:faqSection:footer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<XPKMPCVPCardThemeItem *> *cardThemes __attribute__((swift_name("cardThemes")));
@property (readonly) XPKMPCVPFAQSection * _Nullable faqSection __attribute__((swift_name("faqSection")));
@property (readonly) XPKMPCVPFooter *footer __attribute__((swift_name("footer")));
@property (readonly) XPKMPCVPHeader *header __attribute__((swift_name("header")));
@property (readonly) NSArray<XPKMPCVPListingSection *> *listingSections __attribute__((swift_name("listingSections")));
@property (readonly) NSArray<XPKMPCVPOrderedSection *> *orderedSections __attribute__((swift_name("orderedSections")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CVPContentResult")))
@interface XPKMPCVPContentResult : XPKMPBase
- (instancetype)initWithMainContent:(XPKMPKmpResponseResult<XPKMPCVPData *, XPKMPGeneralKMPError *> *)mainContent termsAndConditionsContent:(XPKMPKmpResponseResult<XPKMPCVPTermsConditionsData *, XPKMPGeneralKMPError *> *)termsAndConditionsContent __attribute__((swift_name("init(mainContent:termsAndConditionsContent:)"))) __attribute__((objc_designated_initializer));
- (XPKMPCVPContentResult *)doCopyMainContent:(XPKMPKmpResponseResult<XPKMPCVPData *, XPKMPGeneralKMPError *> *)mainContent termsAndConditionsContent:(XPKMPKmpResponseResult<XPKMPCVPTermsConditionsData *, XPKMPGeneralKMPError *> *)termsAndConditionsContent __attribute__((swift_name("doCopy(mainContent:termsAndConditionsContent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) XPKMPKmpResponseResult<XPKMPCVPData *, XPKMPGeneralKMPError *> *mainContent __attribute__((swift_name("mainContent")));
@property (readonly) XPKMPKmpResponseResult<XPKMPCVPTermsConditionsData *, XPKMPGeneralKMPError *> *termsAndConditionsContent __attribute__((swift_name("termsAndConditionsContent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CVPTermsConditionsData")))
@interface XPKMPCVPTermsConditionsData : XPKMPBase
- (instancetype)initWithTitle:(NSString *)title items:(NSArray<XPKMPCVPTermConditionItem *> *)items consentTitle:(NSString *)consentTitle consentIconUrl:(NSString *)consentIconUrl actionTitle:(NSString *)actionTitle __attribute__((swift_name("init(title:items:consentTitle:consentIconUrl:actionTitle:)"))) __attribute__((objc_designated_initializer));
- (XPKMPCVPTermsConditionsData *)doCopyTitle:(NSString *)title items:(NSArray<XPKMPCVPTermConditionItem *> *)items consentTitle:(NSString *)consentTitle consentIconUrl:(NSString *)consentIconUrl actionTitle:(NSString *)actionTitle __attribute__((swift_name("doCopy(title:items:consentTitle:consentIconUrl:actionTitle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *actionTitle __attribute__((swift_name("actionTitle")));
@property (readonly) NSString *consentIconUrl __attribute__((swift_name("consentIconUrl")));
@property (readonly) NSString *consentTitle __attribute__((swift_name("consentTitle")));
@property (readonly) NSArray<XPKMPCVPTermConditionItem *> *items __attribute__((swift_name("items")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CVPCardThemeItem")))
@interface XPKMPCVPCardThemeItem : XPKMPBase
- (instancetype)initWithImageUrl:(NSString *)imageUrl __attribute__((swift_name("init(imageUrl:)"))) __attribute__((objc_designated_initializer));
- (XPKMPCVPCardThemeItem *)doCopyImageUrl:(NSString *)imageUrl __attribute__((swift_name("doCopy(imageUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CVPFAQSection")))
@interface XPKMPCVPFAQSection : XPKMPBase
- (instancetype)initWithTitle:(NSString *)title items:(NSArray<XPKMPCVPFAQSectionItem *> *)items seeAllAction:(XPKMPCVPAction * _Nullable)seeAllAction type:(NSString *)type __attribute__((swift_name("init(title:items:seeAllAction:type:)"))) __attribute__((objc_designated_initializer));
- (XPKMPCVPFAQSection *)doCopyTitle:(NSString *)title items:(NSArray<XPKMPCVPFAQSectionItem *> *)items seeAllAction:(XPKMPCVPAction * _Nullable)seeAllAction type:(NSString *)type __attribute__((swift_name("doCopy(title:items:seeAllAction:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<XPKMPCVPFAQSectionItem *> *items __attribute__((swift_name("items")));
@property (readonly) XPKMPCVPAction * _Nullable seeAllAction __attribute__((swift_name("seeAllAction")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CVPFAQSectionItem")))
@interface XPKMPCVPFAQSectionItem : XPKMPBase
- (instancetype)initWithTitle:(NSString *)title descriptionText:(NSString *)descriptionText type:(NSString *)type __attribute__((swift_name("init(title:descriptionText:type:)"))) __attribute__((objc_designated_initializer));
- (XPKMPCVPFAQSectionItem *)doCopyTitle:(NSString *)title descriptionText:(NSString *)descriptionText type:(NSString *)type __attribute__((swift_name("doCopy(title:descriptionText:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *descriptionText __attribute__((swift_name("descriptionText")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CVPFooter")))
@interface XPKMPCVPFooter : XPKMPBase
- (instancetype)initWithAction:(XPKMPCVPAction *)action __attribute__((swift_name("init(action:)"))) __attribute__((objc_designated_initializer));
- (XPKMPCVPFooter *)doCopyAction:(XPKMPCVPAction *)action __attribute__((swift_name("doCopy(action:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) XPKMPCVPAction *action __attribute__((swift_name("action")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CVPHeader")))
@interface XPKMPCVPHeader : XPKMPBase
- (instancetype)initWithTitle:(NSString *)title subtitle:(NSString *)subtitle __attribute__((swift_name("init(title:subtitle:)"))) __attribute__((objc_designated_initializer));
- (XPKMPCVPHeader *)doCopyTitle:(NSString *)title subtitle:(NSString *)subtitle __attribute__((swift_name("doCopy(title:subtitle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *subtitle __attribute__((swift_name("subtitle")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CVPTermConditionItemHyperData")))
@interface XPKMPCVPTermConditionItemHyperData : XPKMPBase
- (instancetype)initWithUrl:(NSString *)url text:(NSString *)text key:(NSString *)key __attribute__((swift_name("init(url:text:key:)"))) __attribute__((objc_designated_initializer));
- (XPKMPCVPTermConditionItemHyperData *)doCopyUrl:(NSString *)url text:(NSString *)text key:(NSString *)key __attribute__((swift_name("doCopy(url:text:key:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CVPOrderedSection")))
@interface XPKMPCVPOrderedSection : XPKMPBase
- (instancetype)initWithTitle:(NSString *)title items:(NSArray<XPKMPCVPOrderedSectionItem *> *)items __attribute__((swift_name("init(title:items:)"))) __attribute__((objc_designated_initializer));
- (XPKMPCVPOrderedSection *)doCopyTitle:(NSString *)title items:(NSArray<XPKMPCVPOrderedSectionItem *> *)items __attribute__((swift_name("doCopy(title:items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<XPKMPCVPOrderedSectionItem *> *items __attribute__((swift_name("items")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CVPOrderedSectionItem")))
@interface XPKMPCVPOrderedSectionItem : XPKMPBase
- (instancetype)initWithTitle:(NSString *)title descriptionText:(NSString *)descriptionText hasDivider:(BOOL)hasDivider __attribute__((swift_name("init(title:descriptionText:hasDivider:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *descriptionText __attribute__((swift_name("descriptionText")));
@property (readonly) BOOL hasDivider __attribute__((swift_name("hasDivider")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CVPListingSection")))
@interface XPKMPCVPListingSection : XPKMPBase
- (instancetype)initWithTitle:(NSString *)title items:(NSArray<XPKMPCVPListingSectionItem *> *)items type:(NSString *)type __attribute__((swift_name("init(title:items:type:)"))) __attribute__((objc_designated_initializer));
- (XPKMPCVPListingSection *)doCopyTitle:(NSString *)title items:(NSArray<XPKMPCVPListingSectionItem *> *)items type:(NSString *)type __attribute__((swift_name("doCopy(title:items:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<XPKMPCVPListingSectionItem *> *items __attribute__((swift_name("items")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CVPListingSectionItem")))
@interface XPKMPCVPListingSectionItem : XPKMPBase
- (instancetype)initWithTitle:(NSString *)title descriptionText:(NSString *)descriptionText imageUrl:(NSString *)imageUrl hasDivider:(BOOL)hasDivider type:(NSString *)type iconUrl:(NSString *)iconUrl __attribute__((swift_name("init(title:descriptionText:imageUrl:hasDivider:type:iconUrl:)"))) __attribute__((objc_designated_initializer));
- (XPKMPCVPListingSectionItem *)doCopyTitle:(NSString *)title descriptionText:(NSString *)descriptionText imageUrl:(NSString *)imageUrl hasDivider:(BOOL)hasDivider type:(NSString *)type iconUrl:(NSString *)iconUrl __attribute__((swift_name("doCopy(title:descriptionText:imageUrl:hasDivider:type:iconUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *descriptionText __attribute__((swift_name("descriptionText")));
@property (readonly) BOOL hasDivider __attribute__((swift_name("hasDivider")));
@property (readonly) NSString *iconUrl __attribute__((swift_name("iconUrl")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CVPTermConditionItem")))
@interface XPKMPCVPTermConditionItem : XPKMPBase
- (instancetype)initWithType:(NSString *)type descriptionText:(NSString *)descriptionText hyperData:(XPKMPCVPTermConditionItemHyperData * _Nullable)hyperData __attribute__((swift_name("init(type:descriptionText:hyperData:)"))) __attribute__((objc_designated_initializer));
- (XPKMPCVPTermConditionItem *)doCopyType:(NSString *)type descriptionText:(NSString *)descriptionText hyperData:(XPKMPCVPTermConditionItemHyperData * _Nullable)hyperData __attribute__((swift_name("doCopy(type:descriptionText:hyperData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *descriptionText __attribute__((swift_name("descriptionText")));
@property (readonly) XPKMPCVPTermConditionItemHyperData * _Nullable hyperData __attribute__((swift_name("hyperData")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("CVPContentInteractor")))
@interface XPKMPCVPContentInteractor : XPKMPBase
- (instancetype)initWithRepository:(id<XPKMPCVPContentRepository>)repository scope:(id<XPKMPKotlinx_coroutines_coreCoroutineScope>)scope __attribute__((swift_name("init(repository:scope:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)retrieveCVPContentCheckCancellation:(XPKMPBoolean *(^)(void))checkCancellation completionHandler:(void (^)(XPKMPCVPContentResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("retrieveCVPContent(checkCancellation:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorHandlerKt")))
@interface XPKMPErrorHandlerKt : XPKMPBase

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
+ (BOOL)rethrowThrowable:(XPKMPKotlinThrowable *)throwable error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("rethrow(throwable:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface XPKMPKotlinNothing : XPKMPBase
@end

__attribute__((swift_name("KotlinException")))
@interface XPKMPKotlinException : XPKMPKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(XPKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(XPKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface XPKMPKotlinRuntimeException : XPKMPKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(XPKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(XPKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface XPKMPKotlinIllegalStateException : XPKMPKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(XPKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(XPKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface XPKMPKotlinCancellationException : XPKMPKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(XPKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(XPKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface XPKMPKotlinEnumCompanion : XPKMPBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XPKMPKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface XPKMPKotlinArray<T> : XPKMPBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(XPKMPInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<XPKMPKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol XPKMPKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<XPKMPKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<XPKMPKotlinCoroutineContextElement> _Nullable)getKey:(id<XPKMPKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<XPKMPKotlinCoroutineContext>)minusKeyKey:(id<XPKMPKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<XPKMPKotlinCoroutineContext>)plusContext:(id<XPKMPKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol XPKMPKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol XPKMPKotlinCoroutineContextElement <XPKMPKotlinCoroutineContext>
@required
@property (readonly) id<XPKMPKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol XPKMPKotlinCoroutineContextKey
@required
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
