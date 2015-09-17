/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKHeartAnnotation : AKRectangularShapeAnnotation <AKFlippableAnnotationProtocol> {
    BOOL _verticallyFlipped;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property BOOL horizontallyFlipped;
@property (readonly) Class superclass;
@property BOOL verticallyFlipped;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitTestBounds;
- (id)initWithCoder:(id)arg1;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (void)setVerticallyFlipped:(BOOL)arg1;
- (void)translateBy:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)verticallyFlipped;

@end