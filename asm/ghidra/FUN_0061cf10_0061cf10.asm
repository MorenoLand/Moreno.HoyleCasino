; FUN_0061cf10  0061cf10
0061cf10  PUSH EBP
0061cf11  MOV EBP,ESP
0061cf13  SUB ESP,0xc
0061cf16  MOV EAX,dword ptr [EBP + 0x8]
0061cf19  MOVZX ECX,byte ptr [EAX]
0061cf1c  MOV dword ptr [EBP + -0x4],ECX
0061cf1f  MOV EDX,dword ptr [EBP + -0x4]
0061cf22  CMP EDX,dword ptr [EBP + 0x10]
0061cf25  JNZ 0x0061cf2f
0061cf27  MOV EAX,dword ptr [EBP + 0x8]
0061cf2a  MOV CL,byte ptr [EBP + 0x14]
0061cf2d  MOV byte ptr [EAX],CL
0061cf2f  MOV EDX,dword ptr [EBP + 0x8]
0061cf32  MOV AX,word ptr [EDX + 0x1]
0061cf36  MOV word ptr [EBP + -0x8],AX
0061cf3a  MOV ECX,dword ptr [EBP + 0x8]
0061cf3d  ADD ECX,0x3
0061cf40  MOV dword ptr [EBP + 0x8],ECX
0061cf43  CMP dword ptr [EBP + 0xc],0x0
0061cf47  JLE 0x0061d021
0061cf4d  MOVZX EDX,word ptr [EBP + -0x8]
0061cf51  TEST EDX,EDX
0061cf53  JLE 0x0061d021
0061cf59  MOVZX EAX,word ptr [EBP + -0x8]
0061cf5d  MOV ECX,dword ptr [EBP + 0xc]
0061cf60  SUB ECX,EAX
0061cf62  MOV dword ptr [EBP + 0xc],ECX
0061cf65  MOV EDX,dword ptr [EBP + -0x4]
0061cf68  MOV dword ptr [EBP + -0xc],EDX
0061cf6b  MOV EAX,dword ptr [EBP + -0xc]
0061cf6e  SUB EAX,0x2
0061cf71  MOV dword ptr [EBP + -0xc],EAX
0061cf74  CMP dword ptr [EBP + -0xc],0x86
0061cf7b  JA 0x0061cfe9
0061cf7d  MOV ECX,dword ptr [EBP + -0xc]
0061cf80  MOVZX EDX,byte ptr [ECX + 0x61d048]
0061cf87  JMP dword ptr [EDX*0x4 + 0x61d028]
0061cf90  MOVZX EAX,word ptr [EBP + -0x8]
0061cf94  IMUL EAX,EAX,0x3
0061cf97  ADD EAX,dword ptr [EBP + 0x8]
0061cf9a  MOV dword ptr [EBP + 0x8],EAX
0061cf9d  JMP 0x0061cfe9
0061cf9f  MOVZX ECX,word ptr [EBP + -0x8]
0061cfa3  ADD ECX,dword ptr [EBP + 0x8]
0061cfa6  MOV dword ptr [EBP + 0x8],ECX
0061cfa9  JMP 0x0061cfe9
0061cfab  MOVZX EDX,word ptr [EBP + -0x8]
0061cfaf  MOV EAX,dword ptr [EBP + 0x8]
0061cfb2  LEA ECX,[EAX + EDX*0x4]
0061cfb5  MOV dword ptr [EBP + 0x8],ECX
0061cfb8  JMP 0x0061cfe9
0061cfba  MOVZX EDX,word ptr [EBP + -0x8]
0061cfbe  MOV EAX,dword ptr [EBP + 0x8]
0061cfc1  LEA ECX,[EAX + EDX*0x2]
0061cfc4  MOV dword ptr [EBP + 0x8],ECX
0061cfc7  JMP 0x0061cfe9
0061cfc9  MOV EDX,dword ptr [EBP + 0x8]
0061cfcc  ADD EDX,0x3
0061cfcf  MOV dword ptr [EBP + 0x8],EDX
0061cfd2  JMP 0x0061cfe9
0061cfd4  MOV EAX,dword ptr [EBP + 0x8]
0061cfd7  ADD EAX,0x1
0061cfda  MOV dword ptr [EBP + 0x8],EAX
0061cfdd  JMP 0x0061cfe9
0061cfdf  MOVZX ECX,word ptr [EBP + -0x8]
0061cfe3  ADD ECX,dword ptr [EBP + 0x8]
0061cfe6  MOV dword ptr [EBP + 0x8],ECX
0061cfe9  CMP dword ptr [EBP + 0xc],0x0
0061cfed  JLE 0x0061d01c
0061cfef  MOV EDX,dword ptr [EBP + 0x8]
0061cff2  MOVZX EAX,byte ptr [EDX]
0061cff5  MOV dword ptr [EBP + -0x4],EAX
0061cff8  MOV ECX,dword ptr [EBP + -0x4]
0061cffb  CMP ECX,dword ptr [EBP + 0x10]
0061cffe  JNZ 0x0061d008
0061d000  MOV EDX,dword ptr [EBP + 0x8]
0061d003  MOV AL,byte ptr [EBP + 0x14]
0061d006  MOV byte ptr [EDX],AL
0061d008  MOV ECX,dword ptr [EBP + 0x8]
0061d00b  MOV DX,word ptr [ECX + 0x1]
0061d00f  MOV word ptr [EBP + -0x8],DX
0061d013  MOV EAX,dword ptr [EBP + 0x8]
0061d016  ADD EAX,0x3
0061d019  MOV dword ptr [EBP + 0x8],EAX
0061d01c  JMP 0x0061cf43
0061d021  MOV ESP,EBP
0061d023  POP EBP
0061d024  RET
