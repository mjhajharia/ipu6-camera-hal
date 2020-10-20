/*
 * Copyright (C) 2020 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "PipeLiteExecutor.h"
#ifdef ENABLE_SANDBOXING
#include "modules/sandboxing/client/IntelTNR7US.h"
#else
#include "modules/algowrapper/IntelTNR7US.h"
#endif

namespace icamera {

class PSysDAG;
#define DEFAULT_TNR7US_BUFFER_COUNT 2

class GPUExecutor : public PipeLiteExecutor {
 public:
    GPUExecutor(int cameraId, const ExecutorPolicy& policy, std::vector<std::string> exclusivePGs,
                PSysDAG* psysDag, std::shared_ptr<IGraphConfig> gc);
    virtual ~GPUExecutor();
    virtual int start();
    virtual int initPipe();
    virtual void stop();

    // fetch TNR reference buffer for user output, return true if found successfully
    virtual bool fetchTnrRefBuffer(int64_t seq, std::shared_ptr<CameraBuffer> buf);

 private:
    int createPGs();
    int allocBuffers();
    void releaseBuffers();
    int processNewFrame();
    int updateTnrISPConfig(Tnr7Param* pbuffer, uint32_t sequence);
    int allocTnrRefBufs(uint32_t bufSize);
    int dumpTnrParameters(uint32_t sequence);
    int runTnrFrame(const std::shared_ptr<CameraBuffer>& inBuf,
                    std::shared_ptr<CameraBuffer> outbuf);

 private:
    Tnr7Param* mTnr7usParam;
    std::unique_ptr<IntelTNR7US> mIntelTNR;
    uint32_t mLastSequence;
    /* the lock is used for protecting GPU resource, every thread running GPU calculation
     * should require this lock. */
    static std::mutex mGPULock;
    int mRefBufferSize;
    std::mutex mTnrRefBufMapLock;  // used to guard mTnrRefBufMap
    // first: sequence of source buffer, second: the reference buffer address
    std::map<int64_t, void*> mTnrRefBufMap;

    DISALLOW_COPY_AND_ASSIGN(GPUExecutor);
};
}  // namespace icamera