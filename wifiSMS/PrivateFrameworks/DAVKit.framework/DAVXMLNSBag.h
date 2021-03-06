/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSMutableDictionary;



@interface DAVXMLNSBag : NSObject 
{
    NSMutableDictionary *tagMapping;
    NSMutableDictionary *allNS;
    NSUInteger nsCounter;
    void *reserved1;
}

+ (void)initialize;
+ (id)_smartTagForTag:(id)arg1;
+ (id)namespaceForTag:(id)arg1;
+ (void)registerNSTags:(id)arg1 withNamespace:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)tagForNSTag:(id)arg1;
- (id)allXMLNSAttributes;

@end
