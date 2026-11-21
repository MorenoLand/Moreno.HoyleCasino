#include "protos.h"

void f_00684180(void) /* sub_684180 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684180);
    /* 00684180: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00684184: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684186: je 0x68418f */ if (fZ) goto L_0068418f;
L_00684188:; BB(0x00684188);
    /* 00684188: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684189: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x68418eu); f_00687300();
    /* 0068418e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0068418f:; BB(0x0068418f);
    /* 0068418f: ret  */ FN_RET(0x00684180); r_esp += 4; return;
}

void f_00684190(void) /* alGenBuffers */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684190);
    /* 00684190: jmp dword ptr [0x6b231c] */ { u32 t = R32((u32)(0x6b231cu)); call_ind(t); return; }
}

void f_00684196(void) /* alGenSources */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684196);
    /* 00684196: jmp dword ptr [0x6b2320] */ { u32 t = R32((u32)(0x6b2320u)); call_ind(t); return; }
}

void f_0068419c(void) /* alGetError */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068419c);
    /* 0068419c: jmp dword ptr [0x6b2324] */ { u32 t = R32((u32)(0x6b2324u)); call_ind(t); return; }
}

void f_006841a2(void) /* alDeleteSources */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006841a2);
    /* 006841a2: jmp dword ptr [0x6b2328] */ { u32 t = R32((u32)(0x6b2328u)); call_ind(t); return; }
}

void f_006841a8(void) /* alDeleteBuffers */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006841a8);
    /* 006841a8: jmp dword ptr [0x6b232c] */ { u32 t = R32((u32)(0x6b232cu)); call_ind(t); return; }
}

void f_006841ae(void) /* alSourcei */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006841ae);
    /* 006841ae: jmp dword ptr [0x6b2330] */ { u32 t = R32((u32)(0x6b2330u)); call_ind(t); return; }
}

void f_006841b4(void) /* alListenerfv */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006841b4);
    /* 006841b4: jmp dword ptr [0x6b2334] */ { u32 t = R32((u32)(0x6b2334u)); call_ind(t); return; }
}

void f_006841ba(void) /* alGetListenerfv */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006841ba);
    /* 006841ba: jmp dword ptr [0x6b2338] */ { u32 t = R32((u32)(0x6b2338u)); call_ind(t); return; }
}

void f_006841c0(void) /* alSourcef */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006841c0);
    /* 006841c0: jmp dword ptr [0x6b233c] */ { u32 t = R32((u32)(0x6b233cu)); call_ind(t); return; }
}

void f_006841c6(void) /* alSourcefv */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006841c6);
    /* 006841c6: jmp dword ptr [0x6b2340] */ { u32 t = R32((u32)(0x6b2340u)); call_ind(t); return; }
}

void f_006841cc(void) /* alGetSourcei */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006841cc);
    /* 006841cc: jmp dword ptr [0x6b2344] */ { u32 t = R32((u32)(0x6b2344u)); call_ind(t); return; }
}

void f_006841d2(void) /* alSourceRewind */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006841d2);
    /* 006841d2: jmp dword ptr [0x6b2348] */ { u32 t = R32((u32)(0x6b2348u)); call_ind(t); return; }
}

void f_006841d8(void) /* alSourceStop */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006841d8);
    /* 006841d8: jmp dword ptr [0x6b234c] */ { u32 t = R32((u32)(0x6b234cu)); call_ind(t); return; }
}

void f_006841de(void) /* alSourcePlay */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006841de);
    /* 006841de: jmp dword ptr [0x6b2350] */ { u32 t = R32((u32)(0x6b2350u)); call_ind(t); return; }
}

void f_006841e4(void) /* alGetBufferi */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006841e4);
    /* 006841e4: jmp dword ptr [0x6b2354] */ { u32 t = R32((u32)(0x6b2354u)); call_ind(t); return; }
}

void f_006841ea(void) /* alBufferData */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006841ea);
    /* 006841ea: jmp dword ptr [0x6b2358] */ { u32 t = R32((u32)(0x6b2358u)); call_ind(t); return; }
}

void f_006841f0(void) /* alSourcePause */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006841f0);
    /* 006841f0: jmp dword ptr [0x6b235c] */ { u32 t = R32((u32)(0x6b235cu)); call_ind(t); return; }
}

void f_006841f6(void) /* alSource3f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006841f6);
    /* 006841f6: jmp dword ptr [0x6b2360] */ { u32 t = R32((u32)(0x6b2360u)); call_ind(t); return; }
}

void f_006841fc(void) /* alSourceQueueBuffers */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006841fc);
    /* 006841fc: jmp dword ptr [0x6b2364] */ { u32 t = R32((u32)(0x6b2364u)); call_ind(t); return; }
}

void f_00684202(void) /* alSourceUnqueueBuffers */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684202);
    /* 00684202: jmp dword ptr [0x6b238c] */ { u32 t = R32((u32)(0x6b238cu)); call_ind(t); return; }
}

void f_00684208(void) /* alGetString */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684208);
    /* 00684208: jmp dword ptr [0x6b2388] */ { u32 t = R32((u32)(0x6b2388u)); call_ind(t); return; }
}

void f_0068420e(void) /* alGetSourcef */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068420e);
    /* 0068420e: jmp dword ptr [0x6b2384] */ { u32 t = R32((u32)(0x6b2384u)); call_ind(t); return; }
}

void f_00684214(void) /* alcMakeContextCurrent */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684214);
    /* 00684214: jmp dword ptr [0x6b2380] */ { u32 t = R32((u32)(0x6b2380u)); call_ind(t); return; }
}

void f_0068421a(void) /* alcCreateContext */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068421a);
    /* 0068421a: jmp dword ptr [0x6b237c] */ { u32 t = R32((u32)(0x6b237cu)); call_ind(t); return; }
}

void f_00684220(void) /* alcOpenDevice */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684220);
    /* 00684220: jmp dword ptr [0x6b2378] */ { u32 t = R32((u32)(0x6b2378u)); call_ind(t); return; }
}

void f_00684226(void) /* alcCloseDevice */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684226);
    /* 00684226: jmp dword ptr [0x6b2374] */ { u32 t = R32((u32)(0x6b2374u)); call_ind(t); return; }
}

void f_0068422c(void) /* alcDestroyContext */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068422c);
    /* 0068422c: jmp dword ptr [0x6b2370] */ { u32 t = R32((u32)(0x6b2370u)); call_ind(t); return; }
}

void f_00684232(void) /* alcGetContextsDevice */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684232);
    /* 00684232: jmp dword ptr [0x6b236c] */ { u32 t = R32((u32)(0x6b236cu)); call_ind(t); return; }
}

void f_00684238(void) /* alcGetCurrentContext */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684238);
    /* 00684238: jmp dword ptr [0x6b2368] */ { u32 t = R32((u32)(0x6b2368u)); call_ind(t); return; }
}

void f_00684240(void) /* sub_684240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684240);
    /* 00684240: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00684241: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00684245: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684247: je 0x684330 */ if (fZ) goto L_00684330;
L_0068424d:; BB(0x0068424d);
    /* 0068424d: lea eax, [edi + 0x250] */ r_eax = (u32)(r_edi+0x250u);
    /* 00684253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684254: call 0x690f20 */ r_esp -= 4; W32(r_esp, 0x684259u); f_00690f20();
    /* 00684259: lea ecx, [edi + 0x1e0] */ r_ecx = (u32)(r_edi+0x1e0u);
    /* 0068425f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684260: call 0x691320 */ r_esp -= 4; W32(r_esp, 0x684265u); f_00691320();
    /* 00684265: lea edx, [edi + 0x78] */ r_edx = (u32)(r_edi+0x78u);
    /* 00684268: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684269: call 0x6863b0 */ r_esp -= 4; W32(r_esp, 0x68426eu); f_006863b0();
    /* 0068426e: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 00684271: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684274: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684276: je 0x6842cb */ if (fZ) goto L_006842cb;
L_00684278:; BB(0x00684278);
    /* 00684278: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 0068427b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068427d: je 0x6842cb */ if (fZ) goto L_006842cb;
L_0068427f:; BB(0x0068427f);
    /* 0068427f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684280: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00684282: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00684284: jle 0x6842b5 */ if ((fZ||fS!=fO)) goto L_006842b5;
L_00684286:; BB(0x00684286);
    /* 00684286: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00684287: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684288: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0068428a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0068428c:; BB(0x0068428c);
    /* 0068428c: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 0068428f: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00684291: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684292: call 0x690710 */ r_esp -= 4; W32(r_esp, 0x684297u); f_00690710();
    /* 00684297: mov ecx, dword ptr [edi + 0x4c] */ r_ecx = R32((u32)(r_edi+0x4cu));
    /* 0068429a: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068429c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068429d: call 0x690670 */ r_esp -= 4; W32(r_esp, 0x6842a2u); f_00690670();
    /* 006842a2: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 006842a5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006842a8: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006842a9: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006842ac: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006842af: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006842b1: jl 0x68428c */ if ((fS!=fO)) goto L_0068428c;
L_006842b3:; BB(0x006842b3);
    /* 006842b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006842b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_006842b5:; BB(0x006842b5);
    /* 006842b5: mov edx, dword ptr [edi + 0x48] */ r_edx = R32((u32)(r_edi+0x48u));
    /* 006842b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006842b9: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x6842beu); f_00687300();
    /* 006842be: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 006842c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006842c2: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x6842c7u); f_00687300();
    /* 006842c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006842ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
L_006842cb:; BB(0x006842cb);
    /* 006842cb: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 006842ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006842d0: je 0x6842db */ if (fZ) goto L_006842db;
L_006842d2:; BB(0x006842d2);
    /* 006842d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006842d3: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x6842d8u); f_00687300();
    /* 006842d8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006842db:; BB(0x006842db);
    /* 006842db: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 006842de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006842e0: je 0x6842eb */ if (fZ) goto L_006842eb;
L_006842e2:; BB(0x006842e2);
    /* 006842e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006842e3: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x6842e8u); f_00687300();
    /* 006842e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006842eb:; BB(0x006842eb);
    /* 006842eb: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 006842ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006842f0: je 0x6842fb */ if (fZ) goto L_006842fb;
L_006842f2:; BB(0x006842f2);
    /* 006842f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006842f3: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x6842f8u); f_00687300();
    /* 006842f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006842fb:; BB(0x006842fb);
    /* 006842fb: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 006842fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684300: je 0x68430b */ if (fZ) goto L_0068430b;
L_00684302:; BB(0x00684302);
    /* 00684302: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684303: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x684308u); f_00687300();
    /* 00684308: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068430b:; BB(0x0068430b);
    /* 0068430b: lea ecx, [edi + 0x18] */ r_ecx = (u32)(r_edi+0x18u);
    /* 0068430e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068430f: call 0x686550 */ r_esp -= 4; W32(r_esp, 0x684314u); f_00686550();
    /* 00684314: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00684316: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684319: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068431b: je 0x684327 */ if (fZ) goto L_00684327;
L_0068431d:; BB(0x0068431d);
    /* 0068431d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068431e: call dword ptr [edi + 0x2c8] */ { u32 t = R32((u32)(r_edi+0x2c8u)); r_esp -= 4; W32(r_esp, 0x684324u); call_ind(t); }
    /* 00684324: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00684327:; BB(0x00684327);
    /* 00684327: mov ecx, 0xb4 */ r_ecx = 0xb4u;
    /* 0068432c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068432e: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
L_00684330:; BB(0x00684330);
    /* 00684330: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00684332: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684333: ret  */ FN_RET(0x00684240); r_esp += 4; return;
}

void f_00684340(void) /* sub_684340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684340);
    /* 00684340: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00684344: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684345: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00684349: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068434c: mov eax, esp */ r_eax = r_esp;
    /* 0068434e: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00684352: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00684354: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00684358: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0068435b: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0068435f: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00684362: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00684366: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00684369: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0068436d: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00684371: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684372: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684373: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684374: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684375: call 0x684390 */ r_esp -= 4; W32(r_esp, 0x68437au); f_00684390();
    /* 0068437a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068437d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068437f: jne 0x68438a */ if (!fZ) goto L_0068438a;
L_00684381:; BB(0x00684381);
    /* 00684381: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684382: call 0x684720 */ r_esp -= 4; W32(r_esp, 0x684387u); f_00684720();
    /* 00684387: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068438a:; BB(0x0068438a);
    /* 0068438a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068438b: ret  */ FN_RET(0x00684340); r_esp += 4; return;
}

void f_00684390(void) /* sub_684390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684390);
    /* 00684390: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00684391: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684392: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00684396: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684397: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0068439b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068439c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068439e: je 0x6843b2 */ if (fZ) goto L_006843b2;
L_006843a0:; BB(0x006843a0);
    /* 006843a0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006843a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006843a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006843a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006843a7: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x6843a9u); call_ind(t); }
    /* 006843a9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006843ac: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006843b0: jmp 0x6843ba */ goto L_006843ba;
L_006843b2:; BB(0x006843b2);
    /* 006843b2: mov dword ptr [esp + 0x14], 0xffffffff */ W32((u32)(r_esp+0x14u), 0xffffffffu);
L_006843ba:; BB(0x006843ba);
    /* 006843ba: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 006843be: mov ecx, 0xb4 */ r_ecx = 0xb4u;
    /* 006843c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006843c5: mov edi, ebx */ r_edi = r_ebx;
    /* 006843c7: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 006843c9: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 006843cd: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 006843d1: lea eax, [ebx + 0x2c0] */ r_eax = (u32)(r_ebx+0x2c0u);
    /* 006843d7: mov dword ptr [ebx], esi */ W32((u32)(r_ebx), r_esi);
    /* 006843d9: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 006843db: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 006843df: mov dword ptr [eax + 4], ebp */ W32((u32)(r_eax+0x4u), r_ebp);
    /* 006843e2: lea ebp, [ebx + 0x18] */ r_ebp = (u32)(r_ebx+0x18u);
    /* 006843e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006843e6: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 006843e9: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 006843ec: call 0x686530 */ r_esp -= 4; W32(r_esp, 0x6843f1u); f_00686530();
    /* 006843f1: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 006843f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006843f8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006843fa: je 0x684427 */ if (fZ) goto L_00684427;
L_006843fc:; BB(0x006843fc);
    /* 006843fc: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00684400: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684401: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684402: call 0x686580 */ r_esp -= 4; W32(r_esp, 0x684407u); f_00686580();
    /* 00684407: mov ecx, esi */ r_ecx = r_esi;
    /* 00684409: mov esi, edi */ r_esi = r_edi;
    /* 0068440b: mov edx, ecx */ r_edx = r_ecx;
    /* 0068440d: mov edi, eax */ r_edi = r_eax;
    /* 0068440f: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00684412: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00684414: mov ecx, edx */ r_ecx = r_edx;
    /* 00684416: mov eax, edx */ r_eax = r_edx;
    /* 00684418: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0068441b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068441c: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0068441e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068441f: call 0x686600 */ r_esp -= 4; W32(r_esp, 0x684424u); f_00686600();
    /* 00684424: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00684427:; BB(0x00684427);
    /* 00684427: cmp dword ptr [esp + 0x14], -1 */ {  u32 a = R32((u32)(r_esp+0x14u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068442c: je 0x684435 */ if (fZ) goto L_00684435;
L_0068442e:; BB(0x0068442e);
    /* 0068442e: mov dword ptr [ebx + 4], 1 */ W32((u32)(r_ebx+0x4u), 0x1u);
L_00684435:; BB(0x00684435);
    /* 00684435: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00684437: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00684439: mov dword ptr [ebx + 0x34], 1 */ W32((u32)(r_ebx+0x34u), 0x1u);
    /* 00684440: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x684445u); f_0068738e();
    /* 00684445: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00684448: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0068444a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068444b: mov dword ptr [ebx + 0x48], eax */ W32((u32)(r_ebx+0x48u), r_eax);
    /* 0068444e: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x684453u); f_0068738e();
    /* 00684453: lea edx, [ebx + 0x78] */ r_edx = (u32)(r_ebx+0x78u);
    /* 00684456: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00684458: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684459: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 0068445c: call 0x686340 */ r_esp -= 4; W32(r_esp, 0x684461u); f_00686340();
    /* 00684461: mov ecx, dword ptr [ebx + 0x4c] */ r_ecx = R32((u32)(r_ebx+0x4cu));
    /* 00684464: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 00684467: lea eax, [ebx + 0x5c] */ r_eax = (u32)(r_ebx+0x5cu);
    /* 0068446a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068446c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068446d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068446e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068446f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00684470: call 0x6844b0 */ r_esp -= 4; W32(r_esp, 0x684475u); f_006844b0();
    /* 00684475: mov esi, eax */ r_esi = r_eax;
    /* 00684477: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068447a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0068447c: jge 0x684494 */ if ((fS==fO)) goto L_00684494;
L_0068447e:; BB(0x0068447e);
    /* 0068447e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068447f: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 00684485: call 0x684240 */ r_esp -= 4; W32(r_esp, 0x68448au); f_00684240();
    /* 0068448a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068448d: mov eax, esi */ r_eax = r_esi;
    /* 0068448f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684490: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00684491: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684492: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00684493: ret  */ FN_RET(0x00684390); r_esp += 4; return;
L_00684494:; BB(0x00684494);
    /* 00684494: mov eax, esi */ r_eax = r_esi;
    /* 00684496: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684497: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00684498: mov dword ptr [ebx + 0x58], 1 */ W32((u32)(r_ebx+0x58u), 0x1u);
    /* 0068449f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006844a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006844a1: ret  */ FN_RET(0x00684390); r_esp += 4; return;
}

void f_006844b0(void) /* sub_6844B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006844b0);
    /* 006844b0: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006844b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006844b4: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 006844b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006844b9: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 006844bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006844be: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006844bf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006844c1: jne 0x684505 */ if (!fZ) goto L_00684505;
L_006844c3:; BB(0x006844c3);
    /* 006844c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006844c5: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 006844c9: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 006844ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006844cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006844d0: call 0x6845f0 */ r_esp -= 4; W32(r_esp, 0x6844d5u); f_006845f0();
    /* 006844d5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006844d8: cmp eax, -0x80 */ {  u32 a = r_eax; u32 b = 0xffffff80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006844db: jne 0x6844ea */ if (!fZ) goto L_006844ea;
L_006844dd:; BB(0x006844dd);
    /* 006844dd: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006844e0: jne 0x6844ea */ if (!fZ) goto L_006844ea;
L_006844e2:; BB(0x006844e2);
    /* 006844e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006844e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006844e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006844e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006844e6: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006844e9: ret  */ FN_RET(0x006844b0); r_esp += 4; return;
L_006844ea:; BB(0x006844ea);
    /* 006844ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006844ec: jg 0x684501 */ if ((!fZ&&fS==fO)) goto L_00684501;
L_006844ee:; BB(0x006844ee);
    /* 006844ee: jl 0x6844f4 */ if ((fS!=fO)) goto L_006844f4;
L_006844f0:; BB(0x006844f0);
    /* 006844f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 006844f2: jae 0x684501 */ if (!fC) goto L_00684501;
L_006844f4:; BB(0x006844f4);
    /* 006844f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006844f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006844f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006844f7: mov eax, 0xffffff7c */ r_eax = 0xffffff7cu;
    /* 006844fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006844fd: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684500: ret  */ FN_RET(0x006844b0); r_esp += 4; return;
L_00684501:; BB(0x00684501);
    /* 00684501: lea ebx, [esp + 0x10] */ r_ebx = (u32)(r_esp+0x10u);
L_00684505:; BB(0x00684505);
    /* 00684505: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00684506: lea esi, [ebp + 0x78] */ r_esi = (u32)(r_ebp+0x78u);
    /* 00684509: call 0x6862e0 */ r_esp -= 4; W32(r_esp, 0x68450eu); f_006862e0();
    /* 0068450e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068450f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684510: call 0x686aa0 */ r_esp -= 4; W32(r_esp, 0x684515u); f_00686aa0();
    /* 00684515: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00684519: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068451c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068451e: je 0x684528 */ if (fZ) goto L_00684528;
L_00684520:; BB(0x00684520);
    /* 00684520: mov ecx, dword ptr [ebp + 0x1c8] */ r_ecx = R32((u32)(r_ebp+0x1c8u));
    /* 00684526: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
L_00684528:; BB(0x00684528);
    /* 00684528: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 0068452c: mov dword ptr [ebp + 0x58], 3 */ W32((u32)(r_ebp+0x58u), 0x3u);
    /* 00684533: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684534: call 0x6906e0 */ r_esp -= 4; W32(r_esp, 0x684539u); f_006906e0();
    /* 00684539: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0068453d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068453e: call 0x690650 */ r_esp -= 4; W32(r_esp, 0x684543u); f_00690650();
    /* 00684543: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684546: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00684548:; BB(0x00684548);
    /* 00684548: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00684549: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068454a: call 0x686760 */ r_esp -= 4; W32(r_esp, 0x68454fu); f_00686760();
    /* 0068454f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684552: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00684555: jge 0x684594 */ if ((fS==fO)) goto L_00684594;
L_00684557:; BB(0x00684557);
    /* 00684557: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0068455b: lea esi, [ebp + 0x78] */ r_esi = (u32)(r_ebp+0x78u);
    /* 0068455e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068455f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684560: call 0x686ac0 */ r_esp -= 4; W32(r_esp, 0x684565u); f_00686ac0();
    /* 00684565: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684568: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068456a: je 0x68459e */ if (fZ) goto L_0068459e;
L_0068456c:; BB(0x0068456c);
    /* 0068456c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068456f: je 0x6845be */ if (fZ) goto L_006845be;
L_00684571:; BB(0x00684571);
    /* 00684571: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00684575: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 00684579: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0068457d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068457e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068457f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684580: call 0x690880 */ r_esp -= 4; W32(r_esp, 0x684585u); f_00690880();
    /* 00684585: mov esi, eax */ r_esi = r_eax;
    /* 00684587: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068458a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068458c: jne 0x6845c3 */ if (!fZ) goto L_006845c3;
L_0068458e:; BB(0x0068458e);
    /* 0068458e: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0068458f: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00684592: jl 0x684557 */ if ((fS!=fO)) goto L_00684557;
L_00684594:; BB(0x00684594);
    /* 00684594: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684595: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00684596: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684597: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00684599: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068459a: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068459d: ret  */ FN_RET(0x006844b0); r_esp += 4; return;
L_0068459e:; BB(0x0068459e);
    /* 0068459e: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006845a1: jge 0x684594 */ if ((fS==fO)) goto L_00684594;
L_006845a3:; BB(0x006845a3);
    /* 006845a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006845a5: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 006845aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006845ab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006845ac: call 0x6845f0 */ r_esp -= 4; W32(r_esp, 0x6845b1u); f_006845f0();
    /* 006845b1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006845b4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006845b6: jl 0x6845be */ if ((fS!=fO)) goto L_006845be;
L_006845b8:; BB(0x006845b8);
    /* 006845b8: jg 0x684548 */ if ((!fZ&&fS==fO)) goto L_00684548;
L_006845ba:; BB(0x006845ba);
    /* 006845ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 006845bc: jae 0x684548 */ if (!fC) goto L_00684548;
L_006845be:; BB(0x006845be);
    /* 006845be: mov esi, 0xffffff7b */ r_esi = 0xffffff7bu;
L_006845c3:; BB(0x006845c3);
    /* 006845c3: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 006845c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006845c8: call 0x690710 */ r_esp -= 4; W32(r_esp, 0x6845cdu); f_00690710();
    /* 006845cd: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006845d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006845d2: call 0x690670 */ r_esp -= 4; W32(r_esp, 0x6845d7u); f_00690670();
    /* 006845d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006845da: mov eax, esi */ r_eax = r_esi;
    /* 006845dc: mov dword ptr [ebp + 0x58], 2 */ W32((u32)(r_ebp+0x58u), 0x2u);
    /* 006845e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006845e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006845e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006845e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006845e7: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006845ea: ret  */ FN_RET(0x006844b0); r_esp += 4; return;
}

void f_006845f0(void) /* sub_6845F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006845f0);
    /* 006845f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006845f1: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 006845f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006845f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006845f7: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 006845fb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006845fc: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00684600: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00684602: jl 0x684614 */ if ((fS!=fO)) goto L_00684614;
L_00684604:; BB(0x00684604);
    /* 00684604: jg 0x68460a */ if ((!fZ&&fS==fO)) goto L_0068460a;
L_00684606:; BB(0x00684606);
    /* 00684606: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00684608: jbe 0x684614 */ if ((fC||fZ)) goto L_00684614;
L_0068460a:; BB(0x0068460a);
    /* 0068460a: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0068460d: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 00684610: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 00684612: adc ebx, ecx */ { u32 c = fC; u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b + c) & 0xffffffffu; r_ebx = r;  }
L_00684614:; BB(0x00684614);
    /* 00684614: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
L_00684618:; BB(0x00684618);
    /* 00684618: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068461a: jl 0x684632 */ if ((fS!=fO)) goto L_00684632;
L_0068461c:; BB(0x0068461c);
    /* 0068461c: jg 0x684622 */ if ((!fZ&&fS==fO)) goto L_00684622;
L_0068461e:; BB(0x0068461e);
    /* 0068461e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00684620: jbe 0x684632 */ if ((fC||fZ)) goto L_00684632;
L_00684622:; BB(0x00684622);
    /* 00684622: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 00684625: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00684627: jg 0x68467a */ if ((!fZ&&fS==fO)) goto L_0068467a;
L_00684629:; BB(0x00684629);
    /* 00684629: jl 0x684632 */ if ((fS!=fO)) goto L_00684632;
L_0068462b:; BB(0x0068462b);
    /* 0068462b: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0068462e: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00684630: jae 0x68467a */ if (!fC) goto L_0068467a;
L_00684632:; BB(0x00684632);
    /* 00684632: lea ecx, [esi + 0x18] */ r_ecx = (u32)(r_esi+0x18u);
    /* 00684635: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684636: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684637: call 0x686620 */ r_esp -= 4; W32(r_esp, 0x68463cu); f_00686620();
    /* 0068463c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068463f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00684641: jge 0x684656 */ if ((fS==fO)) goto L_00684656;
L_00684643:; BB(0x00684643);
    /* 00684643: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00684646: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00684647: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00684649: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0068464c: sbb eax, edx */ { u32 c = fC; u32 a = r_eax; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0068464e: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 00684651: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 00684654: jmp 0x684618 */ goto L_00684618;
L_00684656:; BB(0x00684656);
    /* 00684656: jne 0x684692 */ if (!fZ) goto L_00684692;
L_00684658:; BB(0x00684658);
    /* 00684658: mov edx, edi */ r_edx = r_edi;
    /* 0068465a: or edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0068465c: je 0x68467a */ if (fZ) goto L_0068467a;
L_0068465e:; BB(0x0068465e);
    /* 0068465e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068465f: call 0x6846b0 */ r_esp -= 4; W32(r_esp, 0x684664u); f_006846b0();
    /* 00684664: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684667: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00684669: je 0x684685 */ if (fZ) goto L_00684685;
L_0068466b:; BB(0x0068466b);
    /* 0068466b: jge 0x684618 */ if ((fS==fO)) goto L_00684618;
L_0068466d:; BB(0x0068466d);
    /* 0068466d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068466e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068466f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684670: mov eax, 0xffffff80 */ r_eax = 0xffffff80u;
    /* 00684675: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00684678: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00684679: ret  */ FN_RET(0x006845f0); r_esp += 4; return;
L_0068467a:; BB(0x0068467a);
    /* 0068467a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068467b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068467c: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068467f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684680: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00684683: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00684684: ret  */ FN_RET(0x006845f0); r_esp += 4; return;
L_00684685:; BB(0x00684685);
    /* 00684685: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684686: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00684687: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684688: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 0068468d: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00684690: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00684691: ret  */ FN_RET(0x006845f0); r_esp += 4; return;
L_00684692:; BB(0x00684692);
    /* 00684692: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00684695: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 00684698: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00684699: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0068469b: adc edx, edi */ { u32 c = fC; u32 a = r_edx; u32 b = r_edi; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 0068469d: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 006846a0: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 006846a3: mov edx, edi */ r_edx = r_edi;
    /* 006846a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006846a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006846a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006846a8: mov eax, ecx */ r_eax = r_ecx;
    /* 006846aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006846ab: ret  */ FN_RET(0x006845f0); r_esp += 4; return;
}

void f_006846b0(void) /* sub_6846B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006846b0);
    /* 006846b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006846b1: call 0x687394 */ r_esp -= 4; W32(r_esp, 0x6846b6u); f_00687394();
    /* 006846b6: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006846ba: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006846c0: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006846c3: je 0x684710 */ if (fZ) goto L_00684710;
L_006846c5:; BB(0x006846c5);
    /* 006846c5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006846c6: lea edi, [esi + 0x18] */ r_edi = (u32)(r_esi+0x18u);
    /* 006846c9: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 006846ce: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006846cf: call 0x686580 */ r_esp -= 4; W32(r_esp, 0x6846d4u); f_00686580();
    /* 006846d4: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 006846d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006846d7: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 006846dc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006846de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006846df: call dword ptr [esi + 0x2c0] */ { u32 t = R32((u32)(r_esi+0x2c0u)); r_esp -= 4; W32(r_esp, 0x6846e5u); call_ind(t); }
    /* 006846e5: mov esi, eax */ r_esi = r_eax;
    /* 006846e7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006846ea: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006846ec: jle 0x6846fa */ if ((fZ||fS!=fO)) goto L_006846fa;
L_006846ee:; BB(0x006846ee);
    /* 006846ee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006846ef: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006846f0: call 0x686600 */ r_esp -= 4; W32(r_esp, 0x6846f5u); f_00686600();
    /* 006846f5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006846f8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
L_006846fa:; BB(0x006846fa);
    /* 006846fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006846fb: jne 0x68470c */ if (!fZ) goto L_0068470c;
L_006846fd:; BB(0x006846fd);
    /* 006846fd: call 0x687394 */ r_esp -= 4; W32(r_esp, 0x684702u); f_00687394();
    /* 00684702: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684705: je 0x68470c */ if (fZ) goto L_0068470c;
L_00684707:; BB(0x00684707);
    /* 00684707: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068470a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068470b: ret  */ FN_RET(0x006846b0); r_esp += 4; return;
L_0068470c:; BB(0x0068470c);
    /* 0068470c: mov eax, esi */ r_eax = r_esi;
    /* 0068470e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068470f: ret  */ FN_RET(0x006846b0); r_esp += 4; return;
L_00684710:; BB(0x00684710);
    /* 00684710: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00684712: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00684713: ret  */ FN_RET(0x006846b0); r_esp += 4; return;
}

void f_00684720(void) /* sub_684720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684720);
    /* 00684720: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684721: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00684725: cmp dword ptr [esi + 0x58], 1 */ {  u32 a = R32((u32)(r_esi+0x58u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684729: je 0x684732 */ if (fZ) goto L_00684732;
L_0068472b:; BB(0x0068472b);
    /* 0068472b: mov eax, 0xffffff7d */ r_eax = 0xffffff7du;
    /* 00684730: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00684731: ret  */ FN_RET(0x00684720); r_esp += 4; return;
L_00684732:; BB(0x00684732);
    /* 00684732: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00684735: mov dword ptr [esi + 0x58], 2 */ W32((u32)(r_esi+0x58u), 0x2u);
    /* 0068473c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068473e: je 0x684764 */ if (fZ) goto L_00684764;
L_00684740:; BB(0x00684740);
    /* 00684740: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00684741: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684742: call 0x684770 */ r_esp -= 4; W32(r_esp, 0x684747u); f_00684770();
    /* 00684747: mov edi, eax */ r_edi = r_eax;
    /* 00684749: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068474c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068474e: je 0x68475f */ if (fZ) goto L_0068475f;
L_00684750:; BB(0x00684750);
    /* 00684750: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684751: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 00684757: call 0x684240 */ r_esp -= 4; W32(r_esp, 0x68475cu); f_00684240();
    /* 0068475c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068475f:; BB(0x0068475f);
    /* 0068475f: mov eax, edi */ r_eax = r_edi;
    /* 00684761: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684762: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00684763: ret  */ FN_RET(0x00684720); r_esp += 4; return;
L_00684764:; BB(0x00684764);
    /* 00684764: mov dword ptr [esi + 0x58], 3 */ W32((u32)(r_esi+0x58u), 0x3u);
    /* 0068476b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068476d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068476e: ret  */ FN_RET(0x00684720); r_esp += 4; return;
}

void f_00684770(void) /* sub_684770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684770);
    /* 00684770: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00684773: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00684774: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684775: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684776: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0068477a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068477b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0068477d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0068477f: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00684782: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 00684785: mov ebp, dword ptr [esi + 0x5c] */ r_ebp = R32((u32)(r_esi+0x5cu));
    /* 00684788: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068478a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068478c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068478d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00684791: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00684795: call dword ptr [esi + 0x2c4] */ { u32 t = R32((u32)(r_esi+0x2c4u)); r_esp -= 4; W32(r_esp, 0x68479bu); call_ind(t); }
    /* 0068479b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0068479d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068479e: call dword ptr [esi + 0x2cc] */ { u32 t = R32((u32)(r_esi+0x2ccu)); r_esp -= 4; W32(r_esp, 0x6847a4u); call_ind(t); }
    /* 006847a4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006847a5: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 006847a8: mov ecx, eax */ r_ecx = r_eax;
    /* 006847aa: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 006847ae: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 006847b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006847b2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006847b3: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 006847b6: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 006847b9: call 0x684870 */ r_esp -= 4; W32(r_esp, 0x6847beu); f_00684870();
    /* 006847be: mov edi, edx */ r_edi = r_edx;
    /* 006847c0: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006847c3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006847c5: mov ebx, eax */ r_ebx = r_eax;
    /* 006847c7: jg 0x6847d9 */ if ((!fZ&&fS==fO)) goto L_006847d9;
L_006847c9:; BB(0x006847c9);
    /* 006847c9: jl 0x6847cf */ if ((fS!=fO)) goto L_006847cf;
L_006847cb:; BB(0x006847cb);
    /* 006847cb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 006847cd: jae 0x6847d9 */ if (!fC) goto L_006847d9;
L_006847cf:; BB(0x006847cf);
    /* 006847cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006847d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006847d1: mov eax, ebx */ r_eax = r_ebx;
    /* 006847d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006847d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006847d5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006847d8: ret  */ FN_RET(0x00684770); r_esp += 4; return;
L_006847d9:; BB(0x006847d9);
    /* 006847d9: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 006847dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006847de: call 0x6862e0 */ r_esp -= 4; W32(r_esp, 0x6847e3u); f_006862e0();
    /* 006847e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006847e6: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006847e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006847ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006847eb: je 0x684817 */ if (fZ) goto L_00684817;
L_006847ed:; BB(0x006847ed);
    /* 006847ed: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fC = (r < a); }
    /* 006847f0: adc edi, 0 */ { u32 c = fC; u32 a = r_edi; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_edi = r;  }
    /* 006847f3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006847f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006847f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006847f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006847f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006847fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006847fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006847fe: call 0x6849d0 */ r_esp -= 4; W32(r_esp, 0x684803u); f_006849d0();
    /* 00684803: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684806: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00684808: jge 0x684843 */ if ((fS==fO)) goto L_00684843;
L_0068480a:; BB(0x0068480a);
    /* 0068480a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068480b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068480c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068480d: mov eax, 0xffffff80 */ r_eax = 0xffffff80u;
    /* 00684812: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00684813: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684816: ret  */ FN_RET(0x00684770); r_esp += 4; return;
L_00684817:; BB(0x00684817);
    /* 00684817: mov edx, ebx */ r_edx = r_ebx;
    /* 00684819: mov eax, edi */ r_eax = r_edi;
    /* 0068481b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 0068481e: adc eax, 0 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 00684821: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684822: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684823: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00684824: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00684825: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00684827: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00684829: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068482a: call 0x6849d0 */ r_esp -= 4; W32(r_esp, 0x68482fu); f_006849d0();
    /* 0068482f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684832: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684834: je 0x684843 */ if (fZ) goto L_00684843;
L_00684836:; BB(0x00684836);
    /* 00684836: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684837: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00684838: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684839: mov eax, 0xffffff80 */ r_eax = 0xffffff80u;
    /* 0068483e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068483f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684842: ret  */ FN_RET(0x00684770); r_esp += 4; return;
L_00684843:; BB(0x00684843);
    /* 00684843: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00684847: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0068484b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068484c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068484d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068484e: call 0x684bf0 */ r_esp -= 4; W32(r_esp, 0x684853u); f_00684bf0();
    /* 00684853: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00684855: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00684857: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684858: call 0x685070 */ r_esp -= 4; W32(r_esp, 0x68485du); f_00685070();
    /* 0068485d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684860: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684861: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00684862: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684863: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00684864: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684867: ret  */ FN_RET(0x00684770); r_esp += 4; return;
}

void f_00684870(void) /* sub_684870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684870);
    /* 00684870: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00684873: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00684874: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684875: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684876: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0068487a: or ebp, 0xffffffff */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0068487d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068487e: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00684881: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00684884: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00684886: mov edi, eax */ r_edi = r_eax;
    /* 00684888: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 0068488c: jmp 0x684896 */ goto L_00684896;
L_0068488e:; BB(0x0068488e);
    /* 0068488e: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00684892: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
L_00684896:; BB(0x00684896);
    /* 00684896: add ecx, 0xffffdecc */ {  u32 a = r_ecx; u32 b = 0xffffdeccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 0068489c: adc eax, -1 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 0068489f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006848a1: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006848a3: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 006848a7: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006848ab: jg 0x6848bf */ if ((!fZ&&fS==fO)) goto L_006848bf;
L_006848ad:; BB(0x006848ad);
    /* 006848ad: jl 0x6848b3 */ if ((fS!=fO)) goto L_006848b3;
L_006848af:; BB(0x006848af);
    /* 006848af: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006848b1: jae 0x6848bf */ if (!fC) goto L_006848bf;
L_006848b3:; BB(0x006848b3);
    /* 006848b3: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006848b7: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006848bb: mov ecx, edx */ r_ecx = r_edx;
    /* 006848bd: mov eax, edx */ r_eax = r_edx;
L_006848bf:; BB(0x006848bf);
    /* 006848bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006848c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006848c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006848c2: call 0x684990 */ r_esp -= 4; W32(r_esp, 0x6848c7u); f_00684990();
    /* 006848c7: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 006848ca: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 006848cd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006848d0: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006848d2: jg 0x68491c */ if ((!fZ&&fS==fO)) goto L_0068491c;
L_006848d4:; BB(0x006848d4);
    /* 006848d4: jl 0x6848da */ if ((fS!=fO)) goto L_006848da;
L_006848d6:; BB(0x006848d6);
    /* 006848d6: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006848d8: jae 0x68491c */ if (!fC) goto L_0068491c;
L_006848da:; BB(0x006848da);
    /* 006848da: mov edx, ebx */ r_edx = r_ebx;
    /* 006848dc: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 006848de: mov ecx, edi */ r_ecx = r_edi;
    /* 006848e0: sbb ecx, eax */ { u32 c = fC; u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 006848e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006848e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006848e4: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 006848e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006848e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006848ea: call 0x6845f0 */ r_esp -= 4; W32(r_esp, 0x6848efu); f_006845f0();
    /* 006848ef: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006848f2: cmp eax, -0x80 */ {  u32 a = r_eax; u32 b = 0xffffff80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006848f5: jne 0x6848fc */ if (!fZ) goto L_006848fc;
L_006848f7:; BB(0x006848f7);
    /* 006848f7: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006848fa: je 0x684966 */ if (fZ) goto L_00684966;
L_006848fc:; BB(0x006848fc);
    /* 006848fc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006848fe: jl 0x68491c */ if ((fS!=fO)) goto L_0068491c;
L_00684900:; BB(0x00684900);
    /* 00684900: jg 0x684906 */ if ((!fZ&&fS==fO)) goto L_00684906;
L_00684902:; BB(0x00684902);
    /* 00684902: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 00684904: jb 0x68491c */ if (fC) goto L_0068491c;
L_00684906:; BB(0x00684906);
    /* 00684906: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00684909: mov ebp, eax */ r_ebp = r_eax;
    /* 0068490b: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0068490e: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00684912: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00684914: jl 0x6848da */ if ((fS!=fO)) goto L_006848da;
L_00684916:; BB(0x00684916);
    /* 00684916: jg 0x68491c */ if ((!fZ&&fS==fO)) goto L_0068491c;
L_00684918:; BB(0x00684918);
    /* 00684918: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0068491a: jb 0x6848da */ if (fC) goto L_006848da;
L_0068491c:; BB(0x0068491c);
    /* 0068491c: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00684920: mov eax, ebp */ r_eax = r_ebp;
    /* 00684922: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00684924: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684927: je 0x68488e */ if (fZ) goto L_0068488e;
L_0068492d:; BB(0x0068492d);
    /* 0068492d: mov edi, edx */ r_edi = r_edx;
    /* 0068492f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00684930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684931: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684932: call 0x684990 */ r_esp -= 4; W32(r_esp, 0x684937u); f_00684990();
    /* 00684937: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0068493b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068493d: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 00684942: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684943: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684944: call 0x6845f0 */ r_esp -= 4; W32(r_esp, 0x684949u); f_006845f0();
    /* 00684949: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068494c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068494e: jg 0x684976 */ if ((!fZ&&fS==fO)) goto L_00684976;
L_00684950:; BB(0x00684950);
    /* 00684950: jl 0x684956 */ if ((fS!=fO)) goto L_00684956;
L_00684952:; BB(0x00684952);
    /* 00684952: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 00684954: jae 0x684976 */ if (!fC) goto L_00684976;
L_00684956:; BB(0x00684956);
    /* 00684956: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684957: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00684958: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684959: mov eax, 0xffffff7f */ r_eax = 0xffffff7fu;
    /* 0068495e: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00684961: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00684962: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684965: ret  */ FN_RET(0x00684870); r_esp += 4; return;
L_00684966:; BB(0x00684966);
    /* 00684966: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684967: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00684968: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684969: mov eax, 0xffffff80 */ r_eax = 0xffffff80u;
    /* 0068496e: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00684971: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00684972: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684975: ret  */ FN_RET(0x00684870); r_esp += 4; return;
L_00684976:; BB(0x00684976);
    /* 00684976: mov edx, edi */ r_edx = r_edi;
    /* 00684978: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684979: mov eax, ebp */ r_eax = r_ebp;
    /* 0068497b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068497c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068497d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068497e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684981: ret  */ FN_RET(0x00684870); r_esp += 4; return;
}

void f_00684990(void) /* sub_684990 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684990);
    /* 00684990: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684991: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00684995: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00684997: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684999: je 0x6849c4 */ if (fZ) goto L_006849c4;
L_0068499b:; BB(0x0068499b);
    /* 0068499b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068499c: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 006849a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006849a1: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 006849a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006849a7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006849a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006849a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006849aa: call dword ptr [esi + 0x2c4] */ { u32 t = R32((u32)(r_esi+0x2c4u)); r_esp -= 4; W32(r_esp, 0x6849b0u); call_ind(t); }
    /* 006849b0: mov dword ptr [esi + 8], ebx */ W32((u32)(r_esi+0x8u), r_ebx);
    /* 006849b3: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
    /* 006849b6: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006849b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006849ba: call 0x686a30 */ r_esp -= 4; W32(r_esp, 0x6849bfu); f_00686a30();
    /* 006849bf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006849c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006849c3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_006849c4:; BB(0x006849c4);
    /* 006849c4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006849c5: ret  */ FN_RET(0x00684990); r_esp += 4; return;
}

void f_006849d0(void) /* sub_6849D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006849d0);
    /* 006849d0: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006849d3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 006849d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006849d8: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 006849dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006849dd: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
    /* 006849e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006849e2: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 006849e6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006849e7: mov edi, ebp */ r_edi = r_ebp;
    /* 006849e9: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006849eb: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006849ef: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 006849f3: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006849f7: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 006849fb: jg 0x684af5 */ if ((!fZ&&fS==fO)) goto L_00684af5;
L_00684a01:; BB(0x00684a01);
    /* 00684a01: jl 0x684a15 */ if ((fS!=fO)) goto L_00684a15;
L_00684a03:; BB(0x00684a03);
    /* 00684a03: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00684a05: jae 0x684af5 */ if (!fC) goto L_00684af5;
L_00684a0b:; BB(0x00684a0b);
    /* 00684a0b: jmp 0x684a15 */ goto L_00684a15;
L_00684a0d:; BB(0x00684a0d);
    /* 00684a0d: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00684a11: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
L_00684a15:; BB(0x00684a15);
    /* 00684a15: mov ecx, edx */ r_ecx = r_edx;
    /* 00684a17: mov eax, edi */ r_eax = r_edi;
    /* 00684a19: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00684a1b: sbb eax, esi */ { u32 c = fC; u32 a = r_eax; u32 b = r_esi; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00684a1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00684a1f: jg 0x684a33 */ if ((!fZ&&fS==fO)) goto L_00684a33;
L_00684a21:; BB(0x00684a21);
    /* 00684a21: jl 0x684a2b */ if ((fS!=fO)) goto L_00684a2b;
L_00684a23:; BB(0x00684a23);
    /* 00684a23: cmp ecx, 0x2134 */ {  u32 a = r_ecx; u32 b = 0x2134u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00684a29: jae 0x684a33 */ if (!fC) goto L_00684a33;
L_00684a2b:; BB(0x00684a2b);
    /* 00684a2b: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00684a2d: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 00684a31: jmp 0x684a48 */ goto L_00684a48;
L_00684a33:; BB(0x00684a33);
    /* 00684a33: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 00684a35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00684a37: adc edi, esi */ { u32 c = fC; u32 a = r_edi; u32 b = r_esi; u32 r = (a + b + c) & 0xffffffffu; r_edi = r;  }
    /* 00684a39: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00684a3b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00684a3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684a3d: call 0x6873a0 */ r_esp -= 4; W32(r_esp, 0x684a42u); f_006873a0();
    /* 00684a42: mov ebp, eax */ r_ebp = r_eax;
    /* 00684a44: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
L_00684a48:; BB(0x00684a48);
    /* 00684a48: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00684a4c: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00684a50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684a51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684a52: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00684a53: call 0x684990 */ r_esp -= 4; W32(r_esp, 0x684a58u); f_00684990();
    /* 00684a58: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00684a5a: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 00684a5e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00684a60: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684a61: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00684a62: call 0x6845f0 */ r_esp -= 4; W32(r_esp, 0x684a67u); f_006845f0();
    /* 00684a67: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684a6a: cmp eax, -0x80 */ {  u32 a = r_eax; u32 b = 0xffffff80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684a6d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00684a71: mov edi, edx */ r_edi = r_edx;
    /* 00684a73: jne 0x684a7e */ if (!fZ) goto L_00684a7e;
L_00684a75:; BB(0x00684a75);
    /* 00684a75: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684a78: je 0x684b7f */ if (fZ) goto L_00684b7f;
L_00684a7e:; BB(0x00684a7e);
    /* 00684a7e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00684a80: jl 0x684abd */ if ((fS!=fO)) goto L_00684abd;
L_00684a82:; BB(0x00684a82);
    /* 00684a82: jg 0x684a88 */ if ((!fZ&&fS==fO)) goto L_00684a88;
L_00684a84:; BB(0x00684a84);
    /* 00684a84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 00684a86: jb 0x684abd */ if (fC) goto L_00684abd;
L_00684a88:; BB(0x00684a88);
    /* 00684a88: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 00684a8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684a8d: call 0x6862e0 */ r_esp -= 4; W32(r_esp, 0x684a92u); f_006862e0();
    /* 00684a92: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 00684a96: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684a99: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684a9b: jne 0x684ab9 */ if (!fZ) goto L_00684ab9;
L_00684a9d:; BB(0x00684a9d);
    /* 00684a9d: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00684aa1: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00684aa5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00684aa6: mov ebx, eax */ r_ebx = r_eax;
    /* 00684aa8: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00684aac: mov esi, edx */ r_esi = r_edx;
    /* 00684aae: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00684aaf: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fC = (r < a); }
    /* 00684ab1: adc esi, edx */ { u32 c = fC; u32 a = r_esi; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_esi = r;  }
    /* 00684ab3: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fC = (r < a); }
    /* 00684ab5: adc esi, edi */ { u32 c = fC; u32 a = r_esi; u32 b = r_edi; u32 r = (a + b + c) & 0xffffffffu; r_esi = r;  }
    /* 00684ab7: jmp 0x684adb */ goto L_00684adb;
L_00684ab9:; BB(0x00684ab9);
    /* 00684ab9: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
L_00684abd:; BB(0x00684abd);
    /* 00684abd: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00684ac1: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00684ac5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00684ac7: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00684acb: jl 0x684adb */ if ((fS!=fO)) goto L_00684adb;
L_00684acd:; BB(0x00684acd);
    /* 00684acd: jg 0x684ad3 */ if ((!fZ&&fS==fO)) goto L_00684ad3;
L_00684acf:; BB(0x00684acf);
    /* 00684acf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 00684ad1: jb 0x684adb */ if (fC) goto L_00684adb;
L_00684ad3:; BB(0x00684ad3);
    /* 00684ad3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00684ad7: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
L_00684adb:; BB(0x00684adb);
    /* 00684adb: cmp esi, dword ptr [esp + 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00684adf: jl 0x684a0d */ if ((fS!=fO)) goto L_00684a0d;
L_00684ae5:; BB(0x00684ae5);
    /* 00684ae5: jg 0x684af1 */ if ((!fZ&&fS==fO)) goto L_00684af1;
L_00684ae7:; BB(0x00684ae7);
    /* 00684ae7: cmp ebx, dword ptr [esp + 0x10] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00684aeb: jb 0x684a0d */ if (fC) goto L_00684a0d;
L_00684af1:; BB(0x00684af1);
    /* 00684af1: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
L_00684af5:; BB(0x00684af5);
    /* 00684af5: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00684af9: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00684afd: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00684b01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684b02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684b03: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00684b04: call 0x684990 */ r_esp -= 4; W32(r_esp, 0x684b09u); f_00684990();
    /* 00684b09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00684b0b: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 00684b0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00684b11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684b12: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00684b13: call 0x6845f0 */ r_esp -= 4; W32(r_esp, 0x684b18u); f_006845f0();
    /* 00684b18: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684b1b: cmp eax, -0x80 */ {  u32 a = r_eax; u32 b = 0xffffff80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684b1e: jne 0x684b2d */ if (!fZ) goto L_00684b2d;
L_00684b20:; BB(0x00684b20);
    /* 00684b20: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684b23: jne 0x684b2d */ if (!fZ) goto L_00684b2d;
L_00684b25:; BB(0x00684b25);
    /* 00684b25: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684b26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00684b27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684b28: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00684b29: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684b2c: ret  */ FN_RET(0x006849d0); r_esp += 4; return;
L_00684b2d:; BB(0x00684b2d);
    /* 00684b2d: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00684b2f: jg 0x684b8c */ if ((!fZ&&fS==fO)) goto L_00684b8c;
L_00684b31:; BB(0x00684b31);
    /* 00684b31: jl 0x684b39 */ if ((fS!=fO)) goto L_00684b39;
L_00684b33:; BB(0x00684b33);
    /* 00684b33: cmp ebx, dword ptr [esp + 0x50] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x50u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00684b37: jae 0x684b8c */ if (!fC) goto L_00684b8c;
L_00684b39:; BB(0x00684b39);
    /* 00684b39: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00684b3b: jl 0x684b8c */ if ((fS!=fO)) goto L_00684b8c;
L_00684b3d:; BB(0x00684b3d);
    /* 00684b3d: jg 0x684b43 */ if ((!fZ&&fS==fO)) goto L_00684b43;
L_00684b3f:; BB(0x00684b3f);
    /* 00684b3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 00684b41: jb 0x684b8c */ if (fC) goto L_00684b8c;
L_00684b43:; BB(0x00684b43);
    /* 00684b43: mov esi, dword ptr [esp + 0x5c] */ r_esi = R32((u32)(r_esp+0x5cu));
    /* 00684b47: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 00684b4b: lea edx, [esi + 1] */ r_edx = (u32)(r_esi+0x1u);
    /* 00684b4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684b4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684b50: call 0x6862e0 */ r_esp -= 4; W32(r_esp, 0x684b55u); f_006862e0();
    /* 00684b55: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 00684b59: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 00684b5c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684b5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684b60: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00684b63: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684b64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684b65: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00684b69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684b6a: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00684b6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684b6f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684b70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684b71: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00684b72: call 0x6849d0 */ r_esp -= 4; W32(r_esp, 0x684b77u); f_006849d0();
    /* 00684b77: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684b7a: cmp eax, -0x80 */ {  u32 a = r_eax; u32 b = 0xffffff80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684b7d: jne 0x684bc6 */ if (!fZ) goto L_00684bc6;
L_00684b7f:; BB(0x00684b7f);
    /* 00684b7f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684b80: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00684b81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684b82: mov eax, 0xffffff80 */ r_eax = 0xffffff80u;
    /* 00684b87: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00684b88: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684b8b: ret  */ FN_RET(0x006849d0); r_esp += 4; return;
L_00684b8c:; BB(0x00684b8c);
    /* 00684b8c: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00684b90: lea ebp, [eax + 1] */ r_ebp = (u32)(r_eax+0x1u);
    /* 00684b93: mov dword ptr [edi + 0x34], ebp */ W32((u32)(r_edi+0x34u), r_ebp);
    /* 00684b96: lea ecx, [ebp*8 + 8] */ r_ecx = (u32)(r_ebp*8+0x8u);
    /* 00684b9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684b9e: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x684ba3u); f_006872fa();
    /* 00684ba3: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 00684ba6: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 00684ba9: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00684bac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684bad: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x684bb2u); f_006872fa();
    /* 00684bb2: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 00684bb5: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00684bb8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684bbb: mov dword ptr [eax + ebp*8], ebx */ W32((u32)(r_eax+r_ebp*8), r_ebx);
    /* 00684bbe: mov dword ptr [eax + ebp*8 + 4], esi */ W32((u32)(r_eax+r_ebp*8+0x4u), r_esi);
    /* 00684bc2: mov esi, dword ptr [esp + 0x5c] */ r_esi = R32((u32)(r_esp+0x5cu));
L_00684bc6:; BB(0x00684bc6);
    /* 00684bc6: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 00684bc9: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00684bcd: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00684bd1: mov dword ptr [ecx + esi*8], edx */ W32((u32)(r_ecx+r_esi*8), r_edx);
    /* 00684bd4: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 00684bd8: mov dword ptr [ecx + esi*8 + 4], eax */ W32((u32)(r_ecx+r_esi*8+0x4u), r_eax);
    /* 00684bdc: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 00684bdf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684be0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00684be2: mov dword ptr [ecx + esi*4], edx */ W32((u32)(r_ecx+r_esi*4), r_edx);
    /* 00684be5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00684be6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684be7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00684be8: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684beb: ret  */ FN_RET(0x006849d0); r_esp += 4; return;
}

void f_00684bf0(void) /* sub_684BF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684bf0);
    /* 00684bf0: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00684bf3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00684bf4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684bf5: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00684bf9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00684bfa: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 00684bfd: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 00684c00: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00684c03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684c04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684c05: call 0x68744a */ r_esp -= 4; W32(r_esp, 0x684c0au); f_0068744a();
    /* 00684c0a: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 00684c0d: mov dword ptr [esi + 0x48], eax */ W32((u32)(r_esi+0x48u), r_eax);
    /* 00684c10: mov eax, dword ptr [esi + 0x4c] */ r_eax = R32((u32)(r_esi+0x4cu));
    /* 00684c13: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00684c16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684c17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684c18: call 0x68744a */ r_esp -= 4; W32(r_esp, 0x684c1du); f_0068744a();
    /* 00684c1d: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00684c20: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 00684c23: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00684c26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684c27: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x684c2cu); f_006872fa();
    /* 00684c2c: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 00684c2f: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 00684c32: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00684c35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684c36: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x684c3bu); f_006872fa();
    /* 00684c3b: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 00684c3e: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 00684c41: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00684c43: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684c46: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00684c48: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00684c4a: jle 0x684ebf */ if ((fZ||fS!=fO)) goto L_00684ebf;
L_00684c50:; BB(0x00684c50);
    /* 00684c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684c51: jmp 0x684c55 */ goto L_00684c55;
L_00684c53:; BB(0x00684c53);
    /* 00684c53: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00684c55:; BB(0x00684c55);
    /* 00684c55: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684c57: jne 0x684c76 */ if (!fZ) goto L_00684c76;
L_00684c59:; BB(0x00684c59);
    /* 00684c59: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00684c5c: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00684c60: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00684c64: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00684c66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684c67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684c68: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684c69: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00684c6c: call 0x684990 */ r_esp -= 4; W32(r_esp, 0x684c71u); f_00684990();
    /* 00684c71: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684c74: jmp 0x684cd1 */ goto L_00684cd1;
L_00684c76:; BB(0x00684c76);
    /* 00684c76: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00684c79: mov ecx, dword ptr [eax + edi*8 + 4] */ r_ecx = R32((u32)(r_eax+r_edi*8+0x4u));
    /* 00684c7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684c7e: mov edx, dword ptr [eax + edi*8] */ r_edx = R32((u32)(r_eax+r_edi*8));
    /* 00684c81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684c82: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684c83: call 0x684990 */ r_esp -= 4; W32(r_esp, 0x684c88u); f_00684990();
    /* 00684c88: mov edx, dword ptr [esi + 0x4c] */ r_edx = R32((u32)(r_esi+0x4cu));
    /* 00684c8b: mov eax, edi */ r_eax = r_edi;
    /* 00684c8d: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00684c90: mov ecx, edi */ r_ecx = r_edi;
    /* 00684c92: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00684c94: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 00684c97: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00684c98: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00684c9b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00684c9c: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00684c9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684c9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684ca0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684ca1: call 0x6844b0 */ r_esp -= 4; W32(r_esp, 0x684ca6u); f_006844b0();
    /* 00684ca6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684ca9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00684cab: jge 0x684cc1 */ if ((fS==fO)) goto L_00684cc1;
L_00684cad:; BB(0x00684cad);
    /* 00684cad: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00684cb0: mov dword ptr [edx + edi*8], 0xffffffff */ W32((u32)(r_edx+r_edi*8), 0xffffffffu);
    /* 00684cb7: mov dword ptr [edx + edi*8 + 4], 0xffffffff */ W32((u32)(r_edx+r_edi*8+0x4u), 0xffffffffu);
    /* 00684cbf: jmp 0x684cd1 */ goto L_00684cd1;
L_00684cc1:; BB(0x00684cc1);
    /* 00684cc1: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00684cc4: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00684cc7: mov dword ptr [eax + edi*8], ecx */ W32((u32)(r_eax+r_edi*8), r_ecx);
    /* 00684cca: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 00684ccd: mov dword ptr [eax + edi*8 + 4], edx */ W32((u32)(r_eax+r_edi*8+0x4u), r_edx);
L_00684cd1:; BB(0x00684cd1);
    /* 00684cd1: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00684cd4: mov ecx, dword ptr [eax + edi*8] */ r_ecx = R32((u32)(r_eax+r_edi*8));
    /* 00684cd7: mov edx, dword ptr [eax + edi*8 + 4] */ r_edx = R32((u32)(r_eax+r_edi*8+0x4u));
    /* 00684cdb: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00684cdd: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684ce0: je 0x684e18 */ if (fZ) goto L_00684e18;
L_00684ce6:; BB(0x00684ce6);
    /* 00684ce6: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00684ce9: lea ebp, [esi + 0x78] */ r_ebp = (u32)(r_esi+0x78u);
    /* 00684cec: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00684cf0: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00684cf4: mov eax, dword ptr [edx + edi*4] */ r_eax = R32((u32)(r_edx+r_edi*4));
    /* 00684cf7: or ebx, 0xffffffff */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00684cfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684cfb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684cfc: call 0x686aa0 */ r_esp -= 4; W32(r_esp, 0x684d01u); f_00686aa0();
    /* 00684d01: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00684d04:; BB(0x00684d04);
    /* 00684d04: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00684d06: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00684d0a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00684d0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684d0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684d0e: call 0x6845f0 */ r_esp -= 4; W32(r_esp, 0x684d13u); f_006845f0();
    /* 00684d13: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684d16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00684d18: jl 0x684de7 */ if ((fS!=fO)) goto L_00684de7;
L_00684d1e:; BB(0x00684d1e);
    /* 00684d1e: jg 0x684d28 */ if ((!fZ&&fS==fO)) goto L_00684d28;
L_00684d20:; BB(0x00684d20);
    /* 00684d20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 00684d22: jb 0x684de7 */ if (fC) goto L_00684de7;
L_00684d28:; BB(0x00684d28);
    /* 00684d28: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00684d2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684d2d: call 0x6862e0 */ r_esp -= 4; W32(r_esp, 0x684d32u); f_006862e0();
    /* 00684d32: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 00684d35: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684d38: cmp eax, dword ptr [ecx + edi*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edi*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684d3b: jne 0x684de7 */ if (!fZ) goto L_00684de7;
L_00684d41:; BB(0x00684d41);
    /* 00684d41: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00684d45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684d46: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684d47: call 0x686760 */ r_esp -= 4; W32(r_esp, 0x684d4cu); f_00686760();
    /* 00684d4c: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00684d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684d51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684d52: call 0x686ac0 */ r_esp -= 4; W32(r_esp, 0x684d57u); f_00686ac0();
    /* 00684d57: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684d5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00684d5c: je 0x684dae */ if (fZ) goto L_00684dae;
L_00684d5e:; BB(0x00684d5e);
    /* 00684d5e: jle 0x684d9c */ if ((fZ||fS!=fO)) goto L_00684d9c;
L_00684d60:; BB(0x00684d60);
    /* 00684d60: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 00684d64: mov edx, edi */ r_edx = r_edi;
    /* 00684d66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684d67: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 00684d6a: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00684d6d: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00684d6f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684d70: call 0x691e20 */ r_esp -= 4; W32(r_esp, 0x684d75u); f_00691e20();
    /* 00684d75: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684d78: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684d7b: mov ecx, eax */ r_ecx = r_eax;
    /* 00684d7d: je 0x684d9a */ if (fZ) goto L_00684d9a;
L_00684d7f:; BB(0x00684d7f);
    /* 00684d7f: lea eax, [ecx + ebx] */ r_eax = (u32)(r_ecx+r_ebx);
    /* 00684d82: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00684d86: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00684d89: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00684d8a: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fC = (r < a); }
    /* 00684d8c: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00684d90: adc eax, edx */ { u32 c = fC; u32 a = r_eax; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 00684d92: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00684d96: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_00684d9a:; BB(0x00684d9a);
    /* 00684d9a: mov ebx, ecx */ r_ebx = r_ecx;
L_00684d9c:; BB(0x00684d9c);
    /* 00684d9c: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 00684da0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684da1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684da2: call 0x686ac0 */ r_esp -= 4; W32(r_esp, 0x684da7u); f_00686ac0();
    /* 00684da7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684daa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00684dac: jne 0x684d5e */ if (!fZ) goto L_00684d5e;
L_00684dae:; BB(0x00684dae);
    /* 00684dae: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00684db2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684db3: call 0x686250 */ r_esp -= 4; W32(r_esp, 0x684db8u); f_00686250();
    /* 00684db8: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00684dba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684dbd: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684dc0: je 0x684d04 */ if (fZ) goto L_00684d04;
L_00684dc6:; BB(0x00684dc6);
    /* 00684dc6: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00684dca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684dcb: call 0x686250 */ r_esp -= 4; W32(r_esp, 0x684dd0u); f_00686250();
    /* 00684dd0: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00684dd4: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00684dd8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684ddb: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 00684ddd: sbb edx, ecx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00684ddf: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00684de3: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
L_00684de7:; BB(0x00684de7);
    /* 00684de7: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00684deb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00684ded: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00684def: jg 0x684e01 */ if ((!fZ&&fS==fO)) goto L_00684e01;
L_00684df1:; BB(0x00684df1);
    /* 00684df1: jl 0x684df9 */ if ((fS!=fO)) goto L_00684df9;
L_00684df3:; BB(0x00684df3);
    /* 00684df3: cmp dword ptr [esp + 0x10], eax */ {  u32 a = R32((u32)(r_esp+0x10u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00684df7: jae 0x684e01 */ if (!fC) goto L_00684e01;
L_00684df9:; BB(0x00684df9);
    /* 00684df9: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00684dfd: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_00684e01:; BB(0x00684e01);
    /* 00684e01: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 00684e04: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00684e08: mov eax, edi */ r_eax = r_edi;
    /* 00684e0a: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00684e0d: mov dword ptr [eax + ecx], edx */ W32((u32)(r_eax+r_ecx), r_edx);
    /* 00684e10: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00684e14: mov dword ptr [eax + ecx + 4], edx */ W32((u32)(r_eax+r_ecx+0x4u), r_edx);
L_00684e18:; BB(0x00684e18);
    /* 00684e18: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00684e1b: mov ecx, dword ptr [eax + edi*8 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edi*8+0xcu));
    /* 00684e1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684e20: mov edx, dword ptr [eax + edi*8 + 8] */ r_edx = R32((u32)(r_eax+r_edi*8+0x8u));
    /* 00684e24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684e25: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684e26: call 0x684990 */ r_esp -= 4; W32(r_esp, 0x684e2bu); f_00684990();
    /* 00684e2b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00684e2e:; BB(0x00684e2e);
    /* 00684e2e: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00684e32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684e33: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684e34: call 0x684870 */ r_esp -= 4; W32(r_esp, 0x684e39u); f_00684870();
    /* 00684e39: mov ebx, edx */ r_ebx = r_edx;
    /* 00684e3b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684e3e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00684e40: mov ebp, eax */ r_ebp = r_eax;
    /* 00684e42: jl 0x684e66 */ if ((fS!=fO)) goto L_00684e66;
L_00684e44:; BB(0x00684e44);
    /* 00684e44: jg 0x684e4a */ if ((!fZ&&fS==fO)) goto L_00684e4a;
L_00684e46:; BB(0x00684e46);
    /* 00684e46: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 00684e48: jb 0x684e66 */ if (fC) goto L_00684e66;
L_00684e4a:; BB(0x00684e4a);
    /* 00684e4a: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00684e4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684e4f: call 0x686250 */ r_esp -= 4; W32(r_esp, 0x684e54u); f_00686250();
    /* 00684e54: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00684e56: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684e59: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684e5c: jne 0x684e8b */ if (!fZ) goto L_00684e8b;
L_00684e5e:; BB(0x00684e5e);
    /* 00684e5e: mov dword ptr [esi + 8], ebp */ W32((u32)(r_esi+0x8u), r_ebp);
    /* 00684e61: mov dword ptr [esi + 0xc], ebx */ W32((u32)(r_esi+0xcu), r_ebx);
    /* 00684e64: jmp 0x684e2e */ goto L_00684e2e;
L_00684e66:; BB(0x00684e66);
    /* 00684e66: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 00684e69: mov edx, edi */ r_edx = r_edi;
    /* 00684e6b: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00684e6e: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00684e70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684e71: call 0x690710 */ r_esp -= 4; W32(r_esp, 0x684e76u); f_00690710();
    /* 00684e76: mov edx, dword ptr [esi + 0x4c] */ r_edx = R32((u32)(r_esi+0x4cu));
    /* 00684e79: mov eax, edi */ r_eax = r_edi;
    /* 00684e7b: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00684e7e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00684e80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684e81: call 0x690670 */ r_esp -= 4; W32(r_esp, 0x684e86u); f_00690670();
    /* 00684e86: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684e89: jmp 0x684eb2 */ goto L_00684eb2;
L_00684e8b:; BB(0x00684e8b);
    /* 00684e8b: mov edx, dword ptr [esi + 0x44] */ r_edx = R32((u32)(r_esi+0x44u));
    /* 00684e8e: mov ecx, edi */ r_ecx = r_edi;
    /* 00684e90: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00684e93: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00684e97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684e98: lea ebx, [ecx + edx] */ r_ebx = (u32)(r_ecx+r_edx);
    /* 00684e9b: call 0x686250 */ r_esp -= 4; W32(r_esp, 0x684ea0u); f_00686250();
    /* 00684ea0: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 00684ea2: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00684ea5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684ea8: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 00684eaa: sbb edx, ecx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00684eac: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 00684eaf: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
L_00684eb2:; BB(0x00684eb2);
    /* 00684eb2: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 00684eb5: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00684eb6: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00684eb8: jl 0x684c53 */ if ((fS!=fO)) goto L_00684c53;
L_00684ebe:; BB(0x00684ebe);
    /* 00684ebe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
L_00684ebf:; BB(0x00684ebf);
    /* 00684ebf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684ec0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00684ec1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00684ec2: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684ec5: ret  */ FN_RET(0x00684bf0); r_esp += 4; return;
}

void f_00684ed0(void) /* sub_684ED0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684ed0);
    /* 00684ed0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684ed1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00684ed2: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00684ed5: mov eax, 0x686fae */ r_eax = 0x686faeu;
    /* 00684eda: mov edi, esp */ r_edi = r_esp;
    /* 00684edc: mov ecx, 0x684f20 */ r_ecx = 0x684f20u;
    /* 00684ee1: mov edx, 0x686fa8 */ r_edx = 0x686fa8u;
    /* 00684ee6: mov esi, 0x687336 */ r_esi = 0x687336u;
    /* 00684eeb: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00684eed: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00684ef1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684ef2: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00684ef6: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 00684ef9: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00684efd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684efe: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 00684f01: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00684f05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684f06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684f07: mov dword ptr [edi + 0xc], esi */ W32((u32)(r_edi+0xcu), r_esi);
    /* 00684f0a: call 0x684340 */ r_esp -= 4; W32(r_esp, 0x684f0fu); f_00684340();
    /* 00684f0f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684f12: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684f13: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00684f14: ret  */ FN_RET(0x00684ed0); r_esp += 4; return;
}

void f_00684f20(void) /* sub_684F20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684f20);
    /* 00684f20: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00684f24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684f26: jne 0x684f2c */ if (!fZ) goto L_00684f2c;
L_00684f28:; BB(0x00684f28);
    /* 00684f28: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00684f2b: ret  */ FN_RET(0x00684f20); r_esp += 4; return;
L_00684f2c:; BB(0x00684f2c);
    /* 00684f2c: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00684f30: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00684f34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684f35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684f36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684f37: call 0x687330 */ r_esp -= 4; W32(r_esp, 0x684f3cu); f_00687330();
    /* 00684f3c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684f3f: ret  */ FN_RET(0x00684f20); r_esp += 4; return;
}

void f_00684f40(void) /* sub_684F40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684f40);
    /* 00684f40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684f41: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00684f45: lea eax, [esi + 0x1e0] */ r_eax = (u32)(r_esi+0x1e0u);
    /* 00684f4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684f4c: call 0x691320 */ r_esp -= 4; W32(r_esp, 0x684f51u); f_00691320();
    /* 00684f51: lea ecx, [esi + 0x250] */ r_ecx = (u32)(r_esi+0x250u);
    /* 00684f57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00684f58: call 0x690f20 */ r_esp -= 4; W32(r_esp, 0x684f5du); f_00690f20();
    /* 00684f5d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684f60: mov dword ptr [esi + 0x58], 2 */ W32((u32)(r_esi+0x58u), 0x2u);
    /* 00684f67: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00684f68: ret  */ FN_RET(0x00684f40); r_esp += 4; return;
}

void f_00684f70(void) /* sub_684F70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684f70);
    /* 00684f70: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00684f74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00684f75: cmp dword ptr [eax + 0x58], 2 */ {  u32 a = R32((u32)(r_eax+0x58u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00684f79: jl 0x684fd0 */ if ((fS!=fO)) goto L_00684fd0;
L_00684f7b:; BB(0x00684f7b);
    /* 00684f7b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00684f7e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684f80: je 0x684fd0 */ if (fZ) goto L_00684fd0;
L_00684f82:; BB(0x00684f82);
    /* 00684f82: mov edi, dword ptr [eax + 0x34] */ r_edi = R32((u32)(r_eax+0x34u));
    /* 00684f85: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00684f89: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00684f8b: jge 0x684fd0 */ if ((fS==fO)) goto L_00684fd0;
L_00684f8d:; BB(0x00684f8d);
    /* 00684f8d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00684f8f: jge 0x684fc0 */ if ((fS==fO)) goto L_00684fc0;
L_00684f91:; BB(0x00684f91);
    /* 00684f91: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00684f92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684f93: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684f94: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00684f96: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00684f98: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00684f9a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00684f9c: jle 0x684fb7 */ if ((fZ||fS!=fO)) goto L_00684fb7;
L_00684f9e:; BB(0x00684f9e);
    /* 00684f9e: jmp 0x684fa4 */ goto L_00684fa4;
L_00684fa0:; BB(0x00684fa0);
    /* 00684fa0: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
L_00684fa4:; BB(0x00684fa4);
    /* 00684fa4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684fa5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684fa6: call 0x684f70 */ r_esp -= 4; W32(r_esp, 0x684fabu); f_00684f70();
    /* 00684fab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684fae: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fC = (r < a); }
    /* 00684fb0: adc ebp, edx */ { u32 c = fC; u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_ebp = r;  }
    /* 00684fb2: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00684fb3: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00684fb5: jl 0x684fa0 */ if ((fS!=fO)) goto L_00684fa0;
L_00684fb7:; BB(0x00684fb7);
    /* 00684fb7: mov edx, ebp */ r_edx = r_ebp;
    /* 00684fb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00684fba: mov eax, ebx */ r_eax = r_ebx;
    /* 00684fbc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684fbd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00684fbe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684fbf: ret  */ FN_RET(0x00684f70); r_esp += 4; return;
L_00684fc0:; BB(0x00684fc0);
    /* 00684fc0: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00684fc3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684fc4: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00684fc7: mov eax, dword ptr [edx + ecx + 8] */ r_eax = R32((u32)(r_edx+r_ecx+0x8u));
    /* 00684fcb: mov edx, dword ptr [edx + ecx + 0xc] */ r_edx = R32((u32)(r_edx+r_ecx+0xcu));
    /* 00684fcf: ret  */ FN_RET(0x00684f70); r_esp += 4; return;
L_00684fd0:; BB(0x00684fd0);
    /* 00684fd0: mov eax, 0xffffff7d */ r_eax = 0xffffff7du;
    /* 00684fd5: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00684fd8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684fd9: ret  */ FN_RET(0x00684f70); r_esp += 4; return;
}

void f_00684fe0(void) /* sub_684FE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00684fe0);
    /* 00684fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00684fe3: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00684fe6: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00684fe9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00684fea: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00684fed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684fee: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00684fef: cmp dword ptr [ebx + 0x58], 2 */ {  u32 a = R32((u32)(r_ebx+0x58u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00684ff3: jl 0x68505f */ if ((fS!=fO)) goto L_0068505f;
L_00684ff5:; BB(0x00684ff5);
    /* 00684ff5: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00684ff8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684ffa: je 0x68505f */ if (fZ) goto L_0068505f;
L_00684ffc:; BB(0x00684ffc);
    /* 00684ffc: mov edi, dword ptr [ebx + 0x34] */ r_edi = R32((u32)(r_ebx+0x34u));
    /* 00684fff: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00685002: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685004: jge 0x68505f */ if ((fS==fO)) goto L_0068505f;
L_00685006:; BB(0x00685006);
    /* 00685006: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00685008: jge 0x685042 */ if ((fS==fO)) goto L_00685042;
L_0068500a:; BB(0x0068500a);
    /* 0068500a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0068500c: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00685014: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00685016: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0068501e: jle 0x685037 */ if ((fZ||fS!=fO)) goto L_00685037;
L_00685020:; BB(0x00685020);
    /* 00685020: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685021: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00685022: call 0x684fe0 */ r_esp -= 4; W32(r_esp, 0x685027u); f_00684fe0();
    /* 00685027: fadd qword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F64((u32)(r_esp+0x18u));
    /* 0068502b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068502e: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068502f: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685031: fstp qword ptr [esp + 0x10] */ W_F64((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00685035: jl 0x685020 */ if ((fS!=fO)) goto L_00685020;
L_00685037:; BB(0x00685037);
    /* 00685037: fld qword ptr [esp + 0x10] */ FPUSH(R_F64((u32)(r_esp+0x10u)));
    /* 0068503b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068503c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068503d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068503e: mov esp, ebp */ r_esp = r_ebp;
    /* 00685040: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685041: ret  */ FN_RET(0x00684fe0); r_esp += 4; return;
L_00685042:; BB(0x00685042);
    /* 00685042: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 00685045: mov ecx, eax */ r_ecx = r_eax;
    /* 00685047: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0068504a: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0068504d: fild qword ptr [edx + ecx + 8] */ FPUSH((long double)(i64)R64((u32)(r_edx+r_ecx+0x8u)));
    /* 00685051: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 00685054: fidiv dword ptr [ecx + eax + 8] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ecx+r_eax+0x8u));
    /* 00685058: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685059: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068505a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068505b: mov esp, ebp */ r_esp = r_ebp;
    /* 0068505d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068505e: ret  */ FN_RET(0x00684fe0); r_esp += 4; return;
L_0068505f:; BB(0x0068505f);
    /* 0068505f: fld qword ptr [0x6e4f90] */ FPUSH(R_F64((u32)(0x6e4f90u)));
    /* 00685065: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685066: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685067: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685068: mov esp, ebp */ r_esp = r_ebp;
    /* 0068506a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068506b: ret  */ FN_RET(0x00684fe0); r_esp += 4; return;
}

