/**
* @file Scene.cpp
*/
#include "Scene.h"
#include <iostream>

/**
* コンストラクタ.
*
* @param name scene名.
*/
Scene::Scene(const char* name) : name(name)
{
}

/**
* デストラクタ.
*/
Scene::~Scene()
{
	Finalize();
}

/**
* sceneを活動状態にする
*/
void Scene::Play()
{
	isActive = true;
}

/**
* sceneを停止状態にする.
*/
void Scene::Stop()
{
	isActive = false;
}

/**
* sceneを表示する.
*/
void Scene::Show()
{
	isVisible = true;
}

/**
* sceneを非表示にする.
*/
void Scene::Hide()
{
	isVisible = false;
}

/**
* scene名を取得する.
*
* @return scene名.
*/
const std::string& Scene::Name() const
{
	return name;
}

/**
* シーンの活動状態を調べる.
*
*@retval true	活動している.
*@retval false  停止している.
*/
bool Scene::IsActive() const
{
	return isActive;
}

/**
* シーンの表示状態を調べる.
*
* @retval treu   表示状態.
* @retval false  非表示状態.
*/
bool Scene::IsVisible() const
{
	return isVisible;
}


