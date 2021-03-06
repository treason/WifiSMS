/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDSheet, NSMutableDictionary, NSMutableArray, EDAnchor, EDTextBox, EDComment;



@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient>
{
    EDSheet *mSheet;
    EDAnchor *mAnchor;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mIsBoundsSet;

    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mBounds;
    EDTextBox *mTextBox;
    EDComment *mComment;
    NSMutableDictionary *mTableModels;
    NSMutableArray *mColorLocators;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mObjectReallyIsAChart;

}


- (id)init;
- (void)dealloc;
- (id)anchor;
- (void)setAnchor:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)areBoundsSet;
     /* Encoded args for previous method: B8@0:4 */

- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)hasBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)sheet;
- (void)setSheet:(id)arg1;
- (id)tableModels;
- (void)setTableModels:(id)arg1;
- (id)colorLocators;
- (void)setColorLocators:(id)arg1;
- (id)textBox;
- (void)setTextBox:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isObjectReallyIsAChart;
     /* Encoded args for previous method: B8@0:4 */

- (void)setObjectReallyIsAChart:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (BOOL)hasText;

@end
