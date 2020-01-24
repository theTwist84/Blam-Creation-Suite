#include "opusframework-private-pch.h"

#define IGameEngineHostCreateBarrierDefinition(index) void IGameEngineHost::Member##index() { FATAL_ERROR("IGameEngineHost barrier was triggered! index:" STRINGIFY(index)); }

/* barrier functions to prevent new versions of games calling our functions */
IGameEngineHostCreateBarrierDefinition(48);
IGameEngineHostCreateBarrierDefinition(49);
IGameEngineHostCreateBarrierDefinition(50);
IGameEngineHostCreateBarrierDefinition(51);
IGameEngineHostCreateBarrierDefinition(52);
IGameEngineHostCreateBarrierDefinition(53);
IGameEngineHostCreateBarrierDefinition(54);
IGameEngineHostCreateBarrierDefinition(55);

#undef IGameEngineHostCreateBarrierDefinition
