/*
Tencent is pleased to support the open source community by making PhxQueue available.
Copyright (C) 2017 THL A29 Limited, a Tencent company. All rights reserved.
Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

<https://opensource.org/licenses/BSD-3-Clause>

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/



/* lock_server_config.h

 Generated by phxrpc_pb2server from lock.proto

*/

#pragma once

#include "phxrpc/rpc.h"


class LockServerConfig {
  public:
    LockServerConfig();

    virtual ~LockServerConfig();

    bool Read(const char *config_file);

    phxrpc::HshaServerConfig &GetHshaServerConfig();

    const char *GetTopic() const;
    const char *GetDataDirPath() const;
    const char *GetPhxQueueGlobalConfigPath() const;
    int GetPaxosPort() const;

  private:
    phxrpc::HshaServerConfig ep_server_config_;

    char topic_[128];
    char data_dir_path_[128];
    char phxqueue_global_config_path_[128];
    int paxos_port_;
};

