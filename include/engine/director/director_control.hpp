#pragma once

#include "types.h"
#include "director.hpp"

#include "engine/object/object_control.hpp"

namespace bStream
{
	class CStream;
} // namespace bStream

namespace JStudio
{
	namespace Engine
	{
		class TDirectorControl : public TDirector
		{
		protected:
			void TranslateCommand(uint32_t curFrame, uint16_t cmdType, uint16_t updateType, bStream::CStream* stream) override;

		public:
			TDirectorControl() { }
			virtual ~TDirectorControl() { }

			virtual TObject* CreateObject() override { return new TObjectControl(); }
		};
	} // namespace Engine
} // namespace JStudio
