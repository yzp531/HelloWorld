#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_jerryyin_myapplication_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

const jobject
callJavaMethodBase(JNIEnv *env, jobject obj, char *clzName, char *methodName, char *paramsType,
                   char *paramVal) {
   jclass  o=env->FindClass(clzName);
}
