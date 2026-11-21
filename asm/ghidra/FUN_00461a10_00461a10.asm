; FUN_00461a10  00461a10
00461a10  PUSH EBP
00461a11  MOV EBP,ESP
00461a13  SUB ESP,0x198
00461a19  MOV EAX,[0x00781870]
00461a1e  XOR EAX,EBP
00461a20  MOV dword ptr [EBP + -0x4],EAX
00461a23  MOV dword ptr [EBP + 0xfffffe6c],ECX
00461a29  PUSH 0x0
00461a2b  PUSH 0x0
00461a2d  CALL 0x0064c8a0
00461a32  ADD ESP,0x8
00461a35  MOV dword ptr [EBP + 0xfffffecc],EAX
00461a3b  MOV dword ptr [EBP + 0xfffffed0],EDX
00461a41  MOV EAX,dword ptr [EBP + 0xfffffecc]
00461a47  MOV dword ptr [EBP + 0xfffffee8],EAX
00461a4d  MOV ECX,dword ptr [EBP + 0xfffffed0]
00461a53  MOV dword ptr [EBP + 0xfffffeec],ECX
00461a59  MOV EDX,dword ptr [EBP + 0xfffffe6c]
00461a5f  MOV EAX,dword ptr [EDX + 0x4]
00461a62  MOV dword ptr [EBP + 0xfffffe78],EAX
00461a68  MOV ECX,dword ptr [EBP + 0x8]
00461a6b  SHL ECX,0x5
00461a6e  MOV EDX,dword ptr [EBP + 0xfffffe78]
00461a74  LEA EAX,[EDX + ECX*0x1 + 0x48]
00461a78  MOV ECX,0x1
00461a7d  SHL ECX,0x3
00461a80  MOV EDX,dword ptr [EAX + ECX*0x1]
00461a83  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x4]
00461a87  MOV dword ptr [EBP + 0xfffffee0],EDX
00461a8d  MOV dword ptr [EBP + 0xfffffee4],EAX
00461a93  MOV dword ptr [EBP + 0xfffffedc],0x0
00461a9d  MOV dword ptr [EBP + 0xfffffef4],0x0
00461aa7  MOV byte ptr [EBP + 0xfffffef3],0x1
00461aae  CMP dword ptr [EBP + 0xc],0x1
00461ab2  JNZ 0x00461ac4
00461ab4  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00461aba  ADD ECX,dword ptr [EBP + 0x8]
00461abd  MOV byte ptr [ECX + 0xfe],0x1
00461ac4  MOV EDX,dword ptr [EBP + 0x8]
00461ac7  PUSH EDX
00461ac8  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00461ace  CALL 0x004619f0
00461ad3  MOVZX EAX,AL
00461ad6  TEST EAX,EAX
00461ad8  JNZ 0x00461adf
00461ada  JMP 0x00461ef3
00461adf  MOV ECX,dword ptr [EBP + 0xc]
00461ae2  MOV dword ptr [EBP + 0xfffffe68],ECX
00461ae8  CMP dword ptr [EBP + 0xfffffe68],0x0
00461aef  JZ 0x00461b03
00461af1  CMP dword ptr [EBP + 0xfffffe68],0x1
00461af8  JZ 0x00461c11
00461afe  JMP 0x00461d35
00461b03  MOV EDX,dword ptr [EBP + 0x8]
00461b06  PUSH EDX
00461b07  MOV ECX,dword ptr [0x00790744]
00461b0d  CALL 0x004574a0
00461b12  MOV dword ptr [EBP + 0xfffffedc],EAX
00461b18  MOV EAX,dword ptr [EBP + 0xfffffe6c]
00461b1e  MOV ECX,dword ptr [EAX + 0x4]
00461b21  MOV dword ptr [EBP + 0xfffffe74],ECX
00461b27  MOV EDX,dword ptr [EBP + 0x8]
00461b2a  SHL EDX,0x5
00461b2d  MOV EAX,dword ptr [EBP + 0xfffffe74]
00461b33  LEA ECX,[EAX + EDX*0x1 + 0x48]
00461b37  MOV EDX,0x1
00461b3c  SHL EDX,0x3
00461b3f  MOV EAX,dword ptr [ECX + EDX*0x1]
00461b42  MOV ECX,dword ptr [ECX + EDX*0x1 + 0x4]
00461b46  MOV dword ptr [EBP + 0xfffffec4],EAX
00461b4c  MOV dword ptr [EBP + 0xfffffec8],ECX
00461b52  PUSH 0x2
00461b54  MOV EDX,dword ptr [EBP + 0x8]
00461b57  PUSH EDX
00461b58  MOV EAX,dword ptr [EBP + 0xfffffec8]
00461b5e  PUSH EAX
00461b5f  MOV ECX,dword ptr [EBP + 0xfffffec4]
00461b65  PUSH ECX
00461b66  MOV EDX,dword ptr [EBP + 0xfffffe6c]
00461b6c  MOV EAX,dword ptr [EDX + 0x4]
00461b6f  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00461b75  MOV ECX,dword ptr [ECX + 0x4]
00461b78  MOV EDX,dword ptr [EAX]
00461b7a  MOV EAX,dword ptr [EDX + 0xb8]
00461b80  CALL EAX
00461b82  CMP dword ptr [EBP + 0xfffffedc],0x0
00461b89  JGE 0x00461b9c
00461b8b  MOV dword ptr [EBP + 0xfffffedc],0x0
00461b95  MOV byte ptr [EBP + 0xfffffef3],0x0
00461b9c  MOV EAX,dword ptr [EBP + 0xfffffedc]
00461ba2  IMUL EAX,dword ptr [EBP + 0xfffffee4]
00461ba9  CDQ
00461baa  MOV ECX,0x64
00461baf  IDIV ECX
00461bb1  PUSH EAX
00461bb2  MOV EDX,dword ptr [EBP + 0xfffffedc]
00461bb8  IMUL EDX,dword ptr [EBP + 0xfffffee0]
00461bbf  PUSH EDX
00461bc0  CALL 0x0064c8a0
00461bc5  ADD ESP,0x8
00461bc8  MOV dword ptr [EBP + 0xfffffebc],EAX
00461bce  MOV dword ptr [EBP + 0xfffffec0],EDX
00461bd4  MOV EAX,dword ptr [EBP + 0xfffffebc]
00461bda  MOV dword ptr [EBP + 0xfffffee8],EAX
00461be0  MOV ECX,dword ptr [EBP + 0xfffffec0]
00461be6  MOV dword ptr [EBP + 0xfffffeec],ECX
00461bec  MOV EDX,dword ptr [EBP + 0xfffffedc]
00461bf2  PUSH EDX
00461bf3  MOV EAX,dword ptr [EBP + 0x8]
00461bf6  PUSH EAX
00461bf7  PUSH 0x6ba568
00461bfc  LEA ECX,[EBP + 0xfffffef8]
00461c02  PUSH ECX
00461c03  CALL dword ptr [0x006b2220]
00461c09  ADD ESP,0x10
00461c0c  JMP 0x00461d35
00461c11  PUSH 0x0
00461c13  PUSH 0x5
00461c15  CALL 0x0064c8a0
00461c1a  ADD ESP,0x8
00461c1d  MOV dword ptr [EBP + 0xfffffeac],EAX
00461c23  MOV dword ptr [EBP + 0xfffffeb0],EDX
00461c29  MOV EDX,dword ptr [EBP + 0xfffffe6c]
00461c2f  MOV EAX,dword ptr [EDX + 0x4]
00461c32  MOV dword ptr [EBP + 0xfffffe70],EAX
00461c38  MOV ECX,dword ptr [EBP + 0x8]
00461c3b  SHL ECX,0x5
00461c3e  MOV EDX,dword ptr [EBP + 0xfffffe70]
00461c44  LEA EAX,[EDX + ECX*0x1 + 0x48]
00461c48  MOV ECX,0x2
00461c4d  SHL ECX,0x3
00461c50  MOV EDX,dword ptr [EAX + ECX*0x1]
00461c53  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x4]
00461c57  MOV dword ptr [EBP + 0xfffffeb4],EDX
00461c5d  MOV dword ptr [EBP + 0xfffffeb8],EAX
00461c63  MOV ECX,dword ptr [EBP + 0xfffffeb0]
00461c69  PUSH ECX
00461c6a  MOV EDX,dword ptr [EBP + 0xfffffeac]
00461c70  PUSH EDX
00461c71  LEA ECX,[EBP + 0xfffffeb4]
00461c77  CALL 0x0064c7a0
00461c7c  MOVZX EAX,AL
00461c7f  TEST EAX,EAX
00461c81  JZ 0x00461c98
00461c83  MOV ECX,dword ptr [EBP + 0x8]
00461c86  PUSH ECX
00461c87  MOV ECX,dword ptr [0x00790744]
00461c8d  CALL 0x00457600
00461c92  MOV dword ptr [EBP + 0xfffffef4],EAX
00461c98  PUSH 0x0
00461c9a  PUSH 0x0
00461c9c  CALL 0x0064c8a0
00461ca1  ADD ESP,0x8
00461ca4  MOV dword ptr [EBP + 0xfffffea4],EAX
00461caa  MOV dword ptr [EBP + 0xfffffea8],EDX
00461cb0  PUSH 0x2
00461cb2  MOV EDX,dword ptr [EBP + 0x8]
00461cb5  PUSH EDX
00461cb6  MOV EAX,dword ptr [EBP + 0xfffffea8]
00461cbc  PUSH EAX
00461cbd  MOV ECX,dword ptr [EBP + 0xfffffea4]
00461cc3  PUSH ECX
00461cc4  MOV EDX,dword ptr [EBP + 0xfffffe6c]
00461cca  MOV EAX,dword ptr [EDX + 0x4]
00461ccd  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00461cd3  MOV ECX,dword ptr [ECX + 0x4]
00461cd6  MOV EDX,dword ptr [EAX]
00461cd8  MOV EAX,dword ptr [EDX + 0xb8]
00461cde  CALL EAX
00461ce0  PUSH 0x0
00461ce2  MOV ECX,dword ptr [EBP + 0xfffffef4]
00461ce8  PUSH ECX
00461ce9  CALL 0x0064c8a0
00461cee  ADD ESP,0x8
00461cf1  MOV dword ptr [EBP + 0xfffffe9c],EAX
00461cf7  MOV dword ptr [EBP + 0xfffffea0],EDX
00461cfd  MOV EDX,dword ptr [EBP + 0xfffffe9c]
00461d03  MOV dword ptr [EBP + 0xfffffee8],EDX
00461d09  MOV EAX,dword ptr [EBP + 0xfffffea0]
00461d0f  MOV dword ptr [EBP + 0xfffffeec],EAX
00461d15  MOV ECX,dword ptr [EBP + 0xfffffef4]
00461d1b  PUSH ECX
00461d1c  MOV EDX,dword ptr [EBP + 0x8]
00461d1f  PUSH EDX
00461d20  PUSH 0x6ba548
00461d25  LEA EAX,[EBP + 0xfffffef8]
00461d2b  PUSH EAX
00461d2c  CALL dword ptr [0x006b2220]
00461d32  ADD ESP,0x10
00461d35  LEA ECX,[EBP + 0xfffffef8]
00461d3b  PUSH ECX
00461d3c  CALL 0x0062fde0
00461d41  ADD ESP,0x4
00461d44  PUSH 0x0
00461d46  PUSH 0x0
00461d48  CALL 0x0064c8a0
00461d4d  ADD ESP,0x8
00461d50  MOV dword ptr [EBP + 0xfffffe94],EAX
00461d56  MOV dword ptr [EBP + 0xfffffe98],EDX
00461d5c  MOV EDX,dword ptr [EBP + 0xfffffe98]
00461d62  PUSH EDX
00461d63  MOV EAX,dword ptr [EBP + 0xfffffe94]
00461d69  PUSH EAX
00461d6a  LEA ECX,[EBP + 0xfffffee8]
00461d70  CALL 0x0064c6e0
00461d75  MOVZX ECX,AL
00461d78  TEST ECX,ECX
00461d7a  JZ 0x00461e0d
00461d80  MOV EDX,dword ptr [EBP + 0xfffffeec]
00461d86  PUSH EDX
00461d87  MOV EAX,dword ptr [EBP + 0xfffffee8]
00461d8d  PUSH EAX
00461d8e  MOV ECX,dword ptr [EBP + 0x8]
00461d91  PUSH ECX
00461d92  CALL 0x005dcb00
00461d97  ADD ESP,0x4
00461d9a  MOV ECX,EAX
00461d9c  CALL 0x005d5fb0
00461da1  MOV EDX,dword ptr [EBP + 0xfffffeec]
00461da7  PUSH EDX
00461da8  MOV EAX,dword ptr [EBP + 0xfffffee8]
00461dae  PUSH EAX
00461daf  MOV ECX,dword ptr [EBP + 0x8]
00461db2  PUSH ECX
00461db3  CALL 0x005dcb00
00461db8  ADD ESP,0x4
00461dbb  MOV ECX,EAX
00461dbd  CALL 0x005d5cf0
00461dc2  PUSH 0x1
00461dc4  MOV EDX,dword ptr [EBP + 0x8]
00461dc7  PUSH EDX
00461dc8  MOV EAX,dword ptr [EBP + 0xfffffee4]
00461dce  PUSH EAX
00461dcf  MOV ECX,dword ptr [EBP + 0xfffffee0]
00461dd5  PUSH ECX
00461dd6  LEA EDX,[EBP + 0xfffffe8c]
00461ddc  PUSH EDX
00461ddd  LEA ECX,[EBP + 0xfffffee8]
00461de3  CALL 0x0064c5c0
00461de8  MOV ECX,dword ptr [EAX + 0x4]
00461deb  PUSH ECX
00461dec  MOV EDX,dword ptr [EAX]
00461dee  PUSH EDX
00461def  MOV EAX,dword ptr [EBP + 0xfffffe6c]
00461df5  MOV ECX,dword ptr [EAX + 0x4]
00461df8  MOV EDX,dword ptr [EBP + 0xfffffe6c]
00461dfe  MOV EAX,dword ptr [EDX + 0x4]
00461e01  MOV EDX,dword ptr [ECX]
00461e03  MOV ECX,EAX
00461e05  MOV EAX,dword ptr [EDX + 0xb8]
00461e0b  CALL EAX
00461e0d  CMP dword ptr [EBP + 0xc],0x0
00461e11  JNZ 0x00461ef3
00461e17  MOVZX ECX,byte ptr [EBP + 0xfffffef3]
00461e1e  TEST ECX,ECX
00461e20  JZ 0x00461e48
00461e22  MOV EDX,dword ptr [EBP + 0xfffffee4]
00461e28  PUSH EDX
00461e29  MOV EAX,dword ptr [EBP + 0xfffffee0]
00461e2f  PUSH EAX
00461e30  MOV ECX,dword ptr [EBP + 0x8]
00461e33  PUSH ECX
00461e34  CALL 0x005dcb00
00461e39  ADD ESP,0x4
00461e3c  MOV ECX,EAX
00461e3e  CALL 0x005d5cf0
00461e43  JMP 0x00461ef3
00461e48  MOV EDX,dword ptr [EBP + 0xfffffee4]
00461e4e  IMUL EDX,EDX,-0x1
00461e51  PUSH EDX
00461e52  MOV EAX,dword ptr [EBP + 0xfffffee0]
00461e58  IMUL EAX,EAX,-0x1
00461e5b  PUSH EAX
00461e5c  CALL 0x0064c8a0
00461e61  ADD ESP,0x8
00461e64  MOV dword ptr [EBP + 0xfffffe84],EAX
00461e6a  MOV dword ptr [EBP + 0xfffffe88],EDX
00461e70  MOV ECX,dword ptr [EBP + 0xfffffe84]
00461e76  MOV dword ptr [EBP + 0xfffffed4],ECX
00461e7c  MOV EDX,dword ptr [EBP + 0xfffffe88]
00461e82  MOV dword ptr [EBP + 0xfffffed8],EDX
00461e88  MOV EAX,dword ptr [EBP + 0xfffffed8]
00461e8e  PUSH EAX
00461e8f  MOV ECX,dword ptr [EBP + 0xfffffed4]
00461e95  PUSH ECX
00461e96  MOV EDX,dword ptr [EBP + 0x8]
00461e99  PUSH EDX
00461e9a  CALL 0x005dcb00
00461e9f  ADD ESP,0x4
00461ea2  MOV ECX,EAX
00461ea4  CALL 0x005d5fb0
00461ea9  PUSH 0x0
00461eab  PUSH 0x0
00461ead  CALL 0x0064c8a0
00461eb2  ADD ESP,0x8
00461eb5  MOV dword ptr [EBP + 0xfffffe7c],EAX
00461ebb  MOV dword ptr [EBP + 0xfffffe80],EDX
00461ec1  PUSH 0x1
00461ec3  MOV EAX,dword ptr [EBP + 0x8]
00461ec6  PUSH EAX
00461ec7  MOV ECX,dword ptr [EBP + 0xfffffe80]
00461ecd  PUSH ECX
00461ece  MOV EDX,dword ptr [EBP + 0xfffffe7c]
00461ed4  PUSH EDX
00461ed5  MOV EAX,dword ptr [EBP + 0xfffffe6c]
00461edb  MOV ECX,dword ptr [EAX + 0x4]
00461ede  MOV EDX,dword ptr [EBP + 0xfffffe6c]
00461ee4  MOV EAX,dword ptr [EDX + 0x4]
00461ee7  MOV EDX,dword ptr [ECX]
00461ee9  MOV ECX,EAX
00461eeb  MOV EAX,dword ptr [EDX + 0xb8]
00461ef1  CALL EAX
00461ef3  MOV ECX,dword ptr [EBP + -0x4]
00461ef6  XOR ECX,EBP
00461ef8  CALL 0x00686d72
00461efd  MOV ESP,EBP
00461eff  POP EBP
00461f00  RET 0x8
