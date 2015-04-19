
#pragma once

// Seleneの初期化色々
bool InitializeSelene( ICore *pCore , File::IFileManager **ppFileMgr , IGraphicCard	**ppGraphicCard , 
					  Renderer::IRender **ppRender , Scene::ISceneManager **ppSceneMgr , Scene::ICamera **ppCamera , 
					  int screen_width , int screen_height );