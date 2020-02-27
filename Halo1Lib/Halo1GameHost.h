#pragma once

class Halo1GameHost : public c_opus_game_engine_host
{
public:
	Halo1GameHost();
	virtual ~Halo1GameHost();

	// MCC Functionality
	void FrameEnd(IDXGISwapChain* pSwapChain, _QWORD) override;



	// Opus Functionality
	virtual void RenderUI() const;
	virtual IGameEngine* GetGameEngine() const;

private:
	static void updateCamera();
	static void cameraDebugUI();
	IGameEngine* m_pGameEngine;

	// static
public:
	static IDataAccess* GetDataAccess() { return s_halo1GameRuntime->GetDataAccess(); }
	static c_game_runtime& GetGameRuntime();
	static void InitModifications(Build build);
	static void DeinitModifications(Build build);
private:
	static c_game_runtime* s_halo1GameRuntime;
};

