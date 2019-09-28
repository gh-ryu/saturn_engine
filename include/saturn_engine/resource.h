#ifndef SATURN_ENGINE_RESOURCE
#define SATURN_ENGINE_RESOURCE

saten_sprite* saten_resource_sprite(saten_scene_info scene, int id);
Mix_Chunk* saten_resource_sfx(saten_scene_info scene, int id);
saten_music* saten_resource_bgm(saten_scene_info scene, int id);
saten_text* saten_resource_text(saten_scene_info scene, int id);
void saten_resource_free(saten_resmngr res);

#endif /* SATURN_ENGINE_RESOURCE */
