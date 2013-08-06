/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_noisepages_nettoyeur_patchbay_AudioModule */

#ifndef _Included_com_noisepages_nettoyeur_patchbay_AudioModule
#define _Included_com_noisepages_nettoyeur_patchbay_AudioModule
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_noisepages_nettoyeur_patchbay_AudioModule
 * Method:    getProtocolVersion
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_noisepages_nettoyeur_patchbay_AudioModule_getProtocolVersion
  (JNIEnv *, jclass);

/*
 * Class:     com_noisepages_nettoyeur_patchbay_AudioModule
 * Method:    configure
 * Signature: (III)J
 */
JNIEXPORT jlong JNICALL Java_com_noisepages_nettoyeur_patchbay_AudioModule_configure
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_noisepages_nettoyeur_patchbay_AudioModule
 * Method:    release
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_noisepages_nettoyeur_patchbay_AudioModule_release
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_noisepages_nettoyeur_patchbay_AudioModule
 * Method:    hasTimedOut
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_noisepages_nettoyeur_patchbay_AudioModule_hasTimedOut
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class com_noisepages_nettoyeur_patchbay_AudioModule_FdReceiverThread */

#ifndef _Included_com_noisepages_nettoyeur_patchbay_AudioModule_FdReceiverThread
#define _Included_com_noisepages_nettoyeur_patchbay_AudioModule_FdReceiverThread
#ifdef __cplusplus
extern "C" {
#endif
#undef com_noisepages_nettoyeur_patchbay_AudioModule_FdReceiverThread_MIN_PRIORITY
#define com_noisepages_nettoyeur_patchbay_AudioModule_FdReceiverThread_MIN_PRIORITY 1L
#undef com_noisepages_nettoyeur_patchbay_AudioModule_FdReceiverThread_NORM_PRIORITY
#define com_noisepages_nettoyeur_patchbay_AudioModule_FdReceiverThread_NORM_PRIORITY 5L
#undef com_noisepages_nettoyeur_patchbay_AudioModule_FdReceiverThread_MAX_PRIORITY
#define com_noisepages_nettoyeur_patchbay_AudioModule_FdReceiverThread_MAX_PRIORITY 10L
#ifdef __cplusplus
}
#endif
#endif
