#ifndef SATURN_ENGINE_CONFIG_BUILD_SCENE
#define SATURN_ENGINE_CONFIG_BUILD_SCENE

typedef struct _saten_scenemngr { // index 0: uid, index 1: position id
	saten_scene_info root;
	saten_scene_info load;
	saten_scene_info title;
	saten_scene_info intro;
	// SATEN_BUILDER_SCENE_NEXT
} saten_scenemngr;


#endif /* SATURN_ENGINE_CONFIG_BUILD_SCENE */
