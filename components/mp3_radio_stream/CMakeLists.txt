# set(COMPONENT_SRCS "mp3_radio_stream.c")
# set(COMPONENT_ADD_INCLUDEDIRS "." "init_i2s")




# register_component()

idf_component_register(SRCS "mp3_radio_stream.c"
INCLUDE_DIRS "."
REQUIRES main
)