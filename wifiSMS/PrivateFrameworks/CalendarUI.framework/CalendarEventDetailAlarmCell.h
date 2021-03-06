/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class UITextLabel;



@interface CalendarEventDetailAlarmCell : CalendarEventDetailCell 
{
    UITextLabel *_alertTitleView;
    UITextLabel *_alertView;
    UITextLabel *_alert2View;
    NSUInteger _visibleItems;
    BOOL _editable;
}

+ (BOOL)isEditableForEditModel:(id)arg1;
+ (BOOL)shouldDisplayForEditModel:(id)arg1;

- (id)initWithEditModel:(id)arg1;
- (void)dealloc;
- (BOOL)setEditModel:(id)arg1;
- (BOOL)canBeDisclosed;
- (id)_alertTitleView;
- (id)_alertView;
- (id)_alert2View;
- (void)updateHighlightColors;
- (BOOL)hasCustomLayout;
- (void)layoutForWidth:(float)arg1 position:(NSInteger)arg2;
- (id)viewControllerPreparedWithModel:(id)arg1;

@end
