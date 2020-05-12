/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wolfssl_WolfSSLCertificate */

#ifndef _Included_com_wolfssl_WolfSSLCertificate
#define _Included_com_wolfssl_WolfSSLCertificate
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_get_der
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1get_1der
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_get_tbs
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1get_1tbs
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_get_serial_number
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1get_1serial_1number
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_notBefore
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1notBefore
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_notAfter
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1notAfter
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_version
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1version
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_get_signature
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1get_1signature
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_get_signature_type
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1get_1signature_1type
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_get_signature_OID
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1get_1signature_1OID
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_print
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1print
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_get_isCA
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1get_1isCA
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_get_subject_name
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1get_1subject_1name
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_get_issuer_name
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1get_1issuer_1name
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_get_pubkey
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1get_1pubkey
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_get_pubkey_type
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1get_1pubkey_1type
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_get_pathLength
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1get_1pathLength
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_verify
 * Signature: (J[BI)I
 */
JNIEXPORT jint JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1verify
  (JNIEnv *, jclass, jlong, jbyteArray, jint);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_get_key_usage
 * Signature: (J)[Z
 */
JNIEXPORT jbooleanArray JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1get_1key_1usage
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_get_extension
 * Signature: (JLjava/lang/String;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1get_1extension
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_is_extension_set
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1is_1extension_1set
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_get_next_altname
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1get_1next_1altname
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_load_certificate_buffer
 * Signature: ([BI)J
 */
JNIEXPORT jlong JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1load_1certificate_1buffer
  (JNIEnv *, jclass, jbyteArray, jint);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_load_certificate_file
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1load_1certificate_1file
  (JNIEnv *, jclass, jstring, jint);

#ifdef __cplusplus
}
#endif
#endif
