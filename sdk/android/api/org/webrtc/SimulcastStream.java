/*
 *  Copyright (c) 2019 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

package org.webrtc;

public class SimulcastStream {
  public short width;
  public short height;
  public float maxFramerate;  // fps.
  public byte numberOfTemporalLayers;
  public int maxBitrate;     // kilobits/sec.
  public int targetBitrate;  // kilobits/sec.
  public int minBitrate;     // kilobits/sec.
  public int qpMax;          // minimum quality
  public boolean active;     // encoded and sent

  @CalledByNative
  public SimulcastStream(short width, short height, float maxFramerate,
      byte numberOfTemporalLayers, int maxBitrate, int targetBitrate, int minBitrate,
      int qpMax, boolean active) {
    this.width = width;
    this.height = height;
    this.maxFramerate = maxFramerate;
    this.numberOfTemporalLayers = numberOfTemporalLayers;
    this.maxBitrate = maxBitrate;
    this.targetBitrate = targetBitrate;
    this.minBitrate = minBitrate;
    this.qpMax = qpMax;
    this.active = active;
  }
};
