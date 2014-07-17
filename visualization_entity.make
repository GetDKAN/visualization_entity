core = 7.x
api = 2

projects[geo_file_entity][subdir] = nucivic
projects[geo_file_entity][download][type] = git
projects[geo_file_entity][download][url] = https://github.com/NuCivic/geo_file_entity.git
projects[geo_file_entity][download][branch] = master

includes[geo_file_entity_make] = https://raw.githubusercontent.com/NuCivic/geo_file_entity/master/geo_file_entity.make 

includes[visualization_entity_choropleth_bundle_make] = modules/visualization_entity_choropleth_bundle/visualization_entity_choropleth_bundle