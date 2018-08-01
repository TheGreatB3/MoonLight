#ifndef __MOONLIGHT_VERTEXSHADER_H__
#define __MOONLIGHT_VERTEXSHADER_H__

#include <MoonLight/Base/Shader.h>
#include <MoonLight/Base/VertexInputLayout.h>

namespace ml
{
	class VertexShader : public Shader
	{
	public:
		VertexInputLayout* InputSignature;

		VertexShader();
		virtual bool LoadFromFile(ml::Window& wnd, std::string filename, std::string entry, bool needsCompile = true);
		virtual bool LoadFromMemory(ml::Window& wnd, const char* code, ml::UInt32 codeLen, std::string entry, bool needsCompile = true);
		virtual void Bind();

	private:
		void mCreateInputSignature(ml::Window& wnd, const char* bc, ml::UInt32 bcLen);
	};
}

#endif // __MOONLIGHT_VERTEXSHADER_H__