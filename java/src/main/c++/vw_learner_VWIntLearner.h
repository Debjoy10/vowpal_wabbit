/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class vw_learner_VWIntLearner */

#ifndef _Included_vw_learner_VWIntLearner
#define _Included_vw_learner_VWIntLearner
#ifdef __cplusplus
extern "C"
{
#endif
/*
 * Class:     vw_learner_VWIntLearner
 * Method:    predictFloat
 * Signature: (Ljava/lang/String;ZJ)F
 */
JNIEXPORT jint JNICALL Java_vw_learner_VWIntLearner_predict
(JNIEnv *, jobject, jstring, jboolean, jlong);

/*
 * Class:     vw_learner_VWIntLearner
 * Method:    predictFloat
 * Signature: (Ljava/lang/String;ZJ)F
 */
JNIEXPORT jint JNICALL Java_vw_learner_VWIntLearner_predictMultiline
(JNIEnv *, jobject, jobjectArray, jboolean, jlong);

#ifdef __cplusplus
}
#endif
#endif
