/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColorKernel : CIKernel

@property (nonatomic) bool perservesAlpha;

+ (id)kernelWithString:(id)arg1;

- (id)_initWithDict:(id)arg1;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 andArguments:(id)arg2;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 arguments:(id)arg2;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 arguments:(id)arg2 options:(id)arg3;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 arguments:(id)arg3;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 arguments:(id)arg3 options:(id)arg4;
- (bool)perservesAlpha;
- (void)setPerservesAlpha:(bool)arg1;

@end
