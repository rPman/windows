/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_luwrain_windows_speech_SAPIImpl */

#ifndef _Included_org_luwrain_windows_speech_SAPIImpl
#define _Included_org_luwrain_windows_speech_SAPIImpl
#ifdef __cplusplus
extern "C" {
#endif
#undef org_luwrain_windows_speech_SAPIImpl_SPF_DEFAULT
#define org_luwrain_windows_speech_SAPIImpl_SPF_DEFAULT 0L
#undef org_luwrain_windows_speech_SAPIImpl_SPF_IS_XML
#define org_luwrain_windows_speech_SAPIImpl_SPF_IS_XML 8L
#undef org_luwrain_windows_speech_SAPIImpl_SPF_IS_NOT_XML
#define org_luwrain_windows_speech_SAPIImpl_SPF_IS_NOT_XML 16L
#undef org_luwrain_windows_speech_SAPIImpl_SPF_ASYNC
#define org_luwrain_windows_speech_SAPIImpl_SPF_ASYNC 1L
#undef org_luwrain_windows_speech_SAPIImpl_SPF_PURGEBEFORESPEAK
#define org_luwrain_windows_speech_SAPIImpl_SPF_PURGEBEFORESPEAK 2L
#undef org_luwrain_windows_speech_SAPIImpl_SPF_IS_FILENAME
#define org_luwrain_windows_speech_SAPIImpl_SPF_IS_FILENAME 4L
#undef org_luwrain_windows_speech_SAPIImpl_SPF_NLP_SPEAK_PUNC
#define org_luwrain_windows_speech_SAPIImpl_SPF_NLP_SPEAK_PUNC 64L
#undef org_luwrain_windows_speech_SAPIImpl_SPF_PARSE_SAPI
#define org_luwrain_windows_speech_SAPIImpl_SPF_PARSE_SAPI 128L
#undef org_luwrain_windows_speech_SAPIImpl_SPF_PARSE_SSML
#define org_luwrain_windows_speech_SAPIImpl_SPF_PARSE_SSML 256L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_Default
#define org_luwrain_windows_speech_SAPIImpl_SPSF_Default -1L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_NoAssignedFormat
#define org_luwrain_windows_speech_SAPIImpl_SPSF_NoAssignedFormat 0L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_Text
#define org_luwrain_windows_speech_SAPIImpl_SPSF_Text 1L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_NonStandardFormat
#define org_luwrain_windows_speech_SAPIImpl_SPSF_NonStandardFormat 2L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_ExtendedAudioFormat
#define org_luwrain_windows_speech_SAPIImpl_SPSF_ExtendedAudioFormat 3L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_8kHz8BitMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_8kHz8BitMono 4L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_8kHz8BitStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_8kHz8BitStereo 5L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_8kHz16BitMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_8kHz16BitMono 6L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_8kHz16BitStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_8kHz16BitStereo 7L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_11kHz8BitMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_11kHz8BitMono 8L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_11kHz8BitStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_11kHz8BitStereo 9L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_11kHz16BitMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_11kHz16BitMono 10L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_11kHz16BitStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_11kHz16BitStereo 11L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_12kHz8BitMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_12kHz8BitMono 12L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_12kHz8BitStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_12kHz8BitStereo 13L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_12kHz16BitMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_12kHz16BitMono 14L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_12kHz16BitStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_12kHz16BitStereo 15L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_16kHz8BitMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_16kHz8BitMono 16L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_16kHz8BitStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_16kHz8BitStereo 17L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_16kHz16BitMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_16kHz16BitMono 18L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_16kHz16BitStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_16kHz16BitStereo 19L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_22kHz8BitMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_22kHz8BitMono 20L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_22kHz8BitStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_22kHz8BitStereo 21L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_22kHz16BitMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_22kHz16BitMono 22L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_22kHz16BitStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_22kHz16BitStereo 23L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_24kHz8BitMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_24kHz8BitMono 24L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_24kHz8BitStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_24kHz8BitStereo 25L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_24kHz16BitMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_24kHz16BitMono 26L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_24kHz16BitStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_24kHz16BitStereo 27L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_32kHz8BitMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_32kHz8BitMono 28L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_32kHz8BitStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_32kHz8BitStereo 29L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_32kHz16BitMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_32kHz16BitMono 30L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_32kHz16BitStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_32kHz16BitStereo 31L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_44kHz8BitMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_44kHz8BitMono 32L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_44kHz8BitStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_44kHz8BitStereo 33L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_44kHz16BitMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_44kHz16BitMono 34L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_44kHz16BitStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_44kHz16BitStereo 35L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_48kHz8BitMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_48kHz8BitMono 36L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_48kHz8BitStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_48kHz8BitStereo 37L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_48kHz16BitMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_48kHz16BitMono 38L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_48kHz16BitStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_48kHz16BitStereo 39L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_TrueSpeech_8kHz1BitMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_TrueSpeech_8kHz1BitMono 40L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_ALaw_8kHzMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_ALaw_8kHzMono 41L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_ALaw_8kHzStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_ALaw_8kHzStereo 42L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_ALaw_11kHzMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_ALaw_11kHzMono 43L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_ALaw_11kHzStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_ALaw_11kHzStereo 44L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_ALaw_22kHzMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_ALaw_22kHzMono 45L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_ALaw_22kHzStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_ALaw_22kHzStereo 46L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_ALaw_44kHzMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_ALaw_44kHzMono 47L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_ALaw_44kHzStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_ALaw_44kHzStereo 48L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_uLaw_8kHzMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_uLaw_8kHzMono 49L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_uLaw_8kHzStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_uLaw_8kHzStereo 50L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_uLaw_11kHzMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_uLaw_11kHzMono 51L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_uLaw_11kHzStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_uLaw_11kHzStereo 52L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_uLaw_22kHzMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_uLaw_22kHzMono 53L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_uLaw_22kHzStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_uLaw_22kHzStereo 54L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_uLaw_44kHzMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_uLaw_44kHzMono 55L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_uLaw_44kHzStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_CCITT_uLaw_44kHzStereo 56L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_ADPCM_8kHzMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_ADPCM_8kHzMono 57L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_ADPCM_8kHzStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_ADPCM_8kHzStereo 58L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_ADPCM_11kHzMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_ADPCM_11kHzMono 59L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_ADPCM_11kHzStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_ADPCM_11kHzStereo 60L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_ADPCM_22kHzMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_ADPCM_22kHzMono 61L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_ADPCM_22kHzStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_ADPCM_22kHzStereo 62L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_ADPCM_44kHzMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_ADPCM_44kHzMono 63L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_ADPCM_44kHzStereo
#define org_luwrain_windows_speech_SAPIImpl_SPSF_ADPCM_44kHzStereo 64L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_GSM610_8kHzMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_GSM610_8kHzMono 65L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_GSM610_11kHzMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_GSM610_11kHzMono 66L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_GSM610_22kHzMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_GSM610_22kHzMono 67L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_GSM610_44kHzMono
#define org_luwrain_windows_speech_SAPIImpl_SPSF_GSM610_44kHzMono 68L
#undef org_luwrain_windows_speech_SAPIImpl_SPSF_NUM_FORMATS
#define org_luwrain_windows_speech_SAPIImpl_SPSF_NUM_FORMATS 69L
/*
 * Class:     org_luwrain_windows_speech_SAPIImpl
 * Method:    getNextVoiceIdFromList
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_luwrain_windows_speech_SAPIImpl_getNextVoiceIdFromList
  (JNIEnv *, jobject);

/*
 * Class:     org_luwrain_windows_speech_SAPIImpl
 * Method:    getLastVoiceDescription
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_luwrain_windows_speech_SAPIImpl_getLastVoiceDescription
  (JNIEnv *, jobject);

/*
 * Class:     org_luwrain_windows_speech_SAPIImpl
 * Method:    selectCurrentVoice
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_luwrain_windows_speech_SAPIImpl_selectCurrentVoice
  (JNIEnv *, jobject);

/*
 * Class:     org_luwrain_windows_speech_SAPIImpl
 * Method:    selectVoiceById
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_luwrain_windows_speech_SAPIImpl_selectVoiceById
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_luwrain_windows_speech_SAPIImpl
 * Method:    searchVoiceByAttributes
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_luwrain_windows_speech_SAPIImpl_searchVoiceByAttributes
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_luwrain_windows_speech_SAPIImpl
 * Method:    speak
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_org_luwrain_windows_speech_SAPIImpl_speak
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     org_luwrain_windows_speech_SAPIImpl
 * Method:    stream
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_org_luwrain_windows_speech_SAPIImpl_stream
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     org_luwrain_windows_speech_SAPIImpl
 * Method:    rate
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_luwrain_windows_speech_SAPIImpl_rate
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_luwrain_windows_speech_SAPIImpl
 * Method:    pitch
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_luwrain_windows_speech_SAPIImpl_pitch
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_luwrain_windows_speech_SAPIImpl
 * Method:    wait
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_luwrain_windows_speech_SAPIImpl_wait
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
