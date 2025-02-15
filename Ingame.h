#pragma once
#include "Scene.h"
#include "Shape.h"

class Ingame :
    public Scene
{
private:
    D3DXVECTOR3 eye, lookAt, up; // 카메라의 위치, 카메라가 바라보는 방향, 월드에서의 상향 벡터
    D3DXMATRIX view, projection; // 뷰, 프로젝션 행렬
    Shape shape[7];

public:
    void Initialize() override;
    int Update() override;
    void Render() override;
    void Release() override;
    virtual void OnMessage(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) override;

public:
    Ingame();
    virtual ~Ingame();
};

