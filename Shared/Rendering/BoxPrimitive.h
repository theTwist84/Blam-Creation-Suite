#pragma once
class BoxPrimitive
{
public:
	BoxPrimitive();
	BoxPrimitive(
		float positionX,
		float positionY,
		float positionZ,
		float dimensionsX,
		float dimensionsY,
		float dimensionsZ,
		float colorR,
		float colorG,
		float colorB,
		float colorA
	);
	~BoxPrimitive();

	inline void SetColor(
		float colorR,
		float colorG,
		float colorB,
		float colorA
	)
	{
		m_colorR = colorR;
		m_colorG = colorG;
		m_colorB = colorB;
		m_colorA = colorA;
	}

	void UpdateAsCenteredBox(
		float positionX,
		float positionY,
		float positionZ
	);	
	
	void UpdateAsAABB(float minX, float minY, float minZ, float maxX, float maxY, float maxZ);

	void UpdateAsPositionAndExtentBox(
		float positionX,
		float positionY,
		float positionZ,
		float dimensionsX,
		float dimensionsY,
		float dimensionsZ
	);

	void UpdateAsCenteredBox(
		float positionX,
		float positionY,
		float positionZ,
		float dimensionsX,
		float dimensionsY,
		float dimensionsZ
	);

	inline bool SetIsVisible(bool isVisible)
	{
		m_isVisible = isVisible;
	}

	inline bool IsVisible() const
	{
		return m_isVisible && m_volume > 0;
	}

public:
	float m_positionX = 0.0f;
	float m_positionY = 0.0f;
	float m_positionZ = 0.0f;
	float m_dimensionsX = 0.0f;
	float m_dimensionsY = 0.0f;
	float m_dimensionsZ = 0.0f;
	float m_colorR = 1.0f;
	float m_colorG = 1.0f;
	float m_colorB = 1.0f;
	float m_colorA = 1.0f;
	float m_volume = 0.0f;
	float m_maxX = 0.0f;
	float m_maxY = 0.0f;
	float m_maxZ = 0.0f;
	float m_minX = 0.0f;
	float m_minY = 0.0f;
	float m_minZ = 0.0f;

private:
	bool m_isVisible = true;
};
