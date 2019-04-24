#include "fr_imtld_ilog_DisplayLine.h"
#include <jni.h>

JNIEXPORT void JNICALL Java_fr_imtld_ilog_DisplayLine_displayLine
  (JNIEnv *env, jobject pThis, jint iLine, jstring strMessage){
	printf( "Hello World !!\n" );
	const char *msg = (*env)->GetStringUTFChars(env, strMessage, 0);

	jclass cls = (*env)->FindClass(env, "fr/imtld/ilog/DisplayLine");
	if (cls == NULL) {
			printf("Failed to find DisplayLine class\n");
			return;
		}

	jmethodID mid = (*env)->GetStaticMethodID(env, cls, "getNumber", "()I");
	if (mid == NULL) {
		printf("Failed to find getNumber function\n");
		return;
	}

	jint result = (*env)->CallStaticIntMethod(env, cls, mid, result);

	  printf("%i: ", result);
	  printf("%s\n", msg);

	  (*env)->ReleaseStringUTFChars(env, strMessage, msg);
}
