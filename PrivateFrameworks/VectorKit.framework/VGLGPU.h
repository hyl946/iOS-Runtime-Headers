/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSSet, NSString, VGLContext, VGLSharegroup;

@interface VGLGPU : NSObject {
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long __sig; 
            BOOL __opaque[40]; 
        } __m_; 
    } _capabilitesLock;
    NSSet *_extensionNames;
    int _initializedCapabilities;
    VGLContext *_internalContext;
    int _kind;
    int _maxDepthBufferPlanes;
    int _maxFragShaderTextureUnits;
    int _maxSamples;
    int _maxStencilBufferPlanes;
    int _maxTextureSize;
    int _maxUniformFragmentVectors;
    int _maxUniformVertexVectors;
    int _maxVaryingVectors;
    int _maxVertShaderTextureUnits;
    int _maxVertexAttributes;
    NSString *_rendererName;
    VGLSharegroup *_sharegroup;
}

@property(readonly) NSSet * extensionNames;
@property(readonly) int kind;
@property(readonly) int maxDepthBufferPlanes;
@property(readonly) int maxFragShaderTextureUnits;
@property(readonly) int maxSamples;
@property(readonly) int maxStencilBufferPlanes;
@property(readonly) int maxTextureSize;
@property(readonly) int maxUniformFragmentVectors;
@property(readonly) int maxUniformVertexVectors;
@property(readonly) int maxVaryingVectors;
@property(readonly) int maxVertShaderTextureUnits;
@property(readonly) int maxVertexAttributes;
@property(readonly) NSString * rendererName;

+ (id)gpuForKind:(int)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_initCapabilities;
- (void)dealloc;
- (id)description;
- (id)extensionNames;
- (id)initWithKind:(int)arg1;
- (int)kind;
- (int)maxDepthBufferPlanes;
- (int)maxFragShaderTextureUnits;
- (int)maxSamples;
- (int)maxStencilBufferPlanes;
- (int)maxTextureSize;
- (int)maxUniformFragmentVectors;
- (int)maxUniformVertexVectors;
- (int)maxVaryingVectors;
- (int)maxVertShaderTextureUnits;
- (int)maxVertexAttributes;
- (id)newContext:(Class)arg1;
- (BOOL)platformSupports:(id)arg1;
- (id)rendererName;

@end