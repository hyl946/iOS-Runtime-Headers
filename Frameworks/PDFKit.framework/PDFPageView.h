/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageView : UIView <PDFPageLayerInterface, UITextViewDelegate> {
    PDFPageViewPrivate * _private;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addPDFAnnotation:(id)arg1;
- (void)_addPDFAnnotationChoiceWidget:(id)arg1;
- (void)_addPDFAnnotationStampSignature:(id)arg1;
- (void)_addPDFAnnotationTextWidget:(id)arg1;
- (bool)_allowsFormFieldEntry;
- (void)_choiceWidgetDone;
- (void)_didRotatePageNotification:(id)arg1;
- (void)_formChanged:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_rotateActiveWidgetAnnotation;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_rotationTransformForPageView;
- (id)_scaleFont:(id)arg1 forString:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_setAttributedStringForAnnotation:(id)arg1 stringValue:(id)arg2 textView:(id)arg3;
- (void)_setPageLayerEffectForID:(id)arg1 hidden:(bool)arg2;
- (void)_setupBookmarkLayer;
- (void)_setuppageAnnotationEffects;
- (bool)_shouldReplaceStringOnAnnotation:(id)arg1 withTextView:(id)arg2;
- (void)_textWidgetDone;
- (void)_updateAnnotationVisibility:(id)arg1;
- (void)_updateWidgetControl:(id)arg1 forBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)addAnnotation:(id)arg1;
- (void)addBookmark;
- (void)addControlForWidgetAnnotation:(id)arg1;
- (void)addPageLayerEffect:(id)arg1;
- (void)addSearchSelection:(id)arg1;
- (void)applyTileLayoutScale:(double)arg1;
- (id)backgroundImage;
- (int)backgroundImageQuality;
- (void)clearLollipopMagnifier;
- (void)clearTextSelectionHandles;
- (void)clearTextSelectionMagnifier;
- (void)clearTiles;
- (void)colorWidgetBackgrounds:(bool)arg1;
- (struct CGPoint { double x1; double x2; })convertPointToPageView:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToPageView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (long long)displayBox;
- (void)enableTextSelectionHandles;
- (bool)enablesTileUpdates;
- (void)forceTileUpdate;
- (id)geometryInterface;
- (bool)hasBackgroundImage;
- (void)hideTileLayer:(bool)arg1;
- (id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3;
- (bool)isVisible;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })layerEffectTransform;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)page;
- (id)pageLayer;
- (id)pageLayerEffectForID:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)previewRotatePage:(double)arg1;
- (void)removeActiveWidgetAnnotation;
- (void)removeAnnotation:(id)arg1;
- (void)removeBookmark;
- (void)removePageLayerEffectForID:(id)arg1;
- (void)restoreOriginalTileLayout;
- (void)saveOriginalTileLayout;
- (void)scalePageLayerEffects:(double)arg1;
- (id)selection;
- (void)setAnnotation:(id)arg1 isSelected:(bool)arg2;
- (void)setBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2;
- (void)setEnableSelectionDrawing:(bool)arg1;
- (void)setEnableTileUpdates:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setLollipopMagnifierPagePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNeedsTilesUpdate;
- (void)setSearchSelection:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)setState:(long long)arg1 onButtonWidgetAnnotation:(id)arg2;
- (void)setStringValue:(id)arg1 onChoiceWidgetAnnotation:(id)arg2 withTableView:(id)arg3;
- (void)setStringValue:(id)arg1 onChoiceWidgetAnnotation:(id)arg2 withTextField:(id)arg3;
- (void)setStringValue:(id)arg1 onTextWidgetAnnotation:(id)arg2 withTextView:(id)arg3;
- (void)setTextSelectionMagnifierPagePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setVisibilityDelegateIndex:(unsigned long long)arg1;
- (void)setupGestureRecognizersForPDFPageViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (bool)textViewShouldBeginEditing:(id)arg1;
- (void)textWidgetChangedTextField:(id)arg1;
- (void)textWidgetChangedTextView:(id)arg1;
- (void)textWidgetDidBeginEditingTextField:(id)arg1;
- (void)textWidgetDidEndEditingTextField:(id)arg1;
- (void)updateAnnotation:(id)arg1;
- (void)updateBookmark;
- (void)updatePageLayerEffectForID:(id)arg1;
- (void)updatePageLayerEffects;
- (unsigned long long)visibilityDelegateIndex;

@end