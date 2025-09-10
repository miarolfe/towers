// Copyright Mia Rolfe. All rights reserved.
#pragma once

class SystemInterface
{
protected:
    virtual ~SystemInterface() {};
    virtual void Init() = 0;
    virtual void Update() = 0;
    virtual void Shutdown() = 0;
};