#pragma once

// filename's list
std::list<std::string> ShadName = {
    "./Shaders/pink.frag",
    "./Shaders/pink.vert",
    "./Shaders/portal.frag",
    "./Shaders/portal.vert",
    "./Shaders/sky.frag",
    "./Shaders/sky.vert",
    "./Shaders/texture.frag",
    "./Shaders/texture.vert",
    "./Shaders/texture_array.frag",
    "./Shaders/texture_array.vert",
};

// size's list
std::list<int> ShadSize = {
    178,
    156,
    258,
    209,
    496,
    325,
    313,
    320,
    320,
    320,
};

// pink.frag file
unsigned char pink_frag[178] =
{
    0x23, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x20, 0x31, 0x35, 0x30, 0x0D, 0x0A, 0x70, 0x72,
    0x65, 0x63, 0x69, 0x73, 0x69, 0x6F, 0x6E, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6C,
    0x6F, 0x61, 0x74, 0x3B, 0x0D, 0x0A, 0x0D, 0x0A, 0x2F, 0x2F, 0x49, 0x6E, 0x70, 0x75, 0x74, 0x73,
    0x0D, 0x0A, 0x75, 0x6E, 0x69, 0x66, 0x6F, 0x72, 0x6D, 0x20, 0x73, 0x61, 0x6D, 0x70, 0x6C, 0x65,
    0x72, 0x32, 0x44, 0x20, 0x74, 0x65, 0x78, 0x3B, 0x0D, 0x0A, 0x0D, 0x0A, 0x2F, 0x2F, 0x4F, 0x75,
    0x74, 0x70, 0x75, 0x74, 0x73, 0x0D, 0x0A, 0x6F, 0x75, 0x74, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20,
    0x67, 0x6C, 0x5F, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6F, 0x6C, 0x6F, 0x72, 0x3B, 0x0D, 0x0A, 0x0D,
    0x0A, 0x76, 0x6F, 0x69, 0x64, 0x20, 0x6D, 0x61, 0x69, 0x6E, 0x28, 0x76, 0x6F, 0x69, 0x64, 0x29,
    0x20, 0x7B, 0x0D, 0x0A, 0x09, 0x67, 0x6C, 0x5F, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6F, 0x6C, 0x6F,
    0x72, 0x20, 0x3D, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x31, 0x2E, 0x30, 0x2C, 0x20, 0x30, 0x2E,
    0x30, 0x2C, 0x20, 0x31, 0x2E, 0x30, 0x2C, 0x20, 0x31, 0x2E, 0x30, 0x29, 0x3B, 0x0D, 0x0A, 0x7D,
    0x0D, 0x0A,
};

// pink.vert file
unsigned char pink_vert[156] =
{
    0x23, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x20, 0x31, 0x35, 0x30, 0x0D, 0x0A, 0x0D, 0x0A,
    0x2F, 0x2F, 0x47, 0x6C, 0x6F, 0x62, 0x61, 0x6C, 0x73, 0x0D, 0x0A, 0x75, 0x6E, 0x69, 0x66, 0x6F,
    0x72, 0x6D, 0x20, 0x6D, 0x61, 0x74, 0x34, 0x20, 0x6D, 0x76, 0x70, 0x3B, 0x0D, 0x0A, 0x0D, 0x0A,
    0x2F, 0x2F, 0x49, 0x6E, 0x70, 0x75, 0x74, 0x73, 0x0D, 0x0A, 0x69, 0x6E, 0x20, 0x76, 0x65, 0x63,
    0x33, 0x20, 0x69, 0x6E, 0x5F, 0x70, 0x6F, 0x73, 0x3B, 0x0D, 0x0A, 0x69, 0x6E, 0x20, 0x76, 0x65,
    0x63, 0x32, 0x20, 0x69, 0x6E, 0x5F, 0x75, 0x76, 0x3B, 0x0D, 0x0A, 0x0D, 0x0A, 0x76, 0x6F, 0x69,
    0x64, 0x20, 0x6D, 0x61, 0x69, 0x6E, 0x28, 0x76, 0x6F, 0x69, 0x64, 0x29, 0x20, 0x7B, 0x0D, 0x0A,
    0x09, 0x67, 0x6C, 0x5F, 0x50, 0x6F, 0x73, 0x69, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x3D, 0x20, 0x6D,
    0x76, 0x70, 0x20, 0x2A, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x69, 0x6E, 0x5F, 0x70, 0x6F, 0x73,
    0x2C, 0x20, 0x31, 0x2E, 0x30, 0x29, 0x3B, 0x0D, 0x0A, 0x7D, 0x0D, 0x0A,
};

// portal.frag file
unsigned char portal_frag[258] =
{
    0x23, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x20, 0x31, 0x35, 0x30, 0x0D, 0x0A, 0x70, 0x72,
    0x65, 0x63, 0x69, 0x73, 0x69, 0x6F, 0x6E, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6C,
    0x6F, 0x61, 0x74, 0x3B, 0x0D, 0x0A, 0x0D, 0x0A, 0x2F, 0x2F, 0x49, 0x6E, 0x70, 0x75, 0x74, 0x73,
    0x0D, 0x0A, 0x75, 0x6E, 0x69, 0x66, 0x6F, 0x72, 0x6D, 0x20, 0x73, 0x61, 0x6D, 0x70, 0x6C, 0x65,
    0x72, 0x32, 0x44, 0x20, 0x74, 0x65, 0x78, 0x3B, 0x0D, 0x0A, 0x69, 0x6E, 0x20, 0x76, 0x65, 0x63,
    0x34, 0x20, 0x65, 0x78, 0x5F, 0x75, 0x76, 0x3B, 0x0D, 0x0A, 0x0D, 0x0A, 0x2F, 0x2F, 0x4F, 0x75,
    0x74, 0x70, 0x75, 0x74, 0x73, 0x0D, 0x0A, 0x6F, 0x75, 0x74, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20,
    0x67, 0x6C, 0x5F, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6F, 0x6C, 0x6F, 0x72, 0x3B, 0x0D, 0x0A, 0x0D,
    0x0A, 0x76, 0x6F, 0x69, 0x64, 0x20, 0x6D, 0x61, 0x69, 0x6E, 0x28, 0x76, 0x6F, 0x69, 0x64, 0x29,
    0x20, 0x7B, 0x0D, 0x0A, 0x09, 0x76, 0x65, 0x63, 0x32, 0x20, 0x75, 0x76, 0x20, 0x3D, 0x20, 0x28,
    0x65, 0x78, 0x5F, 0x75, 0x76, 0x2E, 0x78, 0x79, 0x20, 0x2F, 0x20, 0x65, 0x78, 0x5F, 0x75, 0x76,
    0x2E, 0x77, 0x29, 0x3B, 0x0D, 0x0A, 0x09, 0x75, 0x76, 0x20, 0x3D, 0x20, 0x75, 0x76, 0x2A, 0x30,
    0x2E, 0x35, 0x20, 0x2B, 0x20, 0x30, 0x2E, 0x35, 0x3B, 0x0D, 0x0A, 0x09, 0x67, 0x6C, 0x5F, 0x46,
    0x72, 0x61, 0x67, 0x43, 0x6F, 0x6C, 0x6F, 0x72, 0x20, 0x3D, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28,
    0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x28, 0x74, 0x65, 0x78, 0x2C, 0x20, 0x75,
    0x76, 0x29, 0x2E, 0x72, 0x67, 0x62, 0x2C, 0x20, 0x31, 0x2E, 0x30, 0x29, 0x3B, 0x0D, 0x0A, 0x7D,
    0x0D, 0x0A,
};

// portal.vert file
unsigned char portal_vert[209] =
{
    0x23, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x20, 0x31, 0x35, 0x30, 0x0D, 0x0A, 0x0D, 0x0A,
    0x2F, 0x2F, 0x47, 0x6C, 0x6F, 0x62, 0x61, 0x6C, 0x73, 0x0D, 0x0A, 0x75, 0x6E, 0x69, 0x66, 0x6F,
    0x72, 0x6D, 0x20, 0x6D, 0x61, 0x74, 0x34, 0x20, 0x6D, 0x76, 0x70, 0x3B, 0x0D, 0x0A, 0x0D, 0x0A,
    0x2F, 0x2F, 0x49, 0x6E, 0x70, 0x75, 0x74, 0x73, 0x0D, 0x0A, 0x69, 0x6E, 0x20, 0x76, 0x65, 0x63,
    0x33, 0x20, 0x69, 0x6E, 0x5F, 0x70, 0x6F, 0x73, 0x3B, 0x0D, 0x0A, 0x69, 0x6E, 0x20, 0x76, 0x65,
    0x63, 0x32, 0x20, 0x69, 0x6E, 0x5F, 0x75, 0x76, 0x3B, 0x0D, 0x0A, 0x0D, 0x0A, 0x2F, 0x2F, 0x4F,
    0x75, 0x74, 0x70, 0x75, 0x74, 0x73, 0x0D, 0x0A, 0x6F, 0x75, 0x74, 0x20, 0x76, 0x65, 0x63, 0x34,
    0x20, 0x65, 0x78, 0x5F, 0x75, 0x76, 0x3B, 0x0D, 0x0A, 0x0D, 0x0A, 0x76, 0x6F, 0x69, 0x64, 0x20,
    0x6D, 0x61, 0x69, 0x6E, 0x28, 0x76, 0x6F, 0x69, 0x64, 0x29, 0x20, 0x7B, 0x0D, 0x0A, 0x09, 0x67,
    0x6C, 0x5F, 0x50, 0x6F, 0x73, 0x69, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x3D, 0x20, 0x6D, 0x76, 0x70,
    0x20, 0x2A, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x69, 0x6E, 0x5F, 0x70, 0x6F, 0x73, 0x2C, 0x20,
    0x31, 0x2E, 0x30, 0x29, 0x3B, 0x0D, 0x0A, 0x09, 0x65, 0x78, 0x5F, 0x75, 0x76, 0x20, 0x3D, 0x20,
    0x67, 0x6C, 0x5F, 0x50, 0x6F, 0x73, 0x69, 0x74, 0x69, 0x6F, 0x6E, 0x3B, 0x0D, 0x0A, 0x7D, 0x0D,
    0x0A,
};

// sky.frag file
unsigned char sky_frag[496] =
{
    0x23, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x20, 0x31, 0x35, 0x30, 0x0D, 0x0A, 0x70, 0x72,
    0x65, 0x63, 0x69, 0x73, 0x69, 0x6F, 0x6E, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6C,
    0x6F, 0x61, 0x74, 0x3B, 0x0D, 0x0A, 0x0D, 0x0A, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6E, 0x65, 0x20,
    0x4C, 0x49, 0x47, 0x48, 0x54, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x30, 0x2E, 0x33, 0x36, 0x2C,
    0x20, 0x30, 0x2E, 0x38, 0x30, 0x2C, 0x20, 0x30, 0x2E, 0x34, 0x38, 0x29, 0x0D, 0x0A, 0x23, 0x64,
    0x65, 0x66, 0x69, 0x6E, 0x65, 0x20, 0x53, 0x55, 0x4E, 0x5F, 0x53, 0x49, 0x5A, 0x45, 0x20, 0x30,
    0x2E, 0x30, 0x30, 0x32, 0x0D, 0x0A, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6E, 0x65, 0x20, 0x53, 0x55,
    0x4E, 0x5F, 0x53, 0x48, 0x41, 0x52, 0x50, 0x4E, 0x45, 0x53, 0x53, 0x20, 0x31, 0x2E, 0x30, 0x0D,
    0x0A, 0x0D, 0x0A, 0x2F, 0x2F, 0x49, 0x6E, 0x70, 0x75, 0x74, 0x73, 0x0D, 0x0A, 0x69, 0x6E, 0x20,
    0x76, 0x65, 0x63, 0x33, 0x20, 0x65, 0x78, 0x5F, 0x6E, 0x6F, 0x72, 0x6D, 0x61, 0x6C, 0x3B, 0x0D,
    0x0A, 0x0D, 0x0A, 0x2F, 0x2F, 0x4F, 0x75, 0x74, 0x70, 0x75, 0x74, 0x73, 0x0D, 0x0A, 0x6F, 0x75,
    0x74, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x67, 0x6C, 0x5F, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6F,
    0x6C, 0x6F, 0x72, 0x3B, 0x0D, 0x0A, 0x0D, 0x0A, 0x76, 0x6F, 0x69, 0x64, 0x20, 0x6D, 0x61, 0x69,
    0x6E, 0x28, 0x76, 0x6F, 0x69, 0x64, 0x29, 0x20, 0x7B, 0x0D, 0x0A, 0x09, 0x76, 0x65, 0x63, 0x33,
    0x20, 0x6E, 0x20, 0x3D, 0x20, 0x6E, 0x6F, 0x72, 0x6D, 0x61, 0x6C, 0x69, 0x7A, 0x65, 0x28, 0x65,
    0x78, 0x5F, 0x6E, 0x6F, 0x72, 0x6D, 0x61, 0x6C, 0x29, 0x3B, 0x0D, 0x0A, 0x0D, 0x0A, 0x09, 0x66,
    0x6C, 0x6F, 0x61, 0x74, 0x20, 0x68, 0x20, 0x3D, 0x20, 0x28, 0x31, 0x2E, 0x30, 0x20, 0x2D, 0x20,
    0x6E, 0x2E, 0x79, 0x29, 0x20, 0x2A, 0x20, 0x28, 0x31, 0x2E, 0x30, 0x20, 0x2D, 0x20, 0x6E, 0x2E,
    0x79, 0x29, 0x20, 0x2A, 0x20, 0x30, 0x2E, 0x35, 0x3B, 0x0D, 0x0A, 0x09, 0x76, 0x65, 0x63, 0x33,
    0x20, 0x73, 0x6B, 0x79, 0x20, 0x3D, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x30, 0x2E, 0x32, 0x20,
    0x2B, 0x20, 0x68, 0x2C, 0x20, 0x30, 0x2E, 0x35, 0x20, 0x2B, 0x20, 0x68, 0x2C, 0x20, 0x31, 0x2E,
    0x30, 0x29, 0x3B, 0x0D, 0x0A, 0x09, 0x0D, 0x0A, 0x09, 0x66, 0x6C, 0x6F, 0x61, 0x74, 0x20, 0x73,
    0x20, 0x3D, 0x20, 0x64, 0x6F, 0x74, 0x28, 0x6E, 0x2C, 0x20, 0x4C, 0x49, 0x47, 0x48, 0x54, 0x29,
    0x20, 0x2D, 0x20, 0x31, 0x2E, 0x30, 0x20, 0x2B, 0x20, 0x53, 0x55, 0x4E, 0x5F, 0x53, 0x49, 0x5A,
    0x45, 0x3B, 0x0D, 0x0A, 0x09, 0x66, 0x6C, 0x6F, 0x61, 0x74, 0x20, 0x73, 0x75, 0x6E, 0x20, 0x3D,
    0x20, 0x6D, 0x69, 0x6E, 0x28, 0x65, 0x78, 0x70, 0x28, 0x73, 0x20, 0x2A, 0x20, 0x53, 0x55, 0x4E,
    0x5F, 0x53, 0x48, 0x41, 0x52, 0x50, 0x4E, 0x45, 0x53, 0x53, 0x20, 0x2F, 0x20, 0x53, 0x55, 0x4E,
    0x5F, 0x53, 0x49, 0x5A, 0x45, 0x29, 0x2C, 0x20, 0x31, 0x2E, 0x30, 0x29, 0x3B, 0x0D, 0x0A, 0x09,
    0x0D, 0x0A, 0x09, 0x67, 0x6C, 0x5F, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6F, 0x6C, 0x6F, 0x72, 0x20,
    0x3D, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x6D, 0x61, 0x78, 0x28, 0x73, 0x6B, 0x79, 0x2C, 0x20,
    0x73, 0x75, 0x6E, 0x29, 0x2C, 0x20, 0x31, 0x2E, 0x30, 0x29, 0x3B, 0x0D, 0x0A, 0x7D, 0x0D, 0x0A,
};

// sky.vert file
unsigned char sky_vert[325] =
{
    0x23, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x20, 0x31, 0x35, 0x30, 0x0D, 0x0A, 0x0D, 0x0A,
    0x2F, 0x2F, 0x47, 0x6C, 0x6F, 0x62, 0x61, 0x6C, 0x73, 0x0D, 0x0A, 0x75, 0x6E, 0x69, 0x66, 0x6F,
    0x72, 0x6D, 0x20, 0x6D, 0x61, 0x74, 0x34, 0x20, 0x6D, 0x76, 0x70, 0x3B, 0x0D, 0x0A, 0x75, 0x6E,
    0x69, 0x66, 0x6F, 0x72, 0x6D, 0x20, 0x6D, 0x61, 0x74, 0x34, 0x20, 0x6D, 0x76, 0x3B, 0x0D, 0x0A,
    0x0D, 0x0A, 0x2F, 0x2F, 0x49, 0x6E, 0x70, 0x75, 0x74, 0x73, 0x0D, 0x0A, 0x69, 0x6E, 0x20, 0x76,
    0x65, 0x63, 0x33, 0x20, 0x69, 0x6E, 0x5F, 0x70, 0x6F, 0x73, 0x3B, 0x0D, 0x0A, 0x69, 0x6E, 0x20,
    0x76, 0x65, 0x63, 0x32, 0x20, 0x69, 0x6E, 0x5F, 0x75, 0x76, 0x3B, 0x0D, 0x0A, 0x0D, 0x0A, 0x2F,
    0x2F, 0x4F, 0x75, 0x74, 0x70, 0x75, 0x74, 0x73, 0x0D, 0x0A, 0x6F, 0x75, 0x74, 0x20, 0x76, 0x65,
    0x63, 0x33, 0x20, 0x65, 0x78, 0x5F, 0x6E, 0x6F, 0x72, 0x6D, 0x61, 0x6C, 0x3B, 0x0D, 0x0A, 0x0D,
    0x0A, 0x76, 0x6F, 0x69, 0x64, 0x20, 0x6D, 0x61, 0x69, 0x6E, 0x28, 0x76, 0x6F, 0x69, 0x64, 0x29,
    0x20, 0x7B, 0x0D, 0x0A, 0x09, 0x67, 0x6C, 0x5F, 0x50, 0x6F, 0x73, 0x69, 0x74, 0x69, 0x6F, 0x6E,
    0x20, 0x3D, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x69, 0x6E, 0x5F, 0x70, 0x6F, 0x73, 0x2E, 0x78,
    0x79, 0x2C, 0x20, 0x30, 0x2E, 0x30, 0x2C, 0x20, 0x31, 0x2E, 0x30, 0x29, 0x3B, 0x0D, 0x0A, 0x09,
    0x76, 0x65, 0x63, 0x33, 0x20, 0x65, 0x79, 0x65, 0x5F, 0x6E, 0x6F, 0x72, 0x6D, 0x61, 0x6C, 0x20,
    0x3D, 0x20, 0x6E, 0x6F, 0x72, 0x6D, 0x61, 0x6C, 0x69, 0x7A, 0x65, 0x28, 0x28, 0x6D, 0x76, 0x70,
    0x20, 0x2A, 0x20, 0x67, 0x6C, 0x5F, 0x50, 0x6F, 0x73, 0x69, 0x74, 0x69, 0x6F, 0x6E, 0x29, 0x2E,
    0x78, 0x79, 0x7A, 0x29, 0x3B, 0x0D, 0x0A, 0x09, 0x65, 0x78, 0x5F, 0x6E, 0x6F, 0x72, 0x6D, 0x61,
    0x6C, 0x20, 0x3D, 0x20, 0x6E, 0x6F, 0x72, 0x6D, 0x61, 0x6C, 0x69, 0x7A, 0x65, 0x28, 0x28, 0x6D,
    0x76, 0x20, 0x2A, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x65, 0x79, 0x65, 0x5F, 0x6E, 0x6F, 0x72,
    0x6D, 0x61, 0x6C, 0x2C, 0x20, 0x30, 0x2E, 0x30, 0x29, 0x29, 0x2E, 0x78, 0x79, 0x7A, 0x29, 0x3B,
    0x0D, 0x0A, 0x7D, 0x0D, 0x0A,
};

// texture.frag file
unsigned char texture_frag[313] =
{
    0x23, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x20, 0x31, 0x35, 0x30, 0x0D, 0x0A, 0x70, 0x72,
    0x65, 0x63, 0x69, 0x73, 0x69, 0x6F, 0x6E, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6C,
    0x6F, 0x61, 0x74, 0x3B, 0x0D, 0x0A, 0x0D, 0x0A, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6E, 0x65, 0x20,
    0x4C, 0x49, 0x47, 0x48, 0x54, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x30, 0x2E, 0x33, 0x36, 0x2C,
    0x20, 0x30, 0x2E, 0x38, 0x30, 0x2C, 0x20, 0x30, 0x2E, 0x34, 0x38, 0x29, 0x0D, 0x0A, 0x0D, 0x0A,
    0x2F, 0x2F, 0x49, 0x6E, 0x70, 0x75, 0x74, 0x73, 0x0D, 0x0A, 0x75, 0x6E, 0x69, 0x66, 0x6F, 0x72,
    0x6D, 0x20, 0x73, 0x61, 0x6D, 0x70, 0x6C, 0x65, 0x72, 0x32, 0x44, 0x20, 0x74, 0x65, 0x78, 0x3B,
    0x0D, 0x0A, 0x69, 0x6E, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x65, 0x78, 0x5F, 0x75, 0x76, 0x3B,
    0x0D, 0x0A, 0x69, 0x6E, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x65, 0x78, 0x5F, 0x6E, 0x6F, 0x72,
    0x6D, 0x61, 0x6C, 0x3B, 0x0D, 0x0A, 0x0D, 0x0A, 0x2F, 0x2F, 0x4F, 0x75, 0x74, 0x70, 0x75, 0x74,
    0x73, 0x0D, 0x0A, 0x6F, 0x75, 0x74, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x67, 0x6C, 0x5F, 0x46,
    0x72, 0x61, 0x67, 0x43, 0x6F, 0x6C, 0x6F, 0x72, 0x3B, 0x0D, 0x0A, 0x0D, 0x0A, 0x76, 0x6F, 0x69,
    0x64, 0x20, 0x6D, 0x61, 0x69, 0x6E, 0x28, 0x76, 0x6F, 0x69, 0x64, 0x29, 0x20, 0x7B, 0x0D, 0x0A,
    0x09, 0x66, 0x6C, 0x6F, 0x61, 0x74, 0x20, 0x73, 0x20, 0x3D, 0x20, 0x64, 0x6F, 0x74, 0x28, 0x65,
    0x78, 0x5F, 0x6E, 0x6F, 0x72, 0x6D, 0x61, 0x6C, 0x2C, 0x20, 0x4C, 0x49, 0x47, 0x48, 0x54, 0x29,
    0x2A, 0x30, 0x2E, 0x35, 0x20, 0x2B, 0x20, 0x30, 0x2E, 0x35, 0x3B, 0x0D, 0x0A, 0x09, 0x67, 0x6C,
    0x5F, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6F, 0x6C, 0x6F, 0x72, 0x20, 0x3D, 0x20, 0x76, 0x65, 0x63,
    0x34, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x28, 0x74, 0x65, 0x78, 0x2C, 0x20, 0x65,
    0x78, 0x5F, 0x75, 0x76, 0x29, 0x2E, 0x72, 0x67, 0x62, 0x20, 0x2A, 0x20, 0x73, 0x2C, 0x20, 0x31,
    0x2E, 0x30, 0x29, 0x3B, 0x0D, 0x0A, 0x7D, 0x0D, 0x0A,
};

// texture.vert file
unsigned char texture_vert[320] =
{
    0x23, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x20, 0x31, 0x35, 0x30, 0x0D, 0x0A, 0x0D, 0x0A,
    0x2F, 0x2F, 0x47, 0x6C, 0x6F, 0x62, 0x61, 0x6C, 0x73, 0x0D, 0x0A, 0x75, 0x6E, 0x69, 0x66, 0x6F,
    0x72, 0x6D, 0x20, 0x6D, 0x61, 0x74, 0x34, 0x20, 0x6D, 0x76, 0x70, 0x3B, 0x0D, 0x0A, 0x75, 0x6E,
    0x69, 0x66, 0x6F, 0x72, 0x6D, 0x20, 0x6D, 0x61, 0x74, 0x34, 0x20, 0x6D, 0x76, 0x3B, 0x0D, 0x0A,
    0x0D, 0x0A, 0x2F, 0x2F, 0x49, 0x6E, 0x70, 0x75, 0x74, 0x73, 0x0D, 0x0A, 0x69, 0x6E, 0x20, 0x76,
    0x65, 0x63, 0x33, 0x20, 0x69, 0x6E, 0x5F, 0x70, 0x6F, 0x73, 0x3B, 0x0D, 0x0A, 0x69, 0x6E, 0x20,
    0x76, 0x65, 0x63, 0x32, 0x20, 0x69, 0x6E, 0x5F, 0x75, 0x76, 0x3B, 0x0D, 0x0A, 0x69, 0x6E, 0x20,
    0x76, 0x65, 0x63, 0x33, 0x20, 0x69, 0x6E, 0x5F, 0x6E, 0x6F, 0x72, 0x6D, 0x61, 0x6C, 0x3B, 0x0D,
    0x0A, 0x0D, 0x0A, 0x2F, 0x2F, 0x4F, 0x75, 0x74, 0x70, 0x75, 0x74, 0x73, 0x0D, 0x0A, 0x6F, 0x75,
    0x74, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x65, 0x78, 0x5F, 0x75, 0x76, 0x3B, 0x0D, 0x0A, 0x6F,
    0x75, 0x74, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x65, 0x78, 0x5F, 0x6E, 0x6F, 0x72, 0x6D, 0x61,
    0x6C, 0x3B, 0x0D, 0x0A, 0x0D, 0x0A, 0x76, 0x6F, 0x69, 0x64, 0x20, 0x6D, 0x61, 0x69, 0x6E, 0x28,
    0x76, 0x6F, 0x69, 0x64, 0x29, 0x20, 0x7B, 0x0D, 0x0A, 0x09, 0x67, 0x6C, 0x5F, 0x50, 0x6F, 0x73,
    0x69, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x3D, 0x20, 0x6D, 0x76, 0x70, 0x20, 0x2A, 0x20, 0x76, 0x65,
    0x63, 0x34, 0x28, 0x69, 0x6E, 0x5F, 0x70, 0x6F, 0x73, 0x2C, 0x20, 0x31, 0x2E, 0x30, 0x29, 0x3B,
    0x0D, 0x0A, 0x09, 0x65, 0x78, 0x5F, 0x75, 0x76, 0x20, 0x3D, 0x20, 0x69, 0x6E, 0x5F, 0x75, 0x76,
    0x3B, 0x0D, 0x0A, 0x09, 0x65, 0x78, 0x5F, 0x6E, 0x6F, 0x72, 0x6D, 0x61, 0x6C, 0x20, 0x3D, 0x20,
    0x6E, 0x6F, 0x72, 0x6D, 0x61, 0x6C, 0x69, 0x7A, 0x65, 0x28, 0x28, 0x6D, 0x76, 0x20, 0x2A, 0x20,
    0x76, 0x65, 0x63, 0x34, 0x28, 0x69, 0x6E, 0x5F, 0x6E, 0x6F, 0x72, 0x6D, 0x61, 0x6C, 0x2C, 0x20,
    0x30, 0x2E, 0x30, 0x29, 0x29, 0x2E, 0x78, 0x79, 0x7A, 0x29, 0x3B, 0x0D, 0x0A, 0x7D, 0x0D, 0x0A,
};

// texture_array.frag file
unsigned char texture_array_frag[320] =
{
    0x23, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x20, 0x31, 0x35, 0x30, 0x0D, 0x0A, 0x70, 0x72,
    0x65, 0x63, 0x69, 0x73, 0x69, 0x6F, 0x6E, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6C,
    0x6F, 0x61, 0x74, 0x3B, 0x0D, 0x0A, 0x0D, 0x0A, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6E, 0x65, 0x20,
    0x4C, 0x49, 0x47, 0x48, 0x54, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x30, 0x2E, 0x33, 0x36, 0x2C,
    0x20, 0x30, 0x2E, 0x38, 0x30, 0x2C, 0x20, 0x30, 0x2E, 0x34, 0x38, 0x29, 0x0D, 0x0A, 0x0D, 0x0A,
    0x2F, 0x2F, 0x49, 0x6E, 0x70, 0x75, 0x74, 0x73, 0x0D, 0x0A, 0x75, 0x6E, 0x69, 0x66, 0x6F, 0x72,
    0x6D, 0x20, 0x73, 0x61, 0x6D, 0x70, 0x6C, 0x65, 0x72, 0x32, 0x44, 0x41, 0x72, 0x72, 0x61, 0x79,
    0x20, 0x74, 0x65, 0x78, 0x3B, 0x0D, 0x0A, 0x69, 0x6E, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x65,
    0x78, 0x5F, 0x75, 0x76, 0x3B, 0x0D, 0x0A, 0x69, 0x6E, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x65,
    0x78, 0x5F, 0x6E, 0x6F, 0x72, 0x6D, 0x61, 0x6C, 0x3B, 0x0D, 0x0A, 0x0D, 0x0A, 0x2F, 0x2F, 0x4F,
    0x75, 0x74, 0x70, 0x75, 0x74, 0x73, 0x0D, 0x0A, 0x6F, 0x75, 0x74, 0x20, 0x76, 0x65, 0x63, 0x34,
    0x20, 0x67, 0x6C, 0x5F, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6F, 0x6C, 0x6F, 0x72, 0x3B, 0x0D, 0x0A,
    0x0D, 0x0A, 0x76, 0x6F, 0x69, 0x64, 0x20, 0x6D, 0x61, 0x69, 0x6E, 0x28, 0x76, 0x6F, 0x69, 0x64,
    0x29, 0x20, 0x7B, 0x0D, 0x0A, 0x09, 0x66, 0x6C, 0x6F, 0x61, 0x74, 0x20, 0x73, 0x20, 0x3D, 0x20,
    0x64, 0x6F, 0x74, 0x28, 0x65, 0x78, 0x5F, 0x6E, 0x6F, 0x72, 0x6D, 0x61, 0x6C, 0x2C, 0x20, 0x4C,
    0x49, 0x47, 0x48, 0x54, 0x29, 0x2A, 0x30, 0x2E, 0x32, 0x35, 0x20, 0x2B, 0x20, 0x30, 0x2E, 0x37,
    0x35, 0x3B, 0x0D, 0x0A, 0x09, 0x67, 0x6C, 0x5F, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6F, 0x6C, 0x6F,
    0x72, 0x20, 0x3D, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65,
    0x28, 0x74, 0x65, 0x78, 0x2C, 0x20, 0x65, 0x78, 0x5F, 0x75, 0x76, 0x29, 0x2E, 0x72, 0x67, 0x62,
    0x20, 0x2A, 0x20, 0x73, 0x2C, 0x20, 0x31, 0x2E, 0x30, 0x29, 0x3B, 0x0D, 0x0A, 0x7D, 0x0D, 0x0A,
};

// texture_array.vert file
unsigned char texture_array_vert[320] =
{
    0x23, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x20, 0x31, 0x35, 0x30, 0x0D, 0x0A, 0x0D, 0x0A,
    0x2F, 0x2F, 0x47, 0x6C, 0x6F, 0x62, 0x61, 0x6C, 0x73, 0x0D, 0x0A, 0x75, 0x6E, 0x69, 0x66, 0x6F,
    0x72, 0x6D, 0x20, 0x6D, 0x61, 0x74, 0x34, 0x20, 0x6D, 0x76, 0x70, 0x3B, 0x0D, 0x0A, 0x75, 0x6E,
    0x69, 0x66, 0x6F, 0x72, 0x6D, 0x20, 0x6D, 0x61, 0x74, 0x34, 0x20, 0x6D, 0x76, 0x3B, 0x0D, 0x0A,
    0x0D, 0x0A, 0x2F, 0x2F, 0x49, 0x6E, 0x70, 0x75, 0x74, 0x73, 0x0D, 0x0A, 0x69, 0x6E, 0x20, 0x76,
    0x65, 0x63, 0x33, 0x20, 0x69, 0x6E, 0x5F, 0x70, 0x6F, 0x73, 0x3B, 0x0D, 0x0A, 0x69, 0x6E, 0x20,
    0x76, 0x65, 0x63, 0x33, 0x20, 0x69, 0x6E, 0x5F, 0x75, 0x76, 0x3B, 0x0D, 0x0A, 0x69, 0x6E, 0x20,
    0x76, 0x65, 0x63, 0x33, 0x20, 0x69, 0x6E, 0x5F, 0x6E, 0x6F, 0x72, 0x6D, 0x61, 0x6C, 0x3B, 0x0D,
    0x0A, 0x0D, 0x0A, 0x2F, 0x2F, 0x4F, 0x75, 0x74, 0x70, 0x75, 0x74, 0x73, 0x0D, 0x0A, 0x6F, 0x75,
    0x74, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x65, 0x78, 0x5F, 0x75, 0x76, 0x3B, 0x0D, 0x0A, 0x6F,
    0x75, 0x74, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x65, 0x78, 0x5F, 0x6E, 0x6F, 0x72, 0x6D, 0x61,
    0x6C, 0x3B, 0x0D, 0x0A, 0x0D, 0x0A, 0x76, 0x6F, 0x69, 0x64, 0x20, 0x6D, 0x61, 0x69, 0x6E, 0x28,
    0x76, 0x6F, 0x69, 0x64, 0x29, 0x20, 0x7B, 0x0D, 0x0A, 0x09, 0x67, 0x6C, 0x5F, 0x50, 0x6F, 0x73,
    0x69, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x3D, 0x20, 0x6D, 0x76, 0x70, 0x20, 0x2A, 0x20, 0x76, 0x65,
    0x63, 0x34, 0x28, 0x69, 0x6E, 0x5F, 0x70, 0x6F, 0x73, 0x2C, 0x20, 0x31, 0x2E, 0x30, 0x29, 0x3B,
    0x0D, 0x0A, 0x09, 0x65, 0x78, 0x5F, 0x75, 0x76, 0x20, 0x3D, 0x20, 0x69, 0x6E, 0x5F, 0x75, 0x76,
    0x3B, 0x0D, 0x0A, 0x09, 0x65, 0x78, 0x5F, 0x6E, 0x6F, 0x72, 0x6D, 0x61, 0x6C, 0x20, 0x3D, 0x20,
    0x6E, 0x6F, 0x72, 0x6D, 0x61, 0x6C, 0x69, 0x7A, 0x65, 0x28, 0x28, 0x6D, 0x76, 0x20, 0x2A, 0x20,
    0x76, 0x65, 0x63, 0x34, 0x28, 0x69, 0x6E, 0x5F, 0x6E, 0x6F, 0x72, 0x6D, 0x61, 0x6C, 0x2C, 0x20,
    0x30, 0x2E, 0x30, 0x29, 0x29, 0x2E, 0x78, 0x79, 0x7A, 0x29, 0x3B, 0x0D, 0x0A, 0x7D, 0x0D, 0x0A,
};
