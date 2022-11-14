#version 130

uniform sampler2D diffuseTex;
uniform sampler2D detailsTex;

in vec3 vVertPos;
in vec4 vVertCol;
in vec2 vDiffuseUV;
in vec2 vDetailsUV;

// SMF_INTENSITY_MULT
const vec4 diffuseMult = vec4(210.0 / 255.0, 210.0 / 255.0, 210.0 / 255.0, 0.5);

out vec4 fragColor;

#define NORM2SNORM(value) (value * 2.0 - 1.0)
#define SNORM2NORM(value) (value * 0.5 + 0.5)

void main() {
	vec4 diffuseCol = texture(diffuseTex, vDiffuseUV) * diffuseMult;
	vec4 detailsCol = texture(detailsTex, vDetailsUV) * 2.0 - 1.0;

	fragColor = (diffuseCol + detailsCol) * vVertCol;
}