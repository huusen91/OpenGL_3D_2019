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
	std::cout << "Scene �R���X�g���N�^: " << name << "\n";
}

/**
* �f�X�g���N�^.
*/
Scene::~Scene()
{
	Finalize();
	std::cout << "Scene �f�X�g���N�^: " << name << "\n";
}

/**
* scene��������Ԃɂ���
*/
void Scene::Play()
{
	isActive = true;
	std::cout << "Scene Play: " << name << "\n";
}

/**
* scene���~��Ԃɂ���.
*/
void Scene::Stop()
{
	isActive = false;
	std::cout << "Scene Stop:" << name << "\n";
}

/**
* scene��\������.
*/
void Scene::Show()
{
	isVisible = true;
	std::cout << "Scene Show: " << name << "\n";
}

/**
* scene���\���ɂ���.
*/
void Scene::Hide()
{
	isVisible = false;
	std::cout << "Scene Hide:" << name << "\n";
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


