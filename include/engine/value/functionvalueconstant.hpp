#pragma once

#include "types.h"
#include "functionvalue.hpp"

namespace bStream
{
	class CStream;
} // namespace bStream

namespace JStudio
{
	namespace Engine
	{
		class TFunctionValueConstant : public TFunctionValue
		{
		public:
			TFunctionValueConstant() { }
			virtual ~TFunctionValueConstant() { }

			TFunctionValueAttributeSet GetAttributeSet() override;
			float Evaluate(int32_t frame) override;

			void LoadData(bStream::CStream* stream) override;
		};
	} // namespace Engine
} // namespace JStudio
