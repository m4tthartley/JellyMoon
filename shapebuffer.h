#ifdef _WIN32
	#include <glew.h>
#elif __APPLE__
	#include <OpenGL/gl.h>
#endif

#ifdef _WIN32
	#include <lua.hpp>
#elif __APPLE__
	extern "C" {
		#include <Lua/lua.h>
		#include <Lua/lualib.h>
		#include <Lua/lauxlib.h>
	}
#endif

class ShapeBuffer {
	
	GLuint vbo;
	GLuint ibo;
	
	ShapeBuffer (GLuint vertexBuffer, GLuint indexBuffer);
	ShapeBuffer (double width, double height);
	
	void render (GLuint shader, double x, double y, double z, double angle);
	
public:
	
	// Lua
	static int lua_shapeBuffer (lua_State* l);
	static int lua_renderShapeBuffer (lua_State* l);
	
};