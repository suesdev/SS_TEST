#pragma once
#include "SceneBase.h"
class SceneManager;

class BattleScene : public SceneBase
{

public:

	// �R���X�g���N�^
	BattleScene(void);

	// �f�X�g���N�^
	~BattleScene(void);

	void Init(void) override;
	void Update(void) override;
	void Draw(void) override;
	void Release(void) override;

private:

	// �摜
	int imgTitle_;

};
