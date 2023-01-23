// Copyright 2022. Elogen Co. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "TCPPacketHeader.h"

typedef TSharedPtr<TArray<uint8>, ESPMode::ThreadSafe> FByteArrayRef;

struct TCPAsyncResult : TSharedFromThis<TCPAsyncResult, ESPMode::ThreadSafe>
{
	TCPAsyncResult(bool success, int32 bytesTransferred, int32 state = 0)
		: Success(success)
		, BytesTransferred(bytesTransferred)
		, State(state)
	{}
	~TCPAsyncResult() = default;

	bool Success = false;
	int32 BytesTransferred = 0;
	int32 State = 0;
};

typedef TSharedRef<TCPAsyncResult, ESPMode::ThreadSafe> FAsyncResultRef;

