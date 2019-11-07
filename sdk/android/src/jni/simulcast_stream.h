/*
 *  Copyright 2019 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#ifndef SDK_ANDROID_SRC_JNI_SIMULCAST_STREAM_H_
#define SDK_ANDROID_SRC_JNI_SIMULCAST_STREAM_H_

#include <jni.h>

#include "common_types.h"
#include "sdk/android/src/jni/jni_helpers.h"

namespace webrtc {
namespace jni {

  ScopedJavaLocalRef<jobject> NativeToJavaSimulcastStream(
      JNIEnv* jni, const SimulcastStream& simulcast_stream);

}  // namespace jni
}  // namespace webrtc

#endif  // SDK_ANDROID_SRC_JNI_SIMULCAST_STREAM_H_
