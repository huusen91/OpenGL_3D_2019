/**
* @file Scene.cpp
*/
#include "Scene.h"
#include <iostream>

/**
* �R���X�g���N�^.
*
* @param name scene��.
*/
Scene::Scene(const char* name) : name(name)
{
}

/**
* �f�X�g���N�^.
*/
Scene::~Scene()
{
	Finalize();
}

/**
* scene��������Ԃɂ���
*/
void Scene::Play()
{
	isActive = true;
}

/**
* scene���~��Ԃɂ���.
*/
void Scene::Stop()
{
	isActive = false;
}

/**
* scene��\������.
*/
void Scene::Show()
{
	isVisible = true;
}

/**
* scene���\���ɂ���.
*/
void Scene::Hide()
{
	isVisible = false;
}

/**
* scene�����擾����.
*
* @return scene��.
*/
const std::string& Scene::Name() const
{
	return name;
}

/**
* �V�[���̊�����Ԃ𒲂ׂ�.
*
*@retval true	�������Ă���.
*@retval false  ��~���Ă���.
*/
bool Scene::IsActive() const
{
	return isActive;
}

/**
* �V�[���̕\����Ԃ𒲂ׂ�.
*
* @retval treu   �\�����.
* @retval false  ��\�����.
*/
bool Scene::IsVisible() const
{
	return isVisible;
}


