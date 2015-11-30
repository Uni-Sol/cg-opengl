CFLAGS = gcc -w --verbose
LDLIBS = -lglfw3 -lGL -lGLU -pthread -lm -lX11 -lXcursor -lXxf86vm -lXrandr -lXinerama -lXi -lXmu -ldl

OBJ_DIR = bin
LIB_DIR = -L/usr/lib
INC_DIR = -I/usr/include

SOURCE = hello-glfw.c
OBJECTS = ${SOURCE:%.c=$(OBJ_DIR)/%.o}
EXECUTABLE = hello

all: init $(OBJECTS) $(EXECUTABLE)

$(EXECUTABLE):
	$(CFLAGS) $(LDFLAGS) $(LIB_DIR) -o $@ $(OBJECTS) $(LDLIBS)

$(OBJ_DIR)/%.o: %.c
	$(CFLAGS) $(INC_DIR) -c $< -o $@

init:
	@mkdir -p "$(OBJ_DIR)"

clean:
	@rm -rf $(OBJ_DIR) $(EXECUTABLE)
