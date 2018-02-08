/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_sun_media_jfxmediaimpl_NativeAudioClip */

#ifndef _Included_com_sun_media_jfxmediaimpl_NativeAudioClip
#define _Included_com_sun_media_jfxmediaimpl_NativeAudioClip
#ifdef __cplusplus
extern "C" {
#endif
#undef com_sun_media_jfxmediaimpl_NativeAudioClip_SAMPLE_FORMAT_S8
#define com_sun_media_jfxmediaimpl_NativeAudioClip_SAMPLE_FORMAT_S8 0L
#undef com_sun_media_jfxmediaimpl_NativeAudioClip_SAMPLE_FORMAT_U8
#define com_sun_media_jfxmediaimpl_NativeAudioClip_SAMPLE_FORMAT_U8 1L
#undef com_sun_media_jfxmediaimpl_NativeAudioClip_SAMPLE_FORMAT_S16BE
#define com_sun_media_jfxmediaimpl_NativeAudioClip_SAMPLE_FORMAT_S16BE 2L
#undef com_sun_media_jfxmediaimpl_NativeAudioClip_SAMPLE_FORMAT_U16BE
#define com_sun_media_jfxmediaimpl_NativeAudioClip_SAMPLE_FORMAT_U16BE 3L
#undef com_sun_media_jfxmediaimpl_NativeAudioClip_SAMPLE_FORMAT_S16LE
#define com_sun_media_jfxmediaimpl_NativeAudioClip_SAMPLE_FORMAT_S16LE 4L
#undef com_sun_media_jfxmediaimpl_NativeAudioClip_SAMPLE_FORMAT_U16LE
#define com_sun_media_jfxmediaimpl_NativeAudioClip_SAMPLE_FORMAT_U16LE 5L
#undef com_sun_media_jfxmediaimpl_NativeAudioClip_SAMPLE_FORMAT_S24BE
#define com_sun_media_jfxmediaimpl_NativeAudioClip_SAMPLE_FORMAT_S24BE 6L
#undef com_sun_media_jfxmediaimpl_NativeAudioClip_SAMPLE_FORMAT_U24BE
#define com_sun_media_jfxmediaimpl_NativeAudioClip_SAMPLE_FORMAT_U24BE 7L
#undef com_sun_media_jfxmediaimpl_NativeAudioClip_SAMPLE_FORMAT_S24LE
#define com_sun_media_jfxmediaimpl_NativeAudioClip_SAMPLE_FORMAT_S24LE 8L
#undef com_sun_media_jfxmediaimpl_NativeAudioClip_SAMPLE_FORMAT_U24LE
#define com_sun_media_jfxmediaimpl_NativeAudioClip_SAMPLE_FORMAT_U24LE 9L
    /* Inaccessible static: clipDisposer */
    /*
     * Class:     com_sun_media_jfxmediaimpl_NativeAudioClip
     * Method:    nacInit
     * Signature: ()Z
     */
    JNIEXPORT jboolean JNICALL Java_com_sun_media_jfxmediaimpl_NativeAudioClip_nacInit
    (JNIEnv *, jclass);

    /*
     * Class:     com_sun_media_jfxmediaimpl_NativeAudioClip
     * Method:    nacLoad
     * Signature: (Lcom/sun/media/jfxmedia/locator/Locator;)J
     */
    JNIEXPORT jlong JNICALL Java_com_sun_media_jfxmediaimpl_NativeAudioClip_nacLoad
    (JNIEnv *, jclass, jobject);

    /*
     * Class:     com_sun_media_jfxmediaimpl_NativeAudioClip
     * Method:    nacCreate
     * Signature: ([BIIIII)J
     */
    JNIEXPORT jlong JNICALL Java_com_sun_media_jfxmediaimpl_NativeAudioClip_nacCreate
    (JNIEnv *, jclass, jbyteArray, jint, jint, jint, jint, jint);

    /*
     * Class:     com_sun_media_jfxmediaimpl_NativeAudioClip
     * Method:    nacUnload
     * Signature: (J)V
     */
    JNIEXPORT void JNICALL Java_com_sun_media_jfxmediaimpl_NativeAudioClip_nacUnload
    (JNIEnv *, jclass, jlong);

    /*
     * Class:     com_sun_media_jfxmediaimpl_NativeAudioClip
     * Method:    nacStopAll
     * Signature: ()V
     */
    JNIEXPORT void JNICALL Java_com_sun_media_jfxmediaimpl_NativeAudioClip_nacStopAll
    (JNIEnv *, jclass);

    /*
     * Class:     com_sun_media_jfxmediaimpl_NativeAudioClip
     * Method:    nacCreateSegment
     * Signature: (JDD)Lcom/sun/media/jfxmediaimpl/NativeAudioClip;
     */
    JNIEXPORT jobject JNICALL Java_com_sun_media_jfxmediaimpl_NativeAudioClip_nacCreateSegment__JDD
    (JNIEnv *, jobject, jlong, jdouble, jdouble);

    /*
     * Class:     com_sun_media_jfxmediaimpl_NativeAudioClip
     * Method:    nacCreateSegment
     * Signature: (JII)Lcom/sun/media/jfxmediaimpl/NativeAudioClip;
     */
    JNIEXPORT jobject JNICALL Java_com_sun_media_jfxmediaimpl_NativeAudioClip_nacCreateSegment__JII
    (JNIEnv *, jobject, jlong, jint, jint);

    /*
     * Class:     com_sun_media_jfxmediaimpl_NativeAudioClip
     * Method:    nacResample
     * Signature: (JIII)Lcom/sun/media/jfxmediaimpl/NativeAudioClip;
     */
    JNIEXPORT jobject JNICALL Java_com_sun_media_jfxmediaimpl_NativeAudioClip_nacResample
    (JNIEnv *, jobject, jlong, jint, jint, jint);

    /*
     * Class:     com_sun_media_jfxmediaimpl_NativeAudioClip
     * Method:    nacAppend
     * Signature: (JJ)Lcom/sun/media/jfxmediaimpl/NativeAudioClip;
     */
    JNIEXPORT jobject JNICALL Java_com_sun_media_jfxmediaimpl_NativeAudioClip_nacAppend
    (JNIEnv *, jobject, jlong, jlong);

    /*
     * Class:     com_sun_media_jfxmediaimpl_NativeAudioClip
     * Method:    nacIsPlaying
     * Signature: (J)Z
     */
    JNIEXPORT jboolean JNICALL Java_com_sun_media_jfxmediaimpl_NativeAudioClip_nacIsPlaying
    (JNIEnv *, jobject, jlong);

    /*
     * Class:     com_sun_media_jfxmediaimpl_NativeAudioClip
     * Method:    nacPlay
     * Signature: (JDDDDII)V
     */
    JNIEXPORT void JNICALL Java_com_sun_media_jfxmediaimpl_NativeAudioClip_nacPlay
    (JNIEnv *, jobject, jlong, jdouble, jdouble, jdouble, jdouble, jint, jint);

    /*
     * Class:     com_sun_media_jfxmediaimpl_NativeAudioClip
     * Method:    nacStop
     * Signature: (J)V
     */
    JNIEXPORT void JNICALL Java_com_sun_media_jfxmediaimpl_NativeAudioClip_nacStop
    (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif