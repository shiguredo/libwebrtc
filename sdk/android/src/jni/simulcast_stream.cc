/*
 *  Copyright 2017 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#include "sdk/android/src/jni/simulcast_stream.h"

#include "sdk/android/generated_video_jni/SimulcastStream_jni.h"
#include "sdk/android/native_api/jni/java_types.h"
#include "sdk/android/src/jni/jni_helpers.h"

namespace webrtc {
namespace jni {

ScopedJavaLocalRef<jobject> NativeToJavaSimulcastStream(
    JNIEnv* jni,
    const SimulcastStream& simulcast_stream) {
  return Java_SimulcastStream_Constructor(jni,
      static_cast<jint>(simulcast_stream.width),
      static_cast<jint>(simulcast_stream.height),
      static_cast<jfloat>(simulcast_stream.maxFramerate),
      static_cast<jint>(simulcast_stream.numberOfTemporalLayers),
      static_cast<jint>(simulcast_stream.maxBitrate),
      static_cast<jint>(simulcast_stream.targetBitrate),
      static_cast<jint>(simulcast_stream.minBitrate),
      static_cast<jint>(simulcast_stream.qpMax),
      static_cast<jboolean>(simulcast_stream.active));
}

}  // namespace jni
}  // namespace webrtc
