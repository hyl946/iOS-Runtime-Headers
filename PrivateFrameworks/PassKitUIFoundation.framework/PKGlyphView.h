/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

@interface PKGlyphView : UIView <PKSubglyphViewDelegate> {
    PKCheckGlyphLayer * _checkLayer;
    struct CGImage { } * _customImage;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _customImageAlignmentEdgeInsets;
    CALayer * _customImageLayer;
    <PKGlyphViewDelegate> * _delegate;
    double  _lastAnimationWillFinish;
    struct { 
        unsigned int showingPhone : 1; 
        unsigned int phoneRotated : 1; 
    }  _layoutFlags;
    double  _phoneAspectRatio;
    PKPhoneGlyphLayer * _phoneLayer;
    NSString * _phoneWiggleAnimationKey;
    BOOL  _phoneWiggling;
    UIColor * _primaryColor;
    int  _priorState;
    UIColor * _secondaryColor;
    int  _state;
    int  _style;
    PKSubglyphView * _subglyphView;
    NSMutableArray * _transitionCompletionHandlers;
    unsigned int  _transitionIndex;
    BOOL  _transitioning;
}

@property (nonatomic, readonly) struct CGImage { }*customImage;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } customImageAlignmentEdgeInsets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKGlyphViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fadeOnRecognized;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) UIColor *primaryColor;
@property (nonatomic, copy) UIColor *secondaryColor;
@property (nonatomic, readonly) int state;
@property (readonly) Class superclass;

+ (BOOL)automaticallyNotifiesObserversOfState;

- (void).cxx_destruct;
- (struct UIColor { Class x1; }*)_defaultPrimaryColor;
- (struct UIColor { Class x1; }*)_defaultSecondaryColor;
- (void)_endPhoneWiggle;
- (void)_executeAfterMinimumAnimationDurationForStateTransition:(id /* block */)arg1;
- (void)_executeTransitionCompletionHandlers:(BOOL)arg1;
- (void)_finishTransitionForIndex:(unsigned int)arg1;
- (void)_layoutContentLayer:(id)arg1;
- (double)_minimumAnimationDurationForStateTransition;
- (void)_performTransitionWithTransitionIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (struct CGPoint { double x1; double x2; })_phonePositionDeltaWhileShownFromRotationPercentage:(float)arg1 toPercentage:(float)arg2;
- (struct CGPoint { double x1; double x2; })_phonePositionWhileShownWithRotationPercentage:(float)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_phoneTransformDeltaWhileShownFromRotationPercentage:(float)arg1 toPercentage:(float)arg2;
- (void)_startPhoneWiggle;
- (void)_updateCheckViewStateAnimated:(BOOL)arg1;
- (void)_updateCustomImageLayerOpacityAnimated:(BOOL)arg1;
- (void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1;
- (void)_updatePhoneLayoutWithTransitionIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)_updatePhoneWiggleIfNecessary;
- (id)createCustomImageLayer;
- (struct CGImage { }*)customImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })customImageAlignmentEdgeInsets;
- (void)dealloc;
- (id)delegate;
- (BOOL)fadeOnRecognized;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(int)arg1;
- (void)layoutSubviews;
- (id)primaryColor;
- (id)secondaryColor;
- (void)setCustomImage:(struct CGImage { }*)arg1 withAlignmentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)setDelegate:(id)arg1;
- (void)setFadeOnRecognized:(BOOL)arg1;
- (void)setPrimaryColor:(struct UIColor { Class x1; }*)arg1;
- (void)setPrimaryColor:(struct UIColor { Class x1; }*)arg1 animated:(BOOL)arg2;
- (void)setSecondaryColor:(struct UIColor { Class x1; }*)arg1;
- (void)setSecondaryColor:(struct UIColor { Class x1; }*)arg1 animated:(BOOL)arg2;
- (void)setState:(int)arg1;
- (void)setState:(int)arg1 animated:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (int)state;
- (void)subglyphView:(id)arg1 didLayoutContentLayer:(id)arg2;
- (void)updateRasterizationScale:(float)arg1;

@end